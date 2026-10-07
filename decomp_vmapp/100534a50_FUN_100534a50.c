
undefined8 FUN_100534a50(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  LOCK();
  *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x20) = 0;
  UNLOCK();
  FUN_1005353d0(*(undefined8 *)(param_1 + 0x38));
  FUN_1005355f0(*(long *)(param_1 + 0x40) + 0x30,0);
  puVar1 = (undefined4 *)FUN_1002a6010(param_2);
  *puVar1 = 0;
  return 0;
}

