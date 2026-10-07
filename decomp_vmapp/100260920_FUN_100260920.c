
undefined4 FUN_100260920(long param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 in_RAX;
  undefined4 uVar2;
  undefined4 local_34;
  
  local_34 = (undefined4)((ulong)in_RAX >> 0x20);
  QMutex::lock();
  cVar1 = (**(code **)(**(long **)(param_1 + 0x108) + 0x98))();
  uVar2 = 0;
  if (cVar1 != '\0') {
    (**(code **)(**(long **)(param_1 + 0x108) + 0x38))
              (*(long **)(param_1 + 0x108),param_2,param_3,&local_34);
    uVar2 = local_34;
  }
  QMutex::unlock();
  return uVar2;
}

