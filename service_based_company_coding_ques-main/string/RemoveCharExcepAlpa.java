
public class RemoveCharExcepAlpa{
    public static void main(String[] args){

        String S = "take12% *&u ^$#forward";
        S = S.toLowerCase();
        String str = "";
        for(int i = 0;i<S.length();i++){
            char ch = S.charAt(i);
            if(Character.isLetter(ch)){
                str=str+ch;
            }
        }
        System.out.println("After removing vowel :- "+str); 
    }
}