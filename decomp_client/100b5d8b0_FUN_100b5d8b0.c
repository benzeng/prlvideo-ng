
byte * FUN_100b5d8b0(byte *param_1,byte param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    pbVar4 = param_1 + 1;
  }
  else {
    pbVar4 = *(byte **)(param_1 + 0x10);
  }
  while( true ) {
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
      pbVar2 = param_1 + 1;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 8);
      pbVar2 = *(byte **)(param_1 + 0x10);
    }
    if (pbVar4 == pbVar2 + uVar3) break;
    if (*pbVar4 == param_2) {
      pbVar2 = param_1 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar2 = *(byte **)(param_1 + 0x10);
      }
      std::string::erase((ulong)param_1,(long)pbVar4 - (long)pbVar2);
      bVar1 = *param_1;
    }
    else {
      pbVar4 = pbVar4 + 1;
    }
  }
  return param_1;
}

