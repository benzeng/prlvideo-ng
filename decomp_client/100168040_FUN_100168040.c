
void FUN_100168040(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  if (param_3 != 0x186b1) {
    return;
  }
  CVmEventBase::getEventIssuerId();
  lVar1 = FUN_10015cb20(param_1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_1001680a0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1001680a0:
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error:  can\'t get VM instance.");
  }
  else {
    FUN_100192380(lVar1);
  }
  return;
}

