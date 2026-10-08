
void FUN_1002673d0(long *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long local_30;
  _func_void_Node_ptr *local_28;
  undefined1 local_19;
  
  if ((((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) ||
     (lVar1 = FUN_10018d490(), lVar1 == 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar2 = 0x80000009;
  }
  else {
    if (param_3 == 1) {
      lVar1 = 0;
      if ((param_1[3] != 0) && (lVar1 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar1 = param_1[4];
      }
      local_28 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
      uVar2 = FUN_1002ad220(lVar1,&local_28);
      if (*(int *)(local_28 + 0x10) != -1) {
        if (*(int *)(local_28 + 0x10) != 0) {
          LOCK();
          UNRECOVERED_JUMPTABLE = local_28 + 0x10;
          *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + -1;
          local_19 = *(int *)UNRECOVERED_JUMPTABLE != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10026747a;
        }
        QHashData::free_helper(local_28);
      }
LAB_10026747a:
      QObject::connect(&local_30,uVar2,"2taskFinished(PRL_RESULT)",param_1,
                       "1subTaskCompleted(PRL_RESULT)",0);
      if (local_30 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar2 = 0x80000275;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002674d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
  return;
}

