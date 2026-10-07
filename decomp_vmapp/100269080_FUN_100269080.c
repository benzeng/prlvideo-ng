
void FUN_100269080(long param_1,char param_2)

{
  int iVar1;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined1 local_40 [31];
  undefined1 local_21;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",2);
  }
  if (param_2 == '\0') {
    FUN_10006a060(local_40);
    local_58 = (void *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = 0;
    FUN_1000648b0(DAT_1011c3650,0x80009003,&local_58);
    if (local_58 != (void *)0x0) {
      if (pvStack_50 != local_58) {
        pvStack_50 = (void *)((~((long)pvStack_50 + (-4 - (long)local_58)) & 0xfffffffffffffffcU) +
                             (long)pvStack_50);
      }
      operator_delete(local_58);
    }
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",2);
    }
    FUN_10006a680(local_40);
  }
  else if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",2);
  }
  QObject::disconnect(*(QObject **)(param_1 + 0x130),(char *)0x0,(QObject *)0x0,(char *)0x0);
  if (*(char *)(param_1 + 0x110) == '\0') {
    QFile::remove((QString *)(param_1 + 0x118));
    return;
  }
  local_60 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_10050fa80(1,&local_60,0);
  local_80 = (QArrayData *)QString::fromAscii_helper("%1/%2/Parallels_Spool_%3.ps",0x1b);
  FUN_1006fbe60(&local_88);
  QString::arg(&local_78,&local_80,&local_88,0,0x20);
  QString::arg(&local_70,&local_78,&local_60,0,0x20);
  iVar1 = _rand();
  QString::arg(&local_68,&local_70,(long)iVar1,0,10,0x20);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100269264;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100269264:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100269294;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100269294:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002692c4;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002692c4:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002692f4;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002692f4:
  if (2 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("","LocalDevices",3,"[CParallelPDF] Save spool file to %s",
                  local_90 + *(long *)(local_90 + 0x10));
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10026936c;
      }
      QArrayData::deallocate(local_90,1,8);
    }
  }
LAB_10026936c:
  QFile::rename((QString *)(param_1 + 0x118),&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002693af;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002693af:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return;
}

