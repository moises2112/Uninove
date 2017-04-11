/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Scanner;

public class conexao {
    
public static String Status;
public Connection con=null;
public Connection Conectar (){
 con=null;
 String nomeDriver= "con.mysql.jdbc.Driver";
 try {Class.forName (nomeDriver);}
 catch (ClassNotFoundException ex) {Status=ex.getMessage();}
 String sever ="localhost";
 String BD="javac";
 String URL="jdbc:mysql://"+sever+"/"+BD;
 String user="root";
 String pwd="";
 try {con=DriverManager.getConnection(URL,user,pwd);
 Status="Conectado";
 return con;}
 
 catch (SQLException ex){
 Status="Erro \n"+ ex.getMessage();
 return con;
 }}
 
public boolean inserir(String valor){
    try {
        Conectar();
        PreparedStatement prep=con.prepareStatement("insert into teste values(null,'"+valor+"')");
        prep.execute();
        con.close();
        return true;
        
    } catch (SQLException e) {
        Status=e.getMessage();return false;
    }
}
public void lerDados(){
    Conectar();
    try {
        Statement stm;stm=con.createStatement();
        String str="Select * from teste";
        ResultSet rs= stm.executeQuery(str);
        while(rs.next()){
            System.out.print(rs.getString("cod"));
            System.out.println(rs.getString("nome"));
        }
        con.close();
    } catch (SQLException e) {
        System.out.println(e.getMessage());
    }
}
public void limpaTabela(){
    Conectar();
    try {
        Statement stm;stm=con.createStatement();
        String str="delete from teste";
        stm.executeQuery(str);
        
    } catch (SQLException e) {
         System.out.println(e.getMessage());
    }
}

public void altera(){
    Conectar();
    try {
        System.out.print("Digite o cod do nome que deseja alterar:");
        Scanner teclado0 = new Scanner(System.in);
        Scanner teclado1 = new Scanner(System.in);
        int id = teclado0.nextInt();
        System.out.print("Digite o novo nome:");
        String nome= teclado1.nextLine();        
        PreparedStatement stm =con.prepareStatement("update  teste set nome='"+nome+"' where cod="+id);
       
        stm.execute();
     
        con.close();
    } catch (SQLException e) {
        System.out.println(e.getMessage());
    }
    
}

public void lerFiltro(){
    Conectar();
    try {
        Statement stm;stm=con.createStatement();
        System.out.print("Digite o cod do nome que deseja procurar:");
        Scanner teclado0 = new Scanner(System.in);
        int id = teclado0.nextInt();
        String str="Select * from teste where cod="+id;
        ResultSet rs= stm.executeQuery(str);
        while(rs.next()){
            System.out.print(rs.getString("cod"));
            System.out.println(rs.getString("nome"));
        }
        con.close();
    } catch (SQLException e) {
        System.out.println(e.getMessage());
    }
}
}
