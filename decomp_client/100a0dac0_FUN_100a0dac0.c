
undefined8 FUN_100a0dac0(undefined8 param_1,undefined4 param_2)

{
  void *pvVar1;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  switch(param_2) {
  case 0:
    QString::fromUtf8_helper((char *)&local_60,0x1e3b23c);
    QString::operator=(&local_70,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
    break;
  case 1:
    QString::fromUtf8_helper((char *)&local_58,0x1e3b256);
    QString::operator=(&local_70,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_21 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
    break;
  case 2:
    QString::fromUtf8_helper((char *)&local_68,0x1e3b21c);
    QString::operator=(&local_70,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_21 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
    break;
  case 3:
    QString::fromUtf8_helper((char *)&local_50,0x1e3b26f);
    QString::operator=(&local_70,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_21 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
    break;
  case 4:
    QString::fromUtf8_helper((char *)&local_48,0x1e3b28e);
    QString::operator=(&local_70,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
    break;
  case 5:
    QString::fromUtf8_helper((char *)&local_40,0x1e3b2a8);
    QString::operator=(&local_70,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
    break;
  case 6:
    QString::fromUtf8_helper((char *)&local_38,0x1e3b2cd);
    QString::operator=(&local_70,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
    break;
  case 7:
    QString::fromUtf8_helper((char *)&local_30,0x1e3b2e5);
    QString::operator=(&local_70,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  if (DAT_102311290 == (void *)0x0) {
    pvVar1 = operator_new(0x20);
    FUN_100a0cb00(pvVar1);
    DAT_102280a60 = 1;
    DAT_102311290 = pvVar1;
  }
  FUN_100a0cbf0(&local_78,DAT_102311290);
  QString::arg(param_1,&local_70,&local_78,0,0x20);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a0de58;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100a0de58:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_70.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
  return param_1;
}

