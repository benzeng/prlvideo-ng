
void FUN_100167c60(undefined8 param_1,undefined8 param_2,char param_3)

{
  code *pcVar1;
  long lVar2;
  _func_void_Node_ptr *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  CVmEventBase::getEventIssuerId();
  lVar2 = FUN_10015cb20(param_1,&local_30);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
    goto LAB_100167d16;
  }
  if (param_3 == '\0') {
    FUN_100800c40(param_1,0,&local_30);
  }
  local_38 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  FUN_1002ad220(lVar2,&local_38);
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_38 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100167cee;
    }
    QHashData::free_helper(local_38);
  }
LAB_100167cee:
  CAbstractTask::execute();
LAB_100167d16:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

