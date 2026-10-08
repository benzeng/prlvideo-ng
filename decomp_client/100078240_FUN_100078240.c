
void FUN_100078240(long param_1,QObject *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int *local_38;
  QObject *local_30;
  undefined1 local_21;
  
  if (2 < DAT_10230ffd0) {
    (*(code *)**(undefined8 **)param_2)(param_2);
    uVar1 = QMetaObject::className();
    FUN_100df99c0("[APP_RESUME]","prl_client_app",3,"Postpone showing of window %s",uVar1);
  }
  FUN_100079a70(0,param_2);
  piVar2 = (int *)0x0;
  if (param_2 != (QObject *)0x0) {
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  local_38 = piVar2;
  local_30 = param_2;
  FUN_10007b8d0(param_1 + 0x30,&local_38);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_21 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar2);
    }
  }
  return;
}

