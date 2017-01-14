import java.math.BigInteger

object Hello {
  def main(args: Array[String]): Unit = {
    println("Hello, world!")
    println(factorial2(BigInteger.valueOf(10)))
    var name = "frf"
    val nameHasUpperCase = name.exists(_.isUpper)
    println(nameHasUpperCase)
    println(max2(3,7))
  }
  //
  def factorial(x: BigInt): BigInt =
    if(x == 0) 1 else x * factorial(x - 1)

  //
  def factorial2(x: BigInteger): BigInteger =
  if (x == BigInteger.ZERO)
    BigInteger.ONE
  else
    x.multiply(factorial2(x.subtract(BigInteger.ONE)))

  def max(x: Int, y: Int): Int = {
    if (x > y) x
    else y
  }

  def max2(x: Int, y:Int) :Int = if (x > y) x else y

}
