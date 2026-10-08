
undefined4 FUN_100a6a420(undefined4 *param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = 0xffffffff;
  UNLOCK();
  return uVar1;
}

