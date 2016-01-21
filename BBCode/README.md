## Custom BBCodes

<br />

----------------------------------------------------------------
----------------------------------------------------------------

### Spoiler (black backgroung + black text, revealed on click)

BBCode usage:
```
[blackspoiler]{TEXT}[/blackspoiler]
```

HTML replacement:
```html
<span style="background-color: #000000; color: #000000" onclick="this.style.color = (this.style.color == 'rgb(0, 0, 0)' ? '#FFFFFF': '#000000');">{TEXT}</span>
```

Help line:
```
Text hidden with black color, click to reveal
```

----------------------------------------------------------------
----------------------------------------------------------------

### YouTube video

BBCode usage:
```
[youtube]{SIMPLETEXT}[/youtube]
```

HTML replacement:
```html
<iframe width="400" height="300" src="https://www.youtube.com/embed/{SIMPLETEXT}?autoplay=0" allowfullscreen></iframe>
```

Help line:
```
[youtube]<video ID>[/youtube]
```