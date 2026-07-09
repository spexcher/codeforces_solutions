<h2><a href="https://codeforces.com/contest/1968/problem/E" target="_blank" rel="noopener noreferrer">1968E — Cells Arrangement</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1968E](https://codeforces.com/contest/1968/problem/E) |

## Topics
`constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">E. Cells Arrangement</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer $$$n$$$. You choose $$$n$$$ cells $$$(x_1,y_1), (x_2,y_2),\dots,(x_n,y_n)$$$ in the grid $$$n\times n$$$ where $$$1\le x_i\le n$$$ and $$$1\le y_i\le n$$$.</p><p>Let $$$\mathcal{H}$$$ be the set of <span class="tex-font-style-bf">distinct</span> Manhattan distances between any pair of cells. Your task is to maximize the size of $$$\mathcal{H}$$$. Examples of sets and their construction are given in the notes.</p><p><span class="tex-font-style-bf">If there exists more than one solution, you are allowed to output any.</span></p><p>Manhattan distance between cells $$$(x_1,y_1)$$$ and $$$(x_2,y_2)$$$ equals $$$|x_1-x_2|+|y_1-y_2|$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\le t\le 50$$$) — the number of test cases.</p><p>Each of the following $$$t$$$ lines contains a single integer $$$n$$$ ($$$2\le n\le 10^3$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$n$$$ points which maximize the size of $$$\mathcal{H}$$$. It is not necessary to output an empty line at the end of the answer for each test case.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008980525386004001" id="id008554277331324112" class="input-output-copier">Copy</div></div><pre id="id008980525386004001"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-odd test-example-line-3">4</div><div class="test-example-line test-example-line-even test-example-line-4">5</div><div class="test-example-line test-example-line-odd test-example-line-5">6</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007320470915252971" id="id009271973063387916" class="input-output-copier">Copy</div></div><pre id="id007320470915252971">1 1
1 2

2 1
2 3
3 1

1 1
1 3
4 3
4 4

1 1
1 3
1 4
2 1
5 5

1 4
1 5
1 6
5 2
5 5
6 1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first testcase we have $$$n=2$$$. One of the possible arrangements is: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/03eecb78664debf9ec268f502beb1ca5e348d803.png" style="max-width: 100.0%;max-height: 100.0%;">  <span class="tex-font-size-small">The arrangement with cells located in $$$(1,1)$$$ and $$$(1,2)$$$.</span> </center> In this case $$$\mathcal{H}=\{|1-1|+|1-1|,|1-1|+|2-2|,|1-1|+|1-2|\}=\{0,0,1\}=\{0,1\}$$$. Hence, the size of $$$\mathcal{H}$$$ is $$$2$$$. It can be shown that it is the greatest possible answer.<p>In the second testcase we have $$$n=3$$$. The optimal arrangement is: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/c02185695aac2091192ea631f8f1b8e61559e4ce.png" style="max-width: 100.0%;max-height: 100.0%;">  <span class="tex-font-size-small">The arrangement with cells located in $$$(2,1)$$$, $$$(2,3)$$$ and $$$(3,1)$$$.</span> </center><p>$$$\mathcal{H}$$$=$$$\{|2-2|+|1-1|,|2-2|+|3-3|,|3-3|+|1-1|,|2-2|+|1-3|,|2-3|+|1-1|,|2-3|+|3-1|\}$$$=$$$\{0,0,0,2,1,3\}$$$=$$$\{0,1,2,3\}$$$.</p><p>For $$$n=4$$$ a possible arrangement is: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/29bfd102a9d7ed7075ed49186ce9f06bd5de3429.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>For $$$n=5$$$ a possible arrangement is: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/66603347edbbf9bc52a66f5a78f74ac8b67dc7f0.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>For $$$n=6$$$ a possible arrangement is: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/d0a0c624a6ae4604b6c94150962e77cced7d724a.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div>