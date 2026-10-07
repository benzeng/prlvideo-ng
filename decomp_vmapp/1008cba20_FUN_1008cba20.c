
long FUN_1008cba20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  lVar3 = FUN_100884e10();
  if (lVar3 == 0) {
    uVar8 = 0x7b;
LAB_1008cbbde:
    FUN_100887ce0(0x22,0x91,0x41,"v3_pmaps.c",uVar8);
    lVar3 = 0;
  }
  else {
    iVar1 = FUN_100885600(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar4 = (undefined8 *)FUN_100885620(param_3,iVar1);
        if ((puVar4[2] == 0) || (puVar4[1] == 0)) {
          FUN_100885590(lVar3,FUN_1008cbc20);
          uVar8 = 0x84;
LAB_1008cbb76:
          FUN_100887ce0(0x22,0x91,0x6e,"v3_pmaps.c",uVar8);
          FUN_1008890a0(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
          return 0;
        }
        lVar5 = FUN_100821bf0(puVar4[1],0);
        lVar6 = FUN_100821bf0(puVar4[2],0);
        if ((lVar5 == 0) || (lVar6 == 0)) {
          FUN_100885590(lVar3,FUN_1008cbc20);
          uVar8 = 0x8d;
          goto LAB_1008cbb76;
        }
        plVar7 = (long *)FUN_1008a4610(&DAT_100be5080);
        if (plVar7 == (long *)0x0) {
          FUN_100885590(lVar3,FUN_1008cbc20);
          uVar8 = 0x94;
          goto LAB_1008cbbde;
        }
        *plVar7 = lVar5;
        plVar7[1] = lVar6;
        FUN_1008852e0(lVar3,plVar7);
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100885600(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}

