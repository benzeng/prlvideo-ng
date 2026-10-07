
int FUN_100810270(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_1 == *param_2) && (param_1[0x11] == param_2[0x11])) {
    iVar1 = _memcmp(param_1 + 0x12,param_2 + 0x12,(ulong)(uint)param_1[0x11]);
    return iVar1;
  }
  return 1;
}

