<h2><a href="https://codeforces.com/contest/1787/problem/A" target="_blank" rel="noopener noreferrer">1787A — Exponential Equation</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1787A](https://codeforces.com/contest/1787/problem/A) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Exponential Equation</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer $$$n$$$.</p><p>Find any pair of integers $$$(x,y)$$$ ($$$1\leq x,y\leq n$$$) such that $$$x^y\cdot y+y^x\cdot x = n$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\leq t\leq 10^4$$$) — the number of test cases.</p><p>Each test case contains one line with a single integer $$$n$$$ ($$$1\leq n\leq 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if possible, print two integers $$$x$$$ and $$$y$$$ ($$$1\leq x,y\leq n$$$). If there are multiple answers, print any.</p><p>Otherwise, print $$$-1$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0023273275049797426" id="id003478111111449904" class="input-output-copier">Copy</div></div><pre id="id0023273275049797426"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-even test-example-line-2">7</div><div class="test-example-line test-example-line-odd test-example-line-3">42</div><div class="test-example-line test-example-line-even test-example-line-4">31250</div><div class="test-example-line test-example-line-odd test-example-line-5">20732790</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005600712002581152" id="id00016809981076848612" class="input-output-copier">Copy</div></div><pre id="id005600712002581152">-1
-1
2 3
5 5
3 13
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the third test case, $$$2^3 \cdot 3+3^2 \cdot 2 = 42$$$, so $$$(2,3),(3,2)$$$ will be considered as legal solutions.</p><p>In the fourth test case, $$$5^5 \cdot 5+5^5 \cdot 5 = 31250$$$, so $$$(5,5)$$$ is a legal solution.</p></div>