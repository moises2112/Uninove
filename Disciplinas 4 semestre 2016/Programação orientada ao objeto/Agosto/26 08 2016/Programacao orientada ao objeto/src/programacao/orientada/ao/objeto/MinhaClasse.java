/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package programacao.orientada.ao.objeto;

import java.util.Scanner;
import newpackage.NovoClass;

public class MinhaClasse {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int x,y,z;
        String nome,Nome;
        Scanner cap = new Scanner (System.in);
        System.out.println("Digite nome:");
        nome= cap.next();
        System.out.println("Digite 2 numeros:");
        x= Integer.parseInt(cap.next());
        y= Integer.parseInt(cap.next()); z= x+y;
        System.out.println(nome+ "\n soma=" + z);
        
    }
    
}
