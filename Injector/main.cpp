#include "includes.h"
#include <iostream>
#include "xorstr.hpp"
#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include <string>
#include <random>
#include <iostream>
#include <tlhelp32.h>
#include <tchar.h>
#include <fstream>
#include <filesystem>
#include "log.h"


auto main ( ) -> int
{
   
   
    Inject* inject = new Inject();
    skar_text->skar_log("open GTA5.");
    Sleep(3000);
    inject->inject_module_from_path_to_process_by_name(xor_w(L"YimMenuV2.dll"), xor_w(L"GTA5_Enhanced.exe"));
}


