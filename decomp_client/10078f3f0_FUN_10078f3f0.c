
void FUN_10078f3f0(QObject *param_1,QObject *param_2)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222bba0;
  uVar1 = FUN_10078cbc0(param_1,param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

