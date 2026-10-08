
void FUN_10020aa90(long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  lVar3 = 0;
  if ((param_1[5] != 0) && (lVar3 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar3 = param_1[6];
  }
  lVar2 = QObject::sender();
  if (lVar3 != lVar2) {
    return;
  }
  FUN_100188480(&local_30,param_2);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  cVar1 = operator==(&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10020ab2c;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10020ab2c:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10020ab5c;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10020ab5c:
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}

