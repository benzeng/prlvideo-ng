
undefined1 FUN_1000f89b0(undefined8 param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  QString *pQVar6;
  QArrayData *local_d8;
  undefined1 local_d0 [48];
  long local_a0;
  QString local_40;
  QFile local_38 [16];
  QArrayData *local_28;
  undefined1 local_19;
  
  pQVar6 = (QString *)0x0;
  if (*param_2 != 0) {
    pQVar6 = *(QString **)(*param_2 + 0x10);
  }
  QFile::QFile(local_38,pQVar6);
  cVar2 = QFile::exists();
  if (cVar2 != '\0') {
    puVar4 = (undefined8 *)0x0;
    if (*param_2 != 0) {
      puVar4 = *(undefined8 **)(*param_2 + 0x10);
    }
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar4;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_28,0x1db6890);
    QString::append(&local_40);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1000f8a63;
      }
      QArrayData::deallocate(local_28,2,8);
    }
LAB_1000f8a63:
    QString::toUtf8();
    iVar3 = _stat_INODE64(local_d8 + *(long *)(local_d8 + 0x10),local_d0);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_19 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1000f8ac2;
      }
      QArrayData::deallocate(local_d8,1,8);
    }
LAB_1000f8ac2:
    if ((iVar3 != 0) || (bVar1 = true, *(long *)(*(long *)(*param_2 + 0x10) + 0x18) != local_a0)) {
      bVar1 = false;
    }
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1000f8b13;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1000f8b13:
    uVar5 = 1;
    if (bVar1) goto LAB_1000f8b1c;
  }
  uVar5 = 0;
LAB_1000f8b1c:
  QFile::~QFile(local_38);
  return uVar5;
}

