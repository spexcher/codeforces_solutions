<h2><a href="https://codeforces.com/contest/1355/problem/E" target="_blank" rel="noopener noreferrer">1355E — Restorer Distance</a></h2>

| | |
|---|---|
| **Difficulty** | 2100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1355E](https://codeforces.com/contest/1355/problem/E) |

## Topics
`binary search` `greedy` `math` `sortings` `ternary search`

---

## Problem Statement

<div class="header"><div class="title">E. Restorer Distance</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have to restore the wall. The wall consists of $$$N$$$ pillars of bricks, the height of the $$$i$$$-th pillar is initially equal to $$$h_{i}$$$, the height is measured in number of bricks. After the restoration all the $$$N$$$ pillars should have equal heights.</p><p>You are allowed the following operations:</p><ul><li> put a brick on top of one pillar, the cost of this operation is $$$A$$$;</li><li> remove a brick from the top of one non-empty pillar, the cost of this operation is $$$R$$$;</li><li> move a brick from the top of one non-empty pillar to the top of another pillar, the cost of this operation is $$$M$$$.</li></ul><p>You cannot create additional pillars or ignore some of pre-existing pillars even if their height becomes $$$0$$$.</p><p>What is the minimal total cost of restoration, in other words, what is the minimal total cost to make all the pillars of equal height?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains four integers $$$N$$$, $$$A$$$, $$$R$$$, $$$M$$$ ($$$1 \le N \le 10^{5}$$$, $$$0 \le A, R, M \le 10^{4}$$$) — the number of pillars and the costs of operations.</p><p>The second line contains $$$N$$$ integers $$$h_{i}$$$ ($$$0 \le h_{i} \le 10^{9}$$$) — initial heights of pillars.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the minimal cost of restoration.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008168901779446666" id="id002705304741143244" class="input-output-copier">Copy</div></div><pre id="id008168901779446666">3 1 100 100
1 3 8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009503281099469069" id="id008143472684350761" class="input-output-copier">Copy</div></div><pre id="id009503281099469069">12
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008741429658861779" id="id00048288261964632206" class="input-output-copier">Copy</div></div><pre id="id008741429658861779">3 100 1 100
1 3 8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00835840715601085" id="id005022507270221089" class="input-output-copier">Copy</div></div><pre id="id00835840715601085">9
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005535255346504745" id="id005180391082931379" class="input-output-copier">Copy</div></div><pre id="id005535255346504745">3 100 100 1
1 3 8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002703425460346781" id="id007614701099090908" class="input-output-copier">Copy</div></div><pre id="id002703425460346781">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003389051454444666" id="id008803025425784199" class="input-output-copier">Copy</div></div><pre id="id003389051454444666">5 1 2 4
5 5 3 6 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00862904576604662" id="id009340875414457732" class="input-output-copier">Copy</div></div><pre id="id00862904576604662">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008369761904606653" id="id0000019499482875307006" class="input-output-copier">Copy</div></div><pre id="id008369761904606653">5 1 2 2
5 5 3 6 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000024296141019989337" id="id00264142699233194" class="input-output-copier">Copy</div></div><pre id="id000024296141019989337">3
</pre></div></div></div>