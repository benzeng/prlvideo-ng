
undefined8 FUN_100ca2870(long *param_1,long param_2,char *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  sVar3 = (size_t)param_4;
  if (((param_1 == (long *)0x0) || (param_2 == 0)) || (param_3 == (char *)0x0)) {
    FUN_100c62ee0(0x22,0x7e,0x6b,"v3_sxnet.c",0xbe);
    return 0;
  }
  if (param_4 == 0xffffffff) {
    sVar3 = _strlen(param_3);
  }
  if (0x40 < (int)sVar3) {
    FUN_100c62ee0(0x22,0x7e,0x84,"v3_sxnet.c",0xc4);
    return 0;
  }
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_100c7fb90(&DAT_1022545e0);
    plVar6 = (long *)0x0;
    puVar5 = (undefined8 *)0x0;
    if (puVar4 == (undefined8 *)0x0) goto LAB_100ca2a3d;
    plVar6 = (long *)0x0;
    iVar1 = FUN_100c76820(*puVar4,0);
    puVar5 = puVar4;
    if (iVar1 == 0) goto LAB_100ca2a3d;
    *param_1 = (long)puVar4;
  }
  iVar1 = FUN_100c60800(puVar4[1]);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar5 = (undefined8 *)FUN_100c60820(puVar4[1],iVar1);
      iVar2 = FUN_100c8b430(*puVar5,param_2);
      if (iVar2 == 0) {
        if (puVar5[1] != 0) {
          FUN_100c62ee0(0x22,0x7e,0x85,"v3_sxnet.c",0xd0);
          return 0;
        }
        break;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_100c60800(puVar4[1]);
    } while (iVar1 < iVar2);
  }
  plVar6 = (long *)FUN_100c7fb90(&DAT_1022546d0);
  puVar5 = puVar4;
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    if ((int)sVar3 == -1) {
      sVar3 = _strlen(param_3);
    }
    iVar1 = FUN_100c8b0b0(plVar6[1],param_3,sVar3 & 0xffffffff);
    if ((iVar1 != 0) && (iVar1 = FUN_100c604e0(puVar4[1],plVar6), iVar1 != 0)) {
      *plVar6 = param_2;
      return 1;
    }
  }
LAB_100ca2a3d:
  FUN_100c62ee0(0x22,0x7e,0x41,"v3_sxnet.c",0xe1);
  FUN_100c801c0(plVar6,&DAT_1022546d0);
  FUN_100c801c0(puVar5,&DAT_1022545e0);
  *param_1 = 0;
  return 0;
}

