
ulong FUN_100778400(void)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar1 = FUN_1007782f0();
  iVar3 = 3;
  while (1 < iVar3) {
    iVar3 = iVar3 + -1;
    uVar2 = FUN_1007782f0();
    if ((uVar2 != 0) && (uVar2 <= uVar1)) {
      uVar1 = uVar2;
    }
  }
  return uVar1;
}

