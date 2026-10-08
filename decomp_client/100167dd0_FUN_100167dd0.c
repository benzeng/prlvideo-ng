
void FUN_100167dd0(undefined8 param_1,undefined8 param_2,char param_3)

{
  code *pcVar1;
  long lVar2;
  _func_void_Node_ptr *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CVmEventBase::getEventIssuerId();
  lVar2 = FUN_10015cb20(param_1,&local_38);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
    goto LAB_100167e96;
  }
  if (param_3 == '\0') {
    FUN_100800c40(param_1,0,&local_38);
  }
  else {
    FUN_100800ca0(param_1,&local_38);
  }
  local_40 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  FUN_1002ad220(lVar2,&local_40);
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100167e8e;
    }
    QHashData::free_helper(local_40);
  }
LAB_100167e8e:
  CAbstractTask::execute();
LAB_100167e96:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

