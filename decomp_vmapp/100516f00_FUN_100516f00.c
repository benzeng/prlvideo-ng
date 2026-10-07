
long FUN_100516f00(long param_1)

{
  string local_38 [24];
  
  FUN_100516d90(local_38,param_1);
  std::string::operator=((string *)(param_1 + 0x48),local_38);
  std::string::~string(local_38);
  if (((byte)*(string *)(param_1 + 0x48) & 1) == 0) {
    param_1 = param_1 + 0x49;
  }
  else {
    param_1 = *(long *)(param_1 + 0x58);
  }
  return param_1;
}

