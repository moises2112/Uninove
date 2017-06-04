using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Web.Services;

public partial class AutoComplete : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }

    public static SqlConnection ConnectToDatabase()
    {
        try
        {
            //Criar uma nova instancia
            var conn = new SqlConnection();
            var path = AppDomain.CurrentDomain.BaseDirectory.Replace("bin\\Debug\\", "").Replace("bin\\Release\\", "");

            conn.ConnectionString = @"Data Source = (LocalDB)\MSSQLLocalDB; AttachDbFilename = " + path + @"App_Data\Database.mdf; Integrated Security = True; Connect Timeout = 30";
            conn.Open();
            return conn;
        }
        catch (Exception ex)
        {
            throw ex;
        }
    }

    [WebMethod]
    public static string[] GetClientes(string prefixo)
    {
        List<string> clientes = new List<string>();
        using (var conn = ConnectToDatabase())
        {
            using (SqlCommand cmd = new SqlCommand())
            {
                cmd.CommandText = "select id, nome from Cliente where nome like @Texto + '%'";
                cmd.Parameters.AddWithValue("@Texto", prefixo);
                cmd.Connection = conn;
                using (SqlDataReader sdr = cmd.ExecuteReader())
                {
                    while (sdr.Read())
                    {
                        clientes.Add(string.Format("{0}-{1}", sdr["id"], sdr["nome"]));
                    }
                }
                conn.Close();
            }
        }
        return clientes.ToArray();
    }

    protected void Submeter (object sender, EventArgs e)
    {
        string nomeContato = Request.Form[txtProcurar.UniqueID];
        string clientID = Request.Form[hfCustomerId.UniqueID];
        ClientScript.RegisterStartupScript(this.GetType(), "alert", "alert('Nome: " + nomeContato + "\\nID:"+clientID+ "');", true);

        

         
    }
    


}