
void FUN_1001080f0(long param_1,undefined8 param_2,QString *param_3)

{
  long lVar1;
  long local_38;
  long local_30;
  undefined4 local_28;
  
  lVar1 = FUN_1001081a0();
  local_28 = 1;
  local_38 = param_1;
  local_30 = lVar1;
  QString::operator=(param_3,(QString *)(lVar1 + 8));
  QMutex::lock();
  if ((*(int *)(param_1 + 0x20) == 0) && (*(char *)(lVar1 + 0x15) == '\0')) {
    FUN_100107a70(lVar1);
  }
  QMutex::unlock();
  local_28 = 0;
  FUN_100107c30(&local_38);
  return;
}

