public class Phrase_O_Matic {
    public static void main(String[] args) {

        String wordListOne[] = {"24/7", "multi-Tier", "30,000 foot", "B-to-B",
                "win-win", "front-end", "web-based", "pervasive", "smart", "six-sigma",
                "critical-path", "dynamic"};
        String[] wordListTwo = {"empowered", "sticky", "value-added", "oriented", "centric",
                "distributed", "clustered", "branded", "outside-the-box", "positioned", "networked",
                "focused", "leveraged", "aligned", "targeted", "shared", "cooperative", "accelerated"};
        String three[] = {"process", "tipping-point", "solution", "architecture", "core competency",
                "strategy", "mindshare", "portal", "space", "vision", "paradigm", "mission"};
//getting the lenght or using lenght function
        int one = wordListOne.length;
        int two = wordListTwo.length;
        int len_three = three.length;

        //printing lengths of all strings
        System.out.println(one);
        System.out.println(two);
        System.out.println(len_three);

int random1 = (int) (Math.random()*one);
int random2 = (int) (Math.random()*two);
//taking random number
int random3 = (int) (Math.random()*len_three);

System.out.println(random1);
System.out.println(random2);
System.out.println(random3);

//building phrase
String phrase =  wordListOne[random1] + " " + wordListTwo[random2] + " " + three[random3] ;

System.out.println("What we need is " + phrase);

}
}
