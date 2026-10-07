
undefined8 FUN_1002b1b40(undefined8 param_1,uint param_2)

{
  LOCK();
  *(uint *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x3cec8) = param_2 | 2;
  UNLOCK();
  FUN_1000acd00(DAT_1011c3698,0x1000000,1,1);
  return 0;
}

