class Solution {
    public String countAndSay(int n) {
        
        if (n==1)
            return Integer.toString(n);
        else{
            String s = "";
                s = countAndSay(n-1);
            String str="";
        for(int i=0;i<s.length();i++){
            char c = s.charAt(i);
            int count = 1;
            
            for(int j=i+1;j<s.length()&&s.charAt(i)==s.charAt(j);j++){
                count++;
                i=j;
        }
            
             str = str +  Integer.toString(count) + c;
        }
            return str;
        }
    }
}