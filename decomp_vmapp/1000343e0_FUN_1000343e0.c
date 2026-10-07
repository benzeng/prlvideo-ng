
undefined8 FUN_1000343e0(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  local_30 = param_2;
  QMutex::lock();
  if (*(int *)(param_1 + 0x50) == param_3) {
    uVar1 = 2;
    FUN_100036f00(param_1 + 0x48,&local_30);
  }
  else {
    FUN_1000373c0(param_4);
    *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_1 + 0x50);
    QString::operator=((QString *)(param_4 + 0x10),(QString *)(param_1 + 0x58));
    *(undefined1 *)(param_4 + 0x18) = *(undefined1 *)(param_1 + 0x60);
    uVar1 = 1;
  }
  QMutex::unlock();
  return uVar1;
}

