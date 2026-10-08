
undefined1 FUN_100a481a0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  byte bVar3;
  undefined8 ****ppppuVar4;
  long *plVar5;
  long lVar6;
  char cVar7;
  long *plVar8;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 uVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 local_68;
  undefined8 ****local_60;
  undefined8 ****local_58;
  long local_50;
  undefined8 ****local_48;
  undefined8 ****local_40;
  undefined8 ****local_38;
  
  plVar8 = operator_new(0x68);
  *(undefined4 *)(plVar8 + 1) = 1;
  *plVar8 = (long)&PTR_FUN_1022810d0;
  plVar8[0xc] = 0;
  plVar8[0xb] = 0;
  plVar8[10] = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plVar8[3] = 0;
  plVar8[2] = 0;
  pppppuVar16 = &local_58;
  local_50 = 0;
  local_58 = (undefined8 ****)0x0;
  local_60 = pppppuVar16;
  pppppuVar9 = operator_new(0x30);
  *(undefined4 *)(pppppuVar9 + 4) = 2;
  pppppuVar9[5] = (undefined8 ****)0x0;
  pppppuVar9[1] = (undefined8 ****)0x0;
  *pppppuVar9 = (undefined8 ****)0x0;
  pppppuVar9[2] = pppppuVar16;
  if ((undefined8 *****)*local_60 != (undefined8 *****)0x0) {
    local_60 = (undefined8 ****)*local_60;
  }
  local_58 = pppppuVar9;
  FUN_1001879a0(pppppuVar9,pppppuVar9);
  local_50 = local_50 + 1;
  ppppuVar10 = operator_new(0x18);
  *(undefined4 *)(ppppuVar10 + 1) = 1;
  *ppppuVar10 = (undefined8 ***)&PTR_FUN_102281158;
  ppppuVar10[2] = (undefined8 ***)((long)plVar8 + 0xc);
  LOCK();
  *(int *)(ppppuVar10 + 1) = *(int *)(ppppuVar10 + 1) + 1;
  UNLOCK();
  ppppuVar4 = pppppuVar9[5];
  pppppuVar9[5] = ppppuVar10;
  if (ppppuVar4 != (undefined8 ****)0x0) {
    LOCK();
    ppppuVar1 = ppppuVar4 + 1;
    iVar2 = *(int *)ppppuVar1;
    *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)(*ppppuVar4)[2])();
    }
  }
  LOCK();
  ppppuVar4 = ppppuVar10 + 1;
  iVar2 = *(int *)ppppuVar4;
  *(int *)ppppuVar4 = *(int *)ppppuVar4 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (*(code *)(*ppppuVar10)[2])(ppppuVar10);
  }
  pppppuVar9 = (undefined8 *****)local_58;
  pppppuVar17 = pppppuVar16;
  pppppuVar12 = pppppuVar16;
  if ((undefined8 *****)local_58 != (undefined8 *****)0x0) {
    do {
      while (pppppuVar11 = pppppuVar9, pppppuVar17 = pppppuVar11, 3 < *(uint *)(pppppuVar11 + 4)) {
        pppppuVar9 = (undefined8 *****)*pppppuVar11;
        pppppuVar12 = pppppuVar11;
        if ((undefined8 *****)*pppppuVar11 == (undefined8 *****)0x0) goto LAB_100a48371;
      }
      if (2 < *(uint *)(pppppuVar11 + 4)) {
        local_48 = pppppuVar11;
        if (pppppuVar11 != (undefined8 *****)0x0) goto LAB_100a483c6;
        pppppuVar12 = &local_48;
        goto LAB_100a48371;
      }
      pppppuVar9 = (undefined8 *****)pppppuVar11[1];
    } while ((undefined8 *****)pppppuVar11[1] != (undefined8 *****)0x0);
    pppppuVar12 = pppppuVar11 + 1;
  }
LAB_100a48371:
  local_48 = pppppuVar17;
  pppppuVar11 = operator_new(0x30);
  *(undefined4 *)(pppppuVar11 + 4) = 3;
  pppppuVar11[5] = (undefined8 ****)0x0;
  pppppuVar11[1] = (undefined8 ****)0x0;
  *pppppuVar11 = (undefined8 ****)0x0;
  pppppuVar11[2] = pppppuVar17;
  *pppppuVar12 = pppppuVar11;
  pppppuVar9 = pppppuVar11;
  if ((undefined8 *****)*local_60 != (undefined8 *****)0x0) {
    pppppuVar9 = (undefined8 *****)*pppppuVar12;
    local_60 = (undefined8 ****)*local_60;
  }
  FUN_1001879a0(local_58,pppppuVar9);
  local_50 = local_50 + 1;
