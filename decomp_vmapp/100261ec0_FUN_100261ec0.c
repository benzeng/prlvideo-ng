
void FUN_100261ec0(long param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_2;
  if ((bVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 4);
    bVar1 = *param_2;
  }
  if ((bVar1 & 2) != 0) {
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 8);
    bVar1 = *param_2;
  }
  if ((bVar1 & 4) != 0) {
    *(byte *)(param_1 + 0x13c) = param_2[0x14];
  }
  return;
}

