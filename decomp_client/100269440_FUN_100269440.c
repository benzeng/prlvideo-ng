
void FUN_100269440(long *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  lVar1 = 0;
  if ((param_1[0xb] != 0) && (lVar1 = 0, *(int *)(param_1[0xb] + 4) != 0)) {
    lVar1 = param_1[0xc];
  }
  FUN_1007b24d0(&local_38,lVar1);
  QString::operator=((QString *)(param_1 + 9),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002694b7;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1002694b7:
  lVar1 = 0;
  if ((param_1[0xb] != 0) && (lVar1 = 0, *(int *)(param_1[0xb] + 4) != 0)) {
    lVar1 = param_1[0xc];
  }
  FUN_1007b24f0(&local_40,lVar1);
  QString::operator=((QString *)(param_1 + 10),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100269519;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100269519:
  uVar2 = 0x80000275;
  if (param_2 == 1) {
    uVar2 = 0;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,uVar2);
  return;
}

