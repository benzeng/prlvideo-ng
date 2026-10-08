
void FUN_1000eff40(long param_1)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  QObject *pQVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  bool bVar11;
  long *local_70;
  QArrayData *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined *local_38;
  undefined1 local_29;
  
  local_38 = PTR_shared_null_1021e15e8;
  FUN_1000f1440(&local_60,param_1 + 0x48);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar2 = local_58[2];
      if (iVar2 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar9 = local_58 + (long)iVar2 * 2 + 4;
        lVar7 = (long)local_58[3] * 8 + (long)iVar2 * -8;
        do {
          piVar3 = *(int **)local_60;
          *(int **)piVar9 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_29 = *piVar3 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          local_60 = local_60 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_29 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  FUN_100039a80(&local_60);
  if (local_40 != 0) {
    do {
      if (local_50 == local_48) break;
      local_68 = *(QArrayData **)local_50;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
      }
      if ((local_40 != 0) &&
         (cVar5 = QtPrivate::QStringList_contains(param_1 + 0x30,&local_68,1), cVar5 == '\0')) {
        FUN_1000341d0(&local_38,&local_68);
        local_40 = 0;
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_29 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000f00bf;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1000f00bf:
      local_50 = local_50 + 2;
      uVar6 = local_40 ^ 1;
      bVar11 = local_40 != 1;
      local_40 = uVar6;
    } while (bVar11);
  }
  FUN_100039a80(&local_58);
  if (*(int *)(local_38 + 0xc) != *(int *)(local_38 + 8)) {
    plVar8 = operator_new(0x18);
    pQVar4 = *(QObject **)(param_1 + 0x10);
    *plVar8 = (long)&PTR_FUN_10226d2b0;
    lVar7 = 0;
    if (pQVar4 != (QObject *)0x0) {
      lVar7 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    }
    plVar8[1] = lVar7;
    plVar8[2] = (long)pQVar4;
    local_70 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    bVar11 = local_70 == (long *)0x0;
    if (bVar11) {
      (**(code **)(*plVar8 + 8))(plVar8);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      local_70 = (long *)0x0;
    }
    else {
      *(undefined4 *)(local_70 + 1) = 1;
      local_70[2] = (long)plVar8;
      *local_70 = (long)&PTR_FUN_10226ca80;
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    plVar8 = local_70;
    FUN_10032fa90(uVar10,&local_70,&local_38);
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    if (!bVar11) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  FUN_100039a80(&local_38);
  return;
}

