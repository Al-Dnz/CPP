#include "header.hpp"

static void	init_data(t_data *data)
{
	data->c = 0;
	data->n = 0;
	data->f = 0.f;
	data->d = 0.0;
}

int			main(int argc, char **argv)
{
	t_data		data;
	int			index;
	std::string	str;
	std::string	dup;
	
	init_data(&data);
	if (argc != 2)
	{
		std::cout << "Wrong argument number"  <<std::endl;
		std::cout << "Usage:\n ./convert <string>" << std::endl;
		return 1;
	}
	str = argv[1];
	dup = str;
	clean_str(str);
	index = find_index_type(str);
	if (find_index_type(dup) == -1)
		index = - 1;
	switch(index)
	{
		case -1:
			nan_case_displayer();
			break;
		case 0:
			int_case(str, &data, argv);
			break;
		case 1:
			double_case(str, &data, argv);
			break;
		case 2:
			float_case(str, &data, argv);
			break;
		case 3:
			char_case(str, &data);
			break;
		case 4:
			inf_case(str, &data);
			break;
		case 5:
			neg_inf_case(str, &data);
			break;
		case 6:
			inff_case(str, &data);
			break;
		case 7:
			neg_inff_case(str, &data);
			break;
		default:
			break;
	}
	return 0;
}


