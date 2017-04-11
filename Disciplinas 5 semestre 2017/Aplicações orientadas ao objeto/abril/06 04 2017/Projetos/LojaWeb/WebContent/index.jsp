<%@page import="br.com.lojamodel.Contato"%>
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>HELLO JAVA EE</title>
</head>
<body>

	<%@ page import="br.com.lojamodel.Contato"%>
	<%@ page import="java.util.Calendar"%>
	<%
		Contato contato = new Contato();
		contato.setNome("Moises Da Silva");
		contato.setEmail("Moises@gmail.com");
		contato.setDataNascimento(Calendar.getInstance());
		contato.setEndereco("Rua Luis, 999");
		System.out.println("O contato é:" + contato.toString());
	%>

	<br>
	<label><%=contato.getNome()%> </label>
	<br>
	<label><%=contato.getEmail()%> </label>
	<br>
	<label><%=contato.getDataNascimento()%> </label>
	<br>
	<label><%=contato.getEndereco()%> </label>

</body>
</html>