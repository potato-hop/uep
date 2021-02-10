set nocompatible 
set lazyredraw
set autochdir
set clipboard=unnamedplus
set mouse=a
filetype off                  " required
set laststatus=2
set background=dark
syntax on
let g:airline#extensions#whitespace#checks = [ 'indent', 'long' ]
let g:airline_powerline_fonts=1
let g:airline#extensions#tabline#enabled = 1
let g:airline#extensions#tabline#show_tab_type = 0
let g:airline#extensions#whitespace#enabled = 0
"let g:airline#extensions#tabline#show_close_button = 0
let g:airline#extensions#tabline#show_buffers = 0
let g:airline#extensions#tabline#tab_min_count = 2
"filetype indent plugin on
"au BufRead,BufNewFile *.tex	set nocindent
"au BufRead,BufNewFile *.tex	set noautoindent
"au BufRead,BufNewFile *.py	set nocindent
au BufRead,BufNewFile *.cpp	set cindent
au BufRead,BufNewFile *.xtex set filetype=tex
set spelllang=ru
"nmap <F7> :syntax off!<CR> :set spell!<CR>
"imap <F7> <Esc>:set spell!<CR>
"vmap <F7> <Esc>:set spell!<CR>
   :map <F7> :if exists("g:syntax_on") <Bar>
	\   syntax off <Bar>
	\	set spell! <Bar>
	\ else <Bar>
	\   syntax enable <Bar>
	\	set spell! <Bar>
	\ endif <CR>

"au BufRead,BufNewFile *.tex	colors blue
syntax spell toplevel
colors night 
set t_Co=256
set number 
set nomodeline
set tabstop=4
set shiftwidth=4
set showcmd
set showmode
set wildmenu
set guicursor+=a:blinkon0
set ttyfast
set cursorline
set ruler
"set tw=80
"set foldmethod=indent
"set relativenumber
nnoremap ; :
set makeprg=make
map j gj
map k gk
map <F4> :NERDTreeToggle<CR>
"map <S-F9> :!wine ~/prj/win/mingw/bin/g++.exe -I/home/sav/prj/canvas/trunk -I/home/sav/prj/canvas/trunk/other % -lgdi32 -lws2_32 && wine ./a.exe<CR>
"map <F9> :!clang++ % && ./a.out<CR>
"map <F7> :!python %<CR>
"map <F6> :!gnuplot % && gv %:r.eps &<CR>
map <F5> :call RunExt()<CR>
map <F6> :!make run<CR>
set guioptions-=m  "remove menu bar
set guioptions-=T  "remove toolbar
set guioptions-=r  "remove right-hand scroll bar
"#map <F8> :!pdflatex % && xpdf -z page %:r.pdf &<CR>
"map <F8> :!pdflatex % && xpdf -cont %:r.pdf &<CR>
:command C call RunExt()
:cabbrev c C

if has("gui_running")
	if has("gui_gtk2")
		set guifont=Courier\ New\ 12
	elseif has("gui_win32")
		set guifont=Consolas:h11:cANSI
	endif
endif
autocmd! BufRead,BufNewFile,BufEnter *.{c,cpp,h,hpp,cxx,hxx,cc,javascript} call CSyntaxAfter()
function RunExt()
"	if &modified == 1
"		write
"	endif
	let ext = expand("%:e")
	if ext == "tex"
"		!pdflatex -shell-escape % && (evince %:r.pdf &)
		:silent !pdflatex -shell-escape % 
		:silent !pdflatex -shell-escape % 
		:silent !rm %:r.log %:r.toc %:r.aux %:r.out
		!(evince %:r.pdf &)
	elseif ext == "cpp"
		!clang++ -g -std=c++11 -lpthread -Wall -lglut -lGL -lGLU % -I. -o %:r && ./%:r
	elseif ext == "c"
		!clang -g -lm % -I. -o %:r && ./%:r
	elseif ext == "xtex"
		!xelatex -8bit --shell-escape % && rm %:r.log && mupdf -r 85 %:r.pdf 
	elseif ext == "py"
		!python % 
	endif
endfunction
