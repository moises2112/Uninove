<%@ Page Language="C#" AutoEventWireup="true" CodeFile="AutoComplete.aspx.cs" Inherits="AutoComplete" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <script src="http://ajax.aspnetcdn.com/ajax/jQuery/jquery-1.10.0.min.js" type="text/javascript"></script>
    <script src="http://ajax.aspnetcdn.com/ajax/jquery.ui/1.9.2/jquery-ui.min.js" type="text/javascript"></script>
    <link href="http://ajax.aspnetcdn.com/ajax/jquery.ui/1.9.2/themes/blitzer/jquery-ui.css" rel="stylesheet" type="text/javascript" />
    
    
    <script>

    $(function () {
        $("[id$=txtProcurar]").autocomplete({
            source: function (request, response) {
                $.ajax({
                    url: '<%=ResolveUrl("~/Autocomplete.aspx/GetClientes") %>',
                    data: "{ 'prefixo': '" + request.term + "'}",
                    dataType: "json",
                    type: "POST",
                    contentType: "application/json; charset=utf-8",
                    success: function (data) {
                        response($.map(data.d, function (item) {
                            return {
                                label: item.split('-')[0],
                                val: item.split('-')[1]
                            }
                        }))
                    },
                    error: function (response) {
                        alert(response.responseText);
                    },
                    failure: function (response) {
                        alert(response.responseText);
                    }
                });
            },
            select: function (e, i) {
                $("[id$=hfCustomerId]").val(i.item.val);
            },
            minLength: 1
        });
    });  


    </script>


    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
            <label for="Nomes"> Informe o nome: </label>
        <asp:TextBox ID="txtProcurar" runat="server" Width="269px" />
        <asp:HiddenField ID="hfCustomerId" runat="server" />
        <asp:Button ID="btnSubmeter" text="Enviar Consulta" runat="server" OnClick="Submeter" Width="112px" />   
    </div>
    </form>

</body>
</html>
