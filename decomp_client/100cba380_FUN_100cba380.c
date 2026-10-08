
undefined4 * FUN_100cba380(undefined8 *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar3 = FUN_100bf7220(*param_1);
  if (iVar3 != 0x17) {
    FUN_100c62ee0(0x2e,0x83,0x6b,"cms_env.c",0x4f);
    return (undefined4 *)0x0;
  }
  plVar1 = (long *)param_1[1];
  if (plVar1 == (long *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)FUN_100c7fb90(&DAT_102258890);
  if (puVar4 == (undefined4 *)0x0) {
LAB_100cba53b:
    uVar7 = 0x41;
    uVar8 = 0xda;
LAB_100cba557:
    FUN_100c62ee0(0x2e,0x65,uVar7,"cms_env.c",uVar8);
  }
  else {
    puVar5 = (undefined8 *)FUN_100c7fb90(&DAT_102257fc0);
    *(undefined8 **)(puVar4 + 2) = puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_100cba53b;
    *puVar4 = 0;
    FUN_100ca5120(param_2,0xffffffff,0xffffffff);
    lVar6 = FUN_100c929a0(param_2);
    if (lVar6 == 0) {
      FUN_100c62ee0(0x2e,0x65,0x71,"cms_env.c",0xae);
      goto LAB_100cba563;
    }
    FUN_100bf2cf0(param_2 + 0x1c,1,3,"cms_env.c",0xb1);
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
    iVar3 = FUN_100cb8570(puVar5[1],param_2,uVar7);
    if (iVar3 != 0) {
      if ((*(long *)(lVar6 + 0x10) == 0) ||
         (pcVar2 = *(code **)(*(long *)(lVar6 + 0x10) + 0xa8), pcVar2 == (code *)0x0)) {
LAB_100cba528:
        iVar3 = FUN_100c604e0(plVar1[2],puVar4);
        if (iVar3 != 0) {
          return puVar4;
        }
        goto LAB_100cba53b;
      }
      iVar3 = (*pcVar2)(lVar6,7,0,puVar4);
      if (iVar3 == -2) {
        uVar7 = 0x7d;
        uVar8 = 0xcb;
      }
      else {
        if (0 < iVar3) goto LAB_100cba528;
        uVar7 = 0x6f;
        uVar8 = 0xcf;
      }
      goto LAB_100cba557;
    }
  }
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
LAB_100cba563:
  FUN_100c801c0(puVar4,&DAT_102258890);
  return (undefined4 *)0x0;
}

