class Solution {
    public String simplifyPath(String str) {
        Stack<String> st = new Stack<>();
        for(String i:str.split("/"))
        {
            if(i.equals(".")||i.equals(""))
                continue;
            if(i.equals(".."))
            {
                if(!st.isEmpty())
                st.pop();
            }
            else
                st.push(i);
        }
        return "/"+String.join("/",st);

    }
}