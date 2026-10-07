
long FUN_1008c2780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = FUN_100884e10();
  if (lVar3 == 0) {
    FUN_100887ce0(0x22,0x67,0x41,"v3_extku.c",0x81);
    lVar3 = 0;
  }
  else {
    iVar1 = FUN_100885600(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar4 = (undefined8 *)FUN_100885620(param_3,iVar1);
        lVar5 = puVar4[2];
        if (lVar5 == 0) {
          lVar5 = puVar4[1];
        }
        lVar5 = FUN_100821bf0(lVar5,0);
        if (lVar5 == 0) {
          FUN_100885590(lVar3,FUN_100899890);
          FUN_100887ce0(0x22,0x67,0x6e,"v3_extku.c",0x8e);
          FUN_1008890a0(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
          return 0;
        }
        FUN_1008852e0(lVar3,lVar5);
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100885600(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}

