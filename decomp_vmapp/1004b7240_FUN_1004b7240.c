
undefined8 FUN_1004b7240(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QMapNodeBase *pQVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  long *local_58;
  QArrayData *local_50;
  QMapNodeBase *local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  uVar14 = param_1 + 0x18U | 1;
  if (*(char *)(param_1 + 0xa8) == '\0') goto LAB_1004b7605;
  local_40 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
  local_48 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
  lVar9 = FUN_100526710(*(undefined8 *)(param_1 + 0x10),&local_40,&local_48,0);
  if (*(char *)(param_1 + 0xa9) != '\0') {
    if (lVar9 != 0) {
      FUN_10052a5e0(lVar9);
    }
    *(undefined1 *)(param_1 + 0xa9) = 0;
  }
  uVar14 = param_1 + 0x18U & 0xfffffffffffffffe;
  QMutex::unlock();
  plVar10 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  uVar7 = 0;
  plVar11 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    *(undefined4 *)(plVar10 + 1) = 1;
    plVar10[2] = 0;
    *plVar10 = (long)&PTR_FUN_10111cc30;
    plVar11 = plVar10;
  }
  plVar10 = plVar11;
  if (lVar9 != 0) {
    plVar10 = (long *)FUN_100529f40(lVar9);
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar1 = plVar11 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    uVar7 = FUN_10052a540();
    QMutex::lock();
    local_50 = *(QArrayData **)(param_1 + 0x40);
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
    QMutex::unlock();
    FUN_1004b4c70(*(undefined8 *)(param_1 + 0x38),&local_50,lVar9);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004b73e4;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_1004b73e4:
  lVar9 = param_1 + 0x28;
  QMutex::lock();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (plVar10 != (long *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_58 = plVar10;
  FUN_1004b80b0(uVar4,&local_58,uVar7,&local_40,&local_48);
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar11 = local_58 + 1;
    lVar13 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  local_68 = FUN_1004bfa00(*(long *)(param_1 + 0x20) + 0x1030);
  uVar12 = 0;
  lVar13 = 0x984;
  do {
    lVar5 = *(long *)(param_1 + 0x50);
    iVar8 = *(int *)(lVar5 + -0x4c + lVar13);
    if (iVar8 != 0) {
      iVar2 = *(int *)(lVar5 + -4 + lVar13);
      iVar3 = *(int *)(lVar5 + lVar13);
      local_78._4_4_ = iVar3;
      local_78._0_4_ = iVar2;
      local_78._12_4_ = *(int *)(lVar5 + -0x48 + lVar13) + -1 + iVar3;
      local_78._8_4_ = iVar8 + -1 + iVar2;
      local_78 = QRect::operator&((QRect *)local_78,(QRect *)local_68);
      if (local_78._0_4_ <= (int)local_78._8_4_) {
        if (local_78._4_4_ <= (int)local_78._12_4_) {
          iVar8 = local_78._0_4_ - iVar2;
          local_78._4_4_ = local_78._4_4_ - iVar3;
          local_78._0_4_ = iVar8;
          local_78._8_4_ = local_78._8_4_ - iVar2;
          local_78._12_4_ = local_78._12_4_ - iVar3;
          FUN_1002aa8f0(*(undefined8 *)(param_1 + 0x50),uVar12 & 0xffffffff,iVar8,local_78._4_4_,
                        local_78._8_4_ + 1,local_78._12_4_ + 1,uVar14,lVar9);
        }
      }
    }
    uVar12 = uVar12 + 1;
    lVar13 = lVar13 + 0x8f0;
  } while (uVar12 < 0x10);
  FUN_1004bfaa0(*(long *)(param_1 + 0x20) + 0x1030);
  QMutex::unlock();
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  pQVar6 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b75c3;
    }
    if (*(long *)(local_48 + 0x10) != 0) {
      QMapDataBase::freeTree(local_48,(int)*(long *)(local_48 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar6);
  }
LAB_1004b75c3:
  pQVar6 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b7605;
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      QMapDataBase::freeTree(local_40,(int)*(long *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar6);
  }
LAB_1004b7605:
  if ((uVar14 & 1) != 0) {
    QMutex::unlock();
  }
  return 1;
}

