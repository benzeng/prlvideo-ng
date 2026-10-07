
undefined4 * FUN_100759eb0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  ___bzero(param_3,0x3f8);
  *param_3 = 5;
  param_3[1] = 0x90;
  param_3[2] = 1;
  *(undefined1 *)(param_3 + 4) = 0;
  param_3[3] = 0x45524f43;
  param_3[0xb] = param_2[0x16e] + 1;
  param_3[0xc] = 0;
  param_3[0xd] = 1;
  param_3[0xe] = 1;
  param_3[0x1d] = param_2[2];
  param_3[0x1c] = param_2[0xc];
  param_3[0x17] = param_2[8];
  param_3[0x24] = (uint)*(ushort *)((long)param_2 + 0x5f1);
  param_3[0x18] = param_2[4];
  param_3[0x1b] = param_2[0x10];
  param_3[0x1e] = (uint)*(ushort *)((long)param_2 + 0x651);
  param_3[0x19] = param_2[6];
  param_3[0x1f] = (uint)*(ushort *)((long)param_2 + 0x5c1);
  param_3[0x25] = param_2[0x22];
  param_3[0x20] = (uint)*(ushort *)((long)param_2 + 0x681);
  param_3[0x21] = (uint)*(ushort *)((long)param_2 + 0x6b1);
  param_3[0x23] = *param_2;
  param_3[0x1a] = param_2[0xe];
  param_3[0x26] = param_2[10];
  param_3[0x27] = (uint)*(ushort *)((long)param_2 + 0x621);
  param_3[0x28] = 1;
  param_3[0x29] = 6;
  param_3[0x2a] = 0x340;
  param_3[0x2b] = 0x202;
  *(undefined2 *)(param_3 + 0x2d) = 0x58;
  param_3[0x2c] = 0x554e494c;
  _memcpy(param_3 + 0x2e,param_2 + 0x9d,0x340);
  if (*(long *)(param_3 + 0xae) == 0) {
    *(undefined8 *)(param_3 + 0xae) = 3;
  }
  if (*(long *)(param_3 + 0xa2) == 0) {
    *(undefined8 *)(param_3 + 0xa2) = 7;
  }
  return param_3;
}

