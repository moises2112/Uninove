/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package atividadepoo;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author moise
 */
public class PessoaFisica extends Pessoa {

    private String rg;
    private int cpf;
    private int tituloeleito;
    //private List<PessoaFisica> lpf;

    public PessoaFisica() {
        
        
        Scanner teclado1 = new Scanner(System.in);
        Scanner teclado2 = new Scanner(System.in);
        System.out.print("Codigo: ");
        super.setCodigo(teclado1.nextInt());
        System.out.print("Nome: ");
        super.setNome(teclado2.nextLine());
        System.out.print("Endereço: ");
        super.setEndereco(teclado2.nextLine());
        System.out.print("Telefone: ");
        super.setTelefone(teclado1.nextInt());
        System.out.print("RG: ");
        this.rg = teclado2.nextLine();
        System.out.print("CPF: ");
        Scanner teclado3 = new Scanner(System.in);
        this.cpf = teclado3.nextInt();
        System.out.print("Titulo de Eleitor: ");
        this.tituloeleito = teclado1.nextInt();

    }

    @Override
    public List lerDados() {
        List<String> lpf = new ArrayList<String>();
        lpf.add(this.rg);
        lpf.add(Integer.toString(this.codigo));
        lpf.add(this.endereco);
        lpf.add(this.nome);
        lpf.add(Integer.toString(this.telefone));
        lpf.add(Integer.toString(this.tituloeleito));
        lpf.add(Integer.toString(this.cpf));
        return lpf;
        
        
    }
    
    
    @Override
    public String toString() {
        return "PessoaFisica{" + "rg=" + rg + ", cpf=" + cpf + ", tituloeleito=" + tituloeleito + '}';
    }

    public String getRg() {
        return rg;
    }

    public void setRg(String rg) {
        this.rg = rg;
    }

    public int getCpf() {
        return cpf;
    }

    public void setCpf(int cpf) {
        this.cpf = cpf;
    }

    public int getTituloeleito() {
        return tituloeleito;
    }

    public void setTituloeleito(int tituloeleito) {
        this.tituloeleito = tituloeleito;
    }

}
