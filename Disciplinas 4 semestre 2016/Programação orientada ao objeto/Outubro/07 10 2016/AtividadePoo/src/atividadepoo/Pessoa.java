/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package atividadepoo;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author moise
 */
public class Pessoa {
        protected int codigo;
        protected String nome;
        protected String endereco;
        protected int telefone;
        
        public void altEnd(){
            Scanner teclado = new Scanner(System.in);
            this.endereco=teclado.nextLine();
        }
        
        public void altTelefone(){
            Scanner teclado = new Scanner(System.in);
            this.telefone=teclado.nextInt();
        }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public int getTelefone() {
        return telefone;
    }

    public void setTelefone(int telefone) {
        this.telefone = telefone;
    }
        
        
        public  List lerDados(){
            return null;
        }
        
}
