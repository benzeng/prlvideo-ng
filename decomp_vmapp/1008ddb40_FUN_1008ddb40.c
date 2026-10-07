
undefined4 * FUN_1008ddb40(undefined8 *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar3 = FUN_100821ab0(*param_1);
  if (iVar3 != 0x17) {
    FUN_100887ce0(0x2e,0x83,0x6b,"cms_env.c",0x4f);
    return (undefined4 *)0x0;
  }
  plVar1 = (long *)param_1[1];
  if (plVar1 == (long *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)FUN_1008a4610(&DAT_100be8280);
  if (puVar4 == (undefined4 *)0x0) {
LAB_1008ddcfb:
    uVar7 = 0x41;
    uVar8 = 0xda;
LAB_1008ddd17:
    FUN_100887ce0(0x2e,0x65,uVar7,"cms_env.c",uVar8);
  }
  else {
    puVar5 = (undefined8 *)FUN_1008a4610(&DAT_100be79b0);
    *(undefined8 **)(puVar4 + 2) = puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_1008ddcfb;
    *puVar4 = 0;
    FUN_1008c9ba0(param_2,0xffffffff,0xffffffff);
    lVar6 = FUN_1008b7420(param_2);
    if (lVar6 == 0) {
      FUN_100887ce0(0x2e,0x65,0x71,"cms_env.c",0xae);
      goto LAB_1008ddd23;
    }
    FUN_10081d580(param_2 + 0x1c,1,3,"cms_env.c",0xb1);
    puVar5[5] = lVar6;
    puVar5[4] = param_2;
    if ((param_3 & 0x10000) == 0) {
      *puVar5 = 0;
      uVar7 = 0;
    }
    else {
      *puVar5 = 2;
      if (*plVar1 < 2) {
        *plVar1 = 2;
        uVar7 = 1;
      }
      else {
        uVar7 = 1;
      }
    }
    iVar3 = FUN_1008dbd30(puVar5[1],param_2,uVar7);
    if (iVar3 != 0) {
      if ((*(long *)(lVar6 + 0x10) == 0) ||
         (pcVar2 = *(code **)(*(long *)(lVar6 + 0x10) + 0xa8), pcVar2 == (code *)0x0)) {
LAB_1008ddce8:
        iVar3 = FUN_1008852e0(plVar1[2],puVar4);
        if (iVar3 != 0) {
          return puVar4;
        }
        goto LAB_1008ddcfb;
      }
      iVar3 = (*pcVar2)(lVar6,7,0,puVar4);
      if (iVar3 == -2) {
        uVar7 = 0x7d;
        uVar8 = 0xcb;
      }
      else {
        if (0 < iVar3) goto LAB_1008ddce8;
        uVar7 = 0x6f;
        uVar8 = 0xcf;
      }
      goto LAB_1008ddd17;
    }
  }
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
LAB_1008ddd23:
  FUN_1008a4c40(puVar4,&DAT_100be8280);
  return (undefined4 *)0x0;
}

