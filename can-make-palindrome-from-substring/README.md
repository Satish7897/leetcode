<h2>1177. Can Make Palindrome from Substring</h2><h3>Medium</h3><hr><div><p>Given a string <code>s</code>, we make queries on substrings of <code>s</code>.</p>

<p>For each query <code>queries[i] = [left, right, k]</code>, we may <strong>rearrange</strong>&nbsp;the substring <code>s[left], ..., s[right]</code>, and then choose <strong>up to</strong> <code>k</code> of them to replace with any lowercase English letter.&nbsp;</p>

<p>If the substring&nbsp;is possible to be a&nbsp;palindrome string after the operations above, the result of the query is <code>true</code>.&nbsp;Otherwise, the result&nbsp;is <code>false</code>.</p>

<p>Return an array <code>answer[]</code>, where <code>answer[i]</code> is the result of the <code>i</code>-th query <code>queries[i]</code>.</p>

<p>Note that: Each letter is counted <strong>individually</strong> for replacement so&nbsp;if for example&nbsp;<code>s[left..right] = "aaa"</code>, and <code>k = 2</code>, we can only replace two of the letters.&nbsp; (Also, note that the initial string <code>s</code>&nbsp;is never modified by any query.)</p>

<p>&nbsp;</p>
<p><strong>Example :</strong></p>

<pre><strong>Input:</strong> s = "abcda", queries = [[3,3,0],[1,2,0],[0,3,1],[0,3,2],[0,4,1]]
<strong>Output:</strong> [true,false,false,true,true]
<strong>Explanation:</strong>
queries[0] : substring = "d", is palidrome.
queries[1] :&nbsp;substring = "bc", is not palidrome.
queries[2] :&nbsp;substring = "abcd", is not palidrome after replacing only 1 character.
queries[3] :&nbsp;substring = "abcd", could be changed to "abba" which is palidrome. Also this can be changed to "baab" first rearrange it "bacd" then replace "cd" with "ab".
queries[4] :&nbsp;substring = "abcda",&nbsp;could be changed to "abcba" which is palidrome.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length,&nbsp;queries.length&nbsp;&lt;= 10^5</code></li>
	<li><code>0 &lt;= queries[i][0] &lt;= queries[i][1] &lt;&nbsp;s.length</code></li>
	<li><code>0 &lt;= queries[i][2] &lt;= s.length</code></li>
	<li><code>s</code> only contains lowercase English letters.</li>
</ul>
</div>