
void FUN_100173c70(undefined8 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  CVmEventBase::getEventIssuerId();
  lVar1 = FUN_10015cb20(param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100173ccd;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100173ccd:
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
  }
  else {
    FUN_10018f4f0(lVar1,(param_3 == '\0') + '\x01');
  }
  return;
}

