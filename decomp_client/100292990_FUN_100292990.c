
undefined8 FUN_100292990(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    lVar1 = FUN_100323e00();
    uVar2 = 0x80000009;
    if (lVar1 != 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x80000009;
}

