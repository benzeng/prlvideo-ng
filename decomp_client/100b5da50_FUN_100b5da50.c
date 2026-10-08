
byte * FUN_100b5da50(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    pbVar5 = param_1 + 1;
  }
  else {
    pbVar5 = *(byte **)(param_1 + 0x10);
  }
  pbVar7 = param_1 + 1;
  pbVar6 = param_1 + 0x10;
  while( true ) {
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
      pbVar3 = pbVar7;
    }
    else {
      uVar4 = *(ulong *)(param_1 + 8);
      pbVar3 = *(byte **)(param_1 + 0x10);
    }
    if (pbVar5 == pbVar3 + uVar4) break;
    bVar1 = *pbVar5;
    if ((long)(char)bVar1 < 0) {
      uVar2 = ___maskrune((int)(char)bVar1,0x4000);
    }
    else {
      uVar2 = *(uint *)(PTR___DefaultRuneLocale_1021e1278 + (long)(char)bVar1 * 4 + 0x3c) & 0x4000;
    }
    bVar1 = *param_1;
    if (uVar2 == 0) break;
    pbVar3 = pbVar7;
    if ((bVar1 & 1) != 0) {
      pbVar3 = *(byte **)pbVar6;
    }
    std::string::erase((ulong)param_1,(long)pbVar5 - (long)pbVar3);
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    uVar4 = (ulong)(bVar1 >> 1);
    pbVar5 = pbVar7;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    pbVar5 = *(byte **)(param_1 + 0x10);
  }
  pbVar5 = pbVar5 + uVar4;
  while( true ) {
    pbVar3 = pbVar7;
    if ((bVar1 & 1) != 0) {
      pbVar3 = *(byte **)pbVar6;
    }
    if (pbVar5 == pbVar3) goto LAB_100b5db92;
    bVar1 = pbVar5[-1];
    if ((long)(char)bVar1 < 0) {
      uVar2 = ___maskrune((int)(char)bVar1,0x4000);
    }
    else {
      uVar2 = *(uint *)(PTR___DefaultRuneLocale_1021e1278 + (long)(char)bVar1 * 4 + 0x3c) & 0x4000;
    }
    if (uVar2 == 0) break;
    pbVar5[-1] = 0;
    pbVar5 = pbVar5 + -1;
    bVar1 = *param_1;
  }
  bVar1 = *param_1;
LAB_100b5db92:
  pbVar5 = pbVar7;
  if ((bVar1 & 1) != 0) {
    pbVar5 = *(byte **)pbVar6;
  }
  while( true ) {
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
      pbVar3 = pbVar7;
    }
    else {
      uVar4 = *(ulong *)(param_1 + 8);
      pbVar3 = *(byte **)(param_1 + 0x10);
    }
    if (pbVar5 == pbVar3 + uVar4) break;
    if (*pbVar5 == 0) {
      pbVar3 = pbVar7;
      if ((bVar1 & 1) != 0) {
        pbVar3 = *(byte **)pbVar6;
      }
      std::string::erase((ulong)param_1,(long)pbVar5 - (long)pbVar3);
      bVar1 = *param_1;
    }
    else {
      pbVar5 = pbVar5 + 1;
    }
  }
  return param_1;
}

