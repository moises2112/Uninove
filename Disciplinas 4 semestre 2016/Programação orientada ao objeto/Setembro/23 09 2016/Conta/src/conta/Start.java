/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package conta;
import java.util.*;

/**
 *
 * @author internet
 */
public class Start {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Conta c1= new Conta(1 , 2);
        Conta2 c2= new Conta2(3,4);
        
        c1.deposita(1010.10);c1.saca(10.10);
        c2.deposita(850.10);c2.saca(2850.10);
        
        
        
        
        System.out.println(c1.getNum() + ":" + c1.getSaldo() +"\n"+ c2.getNum()+":" + c2.getSaldo());
        
    }

    
    
}
