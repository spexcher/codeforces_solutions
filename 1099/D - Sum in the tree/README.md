<h2><a href="https://codeforces.com/contest/1099/problem/D" target="_blank" rel="noopener noreferrer">1099D — Sum in the tree</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1099D](https://codeforces.com/contest/1099/problem/D) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">D. Sum in the tree</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Mitya has a rooted tree with $$$n$$$ vertices indexed from $$$1$$$ to $$$n$$$, where the root has index $$$1$$$. Each vertex $$$v$$$ initially had an integer number $$$a_v \ge 0$$$ written on it. For every vertex $$$v$$$ Mitya has computed $$$s_v$$$: the sum of all values written on the vertices on the path from vertex $$$v$$$ to the root, as well as $$$h_v$$$ — the depth of vertex $$$v$$$, which denotes the number of vertices on the path from vertex $$$v$$$ to the root. Clearly, $$$s_1=a_1$$$ and $$$h_1=1$$$.</p><p>Then Mitya erased all numbers $$$a_v$$$, and by accident he also erased all values $$$s_v$$$ for vertices with even depth (vertices with even $$$h_v$$$). Your task is to restore the values $$$a_v$$$ for every vertex, or determine that Mitya made a mistake. In case there are multiple ways to restore the values, you're required to find one which minimizes the total sum of values $$$a_v$$$ for all vertices in the tree.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ — the number of vertices in the tree ($$$2 \le n \le 10^5$$$). The following line contains integers $$$p_2$$$, $$$p_3$$$, ... $$$p_n$$$, where $$$p_i$$$ stands for the parent of vertex with index $$$i$$$ in the tree ($$$1 \le p_i  \lt  i$$$). The last line contains integer values $$$s_1$$$, $$$s_2$$$, ..., $$$s_n$$$ ($$$-1 \le s_v \le 10^9$$$), where erased values are replaced by $$$-1$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output one integer — the minimum total sum of all values $$$a_v$$$ in the original tree, or $$$-1$$$ if such tree does not exist.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006265970959408641" id="id009148374748509117" class="input-output-copier">Copy</div></div><pre id="id006265970959408641">5
1 1 1 1
1 -1 -1 -1 -1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00796628695319464" id="id009220520038843592" class="input-output-copier">Copy</div></div><pre id="id00796628695319464">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0049736262284358534" id="id00703932236317661" class="input-output-copier">Copy</div></div><pre id="id0049736262284358534">5
1 2 3 1
1 -1 2 -1 -1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0016285471543949304" id="id009849688871694027" class="input-output-copier">Copy</div></div><pre id="id0016285471543949304">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004213539972992171" id="id00643357699340225" class="input-output-copier">Copy</div></div><pre id="id004213539972992171">3
1 2
2 -1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006083514117502352" id="id0039019962901969585" class="input-output-copier">Copy</div></div><pre id="id006083514117502352">-1
</pre></div></div></div>