
ulong FUN_100dc8b70(void)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar1 = FUN_100dc8a60();
  iVar3 = 3;
  while (1 < iVar3) {
    iVar3 = iVar3 + -1;
    uVar2 = FUN_100dc8a60();
    if ((uVar2 != 0) && (uVar2 <= uVar1)) {
      uVar1 = uVar2;
    }
  }
  return uVar1;
}

