
undefined8 * FUN_10053ab80(undefined8 *param_1,long param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QMutex::lock();
  if ((((*(int *)(*param_3 + 4) == 0) || (*(int *)(*(long *)(param_2 + 0x58) + 4) == 0)) ||
      (*(int *)(*(long *)(param_2 + 0x48) + 4) == 0)) ||
     (cVar2 = QString::startsWith(param_3,param_2 + 0x58,0), cVar2 == '\0')) {
    *param_1 = PTR_shared_null_100ba20d0;
    goto LAB_10053ace1;
  }
  QString::mid((int)&local_48,(int)param_3);
  local_40.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x48);
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053ac57;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10053ac57:
  sVar3 = QDir::separator();
  uVar4 = QDir::separator();
  uVar6 = 0x2f;
  if (sVar3 == 0x2f) {
    uVar6 = 0x5c;
  }
  puVar5 = (undefined8 *)QString::replace(&local_40,uVar6,uVar4,1);
  piVar1 = (int *)*puVar5;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053ace1;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10053ace1:
  QMutex::unlock();
  return param_1;
}

