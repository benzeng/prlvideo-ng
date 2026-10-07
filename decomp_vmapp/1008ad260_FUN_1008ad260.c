
byte * FUN_1008ad260(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  size_t sVar4;
  byte *pbVar5;
  
  puVar2 = PTR___DefaultRuneLocale_100ba20c0;
  while( true ) {
    bVar1 = *param_1;
    if ((ulong)bVar1 == 0) {
      return (byte *)0x0;
    }
    if (bVar1 == 0x22) break;
    if ((char)bVar1 < '\0') {
      uVar3 = ___maskrune((uint)bVar1,0x4000);
    }
    else {
      uVar3 = *(uint *)(puVar2 + (ulong)bVar1 * 4 + 0x3c) & 0x4000;
    }
    if (uVar3 == 0) {
      if (param_1 == (byte *)0x0) {
        return (byte *)0x0;
      }
      goto LAB_1008ad2db;
    }
    param_1 = param_1 + 1;
  }
  if (param_1[1] == 0) {
    return (byte *)0x0;
  }
  param_1 = param_1 + 1;
LAB_1008ad2db:
  sVar4 = _strlen((char *)param_1);
  if ((long)(sVar4 - 1) < 0) {
    return (byte *)0x0;
  }
  pbVar5 = param_1 + (sVar4 - 1);
  while( true ) {
    bVar1 = *pbVar5;
    if ((ulong)bVar1 == 0x22) {
      if (pbVar5 + -1 == param_1) {
        return (byte *)0x0;
      }
      *pbVar5 = 0;
      return param_1;
    }
    if ((char)bVar1 < '\0') {
      uVar3 = ___maskrune((uint)bVar1,0x4000);
    }
    else {
      uVar3 = *(uint *)(puVar2 + (ulong)bVar1 * 4 + 0x3c) & 0x4000;
    }
    if (uVar3 == 0) break;
    *pbVar5 = 0;
    pbVar5 = pbVar5 + -1;
    if (pbVar5 < param_1) {
      return (byte *)0x0;
    }
  }
  return param_1;
}

