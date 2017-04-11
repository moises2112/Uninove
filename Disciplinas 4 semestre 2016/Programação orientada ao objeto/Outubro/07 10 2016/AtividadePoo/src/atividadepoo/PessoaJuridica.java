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
public class PessoaJuridica extends Pessoa {

    private int inscest;
    private int cnpj;
    private String nmfantasia;

    public PessoaJuridica() {

        Scanner teclado1 = new Scanner(System.in);
        Scanner teclado2 = new Scanner(System.in);
        System.out.print("Codigo: ");
        this.setCodigo(teclado1.nextInt());
        System.out.print("Nome: ");
        this.setNome(teclado2.nextLine());
        System.out.print("Endereço: ");
        this.setEndereco(teclado2.nextLine());
        System.out.print("Telefone: ");
        this.setTelefone(teclado1.nextInt());
        System.out.print("Inscrição Estadual: ");
        this.inscest = teclado1.nextInt();
        System.out.print("CNPJ: ");
        this.cnpj = teclado1.nextInt();
        System.out.print("Nome Fantasia: ");
        this.nmfantasia = teclado2.nextLine();
    }

    @Override
    public List lerDados() {
        List<String> lpj = new ArrayList<String>();
        lpj.add(this.nmfantasia);
        lpj.add(Integer.toString(this.codigo));
        lpj.add(this.endereco);
        lpj.add(this.nome);
        lpj.add(Integer.toString(this.inscest));
        lpj.add(Integer.toString(this.cnpj));
        lpj.add(Integer.toString(this.telefone));
        return lpj;
        
    }

    @Override
    public String toString() {
        return "PessoaJuridica{" + "inscest=" + inscest + ", cnpj=" + cnpj + ", nmfantasia=" + nmfantasia + '}';
    }
    
    public int getInscest() {
        return inscest;
    }

    public void setInscest(int inscest) {
        this.inscest = inscest;
    }

    public int getCnpj() {
        return cnpj;
    }

    public void setCnpj(int cnpj) {
        this.cnpj = cnpj;
    }

    public String getNmfantasia() {
        return nmfantasia;
    }

    public void setNmfantasia(String nmfantasia) {
        this.nmfantasia = nmfantasia;
    }

}
