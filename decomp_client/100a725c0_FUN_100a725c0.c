
void FUN_100a725c0(QObject *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1022815c0;
  *(undefined ***)(param_1 + 0x10) = &PTR____cxa_pure_virtual_102281630;
  *(undefined ***)(param_1 + 0x18) = &PTR____cxa_pure_virtual_1022816b8;
  FUN_100a73d00(param_1 + 0x20,param_2,param_3,1,param_4,param_6,param_1 + 0x20);
  *(undefined ***)param_1 = &PTR_FUN_102239700;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102239870;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_1022398f8;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_102239978;
  *(undefined ***)(param_1 + 0x78) = &PTR_FUN_1022399a0;
  pvVar1 = operator_new(0xf0);
  FUN_100a92a20(pvVar1,param_1,2,0,param_5);
  *(void **)(param_1 + 0x80) = pvVar1;
  FUN_100a722a0();
  return;
}

