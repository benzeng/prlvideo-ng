
void FUN_10068a4d0(undefined8 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  QVariant local_38;
  
  uVar2 = FUN_100dddcf0(param_2);
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"License update finished: %s",uVar2);
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)&PTR_PTR_102209400);
  if (lVar3 == 0) {
    uVar2 = FUN_100dddcf0(param_2);
    pcVar4 = "License update finished: %s but can\'t get task";
  }
  else {
    lVar3 = FUN_1002c6ac0(lVar3);
    if (lVar3 != 0) {
      QObject::property((char *)&local_38);
      uVar1 = QVariant::toBool();
      QVariant::~QVariant(&local_38);
      FUN_10084c590(param_1,param_2,uVar1);
      return;
    }
    uVar2 = FUN_100dddcf0(param_2);
    pcVar4 = "License update finished: %s but can\'t get request";
  }
  FUN_100df99c0("[LICENSE]","prl_client_app",0,pcVar4,uVar2);
  FUN_10084c590(param_1,param_2,1);
  return;
}

