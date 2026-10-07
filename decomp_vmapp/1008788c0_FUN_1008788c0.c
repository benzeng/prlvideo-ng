
long FUN_1008788c0(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  bool bVar6;
  
  sVar1 = _strlen(param_2);
  pcVar2 = _strchr(param_2,0x2f);
  if (pcVar2 == (char *)0x0) {
    uVar4 = FUN_100878ee0(param_1);
    bVar6 = (uVar4 & 2) == 0;
    iVar5 = (int)sVar1 + 7 + (uint)bVar6 + (uint)bVar6 * 2;
  }
  else {
    iVar5 = (int)sVar1 + 1;
  }
  lVar3 = FUN_10081ddd0(iVar5,"dso_dlfcn.c",0x170);
  if (lVar3 == 0) {
    FUN_100887ce0(0x25,0x7b,0x6d,"dso_dlfcn.c",0x172);
    lVar3 = 0;
  }
  else {
    if (pcVar2 == (char *)0x0) {
      uVar4 = FUN_100878ee0(param_1);
      if ((uVar4 & 2) == 0) {
        pcVar2 = "lib%s.dylib";
      }
      else {
        pcVar2 = "%s.dylib";
      }
    }
    else {
      pcVar2 = "%s";
    }
    ___sprintf_chk(lVar3,0,0xffffffffffffffff,pcVar2,param_2);
  }
  return lVar3;
}

