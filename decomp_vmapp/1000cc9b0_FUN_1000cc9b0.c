
undefined4 FUN_1000cc9b0(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_1000c81f0(param_1,0x8000000);
  cVar1 = FUN_1000c8c50(param_1,param_2,param_1 + 0x440);
  uVar2 = 0;
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 500) == 0) {
      *(undefined4 *)(param_1 + 500) = 0x80000503;
    }
    else if (*(int *)(param_1 + 500) == -0x7ffdffee) {
      *(undefined1 *)(param_1 + 0x1f8) = 1;
      *(undefined4 *)(param_1 + 500) = 0;
      return 0;
    }
    FUN_1000c6990(param_1);
    uVar2 = *(undefined4 *)(param_1 + 500);
  }
  return uVar2;
}

