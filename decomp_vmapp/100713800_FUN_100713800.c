
byte * FUN_100713800(byte *param_1)

{
  byte *pbVar1;
  __darwin_ct_rune_t _Var2;
  byte *pbVar3;
  byte *pbVar4;
  
  if ((*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
    pbVar4 = param_1 + (ulong)(*param_1 >> 1) + 1;
    pbVar1 = pbVar3;
  }
  else {
    pbVar3 = *(byte **)(param_1 + 0x10);
    pbVar4 = pbVar3 + *(long *)(param_1 + 8);
    pbVar1 = pbVar3;
  }
  for (; pbVar3 != pbVar4; pbVar3 = pbVar3 + 1) {
    _Var2 = ___tolower((int)(char)*pbVar3);
    *pbVar1 = (byte)_Var2;
    pbVar1 = pbVar1 + 1;
  }
  return param_1;
}

