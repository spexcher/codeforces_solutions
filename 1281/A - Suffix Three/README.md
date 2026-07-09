<h2><a href="https://codeforces.com/contest/1281/problem/A" target="_blank" rel="noopener noreferrer">1281A — Suffix Three</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1281A](https://codeforces.com/contest/1281/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Suffix Three</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>We just discovered a new data structure in our research group: a <span class="tex-font-style-bf">suffix three</span>!</p><p>It's very useful for natural language processing. Given three languages and three suffixes, a suffix three can determine which language a sentence is written in.</p><p>It's super simple, 100% accurate, and doesn't involve advanced machine learning algorithms.</p><p>Let us tell you how it works.</p><ul> <li> If a sentence ends with "<span class="tex-font-style-tt">po</span>" the language is Filipino. </li><li> If a sentence ends with "<span class="tex-font-style-tt">desu</span>" or "<span class="tex-font-style-tt">masu</span>" the language is Japanese. </li><li> If a sentence ends with "<span class="tex-font-style-tt">mnida</span>" the language is Korean. </li></ul><p>Given this, we need you to implement a suffix three that can differentiate Filipino, Japanese, and Korean.</p><p>Oh, did I say three suffixes? I meant four.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains a single integer $$$t$$$ ($$$1 \leq t \leq 30$$$) denoting the number of test cases. The next lines contain descriptions of the test cases. </p><p>Each test case consists of a single line containing a single string denoting the sentence. Spaces are represented as underscores (the symbol "<span class="tex-font-style-tt">_</span>") for ease of reading. The sentence has at least $$$1$$$ and at most $$$1000$$$ characters, and consists only of lowercase English letters and underscores. The sentence has no leading or trailing underscores and no two consecutive underscores. It is guaranteed that the sentence ends with one of the four suffixes mentioned above.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single line containing either "<span class="tex-font-style-tt">FILIPINO</span>", "<span class="tex-font-style-tt">JAPANESE</span>", or "<span class="tex-font-style-tt">KOREAN</span>" (all in uppercase, without quotes), depending on the detected language.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0022599947202083237" id="id0021894864666602765" class="input-output-copier">Copy</div></div><pre id="id0022599947202083237">8
kamusta_po
genki_desu
ohayou_gozaimasu
annyeong_hashimnida
hajime_no_ippo
bensamu_no_sentou_houhou_ga_okama_kenpo
ang_halaman_doon_ay_sarisari_singkamasu
si_roy_mustang_ay_namamasu
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009514961684624847" id="id003523053553734322" class="input-output-copier">Copy</div></div><pre id="id009514961684624847">FILIPINO
JAPANESE
JAPANESE
KOREAN
FILIPINO
FILIPINO
JAPANESE
JAPANESE
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first sentence ends with "<span class="tex-font-style-tt">po</span>", so it is written in Filipino.</p><p>The second and third sentences end with "<span class="tex-font-style-tt">desu</span>" and "<span class="tex-font-style-tt">masu</span>", so they are written in Japanese.</p><p>The fourth sentence ends with "<span class="tex-font-style-tt">mnida</span>", so it is written in Korean.</p></div>