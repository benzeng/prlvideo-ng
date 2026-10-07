
void FUN_1000aa320(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  QArrayData *local_38;
  QString local_30;
  QDir local_28 [15];
  undefined1 local_19;
  
  if (*(long *)(param_1 + 0x1a50) == 0) {
    return;
  }
  iVar2 = (**(code **)(**(long **)(param_1 + 0x1950) + 0x150))();
  if (iVar2 != 0) {
    FUN_1008e3970("","vm",0,"failed to dump the monitor!");
    return;
  }
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QDir::QDir(local_28,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000aa3cd;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1000aa3cd:
  QDir::cdUp();
  uVar1 = *(undefined8 *)(param_1 + 0x1a50);
  QDir::absolutePath();
  FUN_1000f6080(uVar1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000aa426;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000aa426:
  QDir::~QDir(local_28);
  return;
}

