/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package conta;

public class Conta {
    
    
    public  Conta(int num, int cli){
        this.numero=num;
        this.numcli=cli;
    }
    public Conta(){}
    
    protected  int numero;
    protected int numcli;
    protected double saldo=0;
    
    public void setNum(int num){
        this.numero=num;
        
    }
    
    public int getNum(){
        return this.numero;
    }
    
    public void setCli(int cli){
        this.numcli=cli;
    }
    
    public void saca(double val){
        this.saldo-=val;
    }
    
    public int getCli(){
        return this.numcli;
    }
    
    public void deposita(double val){
        this.saldo+=val;
    }
    
    public double getSaldo(){
        return this.saldo;
    }
    
}
