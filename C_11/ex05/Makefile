NAME		= do-op

SRCS_NAME	=	do_op.c\
				ft_op.c\
				ft_ft.c

OBJS_NAME	= $(SRCS_NAME:.c=.o)
SRCS_PATH 	= .
OBJS_PATH	= .
SRCS		= $(addprefix $(SRCS_PATH)/,$(SRCS_NAME))
OBJS		= $(addprefix $(OBJS_PATH)/,$(OBJS_NAME))

CC			= gcc
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror -I./includes

all :	$(NAME)

$(NAME) :	$(OBJS)	
		$(CC) -o $(NAME) $(OBJS)

$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.c
	    $(CC) $(CFLAGS) -o $@ -c $<

clean :
				$(RM) $(OBJS)

fclean :	clean
				$(RM) $(NAME)

re :		fclean all
