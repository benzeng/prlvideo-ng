
void FUN_10079d210(QObject *param_1,undefined8 param_2)

{
  int iVar1;
  QArrayData *local_38;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222c6b0;
  CAppliance::CAppliance((CAppliance *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x160) = 1;
  CAppliance::getApplianceId();
  iVar1 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_10079d2d0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10079d2d0:
  if (iVar1 != 0) {
    FUN_10079d330(param_1,param_2);
  }
  return;
}

