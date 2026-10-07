
void FUN_1000d24f0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  QArrayData *local_b8;
  QString local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  long *local_70;
  QString local_68;
  QFileInfo local_60 [8];
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QFileInfo::QFileInfo(local_60,&local_68);
  QFileInfo::operator=((QFileInfo *)(param_1 + 0x330),local_60);
  QFileInfo::~QFileInfo(local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000d2585;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1000d2585:
  if ((*param_2 == 0) || (*(long *)(*param_2 + 0x10) == 0)) {
    QFileInfo::absolutePath();
    local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_b8;
    if (1 < *(int *)local_b8 + 1U) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + 1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0xa02eac);
    QString::append(&local_b0);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000d295e;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1000d295e:
    local_a8.field0_0x0 = local_b0.field0_0x0;
    if (1 < *(int *)local_b0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + 1;
      local_29 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_38,0x9e81e9);
    QString::append(&local_a8);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000d29d2;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1000d29d2:
    QString::operator=((QString *)(param_1 + 0x1e0),&local_a8);
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_29 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000d2a1b;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
LAB_1000d2a1b:
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_29 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000d2a51;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_1000d2a51:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_29 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000d2a87;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
    goto LAB_1000d2a87;
  }
  FUN_10011a560(&local_70,param_2);
  lVar6 = 0;
  if (local_70 != (long *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    lVar6 = local_70[2];
    LOCK();
    plVar3 = local_70 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  QFileInfo::absolutePath();
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
  if (1 < *(int *)local_98 + 1U) {
    LOCK();
    *(int *)local_98 = *(int *)local_98 + 1;
    local_29 = *(int *)local_98 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x9ecb20);
  QString::append(&local_90);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000d265d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000d265d:
  local_88.field0_0x0 = local_90.field0_0x0;
  if (1 < *(int *)local_90.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
    local_29 = *(int *)local_90.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0xa02eac);
  QString::append(&local_88);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000d26cb;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000d26cb:
  FUN_10012d350(&local_a0,lVar6);
  local_80.field0_0x0 = local_88.field0_0x0;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_29 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_80);
  local_78.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_29 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x9e81f7);
  QString::append(&local_78);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000d276e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000d276e:
  QString::operator=((QString *)(param_1 + 0x1e0),&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000d27ae;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1000d27ae:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000d27de;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1000d27de:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000d2814;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1000d2814:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000d2844;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1000d2844:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_29 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000d287a;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1000d287a:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000d28b0;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1000d28b0:
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
LAB_1000d2a87:
  plVar3 = operator_new(0x38);
  uVar4 = FUN_100097250(*(undefined8 *)(param_1 + 0x2b0));
  FUN_1000e8fd0(plVar3,uVar4,*(undefined8 *)(param_1 + 0x2b0));
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  bVar7 = plVar5 == (long *)0x0;
  if (bVar7) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    plVar5 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = (long)plVar3;
    *plVar5 = (long)&PTR_FUN_100beffd0;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  plVar3 = *(long **)(param_1 + 0x368);
  *(long **)(param_1 + 0x368) = plVar5;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (!bVar7) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  uVar4 = 0;
  if (*(long *)(param_1 + 0x368) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x368) + 0x10);
  }
  FUN_1000e9520(uVar4,param_1 + 0x1e0,1);
  return;
}

