
undefined4 *
FUN_100cba740(undefined8 *param_1,int param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,long param_8,long param_9)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar3 = FUN_100bf7220(*param_1);
  if (iVar3 != 0x17) {
    uVar8 = 0x83;
    uVar7 = 0x6b;
    uVar9 = 0x4f;
    goto LAB_100cba7e9;
  }
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    return (undefined4 *)0x0;
  }
  if (param_2 == 0) {
    param_2 = 0x314;
    if (param_4 != 0x10) {
      if (param_4 == 0x20) {
        param_2 = 0x316;
      }
      else {
        if (param_4 != 0x18) {
          uVar8 = 100;
          uVar7 = 0x76;
          uVar9 = 0x1e0;
          goto LAB_100cba7e9;
        }
        param_2 = 0x315;
      }
    }
  }
  else {
    if (2 < param_2 - 0x314U) {
      uVar8 = 100;
      uVar7 = 0x99;
      uVar9 = 0x1ea;
      goto LAB_100cba7e9;
    }
    if ((ulong)(param_2 - 0x314U) * 8 + 0x10 != param_4) {
      uVar8 = 100;
      uVar7 = 0x76;
      uVar9 = 0x1ef;
      goto LAB_100cba7e9;
    }
  }
  puVar4 = (undefined4 *)FUN_100c7fb90(&DAT_102258890);
  if (puVar4 == (undefined4 *)0x0) {
    uVar8 = 100;
    uVar7 = 0x41;
    uVar9 = 0x220;
LAB_100cba7e9:
    FUN_100c62ee0(0x2e,uVar8,uVar7,"cms_env.c",uVar9);
    return (undefined4 *)0x0;
  }
  puVar5 = (undefined8 *)FUN_100c7fb90(&DAT_1022585f0);
  *(undefined8 **)(puVar4 + 2) = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar4 = 2;
    if (param_8 != 0) {
      lVar6 = FUN_100c7fb90(&DAT_102258050);
      *(long *)(puVar5[1] + 0x10) = lVar6;
      if (lVar6 == 0) goto LAB_100cba925;
    }
    iVar3 = FUN_100c604e0(*(undefined8 *)(lVar1 + 0x10),puVar4);
    if (iVar3 != 0) {
      *puVar5 = 4;
      puVar5[4] = param_3;
      puVar5[5] = param_4;
      FUN_100c8b330(*(undefined8 *)puVar5[1],param_5,param_6);
      lVar1 = puVar5[1];
      *(undefined8 *)(lVar1 + 8) = param_7;
      plVar2 = *(long **)(lVar1 + 0x10);
      if (plVar2 != (long *)0x0) {
        *plVar2 = param_8;
        plVar2[1] = param_9;
      }
      uVar7 = puVar5[2];
      uVar8 = FUN_100bf6fe0(param_2);
      FUN_100c7aec0(uVar7,uVar8,0xffffffff,0);
      return puVar4;
    }
  }
LAB_100cba925:
  FUN_100c62ee0(0x2e,100,0x41,"cms_env.c",0x220);
  FUN_100c801c0(puVar4,&DAT_102258890);
  return (undefined4 *)0x0;
}

