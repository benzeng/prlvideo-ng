
void * FUN_100787e20(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  char *pcVar3;
  
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  if (lVar1 == 0) {
    lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    if (lVar1 == 0) {
      if (param_2 == (undefined8 *)0x0) {
        pcVar3 = "n/a";
      }
      else {
        (**(code **)*param_2)(param_2);
        pcVar3 = (char *)QMetaObject::className();
      }
      pvVar2 = (void *)0x0;
      FUN_100df99c0("","prl_client_app",0,"Unsupported context %p [%s]",param_2,pcVar3);
    }
    else {
      pvVar2 = operator_new(0x50);
      FUN_1007881d0(pvVar2,param_1,lVar1);
    }
  }
  else {
    pvVar2 = operator_new(0x50);
    FUN_1007880f0(pvVar2,param_1,lVar1);
  }
  return pvVar2;
}

