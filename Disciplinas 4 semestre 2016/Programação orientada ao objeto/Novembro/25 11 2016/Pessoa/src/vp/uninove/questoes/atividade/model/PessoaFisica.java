/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vp.uninove.questoes.atividade.model;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.OneToOne;

/**
 *
 * @author internet
 */

@Entity
public class PessoaFisica  {
    @Id
    @Column
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private long codigo_pfisica;
     
    @Column(length = 255)
    protected String nome;
    @Column(length = 255)
    protected String endereco;
    @Column(length = 255)
    protected String telefone;
    @Column(length = 255)
    private String rg;
    @Column(length = 255)
    private String cpf;
    @Column(length = 255)
    private String tituloeleito;
    

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

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }
    

    

    public long getCodigo_pfisica() {
        return codigo_pfisica;
        
    }

    public void setCodigo_pfisica(long codigo_pfisica) {
        this.codigo_pfisica = codigo_pfisica;
    }

    @Override
    public String toString() {
        return  "codigo:" + codigo_pfisica + "\t nome:" + nome + "\t endereco:" + endereco + "\t telefone:" + telefone + "\t rg:" + rg + "\t cpf:" + cpf + "\t titulo de eleitor=" + tituloeleito ;
    }


    
    
  
    public String getRg() {
        return rg;
    }

    public void setRg(String rg) {
        this.rg = rg;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getTituloeleito() {
        return tituloeleito;
    }

    public void setTituloeleito(String tituloeleito) {
        this.tituloeleito = tituloeleito;
    }
}