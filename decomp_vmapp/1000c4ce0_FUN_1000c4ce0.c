
void FUN_1000c4ce0(long param_1,undefined8 param_2,char *param_3)

{
  string local_58 [24];
  string local_40 [24];
  
  _strlen(param_3);
  std::string::__init((char *)local_40,(ulong)param_3);
  std::string::string(local_58,local_40);
  FUN_1000c3fd0(param_2,local_58,*(undefined4 *)(param_1 + 0x448));
  std::string::~string(local_58);
  std::string::~string(local_40);
  return;
}

