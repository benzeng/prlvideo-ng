
void FUN_1002c05a0(long *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined1 local_b0 [104];
  QString local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (param_2 < 0) {
    QString::operator=((QString *)(param_1 + 5),(QString *)(param_1 + 3));
    *(int *)(param_1 + 6) = (int)param_1[4];
    goto LAB_1002c068c;
  }
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102206250);
  local_48.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar1 + 0x80);
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  local_40 = *(undefined4 *)(lVar1 + 0x88);
  QString::operator=((QString *)(param_1 + 5),&local_48);
  *(undefined4 *)(param_1 + 6) = local_40;
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c0646;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002c0646:
  FUN_100260700(local_b0,lVar1 + 0x18);
  FUN_100287aa0(param_1 + 7,local_b0);
  FUN_10005e410(local_b0);
LAB_1002c068c:
  iVar2 = 0;
  if ((((*(byte *)(param_1 + 0x18) & 1) != 0) && (iVar2 = param_2, -1 < param_2)) &&
     (iVar2 = -0x7ffffff7, (int)param_1[7] != 0xff)) {
    iVar2 = 0;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,iVar2);
  return;
}

