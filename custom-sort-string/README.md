<h2>791. Custom Sort String</h2><h3>Medium</h3><hr><div><p><code>S</code> and <code>T</code> are strings composed of lowercase letters. In <code>S</code>, no letter occurs more than once.</p>

<p><code>S</code> was sorted in some custom order previously. We want to permute the characters of <code>T</code> so that they match the order that <code>S</code> was sorted. More specifically, if <code>x</code> occurs before <code>y</code> in <code>S</code>, then <code>x</code> should occur before <code>y</code> in the returned string.</p>

<p>Return any permutation of <code>T</code> (as a string) that satisfies this property.</p>

<pre><strong>Example :</strong>
<strong>Input:</strong> 
S = "cba"
T = "abcd"
<strong>Output:</strong> "cbad"
<strong>Explanation:</strong> 
"a", "b", "c" appear in S, so the order of "a", "b", "c" should be "c", "b", and "a". 
Since "d" does not appear in S, it can be at any position in T. "dcba", "cdba", "cbda" are also valid outputs.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ul>
	<li><code>S</code> has length at most <code>26</code>, and no character is repeated in <code>S</code>.</li>
	<li><code>T</code> has length at most <code>200</code>.</li>
	<li><code>S</code> and <code>T</code> consist of lowercase letters only.</li>
</ul>
</div>