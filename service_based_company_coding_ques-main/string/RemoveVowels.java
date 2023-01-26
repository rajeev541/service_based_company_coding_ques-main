
public class RemoveVowels{
    public static void main(String[] args){

        String S = "take u forword";
        S = S.toLowerCase();
        String str = "";
        for(int i = 0;i<S.length();i++){
            char ch = S.charAt(i);
            if((ch != 'a') && (ch!='e')  && (ch!='i') && (ch!='o') && (ch!='u')){
                str=str+ch;
            }
        }
        System.out.println("After removing vowel :- "+str); 
    }
}