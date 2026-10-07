
int FUN_1005ef760(long *param_1,long *param_2,undefined4 *param_3,undefined4 *param_4)

{
  QString *this;
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  QString *pQVar6;
  QArrayData *local_b8;
  QString local_b0;
  QString local_a8;
  QArrayData *local_a0;
  char local_91;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*param_2 == 0) {
    return -0x7ffdefe0;
  }
  lVar5 = *(long *)(*param_2 + 0x10);
  if (lVar5 == 0) {
    return -0x7ffdefe0;
  }
  lVar5 = ___dynamic_cast(lVar5,&PTR_vtable_10111e100,&PTR_vtable_10111e2d0,0);
  if (lVar5 == 0) {
    return -0x7ffdefe0;
  }
  QMutex::lock();
  this = (QString *)(param_3 + 2);
  uVar3 = FUN_1005db030(this,&local_91);
  if (local_91 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Error: can\'t get ID from VMDK image name %s",
                  local_a0 + *(long *)(local_a0 + 0x10));
    iVar4 = -0x7ffdefdb;
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005efda3;
      }
      QArrayData::deallocate(local_a0,1,8);
    }
    goto LAB_1005efda3;
  }
  local_a8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_4 + 2);
  if (1 < *(int *)local_a8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
    local_31 = *(int *)local_a8.field0_0x0 != 0;
    UNLOCK();
  }
  local_b0.field0_0x0 = this->field0_0x0;
  if (1 < *(int *)local_b0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + 1;
    local_31 = *(int *)local_b0.field0_0x0 != 0;
    UNLOCK();
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (uVar3 != 0) {
    local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
    pQVar6 = (QString *)QString::sprintf((char *)&local_48,"-%06u",(ulong)uVar3);
    QString::operator=(&local_40,pQVar6);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ef89f;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1005ef89f:
  local_58 = (QArrayData *)
             QString::fromAscii_helper(".*((-\\d{6})?(-f\\d{3}|-s\\d{3}|-flat)?(\\.vmdk))$",0x2e);
  QRegExp::QRegExp((QRegExp *)&local_50,&local_58,1,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ef8f8;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005ef8f8:
  local_60 = (QArrayData *)local_a8.field0_0x0;
  if (1 < *(int *)local_a8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
    local_31 = *(int *)local_a8.field0_0x0 != 0;
    UNLOCK();
  }
  QRegExp::indexIn(&local_50,&local_60,0,0);
  iVar4 = QRegExp::captureCount();
  if (iVar4 == 0) {
    bVar2 = false;
  }
  else {
    QRegExp::cap((int)&local_68);
    local_78 = (QArrayData *)QString::fromAscii_helper("%1\\3\\4",6);
    QString::arg(&local_70,&local_78,&local_40,0,0x20);
    QString::replace((QRegExp *)&local_60,&local_50);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ef9b7;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1005ef9b7:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ef9e7;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1005ef9e7:
    QRegExp::cap((int)&local_90);
    QString::left((int)&local_88);
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_88;
    if (1 < *(int *)local_88 + 1U) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
    QString::append(&local_80);
    QString::operator=(&local_a8,&local_80);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005efa88;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_1005efa88:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005efab8;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1005efab8:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005efaee;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1005efaee:
    bVar2 = true;
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005efbb8;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_1005efbb8:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efbe8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005efbe8:
  QRegExp::~QRegExp((QRegExp *)&local_50);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efc21;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005efc21:
  if (bVar2) {
    QString::operator=(this,&local_a8);
    iVar4 = (**(code **)(*param_1 + 0x120))(param_1,param_3);
    if (iVar4 < 0) {
      QString::operator=(this,&local_b0);
    }
    else {
      uVar1 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar1;
      iVar4 = 0;
      if ((param_1[9] == 0) && (*(int *)(lVar5 + 8) == 0)) {
        lVar5 = *(long *)(param_3 + 6);
        param_1[0xb] = *(long *)(param_3 + 8);
        param_1[10] = lVar5;
      }
    }
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Error: not VMDK name %s",local_b8 + *(long *)(local_b8 + 0x10));
    iVar4 = -0x7ffdefdb;
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005efd30;
      }
      QArrayData::deallocate(local_b8,1,8);
    }
  }
LAB_1005efd30:
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efd6d;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1005efd6d:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005efda3;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1005efda3:
  QMutex::unlock();
  return iVar4;
}

