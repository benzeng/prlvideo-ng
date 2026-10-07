
void FUN_100477050(long param_1,undefined8 param_2,QString *param_3)

{
  QString *this;
  
  QMutex::lock();
  this = (QString *)FUN_100479340(param_1 + 0x20,param_2);
  QString::operator=(this,param_3);
  FUN_100478450(param_1,param_2,param_3);
  QMutex::unlock();
  return;
}

