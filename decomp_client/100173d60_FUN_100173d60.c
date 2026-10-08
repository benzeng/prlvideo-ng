
void FUN_100173d60(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_30;
  undefined1 local_22;
  
  iVar1 = CVmEventBase::getEventCode();
  if (iVar1 != -0x7fff8000) {
    return;
  }
  CVmEventBase::getEventIssuerId();
  lVar2 = FUN_10015cb20(param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100173dd3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100173dd3:
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance to handle error request.")
    ;
  }
  else {
    uVar3 = FUN_10018f4e0(lVar2);
    lVar2 = FUN_1007c65b0(uVar3,0xf,0);
    if (lVar2 != 0) {
      QWidget::setDisabled(SUB81(lVar2,0));
    }
  }
  return;
}

