
void FUN_1004cf230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_24 [4];
  
  QMutex::lock();
  FUN_1004d52a0(param_1 + 0x30,local_24,param_3);
  *(long *)(DAT_1011cc970 + 0xf0) = *(long *)(DAT_1011cc970 + 0xf0) + 1;
  QMutex::unlock();
  return;
}

