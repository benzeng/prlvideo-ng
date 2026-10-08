
QObject * FUN_1006e1350(void)

{
  QObject *this;
  
  if (DAT_102310988 == (QObject *)0x0) {
    this = operator_new(0x10);
    QObject::QObject(this,(QObject *)0x0);
    *(undefined ***)this = &PTR_FUN_1022257d0;
    DAT_102310988 = this;
  }
  return DAT_102310988;
}

