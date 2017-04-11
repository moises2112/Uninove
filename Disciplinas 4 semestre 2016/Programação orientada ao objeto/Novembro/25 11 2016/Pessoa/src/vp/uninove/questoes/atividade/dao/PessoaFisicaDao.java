/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vp.uninove.questoes.atividade.dao;

//import vp.uninove.questoes.atividade.model.Pessoa;
import vp.uninove.questoes.atividade.model.PessoaFisica;

/**
 *
 * @author internet
 */
public class PessoaFisicaDao {
    
    public static void inserirPfisica(PessoaFisica pf){
        Conexao.conectar();
        
        Conexao.em.persist(pf);
        Conexao.em.getTransaction().commit();
    }
    
}
