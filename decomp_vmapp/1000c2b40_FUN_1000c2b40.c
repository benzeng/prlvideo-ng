
void FUN_1000c2b40(long param_1,long *param_2,char *param_3)

{
  long *plVar1;
  code *pcVar2;
  char *pcVar3;
  string local_88 [24];
  string local_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  string local_40 [24];
  
  pcVar3 = (char *)(*param_2 + *(long *)(*param_2 + 0x10));
  _strlen(pcVar3);
  std::string::__init((char *)local_40,(ulong)pcVar3);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  plVar1 = *(long **)(*(long *)(param_1 + 0x28) + 0x1950);
  pcVar2 = *(code **)(*plVar1 + 0x118);
  std::string::string(local_88,local_40);
  (*pcVar2)(local_70,plVar1,local_88);
  std::string::operator=((string *)&local_58,local_70);
  std::string::~string(local_70);
  std::string::~string(local_88);
  QByteArray::clear();
  QByteArray::append(param_3);
  std::string::~string((string *)&local_58);
  std::string::~string(local_40);
  return;
}

