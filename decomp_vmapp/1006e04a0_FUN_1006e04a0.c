
QString * FUN_1006e04a0(QString *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  puVar1 = PTR_shared_null_100ba20d0;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  uVar2 = param_3 >> 8;
  if ((param_3 < 0x806) || (uVar2 != 8)) {
    if ((uVar2 - 0xf < 2) || (uVar2 == 9)) {
      QString::fromUtf8_helper((char *)&local_30,0xae9136);
      QString::operator=(&local_48,&local_30);
      if (*(int *)local_30.field0_0x0 != -1) {
        if (*(int *)local_30.field0_0x0 != 0) {
          LOCK();
          *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
          local_19 = *(int *)local_30.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1006e0641;
        }
        QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
      }
    }
    else if (uVar2 == 7) {
      QString::fromUtf8_helper((char *)&local_38,0xae9124);
      QString::operator=(&local_48,&local_38);
      if (*(int *)local_38.field0_0x0 != -1) {
        if (*(int *)local_38.field0_0x0 != 0) {
          LOCK();
          *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
          local_19 = *(int *)local_38.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1006e0641;
        }
        QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      }
    }
    else {
      QString::fromUtf8_helper((char *)&local_28,0xae9148);
      QString::operator=(&local_48,&local_28);
      if (*(int *)local_28.field0_0x0 != -1) {
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          local_19 = *(int *)local_28.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1006e0641;
        }
        QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
      }
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_40,0xae9112);
    QString::operator=(&local_48,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006e0641;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_1006e0641:
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  if (*(int *)(local_48.field0_0x0 + 4) == 0) goto LAB_1006e06ed;
  FUN_1006e01a0(&local_58);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_19 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::append(&local_50);
  QString::operator=(param_1,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_19 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e06bd;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1006e06bd:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e06ed;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006e06ed:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

