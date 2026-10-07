
ulong FUN_10029c880(int *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0xffffffff;
  if ((((*param_1 == *param_2) && (param_1[2] == param_2[2])) && (param_1[1] == param_2[1])) &&
     ((uVar2 = 1, *(char *)((long)param_1 + 0xa9) == *(char *)((long)param_2 + 0xa9) &&
      ((char)param_1[0x2a] == (char)param_2[0x2a])))) {
    iVar1 = _memcmp(param_1 + 10,param_2 + 10,0x20);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}

