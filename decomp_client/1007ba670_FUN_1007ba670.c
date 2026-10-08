
void FUN_1007ba670(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_3 != 1) {
    return;
  }
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001547d0(uVar1,param_1 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = FUN_10015a340(lVar2);
  QVariant::toString();
  plVar4 = (long *)FUN_100113a40(*(undefined8 *)(lVar3 + 0x180),&local_40);
  if (plVar4 == (long *)0x0) goto LAB_1007ba74d;
  pvVar5 = operator_new(0x48);
  (**(code **)(*plVar4 + 0xb8))(&local_48,plVar4);
  FUN_1002cc100(pvVar5,lVar2,&local_48,param_1 + 0x10);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ba745;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007ba745:
  CAbstractTask::execute();
LAB_1007ba74d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

