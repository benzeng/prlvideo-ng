
void FUN_100169850(undefined8 param_1)

{
  long lVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  CVmEventBase::getEventIssuerId();
  lVar1 = FUN_10015cb20(param_1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_1001698a8;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1001698a8:
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance to update configuration.")
    ;
  }
  else {
    FUN_100192380(lVar1);
  }
  return;
}

