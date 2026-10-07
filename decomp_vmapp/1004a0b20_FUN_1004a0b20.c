
long FUN_1004a0b20(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  *(long *)(lVar1 + 8) = lVar2;
  *(long *)param_2[1] = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
  std::string::~string((string *)(param_2 + 0xb));
  std::string::~string((string *)(param_2 + 8));
  std::string::~string((string *)(param_2 + 5));
  std::string::~string((string *)(param_2 + 2));
  operator_delete(param_2);
  return lVar2;
}

