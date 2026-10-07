
uint FUN_1006897e0(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar3 = param_2 - 1;
    if ((param_2 & 1) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = *(uint *)(&DAT_100b495f0 + (ulong)(bVar1 ^ 0xff) * 4) ^ 0xffffff;
      param_2 = uVar3;
    }
    while (uVar3 != 0) {
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_100b495f0 + (ulong)(uVar2 & 0xff ^ (uint)*param_1) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_100b495f0 + (ulong)(uVar2 & 0xff ^ (uint)param_1[1]) * 4);
      param_1 = param_1 + 2;
      uVar3 = param_2 - 2;
      param_2 = uVar3;
    }
    uVar2 = ~uVar2;
  }
  return uVar2;
}

