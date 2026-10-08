
undefined4 FUN_100a6a690(long *param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *(undefined4 *)(*param_1 + 0x5c);
  *(undefined4 *)(*param_1 + 0x5c) = 0xffffffff;
  UNLOCK();
  return uVar1;
}

