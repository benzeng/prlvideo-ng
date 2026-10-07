
undefined8 FUN_100845910(byte *param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = *param_1 & 7;
  uVar2 = (ulong)(0xe - uVar3);
  uVar1 = 0xffffffff;
  if (uVar2 <= param_3) {
    if (uVar3 < 3) {
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
    else {
      param_1[8] = (byte)((ulong)param_4 >> 0x38);
      param_1[9] = (byte)((ulong)param_4 >> 0x30);
      param_1[10] = (byte)((ulong)param_4 >> 0x28);
      param_1[0xb] = (byte)((ulong)param_4 >> 0x20);
    }
    param_1[0xc] = (byte)((ulong)param_4 >> 0x18);
    param_1[0xd] = (byte)((ulong)param_4 >> 0x10);
    param_1[0xe] = (byte)((ulong)param_4 >> 8);
    param_1[0xf] = (byte)param_4;
    *param_1 = *param_1 & 0xbf;
    _memcpy(param_1 + 1,param_2,uVar2);
    uVar1 = 0;
  }
  return uVar1;
}

