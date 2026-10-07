
bool FUN_1004c1ba0(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  LOCK();
  lVar1 = *(long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = 0;
  UNLOCK();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_1002a6010(lVar1);
    *puVar2 = 0;
    *(undefined4 *)puVar2 = 0;
    *(undefined4 *)((long)puVar2 + 4) = param_2;
    FUN_1004c07d0(param_1,lVar1,0);
  }
  return lVar1 != 0;
}

