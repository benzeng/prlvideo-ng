
ulong FUN_1006e7c80(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 != 0) {
    uVar3 = FUN_10016f500(lVar4);
    iVar2 = CustomUpdateServerInfo::policy();
    if (iVar2 == 1) {
      return 1;
    }
    cVar1 = FUN_10061b500(uVar3,2);
    if (cVar1 == '\0') {
      uVar5 = FUN_10061c2b0(uVar3,0x80);
      return uVar5 ^ 1;
    }
  }
  return 0;
}

