
void FUN_1003dd760(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  char local_3a;
  char local_39;
  QString local_38;
  undefined1 local_29;
  
  puVar2 = PTR_shared_null_100ba20d0;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  lVar5 = FUN_100264550(param_1,&local_38,2,0,0xa00,0);
  if (lVar5 == 0) {
    FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] can\'t create spool file");
    goto LAB_1003dd815;
  }
  *(undefined4 *)(param_1 + 0x114) = 1;
  iVar4 = FUN_10026ad40(param_2,lVar5,param_1 + 0x110,param_1 + 0x114,&local_39,&local_3a);
  if (local_39 != '\0') {
    FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] PS Query job was dropped");
    goto LAB_1003dd815;
  }
  if (iVar4 == 0) {
    QString::toUtf8();
    FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] Failed to pull data to file %s",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003dd815;
      }
      QArrayData::deallocate(local_48,1,8);
    }
    goto LAB_1003dd815;
  }
  if ((*(char *)(param_1 + 0x101) == '\0') ||
     (bVar3 = FUN_10009e450(), (bVar3 & local_3a == '\0') != 1)) {
    FUN_1003dde00(param_1,&local_38);
  }
  else {
    FUN_1008e3970("","LocalDevices",0,
                  "[CParallelPrinter] Printed document hasn\'t got EOF, skip printing");
  }
  if (*(char *)(param_1 + 0x100) == '\0') {
    QFile::remove(&local_38);
    goto LAB_1003dd815;
  }
  local_50 = (QArrayData *)puVar2;
  FUN_10050fa80(1,&local_50,0);
  local_70 = (QArrayData *)QString::fromAscii_helper("%1/%2/Parallels_Spool_%3.ps",0x1b);
  FUN_1006fbe60(&local_78);
  QString::arg(&local_68,&local_70,&local_78,0,0x20);
  QString::arg(&local_60,&local_68,&local_50,0,0x20);
  iVar4 = _rand();
  QString::arg(&local_58,&local_60,(long)iVar4,0,10,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003dd976;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003dd976:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003dd9a6;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003dd9a6:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003dd9d6;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003dd9d6:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003dda06;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003dda06:
  QString::toUtf8();
  lVar1 = *(long *)(local_80 + 0x10);
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] %s ---> %s",local_80 + lVar1,
                local_88 + *(long *)(local_88 + 0x10));
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003dda87;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_1003dda87:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ddab7;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_1003ddab7:
  QFile::rename(&local_38,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ddaf4;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1003ddaf4:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003dd815;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003dd815:
  FUN_100264750(param_1,lVar5);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

