
undefined8 FUN_10051e960(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_28;
  
  LOCK();
  lVar1 = *(long *)(param_1 + 0x78);
  if (param_2 == lVar1) {
    *(long *)(param_1 + 0x78) = 0;
    lVar1 = param_2;
  }
  UNLOCK();
  uVar2 = 0xf0000000;
  if (lVar1 != param_2) {
    local_28 = param_1 + 0x30;
    FUN_1007eaef0();
    uVar2 = 0xffffffff;
    if (*(long *)(param_1 + 0x70) == param_2) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      uVar2 = 0xf0000000;
    }
    FUN_1007eaf10(&local_28);
  }
  return uVar2;
}

