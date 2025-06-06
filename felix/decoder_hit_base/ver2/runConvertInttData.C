#include "InttEvent.h"
#include "ConvertInttData.h"
R__LOAD_LIBRARY( libInttHitBaseDecoder.so )

void runConvertInttData(const char * filename, int year = 2024, int hit_num = 0 )
{
  //  std::string save_dir = "/sphenix/tg/tg01/commissioning/INTT/root_files/";
  string save_dir = "/sphenix/tg/tg01/commissioning/INTT/data/root_files/" + to_string( year ) + "/";
  
  std::string tree_file_name = filename;
  while(tree_file_name.find("/") != std::string::npos)
  {
    tree_file_name = tree_file_name.substr(tree_file_name.find("/") + 1);
  }

  tree_file_name = tree_file_name.substr(0, tree_file_name.find("."));
  tree_file_name += ".root";
  tree_file_name = save_dir + tree_file_name;

  std::cout << tree_file_name << std::endl;

  // read and generate InttTree
  if ( filename != NULL)
    {
      Init(tree_file_name.c_str());
      if( hit_num != 0 )
	Run(filename, hit_num );
      else
	Run(filename );
    }

}
