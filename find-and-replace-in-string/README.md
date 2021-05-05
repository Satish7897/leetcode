<h2>833. Find And Replace in String</h2><h3>Medium</h3><hr><div><p>To some string <code>S</code>, we will perform some&nbsp;replacement&nbsp;operations that replace groups of letters with new ones (not necessarily the same size).</p>

<p>Each replacement operation has <code>3</code> parameters: a starting index <code>i</code>, a source word&nbsp;<code>x</code>&nbsp;and a target word&nbsp;<code>y</code>.&nbsp; The rule is that if <code><font face="monospace">x</font></code>&nbsp;starts at position <code>i</code>&nbsp;in the <strong>original</strong> <strong>string</strong> <strong><code>S</code></strong>, then we will replace that occurrence of&nbsp;<code>x</code>&nbsp;with&nbsp;<code>y</code>.&nbsp; If not, we do nothing.</p>

<p>For example, if we have&nbsp;<code>S = "abcd"</code>&nbsp;and we have some replacement operation&nbsp;<code>i = 2, x = "cd", y = "ffff"</code>, then because&nbsp;<code>"cd"</code>&nbsp;starts at position <code><font face="monospace">2</font></code>&nbsp;in the original string <code>S</code>, we will replace it with <code>"ffff"</code>.</p>

<p>Using another example on <code>S = "abcd"</code>, if we have both the replacement operation <code>i = 0, x = "ab", y = "eee"</code>, as well as another replacement operation&nbsp;<code>i = 2, x = "ec", y = "ffff"</code>, this second operation does nothing because in the original string&nbsp;<code>S[2] = 'c'</code>, which doesn't match&nbsp;<code>x[0] = 'e'</code>.</p>

<p>All these operations occur simultaneously.&nbsp; It's guaranteed that there won't be any overlap in replacement: for example,&nbsp;<code>S = "abc", indexes = [0, 1],&nbsp;sources = ["ab","bc"]</code> is not a valid test case.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> S = "abcd", indexes = [0, 2], sources = ["a", "cd"], targets = ["eee", "ffff"]
<strong>Output:</strong> "eeebffff"
<strong>Explanation:</strong>
"a" starts at index 0 in S, so it's replaced by "eee".
"cd" starts at index 2 in S, so it's replaced by "ffff".
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> S = "abcd", indexes = [0, 2], sources = ["ab","ec"], targets = ["eee","ffff"]
<strong>Output:</strong> "eeecd"
<strong>Explanation:</strong>
"ab" starts at index 0 in S, so it's replaced by "eee".
"ec" doesn't starts at index 2 in the <strong>original</strong> S, so we do nothing.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= S.length &lt;= 1000</code></li>
	<li><code>S</code> consists of only lowercase English letters.</li>
	<li><code>0 &lt;= indexes.length &lt;= 100</code></li>
	<li><code>0 &lt;= indexes[i] &lt; S.length</code></li>
	<li><code>sources.length == indexes.length</code></li>
	<li><code>targets.length == indexes.length</code></li>
	<li><code>1 &lt;= sources[i].length, targets[i].length &lt;= 50</code></li>
	<li><code>sources[i]</code>&nbsp;and <code>targets[i]</code>&nbsp;consist of only lowercase English letters.</li>
</ul>
</div>