
undefined8 FUN_100524610(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  long *plVar16;
  bool bVar17;
  bool bVar18;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  
  uVar5 = *(ushort *)(param_2 + 0x14);
  if (uVar5 < 8) {
    return 0xf0000003;
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  local_38 = 0x100000001;
  FUN_1005253a0(param_1,&local_38,8);
  puVar10 = (uint *)FUN_1002a6010(param_2);
  bVar17 = true;
  if (0xb < uVar5) {
    bVar17 = puVar10[2] != 0;
  }
  local_48 = 0;
  FUN_100525550(&local_40,param_1,&local_48);
  plVar2 = local_40;
  if (local_40 == (long *)0x0) {
    bVar18 = false;
  }
  else {
    bVar18 = local_40[2] != 0;
  }
  if (bVar17 || bVar18) {
    plVar16 = local_40;
    if (local_40 == (long *)0x0) {
      return 0xf000000e;
    }
  }
  else {
    QMutex::lock();
    plVar16 = *(long **)(param_1 + 0x88);
    if (plVar16 != (long *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    QMutex::unlock();
    if (plVar16 != (long *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    plVar9 = plVar16;
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        lVar8 = *local_40;
        local_40 = plVar16;
        (**(code **)(lVar8 + 0x10))(plVar2);
        plVar9 = local_40;
      }
    }
    local_40 = plVar9;
    if (plVar16 == (long *)0x0) {
      return 0xf000000e;
    }
    LOCK();
    plVar2 = plVar16 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  uVar15 = 0xf000000e;
  if (plVar16[2] == 0) goto switchD_1005247ba_caseD_1;
  lVar8 = plVar16[2];
  iVar12 = *(int *)(lVar8 + 8);
  uVar6 = *(uint *)(lVar8 + 0x18);
  uVar7 = *(uint *)(lVar8 + 0x1c);
  uVar15 = 0xf000001c;
  if (8 < *(uint *)(lVar8 + 4)) goto switchD_1005247ba_caseD_1;
  iVar3 = (uVar6 - 1) + *(int *)(lVar8 + 0x20);
  iVar4 = (uVar7 - 1) + *(int *)(lVar8 + 0x24);
  switch(*(uint *)(lVar8 + 4)) {
  case 0:
    uVar13 = iVar12 + -1 + *(int *)(lVar8 + 0x10);
    if ((int)uVar13 <= (int)uVar6) {
      uVar13 = uVar6;
    }
    uVar13 = uVar13 + 1;
    goto LAB_1005247d7;
  case 1:
    goto switchD_1005247ba_caseD_1;
  case 2:
    if (iVar3 <= iVar12) {
      iVar12 = iVar3;
    }
    uVar13 = (iVar12 + -1) - *puVar10;
LAB_1005247d7:
    if (iVar4 < (int)(puVar10[1] + *(int *)(lVar8 + 0x2c))) {
      uVar14 = iVar4 - puVar10[1];
    }
    else {
      uVar14 = *(int *)(lVar8 + 0x2c) - 0x14;
      if ((int)uVar14 < (int)uVar7) {
        uVar14 = uVar7;
      }
    }
    break;
  case 3:
    uVar7 = *puVar10;
    uVar11 = *(int *)(lVar8 + 0x28) - (uVar7 >> 1);
    uVar13 = uVar6;
    if (((int)uVar6 <= (int)uVar11) && (uVar13 = uVar11, iVar3 < (int)(uVar11 + uVar7))) {
      uVar13 = iVar3 - uVar7;
    }
    iVar12 = *(int *)(lVar8 + 0xc);
    if (iVar4 <= *(int *)(lVar8 + 0xc)) {
      iVar12 = iVar4;
    }
    uVar14 = (iVar12 + -1) - puVar10[1];
    break;
  case 4:
    uVar13 = *(uint *)(lVar8 + 0x28);
    uVar14 = *(int *)(lVar8 + 0x2c) - puVar10[1];
    break;
  case 5:
    uVar13 = *(int *)(lVar8 + 0x28) - *puVar10;
    uVar14 = *(int *)(lVar8 + 0x2c) - puVar10[1];
    break;
  case 6:
    uVar13 = *(uint *)(lVar8 + 0x28);
    uVar14 = *(uint *)(lVar8 + 0x2c);
    break;
  case 7:
    uVar13 = *(int *)(lVar8 + 0x28) - *puVar10;
    uVar14 = *(uint *)(lVar8 + 0x2c);
    break;
  case 8:
    uVar11 = *(uint *)(lVar8 + 0x28);
    if (iVar3 < (int)(*puVar10 + uVar11)) {
      uVar11 = (iVar3 + -1) - *puVar10;
    }
    uVar13 = uVar6 + 1;
    if ((int)uVar6 <= (int)uVar11) {
      uVar13 = uVar11;
    }
    uVar11 = *(uint *)(lVar8 + 0x2c);
    if (iVar4 < (int)(puVar10[1] + uVar11)) {
      uVar11 = (iVar4 + -1) - puVar10[1];
    }
    uVar14 = uVar7 + 1;
    if ((int)uVar7 <= (int)uVar11) {
      uVar14 = uVar11;
    }
  }
  if ((((int)uVar6 <= (int)uVar13) && ((int)uVar13 <= iVar3)) && ((int)uVar14 <= iVar4)) {
    *puVar10 = uVar13;
    puVar10[1] = uVar14;
    uVar15 = 0;
  }
switchD_1005247ba_caseD_1:
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar2 = plVar16 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  return uVar15;
}

