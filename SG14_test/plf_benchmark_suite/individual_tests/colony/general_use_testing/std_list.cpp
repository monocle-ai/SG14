#include "plf_bench.h"


int main(int argc, char **argv)
{
	output_to_csv_file(argv[0]);

	benchmark_range_general_use< std::list<small_struct> >(10, 100000, 1.1, 3600, 1, 122, 60, true);

	return 0;
}
