
void FUN_100606bc0(undefined2 *param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = CONCAT11((char)*param_2,(char)((ushort)*param_2 >> 8));
  param_1[1] = CONCAT11((char)param_2[1],(char)((ushort)param_2[1] >> 8));
  uVar1 = *(uint *)(param_2 + 2);
  *(uint *)(param_1 + 2) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 4);
  *(uint *)(param_1 + 4) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 6);
  *(uint *)(param_1 + 6) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 8);
  *(uint *)(param_1 + 8) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 10);
  *(uint *)(param_1 + 10) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0xc) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0xe);
  *(uint *)(param_1 + 0xe) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(param_1 + 0x10) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x12);
  *(uint *)(param_1 + 0x12) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x14);
  *(uint *)(param_1 + 0x14) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x16);
  *(uint *)(param_1 + 0x16) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x18);
  *(uint *)(param_1 + 0x18) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x1a);
  *(uint *)(param_1 + 0x1a) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x1c);
  *(uint *)(param_1 + 0x1c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x1e);
  *(uint *)(param_1 + 0x1e) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x20);
  *(uint *)(param_1 + 0x20) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x22);
  *(uint *)(param_1 + 0x22) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = (uint)*(undefined8 *)(param_2 + 0x24);
  uVar2 = (uint)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20);
  *(ulong *)(param_1 + 0x24) =
       CONCAT44(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18,
                uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  uVar1 = *(uint *)(param_2 + 0x28);
  *(uint *)(param_1 + 0x28) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x2a);
  *(uint *)(param_1 + 0x2a) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x2c);
  *(uint *)(param_1 + 0x2c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x2e);
  *(uint *)(param_1 + 0x2e) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x30);
  *(uint *)(param_1 + 0x30) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x32);
  *(uint *)(param_1 + 0x32) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x34);
  *(uint *)(param_1 + 0x34) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 0x36);
  *(uint *)(param_1 + 0x36) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  FUN_100605d10(param_1 + 0x38,param_2 + 0x38);
  FUN_100605d10(param_1 + 0x60,param_2 + 0x60);
  FUN_100605d10(param_1 + 0x88,param_2 + 0x88);
  FUN_100605d10(param_1 + 0xb0,param_2 + 0xb0);
  FUN_100605d10(param_1 + 0xd8,param_2 + 0xd8);
  return;
}

