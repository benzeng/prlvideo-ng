
void FUN_10020a940(long *param_1,int param_2,QString *param_3)

{
  int *piVar1;
  void *pvVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  QString local_40;
  undefined1 local_33;
  undefined1 local_31;
  
  lVar5 = 0;
  if ((param_1[5] != 0) && (lVar5 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar5 = param_1[6];
  }
  lVar4 = QObject::sender();
  if (lVar5 != lVar4) {
    return;
  }
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  cVar3 = operator==(param_3,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_33 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_10020a9d8;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10020a9d8:
  if (cVar3 != '\0') {
    piVar1 = (int *)param_1[0x28];
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_31 = *piVar1 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (pvVar2 = (void *)param_1[0x28], pvVar2 != (void *)0x0)) {
        operator_delete(pvVar2);
      }
      param_1[0x29] = 0;
      param_1[0x28] = 0;
    }
    if (param_2 < 0) {
      (**(code **)(*param_1 + 0xb0))(param_1,param_2);
    }
    FUN_10080eb10(param_1,100);
  }
  return;
}

