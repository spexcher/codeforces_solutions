<h2><a href="https://codeforces.com/contest/1918/problem/C" target="_blank" rel="noopener noreferrer">1918C — XOR-distance</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1918C](https://codeforces.com/contest/1918/problem/C) |

## Topics
`bitmasks` `greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">C. XOR-distance</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given integers $$$a$$$, $$$b$$$, $$$r$$$. Find the smallest value of $$$|({a \oplus x}) - ({b \oplus x})|$$$ among all $$$0 \leq x \leq r$$$.</p><p>$$$\oplus$$$ is the operation of <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR</a>, and $$$|y|$$$ is <a href="https://en.wikipedia.org/wiki/Absolute_value">absolute value</a> of $$$y$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>Each test case contains integers $$$a$$$, $$$b$$$, $$$r$$$ ($$$0 \le a, b, r \le 10^{18}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single number — the smallest possible value.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0012151606627379785" id="id002026590881747068" class="input-output-copier">Copy</div></div><pre id="id0012151606627379785"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">4 6 0</div><div class="test-example-line test-example-line-even test-example-line-2">0 3 2</div><div class="test-example-line test-example-line-odd test-example-line-3">9 6 10</div><div class="test-example-line test-example-line-even test-example-line-4">92 256 23</div><div class="test-example-line test-example-line-odd test-example-line-5">165 839 201</div><div class="test-example-line test-example-line-even test-example-line-6">1 14 5</div><div class="test-example-line test-example-line-odd test-example-line-7">2 7 2</div><div class="test-example-line test-example-line-even test-example-line-8">96549 34359 13851</div><div class="test-example-line test-example-line-odd test-example-line-9">853686404475946 283666553522252166 127929199446003072</div><div class="test-example-line test-example-line-even test-example-line-10">735268590557942972 916721749674600979 895150420120690183</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007157093433212378" id="id0011497159541270252" class="input-output-copier">Copy</div></div><pre id="id007157093433212378">2
1
1
164
542
5
3
37102
27934920819538516
104449824168870225
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test, when $$$r = 0$$$, then $$$x$$$ is definitely equal to $$$0$$$, so the answer is $$$|{4 \oplus 0} - {6 \oplus 0}| = |4 - 6| = 2$$$.</p><p>In the second test:</p><ul> <li> When $$$x = 0$$$, $$$|{0 \oplus 0} - {3 \oplus 0}| = |0 - 3| = 3$$$. </li><li> When $$$x = 1$$$, $$$|{0 \oplus 1} - {3 \oplus 1}| = |1 - 2| = 1$$$. </li><li> When $$$x = 2$$$, $$$|{0 \oplus 2} - {3 \oplus 2}| = |2 - 1| = 1$$$. </li></ul><p>Therefore, the answer is $$$1$$$.</p><p>In the third test, the minimum is achieved when $$$x = 1$$$.</p></div>