package vp.uninove.questoes.atividade.dao;

//import vp.uninove.questoes.atividade.model.Pessoa;
import vp.uninove.questoes.atividade.model.PessoaFisica;
import vp.uninove.questoes.atividade.model.PessoaJuridica;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author internet
 */
public class PessoaJuridicaDao {
    
    public static void inserirPjuridica(PessoaJuridica pj){
        Conexao.conectar();
        
        Conexao.em.persist(pj);
        
        Conexao.em.getTransaction().commit();
    }

}
