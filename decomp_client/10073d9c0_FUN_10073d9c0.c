
void FUN_10073d9c0(undefined8 *param_1)

{
  QObject *this;
  undefined8 uVar1;
  void *pvVar2;
  
  this = operator_new(0x10);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  QObject::QObject(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_FUN_102274d50;
  uVar1 = FUN_10073db70(this,0);
  *param_1 = uVar1;
  pvVar2 = operator_new(0x18);
  FUN_10073cbf0(pvVar2);
  uVar1 = FUN_10073dc70(pvVar2,0);
  param_1[1] = uVar1;
  return;
}

