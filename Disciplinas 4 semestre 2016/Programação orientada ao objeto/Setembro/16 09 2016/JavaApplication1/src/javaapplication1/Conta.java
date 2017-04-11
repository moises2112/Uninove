package javaapplication1;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author internet
 */
public class Conta 
{
    public static String SS;
    protected int numero;
    protected int numcliente;
    private Double saldo;
    private String dataAB;
    public double limite;
   
    public void SetNum(int num){
        this.numero=num;
    }    
    
    
    public int GetNum (){   
        return this.numero;
    }

    public void SetCli(int numcli){
        this.numcliente=numcli;
    }

    public int GetCli() {
        return this.numcliente;
    }
    
}


 class Conta2 extends Conta{
   private int numero;
     public int nomequalquer(){
        return super.numero;
    }
     
     public int nomequalquer2(){
        return this.numero;
    }
     
     
    
}
