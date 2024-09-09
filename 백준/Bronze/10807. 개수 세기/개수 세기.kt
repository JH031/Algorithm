import	java.util.*
fun	main()	{
    val	scanner	=	Scanner(System.`in`)
    val	n	=	scanner.nextInt()
    var arr1 = IntArray(n)
    var cnt = 0

    for	(i in 0..n-1)	{
        val	num	=	scanner.nextInt()
        arr1[i]=num
    }
    val	v	=	scanner.nextInt()

    for(i in 0..n-1){
        if(arr1[i]==v) cnt++
    }
    print(cnt)
}
