
int FUN_10058ed40(long param_1,undefined8 param_2,byte param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  long ****pppplVar3;
  long *****ppppplVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *****ppppplVar11;
  long local_60;
  long *local_58;
  long local_50;
  long ****local_48;
  long ****local_40;
  long local_38;
  
  local_38 = 0;
  local_48 = (long ****)&local_48;
  local_40 = (long ****)&local_48;
  cVar6 = FUN_1007ea210(param_2);
  iVar7 = -0x7ffe6fec;
  if (cVar6 == '\0') {
    lVar2 = *(long *)(*(long *)(param_1 + 0x70) + 8);
    plVar10 = (long *)0x0;
    if (lVar2 != 0) {
      plVar10 = *(long **)(lVar2 + 0x10);
    }
    (**(code **)(*plVar10 + 0xc0))(&local_60,plVar10,param_2);
    plVar9 = local_58;
    plVar10 = local_58;
    for (ppppplVar11 = (long *****)local_40;
        (plVar10 != &local_60 && (plVar9 = plVar10, ppppplVar11 != &local_48));
        ppppplVar11 = (long *****)ppppplVar11[1]) {
      pppplVar3 = (long ****)plVar10[2];
      ppppplVar11[3] = (long ****)plVar10[3];
      ppppplVar11[2] = pppplVar3;
      plVar10 = (long *)plVar10[1];
      plVar9 = &local_60;
    }
    if (ppppplVar11 == &local_48) {
      FUN_10057f090(&local_48,&local_48,plVar9,&local_60,0);
    }
    else {
      pppplVar3 = *ppppplVar11;
      pppplVar3[1] = local_48[1];
      *local_48[1] = (long **)pppplVar3;
      do {
        ppppplVar4 = (long *****)ppppplVar11[1];
        local_38 = local_38 + -1;
        operator_delete(ppppplVar11);
        ppppplVar11 = ppppplVar4;
      } while (ppppplVar4 != &local_48);
    }
    if (local_50 != 0) {
      lVar2 = *local_58;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_60 + 8);
      **(long **)(local_60 + 8) = lVar2;
      local_50 = 0;
      while (local_58 != &local_60) {
        plVar10 = (long *)local_58[1];
        operator_delete(local_58);
        local_58 = plVar10;
      }
    }
    if (((param_3 & local_38 == 0) == 0) && (param_3 == 1)) {
      iVar7 = FUN_10058d0f0(param_1,param_4);
    }
    else {
      for (ppppplVar11 = (long *****)local_40; ppppplVar11 != &local_48;
          ppppplVar11 = (long *****)ppppplVar11[1]) {
        FUN_10058ed40(param_1,ppppplVar11 + 2,0,&DAT_1011bc648);
      }
      iVar7 = 0;
      FUN_10058e450(param_1,param_2);
    }
    iVar8 = 1000;
    if (iVar7 < 0) {
      iVar8 = iVar7;
    }
    while( true ) {
      pcVar5 = (code *)*param_4;
      if ((pcVar5 == (code *)0x0) && (param_4[4] == 0)) goto LAB_10058ef70;
      if ((-1 < iVar8) && (1 < *(uint *)(param_4 + 2))) {
        iVar1 = *(int *)((long)param_4 + 0x14);
        if (iVar8 < *(int *)((long)param_4 + 0x14)) {
          *(int *)((long)param_4 + 0x14) = iVar8;
          goto LAB_10058ef70;
        }
        *(int *)((long)param_4 + 0x14) = iVar8;
        iVar8 = (uint)(iVar8 - iVar1) / *(uint *)(param_4 + 2) + *(int *)(param_4 + 3);
        *(int *)(param_4 + 3) = iVar8;
      }
      if (pcVar5 != (code *)0x0) break;
      param_4 = (undefined8 *)param_4[4];
    }
    (*pcVar5)(iVar8,param_4[1]);
  }
LAB_10058ef70:
  if (local_38 != 0) {
    pppplVar3 = (long ****)*local_40;
    pppplVar3[1] = local_48[1];
    *local_48[1] = (long **)pppplVar3;
    local_38 = 0;
    ppppplVar11 = (long *****)local_40;
    while (ppppplVar11 != &local_48) {
      ppppplVar4 = (long *****)ppppplVar11[1];
      operator_delete(ppppplVar11);
      ppppplVar11 = ppppplVar4;
    }
  }
  return iVar7;
}