LAB_100a483c6:
  ppppuVar10 = operator_new(0x18);
  *(undefined4 *)(ppppuVar10 + 1) = 1;
  *ppppuVar10 = (undefined8 ***)&PTR_FUN_1022811a8;
  ppppuVar10[2] = (undefined8 ***)(plVar8 + 2);
  LOCK();
  *(int *)(ppppuVar10 + 1) = *(int *)(ppppuVar10 + 1) + 1;
  UNLOCK();
  ppppuVar4 = pppppuVar11[5];
  pppppuVar11[5] = ppppuVar10;
  if (ppppuVar4 != (undefined8 ****)0x0) {
    LOCK();
    ppppuVar1 = ppppuVar4 + 1;
    iVar2 = *(int *)ppppuVar1;
    *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)(*ppppuVar4)[2])();
    }
  }
  LOCK();
  ppppuVar4 = ppppuVar10 + 1;
  iVar2 = *(int *)ppppuVar4;
  *(int *)ppppuVar4 = *(int *)ppppuVar4 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (*(code *)(*ppppuVar10)[2])(ppppuVar10);
  }
  pppppuVar9 = (undefined8 *****)local_58;
  pppppuVar17 = pppppuVar16;
  pppppuVar12 = pppppuVar16;
  if ((undefined8 *****)local_58 != (undefined8 *****)0x0) {
    do {
      while (pppppuVar11 = pppppuVar9, pppppuVar17 = pppppuVar11, 4 < *(uint *)(pppppuVar11 + 4)) {
        pppppuVar9 = (undefined8 *****)*pppppuVar11;
        pppppuVar12 = pppppuVar11;
        if ((undefined8 *****)*pppppuVar11 == (undefined8 *****)0x0) goto LAB_100a484b1;
      }
      if (3 < *(uint *)(pppppuVar11 + 4)) {
        local_40 = pppppuVar11;
        if (pppppuVar11 != (undefined8 *****)0x0) goto LAB_100a48506;
        pppppuVar12 = &local_40;
        goto LAB_100a484b1;
      }
      pppppuVar9 = (undefined8 *****)pppppuVar11[1];
    } while ((undefined8 *****)pppppuVar11[1] != (undefined8 *****)0x0);
    pppppuVar12 = pppppuVar11 + 1;
  }
LAB_100a484b1:
  local_40 = pppppuVar17;
  pppppuVar11 = operator_new(0x30);
  *(undefined4 *)(pppppuVar11 + 4) = 4;
  pppppuVar11[5] = (undefined8 ****)0x0;
  pppppuVar11[1] = (undefined8 ****)0x0;
  *pppppuVar11 = (undefined8 ****)0x0;
  pppppuVar11[2] = pppppuVar17;
  *pppppuVar12 = pppppuVar11;
  pppppuVar9 = pppppuVar11;
  if ((undefined8 *****)*local_60 != (undefined8 *****)0x0) {
    pppppuVar9 = (undefined8 *****)*pppppuVar12;
    local_60 = (undefined8 ****)*local_60;
  }
  FUN_1001879a0(local_58,pppppuVar9);
  local_50 = local_50 + 1;
LAB_100a48506:
  ppppuVar10 = operator_new(0x18);
  *(undefined4 *)(ppppuVar10 + 1) = 1;
  *ppppuVar10 = (undefined8 ***)&PTR_FUN_1022811a8;
  ppppuVar10[2] = (undefined8 ***)(plVar8 + 5);
  LOCK();
  *(int *)(ppppuVar10 + 1) = *(int *)(ppppuVar10 + 1) + 1;
  UNLOCK();
  ppppuVar4 = pppppuVar11[5];
  pppppuVar11[5] = ppppuVar10;
  if (ppppuVar4 != (undefined8 ****)0x0) {
    LOCK();
    ppppuVar1 = ppppuVar4 + 1;
    iVar2 = *(int *)ppppuVar1;
    *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)(*ppppuVar4)[2])();
    }
  }
  LOCK();
  ppppuVar4 = ppppuVar10 + 1;
  iVar2 = *(int *)ppppuVar4;
  *(int *)ppppuVar4 = *(int *)ppppuVar4 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (*(code *)(*ppppuVar10)[2])(ppppuVar10);
  }
  pppppuVar9 = (undefined8 *****)local_58;
  pppppuVar17 = pppppuVar16;
  if ((undefined8 *****)local_58 != (undefined8 *****)0x0) {
    do {
      while (pppppuVar12 = pppppuVar9, pppppuVar16 = pppppuVar12, 5 < *(uint *)(pppppuVar12 + 4)) {
        pppppuVar9 = (undefined8 *****)*pppppuVar12;
        pppppuVar17 = pppppuVar12;
        if ((undefined8 *****)*pppppuVar12 == (undefined8 *****)0x0) goto LAB_100a485e1;
      }
      if (4 < *(uint *)(pppppuVar12 + 4)) {
        local_38 = pppppuVar12;
        if (pppppuVar12 != (undefined8 *****)0x0) goto LAB_100a48636;
        pppppuVar17 = &local_38;
        goto LAB_100a485e1;
      }
      pppppuVar9 = (undefined8 *****)pppppuVar12[1];
    } while ((undefined8 *****)pppppuVar12[1] != (undefined8 *****)0x0);
    pppppuVar17 = pppppuVar12 + 1;
  }
