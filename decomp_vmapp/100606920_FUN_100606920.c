
void FUN_100606920(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_2;
  *param_1 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[1];
  param_1[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[2];
  param_1[2] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[3];
  param_1[3] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[4];
  param_1[4] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[5];
  param_1[5] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[6];
  param_1[6] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[7];
  param_1[7] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[8];
  param_1[8] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = (uint)*(undefined8 *)(param_2 + 9);
  uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 9) >> 0x20);
  *(ulong *)(param_1 + 9) =
       CONCAT44(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18,
                uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
  uVar2 = (uint)*(undefined8 *)(param_2 + 0xb);
  uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 0xb) >> 0x20);
  *(ulong *)(param_1 + 0xb) =
       CONCAT44(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18,
                uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
  *(char *)(param_1 + 0x16) = (char)param_2[0x16];
  param_1[0x15] = param_2[0x15];
  *(undefined8 *)(param_1 + 0x13) = *(undefined8 *)(param_2 + 0x13);
  *(undefined8 *)(param_1 + 0x11) = *(undefined8 *)(param_2 + 0x11);
  uVar1 = *(undefined8 *)(param_2 + 0xd);
  *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)(param_2 + 0xf);
  *(undefined8 *)(param_1 + 0xd) = uVar1;
  *(undefined8 *)((long)param_1 + 0x81) = *(undefined8 *)((long)param_2 + 0x81);
  *(undefined8 *)((long)param_1 + 0x79) = *(undefined8 *)((long)param_2 + 0x79);
  *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
  *(undefined8 *)((long)param_1 + 0x69) = *(undefined8 *)((long)param_2 + 0x69);
  uVar1 = *(undefined8 *)((long)param_2 + 0x59);
  *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
  *(undefined8 *)((long)param_1 + 0x59) = uVar1;
  *(undefined1 *)((long)param_1 + 0xb3) = *(undefined1 *)((long)param_2 + 0xb3);
  *(undefined2 *)((long)param_1 + 0xb1) = *(undefined2 *)((long)param_2 + 0xb1);
  *(undefined8 *)((long)param_1 + 0xa9) = *(undefined8 *)((long)param_2 + 0xa9);
  *(undefined8 *)((long)param_1 + 0xa1) = *(undefined8 *)((long)param_2 + 0xa1);
  *(undefined8 *)((long)param_1 + 0x99) = *(undefined8 *)((long)param_2 + 0x99);
  *(undefined8 *)((long)param_1 + 0x91) = *(undefined8 *)((long)param_2 + 0x91);
  *(undefined8 *)((long)param_1 + 0x89) = *(undefined8 *)((long)param_2 + 0x89);
  return;
}

