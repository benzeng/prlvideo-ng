
ulong FUN_100b95840(char *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 in_RAX;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  if (DAT_1023118c8 == 0) {
    uVar6 = 0xfffffffa;
LAB_100b958d0:
    uVar4 = FUN_100b9d470(uVar6,0);
    return uVar4;
  }
  local_38 = in_RAX;
  iVar1 = FUN_100bc14d0();
  if (iVar1 == 0) {
    uVar6 = 0xfffffff8;
    goto LAB_100b958d0;
  }
  if (((param_1 == (char *)0x0) || (param_2 == (int *)0x0)) || (param_2[1] != 1)) {
    uVar6 = 0xfffffffd;
    goto LAB_100b958d0;
  }
  if (*(long *)(param_2 + 0x12) == 0) {
    uVar6 = 0xfffffffe;
    goto LAB_100b958d0;
  }
  uVar2 = FUN_100bc1030(DAT_1022cf508);
  if (uVar2 != 0) {
    return (ulong)uVar2;
  }
  lVar3 = FUN_100b93ce0(param_1);
  if (lVar3 == 0) {
    uVar6 = 0xfffffff9;
  }
  else if ((*(byte *)(lVar3 + 0xec) & 10) == 0) {
    uVar2 = FUN_100b9b0f0(param_1,0,&local_38);
    uVar4 = (ulong)uVar2;
    if (uVar2 != 0) {
LAB_100b95955:
      FUN_100bc10f0(DAT_1022cf508);
      return uVar4;
    }
    uVar2 = FUN_100b95ad0(param_2,local_38);
    uVar4 = (ulong)uVar2;
    if (uVar2 != 0) {
      FUN_100b9d470(uVar4,0);
      FUN_100ba1ea0(local_38);
      goto LAB_100b95955;
    }
    FUN_100ba1ea0(local_38);
    pcVar5 = _strdup(param_1);
    *(char **)(param_2 + 6) = pcVar5;
    if (pcVar5 != (char *)0x0) {
      *(undefined8 *)(*(long *)(param_2 + 0x12) + 0x38) = 0;
      *param_2 = (uint)(param_3 != 0) * 5 + 1;
      FUN_100bc10f0(DAT_1022cf508);
      goto LAB_100b9599f;
    }
    uVar6 = 0xfffffffe;
  }
  else {
    uVar6 = 0xfffffff3;
  }
  uVar2 = FUN_100b9d470(uVar6,0);
  FUN_100bc10f0(DAT_1022cf508);
  if (uVar2 != 0) {
    return (ulong)uVar2;
  }
LAB_100b9599f:
  uVar2 = FUN_100b95260(param_2);
  return (ulong)uVar2;
}

