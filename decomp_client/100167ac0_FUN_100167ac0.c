
void FUN_100167ac0(undefined8 param_1)

{
  long lVar1;
  QArrayData *local_28;
  undefined1 local_19;
  
  CVmEventBase::getEventIssuerId();
  lVar1 = FUN_10015cb20(param_1,&local_28);
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
  }
  else {
    FUN_1001902d0(lVar1,0);
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

