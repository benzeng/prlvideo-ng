
void FUN_10010d910(void)

{
  undefined8 uVar1;
  char cVar2;
  QObject *this;
  
  this = operator_new(0x28);
  uVar1 = DAT_1011c3698;
  QObject::QObject(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_FUN_100baa750;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = uVar1;
  this[0x20] = (QObject)0x0;
  cVar2 = FUN_100710d80(this,"1onHostSleep()","1onHostWakeup()",0,0,0,0);
  if (cVar2 == '\0') {
    QMutex::unlock();
  }
  else {
    FUN_10010da20(this);
    QMutex::unlock();
    QThread::exec();
    FUN_10010dca0(this);
    FUN_100710ec0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010010d9ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x20))(this);
  return;
}

