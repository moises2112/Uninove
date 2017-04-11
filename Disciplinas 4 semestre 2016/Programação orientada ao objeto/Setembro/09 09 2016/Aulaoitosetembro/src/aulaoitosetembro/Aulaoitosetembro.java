/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulaoitosetembro;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

        
public class Aulaoitosetembro {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        ArrayList<String>l1=new ArrayList<String>();
        List <String>l2=new ArrayList<String>();
        l1.add("Ernesto");
        l1.add("KKK");
        l1.add("PPP");
        l1.add("ernesto");
        l2.addAll(l1);
        System.out.println(l1);
        System.out.println(l2);
        l1.remove(1);
        l1.remove("PPP");
        for(String i:l1)
            l1.indexOf(i.indexOf(""));
        
        l1.set(0, l1.get(0) + " " + l1.get(0) );
        
        //System.out.println(i);
        l2.removeAll(l1);
        
        l1.get(0);
        
        l1.lastIndexOf(l2);
        
    }
    
}
