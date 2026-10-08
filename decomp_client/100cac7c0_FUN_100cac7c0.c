
long FUN_100cac7c0(void)

{
  char *pcVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  pcVar1 = _getenv("OPENSSL_CONF");
  if (pcVar1 != (char *)0x0) {
    lVar2 = FUN_100c58250(pcVar1);
    return lVar2;
  }
  pcVar1 = (char *)FUN_100c91f10();
  sVar3 = _strlen(pcVar1);
  iVar6 = (int)((sVar3 << 0x20) + 0x100000000 >> 0x20) + 0xc;
  lVar4 = FUN_100bf3540(iVar6,"conf_mod.c",0x21b);
  lVar2 = 0;
  if (lVar4 != 0) {
    uVar5 = FUN_100c91f10();
    lVar2 = (long)iVar6;
    FUN_100c583f0(lVar4,uVar5,lVar2);
    FUN_100c58450(lVar4,"/",lVar2);
    FUN_100c58450(lVar4,"openssl.cnf",lVar2);
    lVar2 = lVar4;
  }
  return lVar2;
}