LAB_100a485e1:
  local_38 = pppppuVar16;
  pppppuVar12 = operator_new(0x30);
  *(undefined4 *)(pppppuVar12 + 4) = 5;
  pppppuVar12[5] = (undefined8 ****)0x0;
  pppppuVar12[1] = (undefined8 ****)0x0;
  *pppppuVar12 = (undefined8 ****)0x0;
  pppppuVar12[2] = pppppuVar16;
  *pppppuVar17 = pppppuVar12;
  pppppuVar16 = pppppuVar12;
  if ((undefined8 *****)*local_60 != (undefined8 *****)0x0) {
    pppppuVar16 = (undefined8 *****)*pppppuVar17;
    local_60 = (undefined8 ****)*local_60;
  }
  FUN_1001879a0(local_58,pppppuVar16);
  local_50 = local_50 + 1;
LAB_100a48636:
  ppppuVar10 = operator_new(0x20);
  *(undefined4 *)(ppppuVar10 + 1) = 1;
  *ppppuVar10 = (undefined8 ***)&PTR_FUN_102238368;
  ppppuVar10[2] = (undefined8 ***)(plVar8 + 8);
  ppppuVar10[3] = (undefined8 ***)(plVar8 + 10);
  LOCK();
  *(int *)(ppppuVar10 + 1) = *(int *)(ppppuVar10 + 1) + 1;
  UNLOCK();
  ppppuVar4 = pppppuVar12[5];
  pppppuVar12[5] = ppppuVar10;
  if (ppppuVar4 != (undefined8 ****)0x0) {
    LOCK();
    ppppuVar1 = ppppuVar4 + 1;
    iVar2 = *(int *)ppppuVar1;
    *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)(*ppppuVar4)[2])();
    }
  }
  LOCK();
  ppppuVar4 = ppppuVar10 + 1;
  iVar2 = *(int *)ppppuVar4;
  *(int *)ppppuVar4 = *(int *)ppppuVar4 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (*(code *)(*ppppuVar10)[2])(ppppuVar10);
  }
  local_68 = 0;
  cVar7 = FUN_100a47580(param_3,*(undefined4 *)(param_2 + 4),&local_60,&local_68,1);
  if (cVar7 == '\0') {
    uVar15 = 0;
  }
  else {
    bVar3 = *(byte *)(plVar8 + 2);
    if ((bVar3 & 1) == 0) {
      uVar13 = (ulong)(bVar3 >> 1);
    }
    else {
      uVar13 = plVar8[3];
    }
    if (uVar13 == 0) {
      uVar15 = 0;
    }
    else {
      bVar3 = *(byte *)(plVar8 + 5);
      if ((bVar3 & 1) == 0) {
        uVar13 = (ulong)(bVar3 >> 1);
      }
      else {
        uVar13 = plVar8[6];
      }
      if (uVar13 == 0) {
        uVar15 = 0;
      }
      else {
        plVar5 = *(long **)(param_1 + 0x10);
        plVar14 = operator_new(0x18);
        plVar14[2] = (long)plVar8;
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        plVar14[1] = (long)plVar5;
        lVar6 = *plVar5;
        *plVar14 = lVar6;
        *(long **)(lVar6 + 8) = plVar14;
        *plVar5 = (long)plVar14;
        plVar5[2] = plVar5[2] + 1;
        uVar15 = 1;
      }
    }
  }
  FUN_100a36e50(&local_60,local_58);
  LOCK();
  plVar5 = plVar8 + 1;
  lVar6 = *plVar5;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)lVar6 == 1) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return uVar15;
}

