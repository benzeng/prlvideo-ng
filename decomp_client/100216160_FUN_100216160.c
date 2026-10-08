
void FUN_100216160(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if (((param_1[5] == 0) || (*(int *)(param_1[5] + 4) == 0)) || (param_1[6] == 0))
  goto LAB_100216240;
  uVar2 = FUN_100794960();
  FUN_100796340(&local_28,uVar2,param_2);
  CAppliance::getApplianceId();
  cVar1 = operator==(&local_28,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10021620b;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10021620b:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10021623b;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_10021623b:
  if (cVar1 == '\0') {
    return;
  }
LAB_100216240:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

