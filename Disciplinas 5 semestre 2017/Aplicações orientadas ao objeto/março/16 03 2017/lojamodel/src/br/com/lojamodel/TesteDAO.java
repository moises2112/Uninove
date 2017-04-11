package br.com.lojamodel;

import java.sql.SQLException;
import java.util.Calendar;

import br.com.lojamodel.dao.DAO;
import br.com.lojamodel.dao.impl.ContatoDAO;

public class TesteDAO {

	public static void main(String[] args) throws SQLException {
		
		DAO contatoDAO = new ContatoDAO();
		
		Contato contato = new Contato();
		
		contato.setDataNascimento(Calendar.getInstance());
		contato.setNome("Teste");
		
		contatoDAO.create(contato);
	}
	
}
