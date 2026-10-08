
void FUN_1002bbf80(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined1 uVar3;
  QString *pQVar4;
  QString local_30;
  undefined1 local_21;
  
  iVar2 = CAbstractTask::getCurrentSubTask();
  if (iVar2 != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001002bc0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
    return;
  }
  uVar3 = false;
  if ((param_1[10] != 0) && (uVar3 = false, *(int *)(param_1[10] + 4) != 0)) {
    uVar3 = (undefined1)param_1[0xb];
  }
  pQVar4 = (QString *)0x0;
  CProgressDialog::setCancelButtonEnabled((bool)uVar3);
  if ((param_1[10] != 0) && (pQVar4 = (QString *)0x0, *(int *)(param_1[10] + 4) != 0)) {
    pQVar4 = (QString *)param_1[0xb];
  }
  QMetaObject::tr((char *)&local_30,(char *)&PTR_staticMetaObject_102208250,0x1de3dc2);
  puVar1 = PTR_shared_null_1021e1288;
  CProgressDialog::setText(pQVar4,&local_30);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002bc041;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1002bc041:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002bc071;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1002bc071:
  QProcess::terminate();
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}

