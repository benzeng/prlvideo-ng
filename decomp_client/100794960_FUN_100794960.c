
QObject * FUN_100794960(void)

{
  QObject *this;
  undefined1 auVar1 [16];
  
  if (DAT_1023109e8 == (QObject *)0x0) {
    this = operator_new(0x20);
    QObject::QObject(this,(QObject *)0x0);
    *(undefined ***)this = &PTR_FUN_10222c380;
    auVar1._8_4_ = (int)PTR_shared_null_1021e15d0;
    auVar1._0_8_ = PTR_shared_null_1021e15d0;
    auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
    *(undefined1 (*) [16])(this + 0x10) = auVar1;
    DAT_1023109e8 = this;
  }
  return DAT_1023109e8;
}

