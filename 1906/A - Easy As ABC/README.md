<h2><a href="https://codeforces.com/contest/1906/problem/A" target="_blank" rel="noopener noreferrer">1906A — Easy As ABC</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1906A](https://codeforces.com/contest/1906/problem/A) |

## Topics
`brute force`

---

## Problem Statement

<div class="header"><div class="title">A. Easy As ABC</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>1024 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are playing a word puzzle. The puzzle starts with a $$$3$$$ by $$$3$$$ grid, where each cell contains either the letter <span class="tex-font-style-tt">A</span>, <span class="tex-font-style-tt">B</span>, or <span class="tex-font-style-tt">C</span>.</p><p>The goal of this puzzle is to find the lexicographically smallest possible word of length $$$3$$$. The word can be formed by choosing three different cells where the cell containing the first letter is adjacent to the cell containing the second letter, and the cell containing the second letter is adjacent to the cell containing the third letter.</p><p>Two cells are adjacent to each other if they share a border or a corner, as shown in the following illustration. Formally, if $$$(r, c)$$$ denotes the cell in the $$$r$$$-th row and $$$c$$$-th column, then cell $$$(r, c)$$$ is adjacent to cell $$$(r, c + 1)$$$, $$$(r - 1, c + 1)$$$, $$$(r - 1, c)$$$, $$$(r - 1, c - 1)$$$, $$$(r, c - 1)$$$, $$$(r + 1, c - 1)$$$, $$$(r + 1, c)$$$, and $$$(r + 1, c + 1)$$$.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/3cbe628b7ad52bf923180a3ad72c451073c5a168.png" style="max-width: 100.0%;max-height: 100.0%;" width="76px"> </center><p>Determine the lexicographically smallest possible word of length $$$3$$$ that you can find within the grid.</p><p>A string $$$s$$$ of length $$$n$$$ is lexicographically smaller than string $$$t$$$ of the same length if there exists an integer $$$1 \leq i \leq n$$$ such that $$$s_j = t_j$$$ for all $$$1 \leq j  \lt  i$$$, and $$$s_i  \lt  t_i$$$ in alphabetical order. The following illustration shows some examples on some grids and their the lexicographically smallest possible word of length $$$3$$$ that you can find within the grids.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/329b651428dea5ad55a39c93a4d33ca6bfd5ed99.png" style="max-width: 100.0%;max-height: 100.0%;" width="454px"> </center></div><div class="input-specification"><div class="section-title">Input</div><p>Input consists of three lines, each containing three letters, representing the puzzle grid. Each letter in the grid can only be either <span class="tex-font-style-tt">A</span>, <span class="tex-font-style-tt">B</span>, or <span class="tex-font-style-tt">C</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output the lexicographically smallest possible word of length $$$3$$$ that you can find within the grid.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006087570190466651" id="id008152472377966519" class="input-output-copier">Copy</div></div><pre id="id006087570190466651">BCB
CAC
BCB
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00206337259779803" id="id008920187697917318" class="input-output-copier">Copy</div></div><pre id="id00206337259779803">ABC
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0008377509151583107" id="id004030280093457925" class="input-output-copier">Copy</div></div><pre id="id0008377509151583107">BCB
CCC
CCA
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0022629104300502556" id="id008711344433491989" class="input-output-copier">Copy</div></div><pre id="id0022629104300502556">ACB
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005412302318782847" id="id0028164989025533493" class="input-output-copier">Copy</div></div><pre id="id005412302318782847">ACA
CBC
ACA
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009862215376179143" id="id0021319480405643354" class="input-output-copier">Copy</div></div><pre id="id009862215376179143">ABA
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0036578117970703106" id="id007911883493345483" class="input-output-copier">Copy</div></div><pre id="id0036578117970703106">ACA
CAC
ACA
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0048080633458305333" id="id008114548984737424" class="input-output-copier">Copy</div></div><pre id="id0048080633458305333">AAA
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0021588654528855455" id="id007069465272422866" class="input-output-copier">Copy</div></div><pre id="id0021588654528855455">CCC
CBC
CCC
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004212977776004063" id="id008899147712050972" class="input-output-copier">Copy</div></div><pre id="id004212977776004063">BCC
</pre></div></div></div>