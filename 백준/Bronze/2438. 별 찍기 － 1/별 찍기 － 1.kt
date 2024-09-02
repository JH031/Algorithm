import	java.util.*
fun	main()	{
        val	scanner	=	Scanner(System.`in`)
        val	n	=	scanner.nextInt()

        for(i in 1..n){
                for(j in 1..i){
                        print("*")
                }
                println()
        }
}