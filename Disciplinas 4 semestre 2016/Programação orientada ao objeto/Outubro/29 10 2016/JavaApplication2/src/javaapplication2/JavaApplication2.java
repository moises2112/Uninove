package javaapplication2;
import java.util.Scanner; 

public class JavaApplication2 {


    public static void main(String[] args) {
        
      /*conexao cn=new conexao();
      cn.Conectar();
        System.out.println(conexao.Status);
     */ 
    /*
    Scanner sc= new Scanner(System.in);
    Scanner sq= new Scanner(System.in);
    conexao cx= new conexao();
    int x;
    for(x=0;x<3;x++){
        System.out.println("Digite o nome");
        if(cx.inserir(sc.nextLine()))
            System.out.println("Inserido");
        else
            System.out.println("Deu Ruim");
    }
    cx.lerDados();
    */ 
    conexao cx= new conexao();
    cx.limpaTabela();
      
    }
    
}


