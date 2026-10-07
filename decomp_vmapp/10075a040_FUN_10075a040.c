
undefined4 * FUN_10075a040(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  ___bzero(param_3,0x4b8);
  *param_3 = 5;
  param_3[1] = 0x150;
  param_3[2] = 1;
  *(undefined1 *)(param_3 + 4) = 0;
  param_3[3] = 0x45524f43;
  param_3[0xd] = *(int *)(param_2 + 0xb7) + 1;
  param_3[0xe] = 0;
  param_3[0xf] = 1;
  param_3[0x10] = 1;
  *(undefined8 *)(param_3 + 0x29) = param_2[6];
  *(undefined8 *)(param_3 + 0x2b) = param_2[4];
  *(ulong *)(param_3 + 0x43) = (ulong)*(ushort *)((long)param_2 + 0x5f1);
  uVar1 = param_2[2];
  *(undefined8 *)(param_3 + 0x35) = param_2[1];
  *(undefined8 *)(param_3 + 0x37) = uVar1;
  *(undefined8 *)(param_3 + 0x3d) = param_2[8];
  *(ulong *)(param_3 + 0x4f) = (ulong)*(ushort *)((long)param_2 + 0x651);
  *(undefined8 *)(param_3 + 0x39) = param_2[3];
  *(ulong *)(param_3 + 0x51) = (ulong)*(ushort *)((long)param_2 + 0x5c1);
  *(undefined8 *)(param_3 + 0x45) = param_2[0x11];
  *(ulong *)(param_3 + 0x53) = (ulong)*(ushort *)((long)param_2 + 0x681);
  *(ulong *)(param_3 + 0x55) = (ulong)*(ushort *)((long)param_2 + 0x6b1);
  *(undefined8 *)(param_3 + 0x41) = *param_2;
  *(undefined8 *)(param_3 + 0x3b) = param_2[7];
  *(undefined8 *)(param_3 + 0x47) = param_2[5];
  *(ulong *)(param_3 + 0x49) = (ulong)*(ushort *)((long)param_2 + 0x621);
  param_3[0x57] = 1;
  param_3[0x59] = 6;
  param_3[0x5a] = 0x340;
  param_3[0x5b] = 0x202;
  *(undefined2 *)(param_3 + 0x5d) = 0x58;
  param_3[0x5c] = 0x554e494c;
  _memcpy(param_3 + 0x5e,(void *)((long)param_2 + 0x274),0x340);
  if (*(long *)(param_3 + 0xde) == 0) {
    *(undefined8 *)(param_3 + 0xde) = 3;
  }
  if (*(long *)(param_3 + 0xd2) == 0) {
    *(undefined8 *)(param_3 + 0xd2) = 7;
  }
  return param_3;
}

