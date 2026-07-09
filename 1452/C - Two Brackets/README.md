<h2><a href="https://codeforces.com/contest/1452/problem/C" target="_blank" rel="noopener noreferrer">1452C — Two Brackets</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1452C](https://codeforces.com/contest/1452/problem/C) |

## Topics
`greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Two Brackets</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a string $$$s$$$, consisting of brackets of two types: '<span class="tex-font-style-tt">(</span>', '<span class="tex-font-style-tt">)</span>', '<span class="tex-font-style-tt">[</span>' and '<span class="tex-font-style-tt">]</span>'.</p><p>A string is called a regular bracket sequence (RBS) if it's of one of the following types: </p><ul> <li> empty string; </li><li> '<span class="tex-font-style-tt">(</span>' + RBS + '<span class="tex-font-style-tt">)</span>'; </li><li> '<span class="tex-font-style-tt">[</span>' + RBS + '<span class="tex-font-style-tt">]</span>'; </li><li> RBS + RBS. </li></ul><p>where plus is a concatenation of two strings.</p><p>In one move you can choose a non-empty subsequence of the string $$$s$$$ (not necessarily consecutive) that is an RBS, remove it from the string and concatenate the remaining parts without changing the order.</p><p>What is the maximum number of moves you can perform?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of testcases.</p><p>Each of the next $$$t$$$ lines contains a non-empty string, consisting only of characters '<span class="tex-font-style-tt">(</span>', '<span class="tex-font-style-tt">)</span>', '<span class="tex-font-style-tt">[</span>' and '<span class="tex-font-style-tt">]</span>'. The total length of the strings over all testcases doesn't exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase print a single integer — the maximum number of moves you can perform on a given string $$$s$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009185043104909906" id="id0022630138129798827" class="input-output-copier">Copy</div></div><pre id="id009185043104909906">5
()
[]()
([)]
)]([
)[(]
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0013772259685038835" id="id003337283024036295" class="input-output-copier">Copy</div></div><pre id="id0013772259685038835">1
2
2
0
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example you can just erase the whole string.</p><p>In the second example you can first erase the brackets on positions $$$1$$$ and $$$2$$$: "<span class="tex-font-style-tt"><span class="tex-font-style-bf">[]</span>()</span>", then "<span class="tex-font-style-tt">()</span>" is left. After that you can erase it whole. You could erase the whole string from the beginning but you would get one move instead of two.</p><p>In the third example you can first erase the brackets on positions $$$1$$$ and $$$3$$$: "<span class="tex-font-style-tt"><span class="tex-font-style-bf">(</span>[<span class="tex-font-style-bf">)</span>]</span>". They form an RBS "<span class="tex-font-style-tt">()</span>". Then "<span class="tex-font-style-tt">[]</span>" is left, so you can erase it whole.</p><p>In the fourth example there is no subsequence that is an RBS, so you can't perform a move at all.</p><p>In the fifth example you can erase the brackets on positions $$$2$$$ and $$$4$$$: "<span class="tex-font-style-tt">)<span class="tex-font-style-bf">[</span>(<span class="tex-font-style-bf">]</span></span>" and get "<span class="tex-font-style-tt">)(</span>" as a result. You can erase nothing from it.</p></div>