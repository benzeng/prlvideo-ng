
undefined8
FUN_1004761a0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 local_38;
  
  local_38._4_4_ = (undefined4)((ulong)in_RAX >> 0x20);
  QMutex::lock();
  local_38 = CONCAT44(local_38._4_4_,*param_3) & 0xffffffffffffff7e;
  FUN_100478080(param_1,param_2,&local_38,param_4);
  QMutex::unlock();
  return 0;
}

