
undefined8 FUN_100c9e4f0(long param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 == 0) {
    if (param_4 != (int *)0x0) {
      *param_4 = -1;
    }
  }
  else {
    iVar1 = 0;
    if (param_4 != (int *)0x0) {
      iVar1 = *param_4 + 1;
    }
    iVar6 = 0;
    if (-1 < iVar1) {
      iVar6 = iVar1;
    }
    iVar1 = FUN_100c60800(param_1);
    if (iVar6 < iVar1) {
      puVar3 = (undefined8 *)0x0;
      if (param_4 == (int *)0x0) {
        do {
          puVar4 = (undefined8 *)FUN_100c60820(param_1,iVar6);
          iVar1 = FUN_100bf7220(*puVar4);
          if ((iVar1 == param_2) && (bVar7 = puVar3 != (undefined8 *)0x0, puVar3 = puVar4, bVar7)) {
            if (param_3 == (undefined4 *)0x0) {
              return 0;
            }
            *param_3 = 0xfffffffe;
            return 0;
          }
          iVar6 = iVar6 + 1;
          iVar1 = FUN_100c60800(param_1);
        } while (iVar6 < iVar1);
LAB_100c9e5dc:
        if (puVar3 != (undefined8 *)0x0) {
          if (param_3 != (undefined4 *)0x0) {
            uVar2 = FUN_100c97b10(puVar3);
            *param_3 = uVar2;
          }
          uVar5 = FUN_100c9e420(puVar3);
          return uVar5;
        }
      }
      else {
        do {
          puVar3 = (undefined8 *)FUN_100c60820(param_1,iVar6);
          iVar1 = FUN_100bf7220(*puVar3);
          if (iVar1 == param_2) {
            *param_4 = iVar6;
            goto LAB_100c9e5dc;
          }
          iVar6 = iVar6 + 1;
          iVar1 = FUN_100c60800(param_1);
        } while (iVar6 < iVar1);
      }
    }
    if (param_4 != (int *)0x0) {
      *param_4 = -1;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0xffffffff;
  }
  return 0;
}

