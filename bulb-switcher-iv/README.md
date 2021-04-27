<h2>1529. Bulb Switcher IV</h2><h3>Medium</h3><hr><div><p>There is a room with <code>n</code>&nbsp;bulbs, numbered from <code>0</code> to&nbsp;<code>n-1</code>,&nbsp;arranged in a row from left to right. Initially all the bulbs are <strong>turned off</strong>.</p>

<p>Your task is to obtain the configuration represented by <code>target</code> where&nbsp;<code>target[i]</code> is '1' if the i-th bulb is turned on and is '0' if it is turned off.</p>

<p>You have a switch&nbsp;to flip the state of the bulb,&nbsp;a flip operation is defined as follows:</p>

<ul>
	<li>Choose <strong>any</strong> bulb (index&nbsp;<code>i</code>)&nbsp;of your current configuration.</li>
	<li>Flip each bulb from index&nbsp;<code>i</code> to&nbsp;<code>n-1</code>.</li>
</ul>

<p>When any bulb is flipped it means that if it is 0 it changes to 1 and if it is 1 it changes to 0.</p>

<p>Return the <strong>minimum</strong> number of flips required to form <code>target</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> target = "10111"
<strong>Output:</strong> 3
<strong>Explanation: </strong>Initial configuration "00000".
flip from the third bulb:  "00000" -&gt; "00111"
flip from the first bulb:  "00111" -&gt; "11000"
flip from the second bulb:  "11000" -&gt; "10111"
We need at least 3 flip operations to form target.</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> target = "101"
<strong>Output:</strong> 3
<strong>Explanation: </strong>"000" -&gt; "111" -&gt; "100" -&gt; "101".
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> target = "00000"
<strong>Output:</strong> 0
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> target = "001011101"
<strong>Output:</strong> 5
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= target.length &lt;= 10^5</code></li>
	<li><code>target[i] == '0'</code>&nbsp;or <code>target[i] == '1'</code></li>
</ul>
</div>