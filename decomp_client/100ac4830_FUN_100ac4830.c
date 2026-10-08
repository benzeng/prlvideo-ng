
void FUN_100ac4830(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  uint uVar7;
  uint local_30;
  uint local_2c;
  
  iVar2 = *(int *)(param_1[0x15e] + 4);
  lVar6 = *(long *)(param_1[0x15e] + 0x10);
  lVar4 = 0;
  if (lVar6 == 0) {
LAB_100ac488c:
    local_2c = param_3;
    puVar3 = (undefined8 *)FUN_100ac7fa0(param_1 + 0x15e,&local_2c);
    *puVar3 = param_2;
  }
  else {
    do {
      while (uVar7 = *(uint *)(lVar6 + 0x18), param_3 <= uVar7) {
        plVar1 = (long *)(lVar6 + 8);
        lVar4 = lVar6;
        lVar6 = *plVar1;
        if (*plVar1 == 0) goto LAB_100ac4888;
      }
      plVar1 = (long *)(lVar6 + 0x10);
      lVar6 = *plVar1;
    } while (*plVar1 != 0);
    if (lVar4 == 0) goto LAB_100ac488c;
    uVar7 = *(uint *)(lVar4 + 0x18);
LAB_100ac4888:
    if (param_3 < uVar7) goto LAB_100ac488c;
  }
  lVar6 = *(long *)(param_1[0x160] + 0x10);
  lVar4 = 0;
  if (lVar6 != 0) {
    do {
      while (uVar7 = *(uint *)(lVar6 + 0x18), param_3 <= uVar7) {
        plVar1 = (long *)(lVar6 + 8);
        lVar4 = lVar6;
        lVar6 = *plVar1;
        if (*plVar1 == 0) goto LAB_100ac48e8;
      }
      plVar1 = (long *)(lVar6 + 0x10);
      lVar6 = *plVar1;
    } while (*plVar1 != 0);
    if (lVar4 != 0) {
      uVar7 = *(uint *)(lVar4 + 0x18);
LAB_100ac48e8:
      if (uVar7 <= param_3) goto LAB_100ac4905;
    }
  }
  local_30 = param_3;
  puVar5 = (undefined4 *)FUN_100ac80c0(param_1 + 0x160,&local_30);
  *puVar5 = 0xffffffff;
LAB_100ac4905:
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1,1);
  }
  FUN_100ade620(param_1[0x14b],1);
  return;
}

