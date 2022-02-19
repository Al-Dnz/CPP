#ifndef HEADER_H
# define HEADER_H

# include <iostream>
# include <iomanip>
# include <string>
# include <ctype.h>
# include <cmath>
# include <cfloat>
# include <climits>

typedef struct	s_data
{
	char 		c;
	int			n;
	float		f;
	double		d;
}				t_data;

int			count_decimal(std::string str);
void		displayer(std::string str, int i, float f, double d, char c = 0);
void		inf_case_displayer(std::string str, int i, float f, double d, char c = 0);
void		nan_case_displayer(void);

int			is_full_digit(std::string str, char exception1 = 0, char exception2 = 0);
int			char_occurence(std::string str, char c);
int			find_index_type(std::string str);
std::string clean_str(std::string &str);

bool		integer_overflow(std::string str);
void		int_case(std::string str, t_data *data, char **argv);
void		double_case(std::string str, t_data *data, char **argv);
void		float_case(std::string str, t_data *data, char **argv);
void		char_case(std::string str, t_data *data);
void		inf_case(std::string str, t_data *data);
void		neg_inf_case(std::string str, t_data *data);
void		inff_case(std::string str, t_data *data);
void		neg_inff_case(std::string str, t_data *data);

# endif