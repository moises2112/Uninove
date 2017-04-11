/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package conta;

/**
 *
 * @author internet
 */
public class Conta2 extends Conta{
    
    @Override
    public void deposita(double val){
        this.saldo+=(val-0.50);
        
    }
    
    @Override
    public double getSaldo(){
        return this.saldo;
    }
    
    @Override
    public void saca(double val){
        super.saca(val+0.90);
    }
    
    public Conta2(int cli,int num){
        this.numcli=cli;
        this.numero=num;
    }
     
  
}
