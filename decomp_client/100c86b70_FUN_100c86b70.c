
undefined8 FUN_100c86b70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  uVar2 = 0;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) != 0) {
      FUN_100bf3910();
    }
    FUN_100bf3910(lVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar2 = 1;
  }
  return uVar2;
}

