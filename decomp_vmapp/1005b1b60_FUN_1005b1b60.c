
undefined8 FUN_1005b1b60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QFile local_40 [16];
  QString local_30;
  undefined1 local_21;
  
  FUN_1005b1f10(&local_30,param_1,param_2);
  QFile::QFile(local_40,&local_30);
  cVar2 = QFile::exists();
  uVar4 = 0;
  if (((cVar2 == '\0') || (cVar2 = QFile::remove(), cVar2 != '\0')) ||
     (uVar4 = 0x80021000, DAT_1011b55f8 < 2)) goto LAB_1005b1d05;
  QFile::fileName();
  QString::toUtf8();
  lVar1 = *(long *)(local_48 + 0x10);
  uVar3 = QFileDevice::error();
  QIODevice::errorString();
  QString::toUtf8();
  FUN_1008e3970("","vdisk",2,"Unable to remove [%s], err = [%d] \'%s\'",local_48 + lVar1,uVar3,
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b1c75;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1005b1c75:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b1ca5;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005b1ca5:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b1cd5;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1005b1cd5:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b1d05;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005b1d05:
  QFile::~QFile(local_40);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return uVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return uVar4;
}

