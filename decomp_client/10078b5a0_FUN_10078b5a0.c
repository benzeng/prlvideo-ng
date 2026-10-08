
undefined8 * FUN_10078b5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  if (lVar2 == 0) {
    lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    if (lVar2 == 0) {
      FUN_100060bb0();
      uVar1 = FUN_100060e10(param_2);
      FUN_100df99c0("","prl_client_app",0,"Unsupported context %p of type %d",param_2,uVar1);
      return (undefined8 *)0x0;
    }
    puVar3 = operator_new(0x38);
    FUN_10078b4e0(puVar3,param_1,param_2,param_3);
    puVar4 = &DAT_10222bac8;
  }
  else {
    puVar3 = operator_new(0x38);
    FUN_10078b4e0(puVar3,param_1,param_2,param_3);
    puVar4 = &DAT_10222ba38;
  }
  *puVar3 = puVar4 + 0x10;
  return puVar3;
}

