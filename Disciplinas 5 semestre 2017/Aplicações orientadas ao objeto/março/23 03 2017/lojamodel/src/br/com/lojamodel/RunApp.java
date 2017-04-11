package br.com.lojamodel;

import java.sql.Connection;
import java.sql.SQLException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.Scanner;

import br.com.lojamodel.dao.impl.ContatoDAO;

public class RunApp {

	public static void main(String[] args) throws SQLException {
		

		ContatoDAO contatodao = new ContatoDAO();
		contatodao.create();
		
		
		
	}

}
