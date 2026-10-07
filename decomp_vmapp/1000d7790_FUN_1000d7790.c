
undefined8 FUN_1000d7790(long param_1)

{
  undefined8 uVar1;
  
  QMutex::lock();
  uVar1 = 0;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
      uVar1 = **(undefined8 **)(param_1 + 0x18);
      **(undefined4 **)(param_1 + 0x28) = (int)uVar1;
      *(int *)(*(long *)(param_1 + 0x28) + 4) = (int)((ulong)uVar1 >> 0x20);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  return uVar1;
}

