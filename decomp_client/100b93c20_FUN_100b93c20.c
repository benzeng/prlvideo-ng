
ulong FUN_100b93c20(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (DAT_1023118c8 == 0) {
    uVar3 = FUN_100b9d470(0xfffffffa,0);
    return uVar3;
  }
  iVar1 = FUN_100bc1030(DAT_1022cf508);
  if (iVar1 != 0) {
    uVar3 = FUN_100b9d560();
    return uVar3;
  }
  uVar2 = FUN_100b94280();
  FUN_100bc10f0(DAT_1022cf508);
  return (ulong)uVar2;
}

