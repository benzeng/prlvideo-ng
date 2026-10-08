
string * FUN_100b5d200(string *param_1)

{
  ulong uVar1;
  string local_c8 [24];
  string local_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  string local_78 [24];
  string local_60 [8];
  ulong local_58;
  string local_48;
  undefined1 local_47 [7];
  ulong local_40;
  undefined1 *local_38;
  string local_30 [24];
  
  std::string::__init((char *)local_30,0x101ed7dea);
  FUN_100b5d8b0(local_30,0x2d);
  FUN_100b5cff0(&local_48,1);
  uVar1 = local_40;
  if (((byte)local_48 & 1) == 0) {
    uVar1 = (ulong)((byte)local_48 >> 1);
  }
  if (uVar1 == 0) {
    FUN_100df99c0("","GenHwId",0,"Wrong new hwId size");
    std::string::operator=(&local_48,local_30);
  }
  FUN_100b5cff0(local_60,2);
  uVar1 = local_58;
  if (((byte)local_60[0] & 1) == 0) {
    uVar1 = (ulong)((byte)local_60[0] >> 1);
  }
  if (uVar1 == 0) {
    FUN_100df99c0("","GenHwId",0,"Wrong old hwId size");
    std::string::operator=(local_60,local_30);
  }
  uVar1 = local_40;
  if (((byte)local_48 & 1) == 0) {
    uVar1 = (ulong)((byte)local_48 >> 1);
  }
  if (uVar1 == 0x20) {
    if (((byte)local_60[0] & 1) == 0) {
      local_58 = (ulong)((byte)local_60[0] >> 1);
    }
    if (local_58 == 0x20) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      if (((byte)local_48 & 1) == 0) {
        local_40 = (ulong)((byte)local_48 >> 1);
        local_38 = local_47;
      }
      std::string::__init((char *)&local_98,(ulong)local_38,local_40);
      std::string::push_back((char)&local_98);
      FUN_100a50b60(local_78,&local_98,local_60);
      std::string::~string((string *)&local_98);
      FUN_100b5dc10(local_78);
      FUN_100b5d710(local_b0,local_78);
      std::string::operator=(local_78,local_b0);
      std::string::~string(local_b0);
      FUN_100b5d960(local_c8,local_78);
      std::string::operator=(local_78,local_c8);
      std::string::~string(local_c8);
      std::string::string(param_1,local_78);
      std::string::~string(local_78);
      goto LAB_100b5d41a;
    }
  }
  FUN_100df99c0("","GenHwId",0,"Wrong hwId size");
  std::string::__init((char *)param_1,0x101e41978);
LAB_100b5d41a:
  std::string::~string(local_60);
  std::string::~string(&local_48);
  std::string::~string(local_30);
  return param_1;
}

