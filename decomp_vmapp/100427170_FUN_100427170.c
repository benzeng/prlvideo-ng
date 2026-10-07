
void FUN_100427170(long param_1)

{
  long lVar1;
  string local_40 [24];
  
  FUN_100428580(local_40,param_1,param_1 + 0x18);
  std::string::operator=((string *)(param_1 + 0x30),local_40);
  std::string::~string(local_40);
  if (((byte)*(string *)(param_1 + 0x30) & 1) == 0) {
    lVar1 = param_1 + 0x31;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
  }
  *(long *)(param_1 + 0x58) = lVar1;
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = param_1 + 0x19;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
  }
  *(long *)(param_1 + 0x50) = lVar1;
  return;
}

