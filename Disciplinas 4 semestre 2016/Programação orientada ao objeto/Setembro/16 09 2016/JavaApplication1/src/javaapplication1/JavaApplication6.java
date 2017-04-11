/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;



public class JavaApplication6 {

    public static void main(String[] args) {
        Conta.SS = "KKK";
        Conta c1 = new Conta();
        Conta c2 = new Conta();
        
        Conta2 c3 = new Conta2();
        
        c1.SetNum(6);
        c2.SetNum(7);
        c3.SetNum(5);        
        System.out.println(c3.nomequalquer());
        System.out.println(c3.nomequalquer2());
        /*
        c1.SetNum(10);
        System.out.println(c1.GetNum());
        System.out.println(c1.GetCli());
        
        c2.SetNum(10);c2.SetCli(50);
        System.out.println(c2.GetNum());
        System.out.println(c2.GetCli());
        //c1.saldo=10;
        //c1.dataAB="Hoje";
        */
           
    }
    
    
}
