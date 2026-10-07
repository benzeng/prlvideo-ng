
undefined8 * FUN_10053f710(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  lVar4 = 1;
  do {
    QString::QString(&local_68,0x2f);
    local_60.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 8);
    if (1 < *(int *)local_60.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_60);
    local_58.field0_0x0 = local_60.field0_0x0;
    if (1 < *(int *)local_60.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_58);
    local_50.field0_0x0 = local_58.field0_0x0;
    if (1 < *(int *)local_58.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_50);
    QString::operator=(&local_40,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053f811;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_10053f811:
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053f841;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10053f841:
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053f871;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_10053f871:
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053f8a1;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_10053f8a1:
    pcVar1 = DAT_10111d688;
    QString::toUtf8();
    iVar2 = (*pcVar1)(local_70 + *(long *)(local_70 + 0x10),0x1ed);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053f8f7;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_10053f8f7:
    if (iVar2 == 0) {
      *param_1 = local_40.field0_0x0;
      if (1 < *(int *)local_40.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
      }
      goto LAB_10053fa4e;
    }
    piVar3 = ___error();
    iVar2 = *piVar3;
    if (iVar2 != 0x11) {
      QString::toUtf8();
      FUN_1008e3970("","InvSharingHost",0,"failed to create directory for mountpoint: %d, %s",iVar2,
                    local_78 + *(long *)(local_78 + 0x10));
      if (*(int *)local_78 == -1) goto LAB_10053fa3d;
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053fa3d;
      }
      QArrayData::deallocate(local_78,1,8);
      goto LAB_10053fa3d;
    }
    QString::setNum((longlong)&local_48,(int)lVar4);
    QString::insert(&local_48,0,0x20);
    lVar4 = lVar4 + 1;
  } while (lVar4 < 1000);
  QString::toUtf8();
  FUN_1008e3970("","InvSharingHost",0,"too many mountpoints with name %s",
                local_80 + *(long *)(local_80 + 0x10));
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053fa3d;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_10053fa3d:
  *param_1 = PTR_shared_null_100ba20d0;
LAB_10053fa4e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053fa7e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10053fa7e:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

