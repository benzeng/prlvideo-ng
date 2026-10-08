
QString * FUN_100d30430(QString *param_1,long param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QString local_80;
  QString local_78;
  QString local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  undefined4 local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar1 = (QTypedArrayData<unsigned_short> *)
           QString::fromAscii_helper("VBOX DISK IMAGE DESCRIPTOR 1",0x1c);
  param_1->field0_0x0 = pQVar1;
  if (*(int *)(*(long *)(param_2 + 8) + 0xc) == *(int *)(*(long *)(param_2 + 8) + 8)) {
    QString::fromUtf8_helper((char *)&local_48,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
  else {
    FUN_100d30c50(&local_68,param_2 + 8);
    local_60 = local_68 + (long)local_68[2] * 2 + 4;
    local_58 = local_68 + (long)local_68[3] * 2 + 4;
    if (local_68[2] != local_68[3]) {
      do {
        local_50 = 1;
        QString::fromUtf8_helper((char *)&local_80,0x1eeaa60);
        QString::append(&local_80);
        local_78.field0_0x0 = local_80.field0_0x0;
        if (1 < *(int *)local_80.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_40,0x1e31af0);
        QString::append(&local_78);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d305aa;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_100d305aa:
        local_70.field0_0x0 = local_78.field0_0x0;
        if (1 < *(int *)local_78.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_70);
        QString::append(param_1);
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d3060e;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_100d3060e:
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d3063e;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
LAB_100d3063e:
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d3066e;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_100d3066e:
        local_60 = local_60 + 2;
      } while (local_60 != local_58);
    }
    local_50 = 1;
    if (*local_68 != -1) {
      if (*local_68 != 0) {
        LOCK();
        *local_68 = *local_68 + -1;
        UNLOCK();
        if (*local_68 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      FUN_100d30b30(&local_68,local_68);
    }
  }
  return param_1;
}

