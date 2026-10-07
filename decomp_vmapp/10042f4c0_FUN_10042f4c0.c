
void FUN_10042f4c0(void)

{
  QThread *this;
  
  this = operator_new(0x28);
  QThread::QThread(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_metaObject_100bc0940;
  *(undefined **)(this + 0x18) = PTR_shared_null_100ba20d0;
  *(undefined8 *)(this + 0x10) = 0;
  DAT_1011cc770 = this;
  return;
}

