/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package programacao.orientada.ao.objeto;

import java.util.Scanner;
//import newpackage.NovoClass;

public class Classe2 {
     public static void main(String[] args) {
        
        int v[]= new int[5];
        v[0]=10; v[1]=5; v[2]=-1; v[3]=8; v[4]=15;
        int x,y;
        for(x=0;x<5;x++)
            System.out.println(v[x]);
        
        Scanner in= new Scanner(System.in);
        for(x=0;x<5;x++)
            v[x]=in.nextInt();
        
        for(x=0;x<v.length;x++)
            System.out.println(v[x]);
        
        for(int i:v)
            System.out.println(i);
        
        float en[][] = new float[5][2];
        for(x=0;x<5;x++)
            for(y=0;y<2;y++)
                en[x][y]= in.nextInt();
        String s="xxx";
         System.out.println(s);
        String ss[]=new String[5];
        for (x=0;x<5;x++)
            ss[x]=in.nextLine();
        String sss[][]=new String [3][2];
        for(x=0;x<3;x++)
            for(y=0;y<2;y++)
                sss[x][y]=in.nextLine();
        
        
             
     }
    
}
