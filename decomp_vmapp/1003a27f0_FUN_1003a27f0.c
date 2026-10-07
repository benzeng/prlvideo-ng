
void FUN_1003a27f0(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x100000) != 0) {
    FUN_10038e8e0(param_2,"clamp(");
    uVar2 = *param_1;
  }
  uVar2 = uVar2 >> 0x18;
  uVar1 = uVar2 | 0xfffffff0;
  if ((uVar2 & 8) == 0) {
    uVar1 = uVar2 & 0xf;
  }
  if (uVar1 != 0) {
    FUN_10038e8e0(param_2,"(");
    return;
  }
  return;
}

