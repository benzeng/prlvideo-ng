
void FUN_10026d3c0(long *param_1,int param_2)

{
  undefined1 uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  if (param_2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar3 = 0x80000107;
LAB_10026d521:
                    /* WARNING: Could not recover jumptable at 0x00010026d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar3);
    return;
  }
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102226bd0);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","pDlg",
                  "Tasks/CTaskCloneVm.cpp",0xf1,"onCloneVmParametersDialogFinished");
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar3 = 0x80000009;
    goto LAB_10026d521;
  }
  FUN_100727a70(&local_38,lVar2);
  QString::operator=((QString *)(param_1 + 9),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026d44b;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10026d44b:
  FUN_100727a90(&local_40,lVar2);
  QString::operator=((QString *)(param_1 + 10),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026d499;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10026d499:
  uVar1 = FUN_100728e40(lVar2);
  *(undefined1 *)((long)param_1 + 0x5c) = uVar1;
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

