
int FUN_1007000e0(long *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    iVar3 = (**(code **)(*param_1 + 0x10))(param_1[2],param_1 + 4,0x200);
    if (iVar3 != 0x200) {
      return iVar3;
    }
    if ((char)param_1[4] != '\0') break;
    iVar3 = iVar4 + 1;
    bVar2 = 0 < iVar4;
    iVar4 = iVar3;
    if ((bVar2) && ((*(uint *)((long)param_1 + 0x1c) & 8) == 0)) {
      return 0;
    }
  }
  uVar1 = *(uint *)((long)param_1 + 0x1c);
  if (((uVar1 & 0x10) != 0) &&
     (iVar4 = _strncmp((char *)((long)param_1 + 0x121),"ustar",5), iVar4 != 0)) {
    return -2;
  }
  if (((uVar1 & 0x20) != 0) &&
     (iVar4 = _strncmp((char *)((long)param_1 + 0x127),"00",2), iVar4 != 0)) {
    return -2;
  }
  if ((uVar1 & 0x40) != 0) {
    return 0x200;
  }
  iVar4 = FUN_1006fe320((long)param_1 + 0xb4);
  iVar3 = FUN_1006fe220(param_1);
  if (iVar4 == iVar3) {
    return 0x200;
  }
  return -2;
}

