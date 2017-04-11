/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package atividadepoo;

/**
 *
 * @author moise
 */
public class Testar {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        PessoaFisica pf0 = new PessoaFisica();
        System.out.println(pf0.lerDados());

        PessoaJuridica pj0 = new PessoaJuridica();
        System.out.println(pj0.lerDados());
    }

}
