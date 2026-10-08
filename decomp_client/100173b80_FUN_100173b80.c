
void FUN_100173b80(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  QArrayData *local_38;
  undefined1 local_2a;
  
  uVar1 = CVmEventBase::getEventType();
  CVmEventBase::getEventIssuerId();
  lVar2 = FUN_10015cb20(param_1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_100173bed;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100173bed:
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: vm object is null");
  }
  else {
    FUN_100190070(lVar2,uVar1);
  }
  return;
}

