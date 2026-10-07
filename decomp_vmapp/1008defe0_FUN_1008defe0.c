
undefined8 FUN_1008defe0(undefined8 *param_1,long param_2,void *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  
  if ((param_3 == (void *)0x0) || (param_4 == 0)) {
    uVar3 = 0x82;
    uVar6 = 0xeb;
LAB_1008df0fb:
    FUN_100887ce0(0x2e,0x7b,uVar3,"cms_enc.c",uVar6);
    uVar3 = 0;
  }
  else {
    if (param_2 == 0) {
      iVar1 = FUN_100821ab0(*param_1);
      if (iVar1 != 0x1a) {
        uVar3 = 0x7a;
        uVar6 = 0xf7;
        goto LAB_1008df0fb;
      }
      puVar4 = (undefined8 *)param_1[1];
    }
    else {
      lVar2 = FUN_1008a4610(&DAT_100be8518);
      param_1[1] = lVar2;
      if (lVar2 == 0) {
        uVar3 = 0x41;
        uVar6 = 0xf1;
        goto LAB_1008df0fb;
      }
      uVar3 = FUN_100821870(0x1a);
      *param_1 = uVar3;
      puVar4 = (undefined8 *)param_1[1];
      *puVar4 = 0;
    }
    puVar4 = (undefined8 *)puVar4[1];
    puVar4[3] = param_2;
    pvVar5 = (void *)FUN_10081ddd0(param_4 & 0xffffffff,"cms_enc.c",0xdb);
    puVar4[4] = pvVar5;
    uVar3 = 0;
    if (pvVar5 != (void *)0x0) {
      _memcpy(pvVar5,param_3,param_4);
      puVar4[5] = param_4;
      uVar3 = 1;
      if (param_2 != 0) {
        uVar6 = FUN_100821870(0x15);
        *puVar4 = uVar6;
      }
    }
  }
  return uVar3;
}

