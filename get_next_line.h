#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/uio.h>
# include <sys/types.h>
# include <stdio.h>

int		is_new_line(char *s);
size_t	ft_strlen(const char *s);
char	*ft_strdup(char *src);
char	*ft_strdup(char *src);
char	*new_line(char *line);
char	*get_next_line(int fd);
char	*read_file(int fd, int *end);
char	*ft_strjoin(char *s1, char *s2);
char	*new_remain(char *line, char *remain);

#endif
