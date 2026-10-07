
void FUN_1006070d0(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2[1] == 0x12345678) {
    param_1[10] = param_2[10];
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar1;
    return;
  }
  uVar2 = *param_2;
  *param_1 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[1];
  param_1[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = (uint)*(undefined8 *)(param_2 + 2);
  uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
  *(ulong *)(param_1 + 2) =
       CONCAT44(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18,
                uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
  uVar2 = (uint)*(undefined8 *)(param_2 + 4);
  uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  *(ulong *)(param_1 + 4) =
       CONCAT44(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18,
                uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
  uVar2 = (uint)*(undefined8 *)(param_2 + 6);
  uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
  *(ulong *)(param_1 + 6) =
       CONCAT44(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18,
                uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
  uVar2 = param_2[8];
  param_1[8] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[9];
  param_1[9] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[10];
  param_1[10] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  return;
}

