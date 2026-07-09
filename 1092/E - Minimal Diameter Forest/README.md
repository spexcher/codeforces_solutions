<h2><a href="https://codeforces.com/contest/1092/problem/E" target="_blank" rel="noopener noreferrer">1092E — Minimal Diameter Forest</a></h2>

| | |
|---|---|
| **Difficulty** | 2000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1092E](https://codeforces.com/contest/1092/problem/E) |

## Topics
`constructive algorithms` `dfs and similar` `greedy` `trees`

---

## Problem Statement

<div class="header"><div class="title">E. Minimal Diameter Forest</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a forest — an undirected graph with $$$n$$$ vertices such that each its connected component is a tree.</p><p>The diameter (aka "longest shortest path") of a connected undirected graph is the maximum number of edges in the <span class="tex-font-style-bf">shortest</span> path between any pair of its vertices.</p><p>You task is to add some edges (possibly zero) to the graph so that it becomes a tree and the diameter of the tree is minimal possible.</p><p>If there are multiple correct answers, print any of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n \le 1000$$$, $$$0 \le m \le n - 1$$$) — the number of vertices of the graph and the number of edges, respectively.</p><p>Each of the next $$$m$$$ lines contains two integers $$$v$$$ and $$$u$$$ ($$$1 \le v, u \le n$$$, $$$v \ne u$$$) — the descriptions of the edges.</p><p>It is guaranteed that the given graph is a forest.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line print the diameter of the resulting tree.</p><p>Each of the next $$$(n - 1) - m$$$ lines should contain two integers $$$v$$$ and $$$u$$$ ($$$1 \le v, u \le n$$$, $$$v \ne u$$$) — the descriptions of the <span class="tex-font-style-bf">added edges</span>.</p><p>The resulting graph should be a tree and its diameter should be minimal possible.</p><p>For $$$m = n - 1$$$ no edges are added, thus the output consists of a single integer — diameter of the given tree.</p><p>If there are multiple correct answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0014124470177348392" id="id00018975301429096092" class="input-output-copier">Copy</div></div><pre id="id0014124470177348392">4 2
1 2
2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00562955272505226" id="id0017860505712826724" class="input-output-copier">Copy</div></div><pre id="id00562955272505226">2
4 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007182172953962851" id="id003544650499888261" class="input-output-copier">Copy</div></div><pre id="id007182172953962851">2 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0006753489362353549" id="id00348332733501418" class="input-output-copier">Copy</div></div><pre id="id0006753489362353549">1
1 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0002985274442003738" id="id00987094550676071" class="input-output-copier">Copy</div></div><pre id="id0002985274442003738">3 2
1 3
2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009473931312968591" id="id007120764335794775" class="input-output-copier">Copy</div></div><pre id="id009473931312968591">2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example adding edges (1, 4) or (3, 4) will lead to a total diameter of 3. Adding edge (2, 4), however, will make it 2.</p><p>Edge (1, 2) is the only option you have for the second example. The diameter is 1.</p><p>You can't add any edges in the third example. The diameter is already 2.</p></div>