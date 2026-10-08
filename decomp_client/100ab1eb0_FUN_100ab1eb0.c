
undefined1 FUN_100ab1eb0(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 local_58 [64];
  
  FUN_100aafe50(local_58,param_1 + 200);
  uVar2 = 1;
  if (*(char *)(param_1 + 0xf0) == '\0') {
    if (*(int *)(param_1 + 0xd8) == 0) {
      plVar1 = *(long **)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xb8) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined1 *)(param_1 + 0xf0) = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  FUN_100aafde0(local_58);
  return uVar2;
}

