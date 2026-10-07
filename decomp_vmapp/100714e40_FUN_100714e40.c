
ulong FUN_100714e40(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (DAT_1011ccb40 == 0) {
    uVar3 = FUN_10071e690(0xfffffffa,0);
    return uVar3;
  }
  iVar1 = FUN_100742250(DAT_10116db38);
  if (iVar1 != 0) {
    uVar3 = FUN_10071e780();
    return uVar3;
  }
  uVar2 = FUN_1007154a0();
  FUN_100742310(DAT_10116db38);
  return (ulong)uVar2;
}

