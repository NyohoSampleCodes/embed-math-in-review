= Re:VIEW の文法

== header1

=== header2

==== header3

===== header4

//list[f][f()][c]{
float f(float x) {
  return x*x;
}
//}

集合 @<m>{X} 上に演算 @<m>{\cdot \colon X \times X \to X} が定義されている。

数式は括弧がバッティングしないようにいろんな括弧が用意されている。 @<m>|X|, @<m>$X$, @<m>{X} がそうだ。

次はTeXの数式である。
//texequation{
\sum_{n=1}^\infty \frac{1}{n^s}
//}

@<b>{太文字}である。

@<em>{太文字}である。

@<strong>{太文字}である。

@<ttb>{太文字}である。

@<tt>{等幅}にする。

code: @<code>{void f(void)}

===[column] Dashたち

唐突にコラムです。
dashたちです。

 * － は全角dash
 * ‐ は半角dash

===[/column]

==== double quote の付け方

“この前後はOK”

‟この前後はよくない″
