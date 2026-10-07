
undefined8 FUN_1005fd1f0(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  QString local_48;
  QString local_40;
  QDir local_38 [8];
  QFileInfo local_30 [8];
  QString local_28;
  undefined1 local_19;
  
  if (*param_1 == 0) {
    return 0x80000003;
  }
  lVar2 = *(long *)(*param_1 + 8);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (long *)param_1[1];
  param_1[1] = lVar2;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  plVar4 = (long *)0x0;
  if (param_1[1] != 0) {
    plVar4 = *(long **)(param_1[1] + 0x10);
  }
  cVar3 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_28);
  if (cVar3 == '\0') {
    uVar5 = 0x80021000;
    FUN_1008e3970("Backup","vdisk",0,"Unable to get path to disk descriptor");
    goto LAB_1005fd353;
  }
  QFileInfo::QFileInfo(local_30,&local_28);
  QFileInfo::absolutePath();
  QDir::QDir(local_38,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005fd2cb;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005fd2cb:
  QDir::canonicalPath();
  QString::operator=((QString *)(param_1 + 2),&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005fd318;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005fd318:
  QDir::~QDir(local_38);
  uVar5 = 0;
  QFileInfo::~QFileInfo(local_30);
LAB_1005fd353:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return uVar5;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return uVar5;
}

