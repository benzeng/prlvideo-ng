
undefined8 FUN_100762400(QThread *param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bced50;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar2 = FUN_1007784a0();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  *(ulong *)(param_1 + 0x20) = uVar2 / 1000000;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  param_1[0x38] = (QThread)0x0;
  *(undefined8 *)(param_1 + 0x3c) = 0xffffffffffffffff;
  return SUB168(auVar1 * ZEXT816(0x431bde82d7b634db),0);
}

