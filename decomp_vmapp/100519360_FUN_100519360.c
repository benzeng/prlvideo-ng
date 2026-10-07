
void FUN_100519360(long param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  bool bVar13;
  int *local_68;
  QString *local_60;
  QString *local_58;
  int local_50;
  QString local_48;
  int *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  bVar13 = true;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  puVar6 = *(uint **)(param_1 + 0x10);
  if (1 < *puVar6) {
    FUN_10051b5e0();
    puVar6 = (uint *)*puVar1;
  }
  puVar5 = *(uint **)(puVar6 + 4);
  puVar9 = (uint *)0x0;
  if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
LAB_1005193fe:
    puVar12 = puVar6 + 2;
  }
  else {
    do {
      while (puVar12 = puVar5, uVar11 = puVar12[6], param_2 <= uVar11) {
        puVar5 = *(uint **)(puVar12 + 2);
        puVar9 = puVar12;
        if (*(uint **)(puVar12 + 2) == (uint *)0x0) goto LAB_1005193f9;
      }
      puVar5 = *(uint **)(puVar12 + 4);
    } while (*(uint **)(puVar12 + 4) != (uint *)0x0);
    if (puVar9 == (uint *)0x0) goto LAB_1005193fe;
    uVar11 = puVar9[6];
    puVar12 = puVar9;
LAB_1005193f9:
    if (param_2 < uVar11) goto LAB_1005193fe;
  }
  if (1 < *puVar6) {
    FUN_10051b5e0();
    puVar6 = (uint *)*puVar1;
  }
  if ((puVar12 == puVar6 + 2) || (plVar3 = *(long **)(puVar12 + 8), plVar3 == (long *)0x0))
  goto LAB_100519619;
  puVar12[8] = 0;
  puVar12[9] = 0;
  local_40 = (int *)PTR_shared_null_100ba2188;
  QMutex::lock();
  piVar8 = (int *)plVar3[2];
  plVar3[2] = (long)PTR_shared_null_100ba2188;
  local_40 = piVar8;
  QMutex::unlock();
  if (piVar8[3] == piVar8[2]) {
    FUN_10051b070(puVar1,puVar12);
  }
  else {
    FUN_10051afa0(puVar12 + 10,&local_40);
  }
  bVar13 = false;
  QMutex::unlock();
  FUN_100519700(plVar3);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_68 = piVar8;
  if (*piVar8 != -1) {
    if (*piVar8 == 0) {
      QListData::detach((int)&local_68);
      iVar2 = local_68[2];
      if (iVar2 != local_68[3]) {
        piVar8 = piVar8 + (long)piVar8[2] * 2 + 4;
        piVar10 = local_68 + (long)iVar2 * 2 + 4;
        lVar7 = (long)local_68[3] * 8 + (long)iVar2 * -8;
        do {
          piVar4 = *(int **)piVar8;
          *(int **)piVar10 = piVar4;
          if (1 < *piVar4 + 1U) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_31 = *piVar4 != 0;
            UNLOCK();
          }
          piVar10 = piVar10 + 2;
          piVar8 = piVar8 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *piVar8 = *piVar8 + 1;
      local_31 = *piVar8 != 0;
      UNLOCK();
    }
  }
  local_60 = (QString *)(local_68 + (long)local_68[2] * 2 + 4);
  local_58 = (QString *)(local_68 + (long)local_68[3] * 2 + 4);
  if (local_68[2] != local_68[3]) {
    do {
      local_50 = 1;
      QString::operator=(&local_48,local_60);
      if (local_50 != 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,2);
      }
      local_60 = local_60 + 1;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  FUN_100037320(&local_68);
  FUN_10051ad10(param_1,&local_40,param_2);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10051960c;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10051960c:
  FUN_100037320(&local_40);
LAB_100519619:
  if (bVar13) {
    QMutex::unlock();
  }
  return;
}

