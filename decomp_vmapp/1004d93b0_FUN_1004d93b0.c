
void FUN_1004d93b0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar1 = FUN_1004d4d30("UTF-8");
    *(undefined8 *)(param_1 + 0x60) = uVar1;
  }
  return;
}

