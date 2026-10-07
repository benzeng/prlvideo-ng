
QThread * FUN_100767090(void)

{
  QThread *this;
  ulong uVar1;
  
  if (DAT_1011ccb88 == (QThread *)0x0) {
    this = operator_new(0x58);
    QThread::QThread(this,(QObject *)0x0);
    *(undefined ***)this = &PTR_metaObject_100bced50;
    *(undefined8 *)(this + 0x10) = 0;
    uVar1 = FUN_1007784a0();
    *(ulong *)(this + 0x20) = uVar1 / 1000000;
    *(undefined4 *)(this + 0x28) = 0xffffffff;
    this[0x38] = (QThread)0x0;
    *(undefined4 *)(this + 0x3c) = 0xffffffff;
    *(undefined4 *)(this + 0x40) = 0xffffffff;
    *(undefined ***)this = &PTR_metaObject_1011a5720;
    *(undefined8 *)(this + 0x48) = 0;
    this[0x50] = (QThread)0x0;
    DAT_1011ccb88 = this;
  }
  return DAT_1011ccb88;
}

