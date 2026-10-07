
long FUN_1008b96a0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = 0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    lVar2 = FUN_100884c10();
    iVar4 = 0;
    lVar5 = 0;
    if ((lVar2 != 0) && (iVar1 = FUN_100885600(lVar2), lVar5 = lVar2, 0 < iVar1)) {
      do {
        lVar3 = FUN_100885620(lVar2,iVar4);
        FUN_10081d580(lVar3 + 0x1c,1,3,"x509_vfy.c",0x75c);
        iVar4 = iVar4 + 1;
        iVar1 = FUN_100885600(lVar2);
      } while (iVar4 < iVar1);
    }
  }
  return lVar5;
}

