# ╔═════════════════════════════════════════╦═════════════════════════════╗
# ║ Makefile                                ║       Maximum Tension       ║
# ╠═════════════════════════════════════════╬═════════════════════════════╣
# ║                                         │      ▄▄▄            ▄▄▄     ║
# ║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
# ║ maximum-tension.com                     │  ░░                      ░░ ║
# ║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
# ║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
# ║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
# ║ ├───┴─────┬────────────┤ │ C 2022/11/15 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
# ║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
# ║ ╚─────────┴────────────╝ │ U 2023/01/27 │       ░░░░▒░░▒░░░▒░░░░      ║
# ╚══════════════════════════╩══════════════╩═════════════════════════════╝

NAME		=	C_MT.a
MAIN		=	MAIN.c
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
SRC			=	$(shell find . -type f ! -name "$(MAIN)" -name "*.c")
OBJ			=	$(SRC:.c=.o)
N_FILES		:=	0
FILES_N		:=	0

define progress_bar
	$(eval PBAR := $(shell echo $(1)*100/$(2)*100/100 | bc))
	$(eval PDONE := $(shell echo $(PBAR)*4/10 | bc))
	$(eval PLEFT := $(shell echo 40-$(PDONE) | bc))
	$(eval PSEQ := $(shell seq 0 1 $(PLEFT) 2>/dev/null))
	$(eval PEMPTY := $(shell if [ "$(1)" -ne "$(2)" ]; then printf "░%.0s" $(PSEQ); fi))
	$(eval PFILL := $(shell printf "█%.0s" $(shell seq 1 $(PDONE))))
	@printf "\r $(shell tput setaf 11)[$(shell tput setaf 14)$(PFILL)$(PEMPTY)$(shell tput setaf 11)] $(PBAR)%% - $(shell tput setaf 10)[$(1)/$(2)]$(shell tput setaf 11) [$(shell tput setaf 13)$(3)$(shell tput setaf 11)]   "
endef

a: all
all: $(NAME)

%.o: %.c
	$(eval FILES_N := $(shell echo $(FILES_N)+1 | bc))
	$(call pörogress_bar,$(FILES_N),$(N_FILES),$<)
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): files_n_calculator $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@echo " $(shell tput setab 2)$(shell tput setaf 15)$(NAME) Done !$(shell tput sgr0)"
	@echo ""

c: clean
clear: clear
clean:
	@rm -f $(OBJ)
	@echo ""
	@echo " $(shell tput setaf 15)$(shell tput setab 1)Clearing Objective Files$(shell tput sgr0)"
	@echo ""

fc: fclean
fclear: fclean
fclean: clean
	@rm -f $(NAME)
	@echo ""
	@echo " $(shell tput setab 1)$(shell tput setaf 11)$(NAME)$(shell tput setaf 15) and objective files are deleted$(shell tput sgr0)"
	@echo ""

files_n_calculator:
	@echo "$(shell tput sgr0)"
	@echo ""
	$(eval FILES_N := 0)
	$(eval N_FILES := $(shell echo $(SRC) | wc -w | sed "s/ //g" | bc))

re: fclean all

.PHONY: all a clean clear c fclean fclear fc re