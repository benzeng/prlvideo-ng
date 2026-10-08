
undefined8 FUN_100b10730(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_130 [9];
  undefined4 local_e8;
  undefined8 local_e0 [9];
  undefined4 local_98;
  undefined4 local_90 [2];
  undefined8 local_88 [9];
  undefined4 local_40;
  QArrayData *local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  puVar5 = param_3;
  puVar6 = local_130;
  for (lVar3 = 0x13; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined4 *)puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = (undefined8 *)((long)puVar6 + 4);
  }
  pQVar2 = *(QArrayData **)(param_3 + 0x14);
  iVar4 = *(int *)pQVar2;
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
    local_90[0] = CONCAT31(local_90[0]._1_3_,*(int *)pQVar2 != 0);
    iVar4 = *(int *)pQVar2;
  }
  puVar6 = local_130;
  puVar7 = local_e0;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_98 = local_e8;
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
    iVar4 = *(int *)pQVar2;
  }
  local_90[0] = param_2;
  puVar6 = local_e0;
  puVar7 = local_88;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_40 = local_e8;
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
  }
  local_38 = pQVar2;
  FUN_100b12470(param_1,local_90);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b10837;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b10837:
  if (*(int *)pQVar2 == -1) goto LAB_100b1089c;
  if (*(int *)pQVar2 == 0) {
LAB_100b10859:
    QArrayData::deallocate(pQVar2,2,8);
  }
  else {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + -1;
    UNLOCK();
    if (*(int *)pQVar2 == 0) goto LAB_100b10859;
  }
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b1089c;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b1089c:
  if (lVar1 == local_30) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

