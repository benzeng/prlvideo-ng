
void FUN_100317360(QObject *param_1,QObject *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220b860;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(QObject **)(param_1 + 0x18) = param_2;
  FUN_10018c250(param_1 + 0x20,param_2);
  FUN_100188480(param_1 + 0x28,param_2);
  puVar1 = PTR_shared_null_1021e12f0;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e12f0;
  *(undefined4 *)(param_1 + 0x40) = 2;
  *(undefined **)(param_1 + 0x48) = puVar1;
  param_1[0x50] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  ___bzero(param_1 + 0x60,0x90);
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined **)(param_1 + 0x118) = PTR_shared_null_1021e15e8;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  param_1[0x160] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  QKeySequence::QKeySequence((QKeySequence *)(param_1 + 0x178));
  FUN_100321b00("CVmDesktop::GuestAppStatus",0,1);
  return;
}

