
void FUN_100b35280(void)

{
  QThread *this;
  
  this = operator_new(0x28);
  QThread::QThread(this,(QObject *)0x0);
  *(undefined **)this = &DAT_10223f300;
  *(undefined **)(this + 0x18) = PTR_shared_null_1021e1288;
  *(undefined8 *)(this + 0x10) = 0;
  DAT_102311868 = this;
  return;
}

