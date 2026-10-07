
uint FUN_100571ef0(long *param_1,long param_2,long param_3)

{
  long ****pppplVar1;
  long *****ppppplVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  long *plVar8;
  long *****ppppplVar9;
  long *plVar10;
  ulong uVar11;
  long local_b8;
  long *local_b0;
  long local_a8;
  long ****local_a0;
  long ****local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  (**(code **)(**(long **)(param_1[1] + 0x10) + 0xa0))(&local_48);
  local_50 = local_40;
  local_58 = local_48;
  local_90 = 0;
  *(undefined4 *)((long)param_1 + 0x118c) = 0;
  *(undefined4 *)(param_1 + 0x232) = 1;
  param_1[0x22f] = param_2;
  param_1[0x230] = param_3;
  local_a0 = (long ****)&local_a0;
  local_98 = (long ****)&local_a0;
  while (cVar4 = FUN_1007ea210(&local_58), cVar4 == '\0') {
    *(int *)(param_1 + 0x232) = (int)param_1[0x232] + 1;
    plVar10 = (long *)0x0;
    if (param_1[1] != 0) {
      plVar10 = *(long **)(param_1[1] + 0x10);
    }
    (**(code **)(*plVar10 + 0xb8))(&local_68,plVar10,&local_58,0);
    local_50 = local_60;
    local_58 = local_68;
  }
  cVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    pcVar7 = *(code **)(*param_1 + 0x38);
    (**(code **)(*param_1 + 0x188))(local_78,param_1);
    uVar5 = (*pcVar7)(param_1,local_78,1,FUN_10056afc0,param_1);
  }
  while (*(int *)((long)param_1 + 0x118c) = *(int *)((long)param_1 + 0x118c) + 1, -1 < (int)uVar5) {
    plVar10 = (long *)0x0;
    if (param_1[1] != 0) {
      plVar10 = *(long **)(param_1[1] + 0x10);
    }
    (**(code **)(*plVar10 + 0xb8))(&local_88,plVar10,&local_48,0);
    local_50 = local_80;
    local_58 = local_88;
    if (local_90 != 0) {
      pppplVar1 = (long ****)*local_98;
      pppplVar1[1] = local_a0[1];
      *local_a0[1] = (long **)pppplVar1;
      local_90 = 0;
      ppppplVar9 = (long *****)local_98;
      while (ppppplVar9 != &local_a0) {
        ppppplVar2 = (long *****)ppppplVar9[1];
        operator_delete(ppppplVar9);
        ppppplVar9 = ppppplVar2;
      }
    }
    plVar10 = (long *)0x0;
    if (param_1[1] != 0) {
      plVar10 = *(long **)(param_1[1] + 0x10);
    }
    (**(code **)(*plVar10 + 0xc0))(&local_b8,plVar10,&local_58);
    plVar10 = local_b0;
    for (ppppplVar9 = (long *****)local_98;
        (plVar8 = &local_b8, plVar10 != &local_b8 && (plVar8 = plVar10, ppppplVar9 != &local_a0));
        ppppplVar9 = (long *****)ppppplVar9[1]) {
      pppplVar1 = (long ****)plVar10[2];
      ppppplVar9[3] = (long ****)plVar10[3];
      ppppplVar9[2] = pppplVar1;
      plVar10 = (long *)plVar10[1];
    }
    if (ppppplVar9 == &local_a0) {
      FUN_10057f090(&local_a0,&local_a0,plVar8,&local_b8,0);
    }
    else {
      pppplVar1 = *ppppplVar9;
      pppplVar1[1] = local_a0[1];
      *local_a0[1] = (long **)pppplVar1;
      do {
        ppppplVar2 = (long *****)ppppplVar9[1];
        local_90 = local_90 + -1;
        operator_delete(ppppplVar9);
        ppppplVar9 = ppppplVar2;
      } while (ppppplVar2 != &local_a0);
    }
    ppppplVar9 = (long *****)local_98;
    if (local_a8 != 0) {
      lVar3 = *local_b0;
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(local_b8 + 8);
      **(long **)(local_b8 + 8) = lVar3;
      local_a8 = 0;
      plVar10 = local_b0;
      while (local_98 = (long ****)ppppplVar9, plVar10 != &local_b8) {
        plVar8 = (long *)plVar10[1];
        operator_delete(plVar10);
        plVar10 = plVar8;
        ppppplVar9 = (long *****)local_98;
      }
    }
    for (; ppppplVar9 != &local_a0; ppppplVar9 = (long *****)ppppplVar9[1]) {
      iVar6 = FUN_1007ea6f0(ppppplVar9 + 2,&local_48);
      if ((iVar6 != 0) &&
         (((uVar5 = (**(code **)(*param_1 + 0x38))(param_1,ppppplVar9 + 2,0,0,0), (int)uVar5 < 0 ||
           (uVar5 = (**(code **)(*param_1 + 0x210))(param_1), (int)uVar5 < 0)) ||
          (uVar5 = (**(code **)(*param_1 + 0x218))(param_1), (int)uVar5 < 0)))) goto LAB_1005722f6;
    }
    cVar4 = FUN_1007ea210(&local_58);
    if (((cVar4 != '\0') ||
        (uVar5 = (**(code **)(*param_1 + 0x38))(param_1,&local_58,1), (int)uVar5 < 0)) ||
       ((uVar5 = (**(code **)(*param_1 + 0x210))(param_1), (int)uVar5 < 0 ||
        (uVar5 = (**(code **)(*param_1 + 0x218))(param_1), (int)uVar5 < 0)))) break;
  }
LAB_1005722f6:
  if (param_2 != 0) {
    uVar11 = 0x3ed;
    if ((int)uVar5 < 0) {
      uVar11 = (ulong)uVar5;
    }
    pcVar7 = (code *)param_1[0x22f];
    if ((pcVar7 != (code *)0x0) && ((char)param_1[0x231] != '\0')) {
      if ((int)uVar11 < 0x3e9) {
        if ((int)uVar5 < 0) {
          FUN_1008e3970("","vdisk",0,"Callback caught error 0x%x");
          pcVar7 = (code *)param_1[0x22f];
          uVar11 = (ulong)uVar5;
        }
        else {
          uVar11 = (ulong)(uint)(*(int *)((long)param_1 + 0x118c) * 1000 + (int)uVar11) /
                   (ulong)*(uint *)(param_1 + 0x232);
        }
      }
      iVar6 = (*pcVar7)(uVar11,1000,param_1[0x230]);
      *(bool *)(param_1 + 0x231) = -1 < (int)uVar5 && iVar6 != 0;
    }
  }
  if (local_90 != 0) {
    pppplVar1 = (long ****)*local_98;
    pppplVar1[1] = local_a0[1];
    *local_a0[1] = (long **)pppplVar1;
    local_90 = 0;
    ppppplVar9 = (long *****)local_98;
    while (ppppplVar9 != &local_a0) {
      ppppplVar2 = (long *****)ppppplVar9[1];
      operator_delete(ppppplVar9);
      ppppplVar9 = ppppplVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

