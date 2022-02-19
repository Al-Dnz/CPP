#include "header.hpp"

void	int_case(std::string str, t_data *data, char **argv)
{
	data->n =  atoi(argv[1]);;
	data->f = static_cast<float>(data->n);
	data->d = static_cast<double>(data->n);
	if (isprint(data->n))
		data->c = static_cast<char>(data->n);
	displayer(str, data->n, data->f, data->d, data->c);
}

void	double_case(std::string str, t_data *data, char **argv)
{
	data->d = strtod(argv[1], NULL);
	data->n = static_cast<int>(data->d);
	data->f = static_cast<float>(data->d);
	if (isprint(data->n))
		data->c = static_cast<char>(data->d);
	displayer(str, data->n, data->f, data->d, data->c);
}

void	float_case(std::string str, t_data *data, char **argv)
{
	data->f = strtof(argv[1], NULL);
	data->n = static_cast<int>(data->f);
	data->d = static_cast<double>(data->f);
	if (isprint(data->n))
		data->c = static_cast<char>(data->f);
	displayer(str, data->n, data->f, data->d, data->c);
}

void	char_case(std::string str, t_data *data)
{
	data->c = str[0];
	data->n = static_cast<int>(data->c);
	data->f = static_cast<float>(data->c);
	data->d = static_cast<double>(data->c);
	displayer(str, data->n, data->f, data->d, data->c);
}

void	inf_case(std::string str, t_data *data)
{
	data->d = std::numeric_limits<double>::infinity();
	data->n = static_cast<int>(data->d);
	data->f = static_cast<float>(data->d);
	if (isprint(data->n))
		data->c = static_cast<char>(data->n);
	inf_case_displayer(str, data->n, data->f, data->d);
}

void	neg_inf_case(std::string str, t_data *data)
{
	data->d = -1 * std::numeric_limits<double>::infinity();
	data->n = static_cast<int>(data->d);
	data->f = static_cast<float>(data->d);
	if (isprint(data->n))
		data->c = static_cast<char>(data->n);
	inf_case_displayer(str, data->n, data->f, data->d);
}

void	inff_case(std::string str, t_data *data)
{
	data->f = std::numeric_limits<float>::infinity();
	data->n = static_cast<int>(data->f);
	data->d = static_cast<double>(data->f);
	if (isprint(data->n))
		data->c = static_cast<char>(data->n);
	inf_case_displayer(str, data->n, data->f, data->d);
}

void	neg_inff_case(std::string str, t_data *data)
{
	data->f = -1 * std::numeric_limits<float>::infinity();
	data->n = static_cast<int>(data->f);
	data->d = static_cast<double>(data->f);
	if (isprint(data->n))
		data->c = static_cast<char>(data->n);
	inf_case_displayer(str, data->n, data->f, data->d);
}