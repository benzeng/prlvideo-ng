
void FUN_1000cfe10(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  QFileInfo local_40 [8];
  long *local_38;
  QString local_30;
  undefined1 local_21;
  
  if (*(int *)(*param_3 + 4) == 0) {
    return;
  }
  if (*(int *)(*param_2 + 4) == 0) {
    return;
  }
  cVar3 = FUN_100100c40(*(long *)(param_1 + 0x50) + 0x38,param_3,param_2);
  if (cVar3 == '\0') {
    return;
  }
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QMutex::lock();
  FUN_1000f8c40(&local_38,param_1 + 0x1a0,param_2);
  if ((local_38 != (long *)0x0) && ((QString *)local_38[2] != (QString *)0x0)) {
    QString::operator=(&local_30,(QString *)local_38[2]);
  }
  QMutex::unlock();
  if (*(int *)(local_30.field0_0x0 + 4) == 0) goto LAB_1000cff6a;
  QFileInfo::QFileInfo(local_40,&local_30);
  QFileInfo::completeBaseName();
  lVar2 = *(long *)(param_1 + 0x50);
  FUN_1000463e0(&local_50,&local_48,param_1 + 0x10,0);
  FUN_100100cf0(lVar2 + 0x38,param_2,&local_50,&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000cff31;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000cff31:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000cff61;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000cff61:
  QFileInfo::~QFileInfo(local_40);
LAB_1000cff6a:
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

