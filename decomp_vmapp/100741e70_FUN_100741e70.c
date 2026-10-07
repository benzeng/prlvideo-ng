
undefined4 FUN_100741e70(uint *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  ulong local_b8;
  int local_b0;
  uint local_a8 [34];
  
  local_b8 = (ulong)param_2 / 1000;
  local_b0 = (param_2 % 1000) * 1000;
  local_a8[0x1c] = 0;
  local_a8[0x1d] = 0;
  local_a8[0x1e] = 0;
  local_a8[0x1f] = 0;
  local_a8[0x18] = 0;
  local_a8[0x19] = 0;
  local_a8[0x1a] = 0;
  local_a8[0x1b] = 0;
  local_a8[0x14] = 0;
  local_a8[0x15] = 0;
  local_a8[0x16] = 0;
  local_a8[0x17] = 0;
  local_a8[0x10] = 0;
  local_a8[0x11] = 0;
  local_a8[0x12] = 0;
  local_a8[0x13] = 0;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  local_a8[0xe] = 0;
  local_a8[0xf] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  uVar1 = *param_1;
  local_a8[(ulong)(long)(int)uVar1 >> 5] =
       local_a8[(ulong)(long)(int)uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
  uVar3 = 0;
  iVar2 = _select_1050(uVar1 + 1,local_a8,0,0,&local_b8);
  if (iVar2 == -1) {
    piVar4 = ___error();
    if (*piVar4 != 4) {
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      uVar3 = FUN_10071e690(0xffffffff,"waiting on select failed with error %s",pcVar5);
    }
  }
  else {
    uVar3 = 0;
    if ((0 < iVar2) && ((local_a8[(ulong)(long)(int)*param_1 >> 5] >> (*param_1 & 0x1f) & 1) != 0))
    {
      uVar3 = FUN_100741f80(param_1,param_3);
    }
  }
  return uVar3;
}

