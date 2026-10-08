
long FUN_100ca6fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  lVar3 = FUN_100c60010();
  if (lVar3 == 0) {
    uVar8 = 0x7b;
LAB_100ca715e:
    FUN_100c62ee0(0x22,0x91,0x41,"v3_pmaps.c",uVar8);
    lVar3 = 0;
  }
  else {
    iVar1 = FUN_100c60800(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar4 = (undefined8 *)FUN_100c60820(param_3,iVar1);
        if ((puVar4[2] == 0) || (puVar4[1] == 0)) {
          FUN_100c60790(lVar3,FUN_100ca71a0);
          uVar8 = 0x84;
LAB_100ca70f6:
          FUN_100c62ee0(0x22,0x91,0x6e,"v3_pmaps.c",uVar8);
          FUN_100c642a0(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
          return 0;
        }
        lVar5 = FUN_100bf7360(puVar4[1],0);
        lVar6 = FUN_100bf7360(puVar4[2],0);
        if ((lVar5 == 0) || (lVar6 == 0)) {
          FUN_100c60790(lVar3,FUN_100ca71a0);
          uVar8 = 0x8d;
          goto LAB_100ca70f6;
        }
        plVar7 = (long *)FUN_100c7fb90(&DAT_102255690);
        if (plVar7 == (long *)0x0) {
          FUN_100c60790(lVar3,FUN_100ca71a0);
          uVar8 = 0x94;
          goto LAB_100ca715e;
        }
        *plVar7 = lVar5;
        plVar7[1] = lVar6;
        FUN_100c604e0(lVar3,plVar7);
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100c60800(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}

