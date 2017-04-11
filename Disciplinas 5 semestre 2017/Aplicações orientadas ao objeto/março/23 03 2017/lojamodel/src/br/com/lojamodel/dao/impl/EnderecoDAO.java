package br.com.lojamodel.dao.impl;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.List;
import java.util.Scanner;

import br.com.lojamodel.ConnectionFactory;
import br.com.lojamodel.Contato;
import br.com.lojamodel.Endereco;
import br.com.lojamodel.dao.DAO;

public class EnderecoDAO implements DAO {

	@Override
	public void create() throws SQLException {
		 // conectando

		Connection con = ConnectionFactory.getConnectionJDBC();
		PreparedStatement pstm = null;
        ResultSet rs = null;
        int id=0;
		String sql2 = "select count (id_cont) from contatos";
        pstm = con.prepareStatement(sql2);
        rs = pstm.executeQuery();
        if (rs.next()) 
        	id = rs.getInt(1);
        id+=1;
		Scanner tecladoint = new Scanner(System.in);
		Scanner tecladotext = new Scanner(System.in);
		Endereco endereco = new Endereco();
		System.out.println("Cep:");
		endereco.setCep(tecladoint.nextInt());
		System.out.println("Rua:");
		endereco.setRua(tecladotext.nextLine());
		System.out.println("Numero:");
		endereco.setNum(tecladoint.nextInt());
		System.out.println("Cidade:");
		endereco.setCidade(tecladotext.nextLine());
		System.out.println("Estado:");
		endereco.setEstado(tecladotext.nextLine());
		EnderecoDAO enderecodao = new EnderecoDAO();


        // cria um preparedStatement
        String sql = "insert into enderecos" +
                " (cep,rua,num,cidade,estado,id_cont)" +
                " values (?,?,?,?,?,?)";
        PreparedStatement stmt = con.prepareStatement(sql);

        // preenche os valores
        stmt.setInt(1, endereco.getCep());
        stmt.setString(2, endereco.getRua());
        stmt.setInt(3, endereco.getNum());
        stmt.setString(4, endereco.getCidade());
        stmt.setString(5, endereco.getEstado());
        stmt.setInt(6, id);
        // executa
        stmt.execute();
        stmt.close();

        System.out.println("Endereco gravado!");

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
