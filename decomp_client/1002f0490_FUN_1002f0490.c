
void FUN_1002f0490(long param_1,int param_2)

{
  undefined8 uVar1;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  FUN_100df99c0("","prl_client_app",0,"Deploy Id generation completed with %x",param_2);
  if (param_2 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002f05ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))(*(long **)(param_1 + 0x10),0x3bfa);
    return;
  }
  CSdkRequest::getResultAsString((int)&local_30);
  QString::operator=((QString *)(param_1 + 0x78),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002f052f;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1002f052f:
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Deploy Id = \'%s\'",local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002f0591;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1002f0591:
  if (*(int *)(*(long *)(param_1 + 0x78) + 4) == 0) {
    uVar1 = 0x3bfa;
  }
  else {
    uVar1 = 0;
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))(*(long **)(param_1 + 0x10),uVar1);
  return;
}

