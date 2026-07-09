<h2><a href="https://codeforces.com/contest/2009/problem/F" target="_blank" rel="noopener noreferrer">2009F — Firefly's Queries</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2009F](https://codeforces.com/contest/2009/problem/F) |

## Topics
`bitmasks` `data structures` `flows` `math`

---

## Problem Statement

<div class="header"><div class="title">F. Firefly's Queries</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Firefly is given an array $$$a$$$ of length $$$n$$$. Let $$$c_i$$$ denote the $$$i$$$'th cyclic shift$$$^{\text{∗}}$$$ of $$$a$$$. She creates a new array $$$b$$$ such that $$$b = c_1 + c_2 + \dots + c_n$$$ where $$$+$$$ represents concatenation$$$^{\text{†}}$$$. </p><p>Then, she asks you $$$q$$$ queries. For each query, output the sum of all elements in the subarray of $$$b$$$ that starts from the $$$l$$$-th element and ends at the $$$r$$$-th element, inclusive of both ends.</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$The $$$x$$$-th ($$$1 \leq x \leq n$$$) cyclic shift of the array $$$a$$$ is $$$a_x, a_{x+1} \ldots a_n, a_1, a_2 \ldots a_{x - 1}$$$. Note that the $$$1$$$-st shift is the initial $$$a$$$.</p><p>$$$^{\text{†}}$$$The concatenation of two arrays $$$p$$$ and $$$q$$$ of length $$$n$$$ (in other words, $$$p + q$$$) is $$$p_1, p_2, ..., p_n, q_1, q_2, ..., q_n$$$.</p></div></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$q$$$ ($$$1 \leq n, q \leq 2 \cdot 10^5$$$) — the length of the array and the number of queries.</p><p>The following line contains $$$n$$$ integers $$$a_1, a_2, ..., a_n$$$ ($$$1 \leq a_i \leq 10^6$$$).</p><p>The following $$$q$$$ lines contain two integers $$$l$$$ and $$$r$$$ ($$$1 \leq l \leq r \leq n^2$$$) — the left and right bounds of the query.</p><p><span class="tex-font-style-bf">Note that the large inputs may require the use of 64-bit integers.</span></p><p>It is guaranteed that the sum of $$$n$$$ does not exceed $$$2 \cdot 10^5$$$ and the sum of $$$q$$$ does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query, output the answer on a new line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005695047434527709" id="id007002705748288753" class="input-output-copier">Copy</div></div><pre id="id005695047434527709"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">3 3</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 3</div><div class="test-example-line test-example-line-odd test-example-line-1">1 9</div><div class="test-example-line test-example-line-odd test-example-line-1">3 5</div><div class="test-example-line test-example-line-odd test-example-line-1">8 8</div><div class="test-example-line test-example-line-even test-example-line-2">5 5</div><div class="test-example-line test-example-line-even test-example-line-2">4 8 3 2 4</div><div class="test-example-line test-example-line-even test-example-line-2">1 14</div><div class="test-example-line test-example-line-even test-example-line-2">3 7</div><div class="test-example-line test-example-line-even test-example-line-2">7 10</div><div class="test-example-line test-example-line-even test-example-line-2">2 11</div><div class="test-example-line test-example-line-even test-example-line-2">1 25</div><div class="test-example-line test-example-line-odd test-example-line-3">1 1</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div><div class="test-example-line test-example-line-odd test-example-line-3">1 1</div><div class="test-example-line test-example-line-even test-example-line-4">5 7</div><div class="test-example-line test-example-line-even test-example-line-4">3 1 6 10 4</div><div class="test-example-line test-example-line-even test-example-line-4">3 21</div><div class="test-example-line test-example-line-even test-example-line-4">6 17</div><div class="test-example-line test-example-line-even test-example-line-4">2 2</div><div class="test-example-line test-example-line-even test-example-line-4">1 5</div><div class="test-example-line test-example-line-even test-example-line-4">1 14</div><div class="test-example-line test-example-line-even test-example-line-4">9 15</div><div class="test-example-line test-example-line-even test-example-line-4">12 13</div><div class="test-example-line test-example-line-odd test-example-line-5">5 3</div><div class="test-example-line test-example-line-odd test-example-line-5">4 9 10 10 1</div><div class="test-example-line test-example-line-odd test-example-line-5">20 25</div><div class="test-example-line test-example-line-odd test-example-line-5">3 11</div><div class="test-example-line test-example-line-odd test-example-line-5">20 22</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009272424844245936" id="id007606852015206568" class="input-output-copier">Copy</div></div><pre id="id009272424844245936">18
8
1
55
20
13
41
105
6
96
62
1
24
71
31
14
44
65
15
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first test case, $$$b = [1, 2, 3, 2, 3, 1, 3, 1, 2]$$$.</p></div>