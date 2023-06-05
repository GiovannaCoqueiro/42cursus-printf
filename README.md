<h1 align=center>
	<b>42cursus</b>
</h1>

<div align=center>
	<h2>
		<i>ft_printf</i>
	</h2>
	<img src="https://github.com/GiovannaCoqueiro/42cursus-printf/assets/115947494/03c0a740-961d-4faa-85b1-5ad052f3acf9" alt=ft_printf badge/>
	<p align=center>
    		Inside this repository, you can see all the code that has been created for the ft_printf project, including the mandatory part and part of the bonus part. These files must be compiled into a program named libft.a using a Makefile.
	</p>
</div>

---

<div align=center>
	<h2>
		Final score
	</h2>
	<img src= alt=ft_printf grade/>
</div>

---

<h3 align=left>
    Mandatory
</h3>
<p>
    Re-code some conversions of the original printf function.
</p>

| Conversion | Description |
| :---: | :---: |
| <b>c</b> | Displays a character |
| <b>s</b> | Displays a string |
| <b>p</b> | Displays a pointer in hexadecimal base |
| <b>d</b> | Displays a number in decimal base |
| <b>i</b> | Displays a integer |
| <b>u</b> | Displays a unsigned int |
| <b>x</b> | Displays a numer in a lowercase hexadecimal base |
| <b>X</b> | Displays a number in a uppercase hexadecimal base |
| <b>%</b> | Displays the '%' character |

<h3 align=left>
    Bonus
</h3>
<p>
    Re-code some flags of the original printf function.
</p>

| Conversion | Description | Conversions used |
| :---: | :---: | :---: |
| <b>#</b> | Displays '0x' or '0X' in front of the conversion | x and X |
| <b>' '</b> | Displays a space (' ') in the front of positive number | d and i |
| <b>+</b> | Displays a plus sign in the front of positive number | d and i |

---

<h2>
    Instructions to use
</h2>
Clone this repository in you local computer using a terminal:
<ul>
	<li>$> git clone https:https://github.com/GiovannaCoqueiro/42cursus-printf [repository_local]</li>
</ul>
		
After cloning the project in your local reposiory you can run some commands you can find in Makefile:
<ul>
	<li>$> <b>make all:</b> or just <b>make</b> compiles the project</li>
	<li>$> <b>make bonus:</b> compiles the project</li>
	<li>$> <b>make clean:</b> deletes the object files created during compilation</li>
	<li>$> <b>make fclean:</b> executes the <b>clean</b> command and also deletes the libftprintf.a</li>
	<li>$> <b>make re:</b> executes the <b>fclean</b> command followed by the <b>all</b> command</li>
</ul>
To use ft_printf in your projects you need to include its header:
<ul>
	<li>#include "ft_printf.h"</li>
</ul>

To compile your projects that use libft you need to use the flags:
<ul>
	<li>$> ... -lftprintf -L [path/to/libftprintf.a] -I [path/to/ft_printf.h]</li>
</ul>
