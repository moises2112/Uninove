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
public class PessoaJuridica  {
    @Id
    @Column
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private long codigo_pjuridica;

    
    @Column(length = 255)
    protected String nome;
    @Column(length = 255)
    protected String endereco;
    @Column(length = 255)
    protected String telefone;
    @Column(length = 255)
    private String inscricao_estadual;
    @Column(length = 255)
    private String cnpj;
    @Column(length = 255)
    private String nome_fantasia;

    @Override
    public String toString() {
        return "codigo:" + codigo_pjuridica + "\t nome:" + nome + "\t endereco:" + endereco + "\t telefone:" + telefone + "\t inscricao estadual:" + inscricao_estadual + "\t cnpj:" + cnpj + "\t nome fantasia:" + nome_fantasia;
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

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }
    

   
    

   public long getCodigo_pjuridica() {
        return codigo_pjuridica;
    }

    public void setCodigo_pjuridica(long codigo_pjuridica) {
        this.codigo_pjuridica = codigo_pjuridica;
    }

    public String getInscricao_estadual() {
        return inscricao_estadual;
    }

    public void setInscricao_estadual(String inscricao_estadual) {
        this.inscricao_estadual = inscricao_estadual;
    }

    public String getNome_fantasia() {
        return nome_fantasia;
    }

    public void setNome_fantasia(String nome_fantasia) {
        this.nome_fantasia = nome_fantasia;
    }
    
    public String getInscest() {
        return inscricao_estadual;
    }

    public void setInscest(String inscest) {
        this.inscricao_estadual = inscest;
    }

    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public String getNmfantasia() {
        return nome_fantasia;
    }

    public void setNmfantasia(String nmfantasia) {
        this.nome_fantasia = nmfantasia;
    }

}
