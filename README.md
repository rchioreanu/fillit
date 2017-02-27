# fillit
Resolving a tetriminos puzzle @ 42

Trace: 

= Host-specific information ====================================================
$> hostname; uname -msr
e1r12p10.42.fr
Darwin 15.6.0 x86_64
$> date
Thu Jan  5 17:41:42 CET 2017
$> gcc --version
	Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 8.0.0 (clang-800.0.42.1)
	Target: x86_64-apple-darwin15.6.0
	Thread model: posix
	InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
	$> clang --version
Apple LLVM version 8.0.0 (clang-800.0.42.1)
	Target: x86_64-apple-darwin15.6.0
	Thread model: posix
	InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin

	= User files collection ========================================================
	Collecting user files from Vogsphere
	Repository URL: intra/2016/activities/fillit/rchiorea

	= Git history ==================================================================
	$> git -C /var/folders/7z/8wwxqymn41b63g4y03gf0rmr0000gq/T/tmpi0_H2b/user log --pretty='%H - %an, %ad : %s'
	cff84d773e46633ec60bf23a1547ab599e7de67f - Rares CHIOREANU, Thu Jan 5 17:30:22 2017 +0200 : fillit

	= Collected files ==========================================
	$> ls -lAR /var/folders/7z/8wwxqymn41b63g4y03gf0rmr0000gq/T/tmpi0_H2b/user
	total 48
	-rw-r--r--   1 deepthought  deepthought  6148 Jan  5 17:41 .DS_Store
	-rw-r--r--   1 deepthought  deepthought  4096 Jan  5 17:41 ._.DS_Store
	-rw-r--r--   1 deepthought  deepthought  4096 Jan  5 17:41 ._Makefile
	-rw-r--r--   1 deepthought  deepthought  1280 Jan  5 17:41 Makefile
	-rw-r--r--   1 deepthought  deepthought  3788 Jan  5 17:41 __GIT_HISTORY
	drwxr-xr-x   4 deepthought  deepthought   136 Jan  5 17:41 includes
	drwxr-xr-x  64 deepthought  deepthought  2176 Jan  5 17:41 libft
	drwxr-xr-x  14 deepthought  deepthought   476 Jan  5 17:41 srcs

	/var/folders/7z/8wwxqymn41b63g4y03gf0rmr0000gq/T/tmpi0_H2b/user/includes:
	total 16
	-rw-r--r--  1 deepthought  deepthought  4096 Jan  5 17:41 ._fillit.h
	-rw-r--r--  1 deepthought  deepthought  1955 Jan  5 17:41 fillit.h

	/var/folders/7z/8wwxqymn41b63g4y03gf0rmr0000gq/T/tmpi0_H2b/user/libft:
	total 504
	-rw-r--r--  1 deepthought  deepthought  6148 Jan  5 17:41 .DS_Store
	-rw-r--r--  1 deepthought  deepthought  4096 Jan  5 17:41 ._.DS_Store
	-rw-r--r--  1 deepthought  deepthought  1870 Jan  5 17:41 Makefile
	-rw-r--r--  1 deepthought  deepthought  1237 Jan  5 17:41 ft_atoi.c
	-rw-r--r--  1 deepthought  deepthought  1064 Jan  5 17:41 ft_bzero.c
	-rw-r--r--  1 deepthought  deepthought  1056 Jan  5 17:41 ft_isalnum.c
	-rw-r--r--  1 deepthought  deepthought  1020 Jan  5 17:41 ft_isalpha.c
	-rw-r--r--  1 deepthought  deepthought   997 Jan  5 17:41 ft_isascii.c
	-rw-r--r--  1 deepthought  deepthought   999 Jan  5 17:41 ft_isdigit.c
	-rw-r--r--  1 deepthought  deepthought   997 Jan  5 17:41 ft_isprint.c
	-rw-r--r--  1 deepthought  deepthought  1863 Jan  5 17:41 ft_itoa.c
	-rw-r--r--  1 deepthought  deepthought  1016 Jan  5 17:41 ft_lstadd.c
	-rw-r--r--  1 deepthought  deepthought  1123 Jan  5 17:41 ft_lstdel.c
	-rw-r--r--  1 deepthought  deepthought  1054 Jan  5 17:41 ft_lstdelone.c
	-rw-r--r--  1 deepthought  deepthought  1026 Jan  5 17:41 ft_lstiter.c
	-rw-r--r--  1 deepthought  deepthought  1292 Jan  5 17:41 ft_lstmap.c
	-rw-r--r--  1 deepthought  deepthought  1359 Jan  5 17:41 ft_lstnew.c
	-rw-r--r--  1 deepthought  deepthought  1080 Jan  5 17:41 ft_memalloc.c
	-rw-r--r--  1 deepthought  deepthought  1263 Jan  5 17:41 ft_memccpy.c
	-rw-r--r--  1 deepthought  deepthought  1126 Jan  5 17:41 ft_memchr.c
	-rw-r--r--  1 deepthought  deepthought  1229 Jan  5 17:41 ft_memcmp.c
	-rw-r--r--  1 deepthought  deepthought  1163 Jan  5 17:41 ft_memcpy.c
	-rw-r--r--  1 deepthought  deepthought   964 Jan  5 17:41 ft_memdel.c
	-rw-r--r--  1 deepthought  deepthought  1233 Jan  5 17:41 ft_memmove.c
	-rw-r--r--  1 deepthought  deepthought  1098 Jan  5 17:41 ft_memset.c
	-rw-r--r--  1 deepthought  deepthought   958 Jan  5 17:41 ft_putchar.c
	-rw-r--r--  1 deepthought  deepthought   970 Jan  5 17:41 ft_putchar_fd.c
	-rw-r--r--  1 deepthought  deepthought  1030 Jan  5 17:41 ft_putendl.c
	-rw-r--r--  1 deepthought  deepthought  1058 Jan  5 17:41 ft_putendl_fd.c
	-rw-r--r--  1 deepthought  deepthought   962 Jan  5 17:41 ft_putnbr.c
	-rw-r--r--  1 deepthought  deepthought   980 Jan  5 17:41 ft_putnbr_fd.c
	-rw-r--r--  1 deepthought  deepthought  1013 Jan  5 17:41 ft_putstr.c
	-rw-r--r--  1 deepthought  deepthought  1031 Jan  5 17:41 ft_putstr_fd.c
	-rw-r--r--  1 deepthought  deepthought  1113 Jan  5 17:41 ft_strcat.c
	-rw-r--r--  1 deepthought  deepthought  1110 Jan  5 17:41 ft_strchr.c
	-rw-r--r--  1 deepthought  deepthought  1002 Jan  5 17:41 ft_strclr.c
	-rw-r--r--  1 deepthought  deepthought  1154 Jan  5 17:41 ft_strcmp.c
	-rw-r--r--  1 deepthought  deepthought  1085 Jan  5 17:41 ft_strcpy.c
	-rw-r--r--  1 deepthought  deepthought   964 Jan  5 17:41 ft_strdel.c
	-rw-r--r--  1 deepthought  deepthought  1133 Jan  5 17:41 ft_strdup.c
	-rw-r--r--  1 deepthought  deepthought  1136 Jan  5 17:41 ft_strequ.c
	-rw-r--r--  1 deepthought  deepthought  1008 Jan  5 17:41 ft_striter.c
	-rw-r--r--  1 deepthought  deepthought  1065 Jan  5 17:41 ft_striteri.c
	-rw-r--r--  1 deepthought  deepthought  1291 Jan  5 17:41 ft_strjoin.c
	-rw-r--r--  1 deepthought  deepthought  1289 Jan  5 17:41 ft_strlcat.c
	-rw-r--r--  1 deepthought  deepthought  1010 Jan  5 17:41 ft_strlen.c
	-rw-r--r--  1 deepthought  deepthought  1153 Jan  5 17:41 ft_strmap.c
	-rw-r--r--  1 deepthought  deepthought  1179 Jan  5 17:41 ft_strmapi.c
	-rw-r--r--  1 deepthought  deepthought  1133 Jan  5 17:41 ft_strncat.c
	-rw-r--r--  1 deepthought  deepthought  1222 Jan  5 17:41 ft_strncmp.c
	-rw-r--r--  1 deepthought  deepthought  1112 Jan  5 17:41 ft_strncpy.c
	-rw-r--r--  1 deepthought  deepthought  1109 Jan  5 17:41 ft_strnequ.c
	-rw-r--r--  1 deepthought  deepthought  1091 Jan  5 17:41 ft_strnew.c
	-rw-r--r--  1 deepthought  deepthought  1238 Jan  5 17:41 ft_strnstr.c
	-rw-r--r--  1 deepthought  deepthought  1098 Jan  5 17:41 ft_strrchr.c
	-rw-r--r--  1 deepthought  deepthought  1763 Jan  5 17:41 ft_strsplit.c
	-rw-r--r--  1 deepthought  deepthought  1285 Jan  5 17:41 ft_strstr.c
	-rw-r--r--  1 deepthought  deepthought  1165 Jan  5 17:41 ft_strsub.c
	-rw-r--r--  1 deepthought  deepthought  1293 Jan  5 17:41 ft_strtrim.c
	-rw-r--r--  1 deepthought  deepthought  1016 Jan  5 17:41 ft_tolower.c
	-rw-r--r--  1 deepthought  deepthought  1023 Jan  5 17:41 ft_toupper.c
	-rw-r--r--  1 deepthought  deepthought  3705 Jan  5 17:41 libft.h

	/var/folders/7z/8wwxqymn41b63g4y03gf0rmr0000gq/T/tmpi0_H2b/user/srcs:
	total 104
	-rw-r--r--  1 deepthought  deepthought  6148 Jan  5 17:41 .DS_Store
	-rw-r--r--  1 deepthought  deepthought  4096 Jan  5 17:41 ._.DS_Store
	-rw-r--r--  1 deepthought  deepthought  4096 Jan  5 17:41 ._aff_matrix.c
	-rw-r--r--  1 deepthought  deepthought  4096 Jan  5 17:41 ._checker.c
	-rw-r--r--  1 deepthought  deepthought  4096 Jan  5 17:41 ._fillit.c
	-rw-r--r--  1 deepthought  deepthought  4096 Jan  5 17:41 ._main.c
	-rw-r--r--  1 deepthought  deepthought  4096 Jan  5 17:41 ._utility.c
	-rw-r--r--  1 deepthought  deepthought  2429 Jan  5 17:41 aff_matrix.c
	-rw-r--r--  1 deepthought  deepthought  2874 Jan  5 17:41 checker.c
	-rw-r--r--  1 deepthought  deepthought  1146 Jan  5 17:41 fillit.c
	-rw-r--r--  1 deepthought  deepthought  2362 Jan  5 17:41 main.c
	-rw-r--r--  1 deepthought  deepthought  1577 Jan  5 17:41 utility.c

	= error_tests ==================================================================
	$> make fclean && make && ls -la fillit
	/bin/rm -f *.o
	/bin/rm -f *.o
	/bin/rm -f libft.a libft.so
	gcc -c -Wall -Wextra -Werror ft_isalnum.c ft_isprint.c ft_memchr.c ft_memmove.c ft_putendl.c ft_putstr.c ft_strclr.c ft_strdup.c ft_strjoin.c ft_strmapi.c ft_strnequ.c ft_strstr.c ft_toupper.c ft_isalpha.c ft_itoa.c ft_memcmp.c ft_memset.c ft_putendl_fd.c ft_putstr_fd.c ft_strcmp.c ft_strequ.c ft_strlcat.c ft_strncat.c        ft_strnew.c ft_strsub.c ft_atoi.c ft_isascii.c  ft_memalloc.c ft_memcpy.c ft_putchar.c ft_putnbr.c ft_strcat.c ft_strcpy.c ft_striter.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strtrim.c ft_bzero.c ft_isdigit.c ft_memccpy.c ft_memdel.c ft_putchar_fd.c ft_putnbr_fd.c ft_strchr.c ft_strdel.c ft_striteri.c ft_strmap.c ft_strncpy.c ft_strrchr.c ft_tolower.c ft_lstnew.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstmap.c ft_lstiter.c ft_strsplit.c
	ar rc libft.a ft_isalnum.o ft_isprint.o ft_memchr.o ft_memmove.o ft_putendl.o ft_putstr.o ft_strclr.o ft_strdup.o ft_strjoin.o ft_strmapi.o ft_strnequ.o ft_strstr.o ft_toupper.o ft_isalpha.o ft_itoa.o ft_memcmp.o ft_memset.o ft_putendl_fd.o ft_putstr_fd.o ft_strcmp.o ft_strequ.o ft_strlcat.o ft_strncat.o ft_strnew.o ft_strsub.o ft_atoi.o ft_isascii.o ft_memalloc.o ft_memcpy.o ft_putchar.o ft_putnbr.o ft_strcat.o ft_strcpy.o ft_striter.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strtrim.o ft_bzero.o ft_isdigit.o ft_memccpy.o ft_memdel.o ft_putchar_fd.o ft_putnbr_fd.o ft_strchr.o ft_strdel.o ft_striteri.o ft_strmap.o ft_strncpy.o ft_strrchr.o ft_tolower.o ft_lstnew.o ft_lstadd.o ft_lstdel.o ft_lstdelone.o ft_lstmap.o ft_lstiter.o ft_strsplit.o
	ranlib libft.a
	-rwxr-xr-x  1 deepthought  deepthought  13944 Jan  5 17:41 fillit

	= Test 1 ===================================================
	$> ./2rvnnzf8kt3vhjgbrzsu0m7q test1.prm
	$> diff -U 3 user_output_test1 test1.output | cat -e

	Diff OK :D
	= Test 2 ===================================================
	$> ./lz4x1u9asm1qkb1ik1wi6ltt test2.prm
	$> diff -U 3 user_output_test2 test2.output | cat -e

	Diff OK :D
	= Test 3 ===================================================
	$> ./jq2e8vs7450fwplc08szki37 test3.prm
	$> diff -U 3 user_output_test3 test3.output | cat -e

	Diff OK :D
	= Test 4 ===================================================
	$> ./zr8k5stwxe4soel3n06ixho1 test4.prm
	$> diff -U 3 user_output_test4 test4.output | cat -e

	Diff OK :D
	= Test 5 ===================================================
	$> ./97rgyfdtzdr1hgdu3difos18 test5.prm
	$> diff -U 3 user_output_test5 test5.output | cat -e

	Diff OK :D
	= Test 6 ===================================================
	$> ./0l90ffesqhbzc0sbbam5qy99 test6.prm
	$> diff -U 3 user_output_test6 test6.output | cat -e

	Diff OK :D
	= Test 7 ===================================================
	$> ./ufy71b9e06hs9ms454omkjyg test7.prm
	$> diff -U 3 user_output_test7 test7.output | cat -e

	Diff OK :D
	= Test 8 ===================================================
	$> ./hnlb1qfy8pf7gqqmeethcell test8.prm
	$> diff -U 3 user_output_test8 test8.output | cat -e

	Diff OK :D
	= Test 9 ===================================================
	$> ./j755vuibfeu3e13p7v5rxutx test9.prm
	$> diff -U 3 user_output_test9 test9.output | cat -e

	Diff OK :D
	= Test 10 ==================================================
	$> ./ynq24ztqh69wjffddbslldau test10.prm
	$> diff -U 3 user_output_test10 test10.output | cat -e

	Diff OK :D
	All tests OK
	Grade: 20

	= basic_tests ==================================================================
	$> make fclean && make && ls -la fillit
	/bin/rm -f *.o
	/bin/rm -f *.o
	/bin/rm -f libft.a libft.so
	gcc -c -Wall -Wextra -Werror ft_isalnum.c ft_isprint.c ft_memchr.c ft_memmove.c ft_putendl.c ft_putstr.c ft_strclr.c ft_strdup.c ft_strjoin.c ft_strmapi.c ft_strnequ.c ft_strstr.c ft_toupper.c ft_isalpha.c ft_itoa.c ft_memcmp.c ft_memset.c ft_putendl_fd.c ft_putstr_fd.c ft_strcmp.c ft_strequ.c ft_strlcat.c ft_strncat.c        ft_strnew.c ft_strsub.c ft_atoi.c ft_isascii.c  ft_memalloc.c ft_memcpy.c ft_putchar.c ft_putnbr.c ft_strcat.c ft_strcpy.c ft_striter.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strtrim.c ft_bzero.c ft_isdigit.c ft_memccpy.c ft_memdel.c ft_putchar_fd.c ft_putnbr_fd.c ft_strchr.c ft_strdel.c ft_striteri.c ft_strmap.c ft_strncpy.c ft_strrchr.c ft_tolower.c ft_lstnew.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstmap.c ft_lstiter.c ft_strsplit.c
	ar rc libft.a ft_isalnum.o ft_isprint.o ft_memchr.o ft_memmove.o ft_putendl.o ft_putstr.o ft_strclr.o ft_strdup.o ft_strjoin.o ft_strmapi.o ft_strnequ.o ft_strstr.o ft_toupper.o ft_isalpha.o ft_itoa.o ft_memcmp.o ft_memset.o ft_putendl_fd.o ft_putstr_fd.o ft_strcmp.o ft_strequ.o ft_strlcat.o ft_strncat.o ft_strnew.o ft_strsub.o ft_atoi.o ft_isascii.o ft_memalloc.o ft_memcpy.o ft_putchar.o ft_putnbr.o ft_strcat.o ft_strcpy.o ft_striter.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strtrim.o ft_bzero.o ft_isdigit.o ft_memccpy.o ft_memdel.o ft_putchar_fd.o ft_putnbr_fd.o ft_strchr.o ft_strdel.o ft_striteri.o ft_strmap.o ft_strncpy.o ft_strrchr.o ft_tolower.o ft_lstnew.o ft_lstadd.o ft_lstdel.o ft_lstdelone.o ft_lstmap.o ft_lstiter.o ft_strsplit.o
	ranlib libft.a
	-rwxr-xr-x  1 deepthought  deepthought  13944 Jan  5 17:42 fillit

	= Test 1 ===================================================
	$> ./l0z3fi4matv2e7ypiagb16tx test1.prm
	$> diff -U 3 user_output_test1 test1.output | cat -e

	Diff OK :D
	= Test 2 ===================================================
	$> ./k0axyst7bq606f81ab0bqavg test2.prm
	$> diff -U 3 user_output_test2 test2.output | cat -e

	Diff OK :D
	= Test 3 ===================================================
	$> ./4iimk6qs2l59e7ia9lygl0dm test3.prm
	$> diff -U 3 user_output_test3 test3.output | cat -e

	Diff OK :D
	= Test 4 ===================================================
	$> ./1z19vowjubpyk0ek1wrfqifa test4.prm
	$> diff -U 3 user_output_test4 test4.output | cat -e

	Diff OK :D
	= Test 5 ===================================================
	$> ./h7ioybs4sd0thh8zpc1lsi8j test5.prm
	$> diff -U 3 user_output_test5 test5.output | cat -e

	Diff OK :D
	= Test 6 ===================================================
	$> ./mq5ys31v2pzd4qol73y2iknc test6.prm
	$> diff -U 3 user_output_test6 test6.output | cat -e

	Diff OK :D
	= Test 7 ===================================================
	$> ./84qfasf7j7ha94tkvs9v48ea test7.prm
	$> diff -U 3 user_output_test7 test7.output | cat -e

	Diff OK :D
	All tests OK
	Grade: 80

	= Final grade: 100 =============================================================
