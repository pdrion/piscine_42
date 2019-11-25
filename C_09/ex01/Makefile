NAME		=	libft.a

SRCS_NAME	=	ft_putchar.c\
				ft_swap.c\
				ft_putstr.c\
				ft_strlen.c\
				ft_strcmp.c

OBJS_NAME	= $(SRCS_NAME:.c=.o)
SRCS_PATH	= ./srcs
OBJS_PATH	= ./srcs
SRCS		= $(addprefix $(SRCS_PATH)/,$(SRCS_NAME))
OBJS		= $(addprefix $(OBJS_PATH)/,$(OBJS_NAME))

CC			= gcc
RM			= rm -rf
CFLAGS		= -Wall -Werror -Wextra -I./includes

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			ar rc $(NAME) $(OBJS)

$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.c
			$(CC) $(CFLAGS) -o $@ -c $<

clean	:
			$(RM) $(OBJS)

fclean :	clean
			$(RM) $(NAME)

re	:		fclean all