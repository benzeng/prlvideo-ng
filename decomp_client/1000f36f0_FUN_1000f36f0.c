
void FUN_1000f36f0(long param_1,int param_2)

{
  undefined8 uVar1;
  
  FUN_1000f3730(param_1 + 8);
  if (param_2 != 0) {
    return;
  }
  uVar1 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
  }
  FUN_1000f73f0(uVar1);
  return;
}

