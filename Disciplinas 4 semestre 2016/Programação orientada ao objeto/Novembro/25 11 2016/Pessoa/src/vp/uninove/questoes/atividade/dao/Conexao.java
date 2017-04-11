/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vp.uninove.questoes.atividade.dao;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;

/**
 *
 * @author moise
 */
public class Conexao {

    public static EntityManagerFactory factory = Persistence.createEntityManagerFactory("Atividade");
    public static EntityManager em = factory.createEntityManager();

    public static void conectar() {
        if(Conexao.em.getTransaction().isActive()==false)
           Conexao.em.getTransaction().begin();

    }

}
