
void FUN_100798810(QObject *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1011a59e0;
  *(undefined ***)(param_1 + 0x10) = &PTR____cxa_pure_virtual_1011a5a50;
  *(undefined ***)(param_1 + 0x18) = &PTR____cxa_pure_virtual_1011a5ad8;
  FUN_10078e7f0(param_1 + 0x20,param_2,param_3,1,param_4,param_6,param_1 + 0x20);
  *(undefined ***)param_1 = &PTR_FUN_100bcf9a0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bcfb10;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_100bcfb98;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_100bcfc18;
  *(undefined ***)(param_1 + 0x78) = &PTR_FUN_100bcfc40;
  pvVar1 = operator_new(0xf0);
  FUN_1007b8860(pvVar1,param_1,2,0,param_5);
  *(void **)(param_1 + 0x80) = pvVar1;
  FUN_1007984f0();
  return;
}

