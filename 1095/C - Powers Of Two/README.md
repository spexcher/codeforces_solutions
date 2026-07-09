<h2><a href="https://codeforces.com/contest/1095/problem/C" target="_blank" rel="noopener noreferrer">1095C — Powers Of Two</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1095C](https://codeforces.com/contest/1095/problem/C) |

## Topics
`bitmasks` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Powers Of Two</div><div class="time-limit"><div class="property-title">time limit per test</div>4 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A positive integer $$$x$$$ is called a <span class="tex-font-style-it">power of two</span> if it can be represented as $$$x = 2^y$$$, where $$$y$$$ is a non-negative integer. So, the <span class="tex-font-style-it">powers of two</span> are $$$1, 2, 4, 8, 16, \dots$$$.</p><p>You are given two positive integers $$$n$$$ and $$$k$$$. Your task is to represent $$$n$$$ as the <span class="tex-font-style-bf">sum</span> of <span class="tex-font-style-bf">exactly</span> $$$k$$$ <span class="tex-font-style-it">powers of two</span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line of the input contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 10^9$$$, $$$1 \le k \le 2 \cdot 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>If it is impossible to represent $$$n$$$ as the sum of $$$k$$$ powers of two, print <span class="tex-font-style-tt">NO</span>.</p><p>Otherwise, print <span class="tex-font-style-tt">YES</span>, and then print $$$k$$$ positive integers $$$b_1, b_2, \dots, b_k$$$ such that each of $$$b_i$$$ is a power of two, and $$$\sum \limits_{i = 1}^{k} b_i = n$$$. If there are multiple answers, you may print any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0007461913443852297" id="id003996540903659902" class="input-output-copier">Copy</div></div><pre id="id0007461913443852297">9 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001857373436076345" id="id0028627996072979844" class="input-output-copier">Copy</div></div><pre id="id001857373436076345">YES
1 2 2 4 
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008987684509088189" id="id0049400975722116414" class="input-output-copier">Copy</div></div><pre id="id008987684509088189">8 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0037508304012035976" id="id0017963216607847665" class="input-output-copier">Copy</div></div><pre id="id0037508304012035976">YES
8 
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004011592060440905" id="id001719277028725147" class="input-output-copier">Copy</div></div><pre id="id004011592060440905">5 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00601955381236209" id="id005298614405441362" class="input-output-copier">Copy</div></div><pre id="id00601955381236209">NO
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0013872197244917706" id="id005296125521529295" class="input-output-copier">Copy</div></div><pre id="id0013872197244917706">3 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006382693988874915" id="id0001292260169352688" class="input-output-copier">Copy</div></div><pre id="id006382693988874915">NO
</pre></div></div></div>