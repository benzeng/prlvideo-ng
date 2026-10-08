
void FUN_10078b430(QObject *param_1,undefined8 param_2,undefined8 param_3,QObject *param_4)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_10222b890;
  uVar1 = FUN_10078b5a0(param_1,param_2,param_3);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

