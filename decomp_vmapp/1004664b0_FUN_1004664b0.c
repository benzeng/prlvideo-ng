
void FUN_1004664b0(long param_1,undefined4 *param_2)

{
  undefined4 local_2c;
  
  QMutex::lock();
  local_2c = *param_2;
  FUN_100466c80(param_1 + 8,&local_2c);
  FUN_100465a40(param_2);
  operator_delete(param_2);
  QMutex::unlock();
  return;
}

