
void FUN_100609780(undefined2 *param_1,undefined2 *param_2)

{
  uint uVar1;
  
  *param_2 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  param_2[1] = CONCAT11((char)param_1[1],(char)((ushort)param_1[1] >> 8));
  uVar1 = *(uint *)(param_1 + 2);
  *(uint *)(param_2 + 2) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_2 + 4) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 6);
  *(uint *)(param_2 + 6) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)(param_2 + 8) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 10);
  *(uint *)(param_2 + 10) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_2 + 0xc) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0xe);
  *(uint *)(param_2 + 0xe) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_2 + 0x10) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x12);
  *(uint *)(param_2 + 0x12) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x14);
  *(uint *)(param_2 + 0x14) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x16);
  *(uint *)(param_2 + 0x16) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_2 + 0x18) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x1a);
  *(uint *)(param_2 + 0x1a) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  param_2[0x1c] = CONCAT11((char)param_1[0x1c],(char)((ushort)param_1[0x1c] >> 8));
  param_2[0x1d] = CONCAT11((char)param_1[0x1d],(char)((ushort)param_1[0x1d] >> 8));
  param_2[0x1e] = CONCAT11((char)param_1[0x1e],(char)((ushort)param_1[0x1e] >> 8));
  param_2[0x1f] = CONCAT11((char)param_1[0x1f],(char)((ushort)param_1[0x1f] >> 8));
  param_2[0x20] = CONCAT11((char)param_1[0x20],(char)((ushort)param_1[0x20] >> 8));
  param_2[0x21] = CONCAT11((char)param_1[0x21],(char)((ushort)param_1[0x21] >> 8));
  param_2[0x22] = CONCAT11((char)param_1[0x22],(char)((ushort)param_1[0x22] >> 8));
  param_2[0x23] = CONCAT11((char)param_1[0x23],(char)((ushort)param_1[0x23] >> 8));
  param_2[0x24] = CONCAT11((char)param_1[0x24],(char)((ushort)param_1[0x24] >> 8));
  param_2[0x25] = CONCAT11((char)param_1[0x25],(char)((ushort)param_1[0x25] >> 8));
  uVar1 = *(uint *)(param_1 + 0x26);
  *(uint *)(param_2 + 0x26) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_2 + 0x28) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x2a);
  *(uint *)(param_2 + 0x2a) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  FUN_100605dd0(param_1 + 0x2c,param_2 + 0x2c);
  FUN_100605dd0(param_1 + 0x54,param_2 + 0x54);
  return;
}

