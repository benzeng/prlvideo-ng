
void FUN_100268750(long param_1)

{
  int iVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  long lVar4;
  long local_a0;
  long local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  Data *local_58;
  QArrayData *local_50;
  QRegExp local_48 [8];
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  if (*(int *)(param_1 + 0x128) == 0) {
    FUN_100266d30(&local_88,param_1);
    if (1 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("","LocalDevices",2,"[CParallelPDF] Output to: %s",
                    local_90 + *(long *)(local_90 + 0x10));
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_29 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002688e8;
        }
        QArrayData::deallocate(local_90,1,8);
      }
    }
LAB_1002688e8:
    FUN_100412b40(*(undefined8 *)(param_1 + 0x130),param_1 + 0x118,&local_88);
    QObject::connect(&local_98,*(undefined8 *)(param_1 + 0x130),"2finished(bool)",param_1,
                     "1convertFinished(bool)",0);
    if (local_98 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_98);
    QObject::connect(&local_a0,*(undefined8 *)(param_1 + 0x130),"2progress(int)",param_1,
                     "1progressChanged(int)",0);
    if (local_a0 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
    FUN_100412d30(*(undefined8 *)(param_1 + 0x130));
    if (*(int *)local_88 == -1) {
      return;
    }
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_88;
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      if (*(int *)local_88 != 0) {
        return;
      }
      local_29 = 0;
    }
    goto LAB_100268cdb;
  }
  CVmDevice::getUserFriendlyName();
  CVmDevice::getSystemName();
  local_50 = (QArrayData *)QString::fromAscii_helper("\\(.*\\)",6);
  QRegExp::QRegExp(local_48,&local_50,1,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002687e8;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002687e8:
  QRegExp::indexIn(local_48,&local_38,0,0);
  QRegExp::capturedTexts();
  if (*(uint *)(local_58 + 0xc) - *(uint *)(local_58 + 8) == 1) {
    if (*(uint *)local_58 < 2) {
      iVar1 = (int)local_58 + 0x10 + *(uint *)(local_58 + 8) * 8;
    }
    else {
      FUN_100022c80(&local_58,*(uint *)(local_58 + 4));
      iVar1 = (int)local_58 + 0x10 + *(uint *)(local_58 + 8) * 8;
      if (1 < *(uint *)local_58) {
        FUN_100022c80(&local_58,*(uint *)(local_58 + 4));
      }
    }
    QString::mid((int)&local_70,iVar1);
    QString::operator=(&local_38,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_29 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100268aeb;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] Strange friendly printer name %s",
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100268a32;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_100268a32:
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
    QString::operator=(&local_38,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_29 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100268aeb;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
LAB_100268aeb:
  QString::toUtf8();
  pQVar3 = local_78;
  lVar4 = *(long *)(local_78 + 0x10);
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,
                "[CParallelPrinter] UI settings for printer: system name = %s, friendly name = %s",
                pQVar3 + lVar4,local_80 + *(long *)(local_80 + 0x10));
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100268b6c;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_100268b6c:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100268b9c;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_100268b9c:
  iVar1 = FUN_100264780(param_1 + 0x10,&local_40,&local_38,param_1 + 0x118,
                        *(undefined4 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x124));
  if (iVar1 < 0) {
    FUN_1008e3970("","LocalDevices",0,
                  "[CParallelPrinter] Print by GUI failed (0x%08x), start print directly",iVar1);
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100268c81;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar4 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = local_58 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar2;
        if (*(int *)pQVar3 == 0) {
LAB_100268c60:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar3 = *(QArrayData **)pDVar2;
            goto LAB_100268c60;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_100268c81:
  QRegExp::~QRegExp(local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100268cba;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100268cba:
  if (*(int *)local_38.field0_0x0 == -1) {
    return;
  }
  if (*(int *)local_38.field0_0x0 != 0) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_38.field0_0x0 != 0) {
      return;
    }
    local_29 = 0;
  }
LAB_100268cdb:
  QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  return;
}

