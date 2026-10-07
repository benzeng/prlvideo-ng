
void FUN_10010f800(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x14);
  if (*(uint *)(param_2 + 0x14) < *(uint *)(param_2 + 0x10)) {
    uVar1 = *(uint *)(param_2 + 0x10);
  }
  FUN_100544ef0(*(undefined8 *)(param_2 + 0x30),uVar1 + 0xfff & 0xfffff000);
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}

