
QObject * FUN_10068d360(void)

{
  undefined *puVar1;
  QObject *this;
  undefined1 auVar2 [16];
  
  if (DAT_102310960 == (QObject *)0x0) {
    this = operator_new(0x28);
    QObject::QObject(this,(QObject *)0x0);
    *(undefined ***)this = &PTR_FUN_1021f5390;
    puVar1 = PTR_shared_null_1021e15d0;
    auVar2._8_4_ = (int)PTR_shared_null_1021e15d0;
    auVar2._0_8_ = PTR_shared_null_1021e15d0;
    auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
    *(undefined1 (*) [16])(this + 0x10) = auVar2;
    *(undefined **)(this + 0x20) = puVar1;
    DAT_102310960 = this;
  }
  return DAT_102310960;
}

