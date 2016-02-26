//reversing a string in Java
public static String reverseString(String str) {
    int length = str.length();
    StringBuilder sb = new StringBuilder(length);

    for (int i = (length - 1); i >= 0; i--){
        dest.append(sb.charAt(i));
    }

    return sb.toString();
}
