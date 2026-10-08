
long * FUN_100a23bf0(long *param_1,char *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  long *plVar4;
  char *pcVar5;
  string local_48 [8];
  ulong local_40;
  
  pcVar5 = param_2 + param_3;
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  param_1[2] = 0;
  do {
    if (pcVar5 <= param_2) {
      return param_1;
    }
    _strlen(param_2);
    std::string::__init((char *)local_48,(ulong)param_2);
    uVar2 = local_40;
    if (((byte)local_48[0] & 1) == 0) {
      uVar2 = (ulong)((byte)local_48[0] >> 1);
    }
    if (uVar2 != 0) {
      sVar3 = _strlen(param_2);
      plVar4 = operator_new(0x28);
      std::string::string((string *)(plVar4 + 2),local_48);
      plVar4[1] = (long)param_1;
      lVar1 = *param_1;
      *plVar4 = lVar1;
      *(long **)(lVar1 + 8) = plVar4;
      *param_1 = (long)plVar4;
      param_1[2] = param_1[2] + 1;
      param_2 = param_2 + sVar3 + 1;
    }
    std::string::~string(local_48);
  } while (uVar2 != 0);
  return param_1;
}

