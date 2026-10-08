
string * FUN_100b5cff0(string *param_1,undefined4 param_2)

{
  long lVar1;
  string local_98 [24];
  string local_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  string local_30 [24];
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  switch(param_2) {
  case 0:
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    lVar1 = FUN_100b9c1d0();
    if (lVar1 != 0) {
      std::string::assign((char *)&local_48);
      FUN_100b9c210(lVar1);
    }
    std::string::operator=(param_1,(string *)&local_48);
    std::string::~string((string *)&local_48);
    break;
  case 1:
  case 5:
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    lVar1 = FUN_100b9c1d0();
    if (lVar1 != 0) {
      std::string::assign((char *)&local_68);
      FUN_100b9c210(lVar1);
    }
    std::string::operator=(param_1,(string *)&local_68);
    std::string::~string((string *)&local_68);
    FUN_100b5d8b0(param_1,0x2e);
    break;
  case 2:
  case 3:
    FUN_100b5dea0(local_30);
    std::string::operator=(param_1,local_30);
    std::string::~string(local_30);
    break;
  case 4:
    FUN_100b5d200(local_80);
    std::string::operator=(param_1,local_80);
    std::string::~string(local_80);
    break;
  case 6:
    FUN_100b5dc80(local_98);
    std::string::operator=(param_1,local_98);
    std::string::~string(local_98);
  }
  return param_1;
}

