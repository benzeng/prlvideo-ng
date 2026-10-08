
void FUN_100acc7d0(long param_1,uint param_2)

{
  undefined4 uVar1;
  QString local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QString local_78;
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
  
  QTimer::stop();
  *(undefined1 *)(param_1 + 0x81) = 0;
  uVar1 = 1;
  if (param_2 < 6) {
    uVar1 = *(undefined4 *)(&DAT_101cd7810 + (long)(int)param_2 * 4);
  }
  if (DAT_10230ffd0 < 1) goto LAB_100accd79;
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  switch(uVar1) {
  case 1:
    QString::fromUtf8_helper((char *)&local_88,0x1e42c65);
    QString::operator=(&local_98,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_21 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
    break;
  case 2:
    QString::fromUtf8_helper((char *)&local_80,0x1e42c8b);
    QString::operator=(&local_98,&local_80);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_21 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
    break;
  case 3:
    QString::fromUtf8_helper((char *)&local_78,0x1e42cb1);
    QString::operator=(&local_98,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_21 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
    break;
  case 4:
    QString::fromUtf8_helper((char *)&local_70,0x1e42cd0);
    QString::operator=(&local_98,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_21 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
    break;
  case 5:
    QString::fromUtf8_helper((char *)&local_68,0x1e42ced);
    QString::operator=(&local_98,&local_68);
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
  case 6:
    QString::fromUtf8_helper((char *)&local_60,0x1e42d12);
    QString::operator=(&local_98,&local_60);
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
  case 7:
    QString::fromUtf8_helper((char *)&local_58,0x1e42d3c);
    QString::operator=(&local_98,&local_58);
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
  case 8:
    QString::fromUtf8_helper((char *)&local_50,0x1e42d67);
    QString::operator=(&local_98,&local_50);
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
  case 9:
    QString::fromUtf8_helper((char *)&local_48,0x1e42d8e);
    QString::operator=(&local_98,&local_48);
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
  case 10:
    QString::fromUtf8_helper((char *)&local_40,0x1e42db8);
    QString::operator=(&local_98,&local_40);
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
  case 0xb:
    QString::fromUtf8_helper((char *)&local_38,0x1e42dd5);
    QString::operator=(&local_98,&local_38);
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
  case 0xc:
    QString::fromUtf8_helper((char *)&local_30,0x1e42df5);
    QString::operator=(&local_98,&local_30);
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
  QString::toUtf8();
  FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                "CoherenceToolClient: OnCannotStart(vmReason = %d; clientReason = %s)",param_2,
                local_90 + *(long *)(local_90 + 0x10));
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100accd43;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100accd43:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_21 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100accd79;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100accd79:
  FUN_100ae0ef0(param_1,uVar1);
  return;
}

