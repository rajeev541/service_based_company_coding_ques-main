
public class RemoveSpace{
    public static void main(String[] args){

        String S = "take u forword";
        S = S.toLowerCase();
        String str = "";
        for(int i = 0;i<S.length();i++){
            char ch = S.charAt(i);
            if(ch !=' '){
                str=str+ch;
            }
        }
        System.out.println("After removing vowel :- "+str); 
    }
}