package br.com.lojamodel.dao.impl;

import java.sql.Date;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Calendar;
import java.util.List;

import br.com.lojamodel.ConnectionFactory;
import br.com.lojamodel.Contato;
import br.com.lojamodel.dao.DAO;

public class ContatoDAO implements DAO {

	@Override
	public void create(Object object) throws SQLException {
		Contato contato = (Contato) object;
		
		 // cria um preparedStatement
        String sql = "insert into contatos" +
                " (nome,email,endereco,dataNascimento)" +
                " values (?,?,?,?)";
        PreparedStatement stmt = ConnectionFactory.getConnectionJDBC().prepareStatement(sql);

        // preenche os valores
        stmt.setString(1, contato.getNome());
        stmt.setString(2, contato.getEmail());
        stmt.setString(3, contato.getEndereco());
        stmt.setDate(4,(Date) contato.getDataNascimento().getTime());

        // executa
        stmt.execute();
        stmt.close();

		

	}

	@Override
	public List<Object> read() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public void update(Object object) {
		// TODO Auto-generated method stub

	}

	@Override
	public void delete(Object object) {
		// TODO Auto-generated method stub

	}

}
