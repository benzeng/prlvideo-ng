
undefined8 FUN_1008c72f0(long *param_1,long param_2,char *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  sVar3 = (size_t)param_4;
  if (((param_1 == (long *)0x0) || (param_2 == 0)) || (param_3 == (char *)0x0)) {
    FUN_100887ce0(0x22,0x7e,0x6b,"v3_sxnet.c",0xbe);
    return 0;
  }
  if (param_4 == 0xffffffff) {
    sVar3 = _strlen(param_3);
  }
  if (0x40 < (int)sVar3) {
    FUN_100887ce0(0x22,0x7e,0x84,"v3_sxnet.c",0xc4);
    return 0;
  }
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_1008a4610(&DAT_100be3fd0);
    plVar6 = (long *)0x0;
    puVar5 = (undefined8 *)0x0;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1008c74bd;
    plVar6 = (long *)0x0;
    iVar1 = FUN_10089b2a0(*puVar4,0);
    puVar5 = puVar4;
    if (iVar1 == 0) goto LAB_1008c74bd;
    *param_1 = (long)puVar4;
  }
  iVar1 = FUN_100885600(puVar4[1]);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar5 = (undefined8 *)FUN_100885620(puVar4[1],iVar1);
      iVar2 = FUN_1008afeb0(*puVar5,param_2);
      if (iVar2 == 0) {
        if (puVar5[1] != 0) {
          FUN_100887ce0(0x22,0x7e,0x85,"v3_sxnet.c",0xd0);
          return 0;
        }
        break;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_100885600(puVar4[1]);
    } while (iVar1 < iVar2);
  }
  plVar6 = (long *)FUN_1008a4610(&DAT_100be40c0);
  puVar5 = puVar4;
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    if ((int)sVar3 == -1) {
      sVar3 = _strlen(param_3);
    }
    iVar1 = FUN_1008afb30(plVar6[1],param_3,sVar3 & 0xffffffff);
    if ((iVar1 != 0) && (iVar1 = FUN_1008852e0(puVar4[1],plVar6), iVar1 != 0)) {
      *plVar6 = param_2;
      return 1;
    }
  }
LAB_1008c74bd:
  FUN_100887ce0(0x22,0x7e,0x41,"v3_sxnet.c",0xe1);
  FUN_1008a4c40(plVar6,&DAT_100be40c0);
  FUN_1008a4c40(puVar5,&DAT_100be3fd0);
  *param_1 = 0;
  return 0;
}

