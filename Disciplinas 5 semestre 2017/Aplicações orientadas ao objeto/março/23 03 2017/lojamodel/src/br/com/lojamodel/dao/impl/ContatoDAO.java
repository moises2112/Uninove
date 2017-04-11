package br.com.lojamodel.dao.impl;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.List;
import java.util.Scanner;

import br.com.lojamodel.ConnectionFactory;
import br.com.lojamodel.Contato;
import br.com.lojamodel.dao.DAO;

public class ContatoDAO implements DAO {

	@Override
	public void create() throws SQLException {
		  // conectando

		Connection con = ConnectionFactory.getConnectionJDBC();
		Scanner teclado = new Scanner(System.in);
		Contato contato = new Contato();
		System.out.println("Nome:");
		contato.setNome(teclado.nextLine());
		System.out.println("E-mail:");
		contato.setEmail(teclado.nextLine());
		System.out.println("Data de nascimento:");
		String st = teclado.nextLine();
		contato.setDataNascimento(contato.toCalendar(st));
		int id = 0;
		PreparedStatement pstm = null;
        ResultSet rs = null;
        //String sql1 = "SELECT MAX(id_cont) FROM contatos";
        String sql2 = "select count (id_end) from enderecos";
        pstm = con.prepareStatement(sql2);
        rs = pstm.executeQuery();
        if (rs.next()) 
        	id = rs.getInt(1);
        id+=1;
        	
        

        // cria um preparedStatement
        String sql = "insert into contatos" +
                " (nome,email,dataNascimento,id_end)" +
                " values (?,?,?,?)";
        PreparedStatement stmt = con.prepareStatement(sql);

        // preenche os valores
        stmt.setString(1, contato.getNome());
        stmt.setString(2, contato.getEmail());
        
        
        
        
        stmt.setDate(3, new java.sql.Date(
                contato.getDataNascimento().getTimeInMillis()));
        stmt.setInt(4, id);
        EnderecoDAO enderecodao = new EnderecoDAO();
        enderecodao.create();
        // executa
        stmt.execute();
        stmt.close();

        System.out.println("Contato Gravado!");

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
