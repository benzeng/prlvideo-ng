
undefined8 * FUN_1005eaf10(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  int iVar4;
  long ****pppplVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  bool bVar10;
  long ***local_48;
  long ***local_40;
  long local_38;
  
  local_38 = 0;
  local_48 = (long ***)&local_48;
  local_40 = (long ***)&local_48;
  QMutex::lock();
  plVar6 = *(long **)(param_2 + 0x20);
  while (plVar6 != (long *)(param_2 + 0x28)) {
    lVar8 = 0;
    if (plVar6[6] != 0) {
      lVar8 = *(long *)(plVar6[6] + 0x10);
    }
    iVar4 = FUN_1007ea6f0(param_3,lVar8 + 0x228);
    if (iVar4 == 0) {
      lVar8 = 0;
      if (plVar6[6] != 0) {
        lVar8 = *(long *)(plVar6[6] + 0x10);
      }
      pppplVar5 = operator_new(0x20);
      ppplVar2 = *(long ****)(lVar8 + 0x218);
      pppplVar5[3] = *(long ****)(lVar8 + 0x220);
      pppplVar5[2] = ppplVar2;
      pppplVar5[1] = (long ***)&local_48;
      *pppplVar5 = local_48;
      local_48[1] = (long **)pppplVar5;
      local_38 = local_38 + 1;
      local_48 = (long ***)pppplVar5;
    }
    plVar1 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar1 = (long *)plVar6[2];
        bVar10 = (long *)*plVar1 != plVar6;
        plVar6 = plVar1;
      } while (bVar10);
    }
    else {
      do {
        plVar6 = plVar1;
        plVar1 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  *param_1 = param_1;
  param_1[1] = param_1;
  param_1[2] = 0;
  if ((long ****)local_40 != &local_48) {
    lVar8 = 0;
    pppplVar5 = (long ****)local_40;
    puVar9 = param_1;
    do {
      puVar7 = operator_new(0x20);
      ppplVar2 = pppplVar5[2];
      puVar7[3] = pppplVar5[3];
      puVar7[2] = ppplVar2;
      puVar7[1] = param_1;
      *puVar7 = puVar9;
      puVar9[1] = puVar7;
      *param_1 = puVar7;
      lVar8 = lVar8 + 1;
      param_1[2] = lVar8;
      pppplVar5 = (long ****)pppplVar5[1];
      puVar9 = puVar7;
    } while (pppplVar5 != &local_48);
  }
  QMutex::unlock();
  if (local_38 != 0) {
    ppplVar2 = (long ***)*local_40;
    ppplVar2[1] = local_48[1];
    *local_48[1] = (long *)ppplVar2;
    local_38 = 0;
    pppplVar5 = (long ****)local_40;
    while (pppplVar5 != &local_48) {
      pppplVar3 = (long ****)pppplVar5[1];
      operator_delete(pppplVar5);
      pppplVar5 = pppplVar3;
    }
  }
  return param_1;
}

