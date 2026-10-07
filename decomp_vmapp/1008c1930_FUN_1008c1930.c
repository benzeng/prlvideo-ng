
long FUN_1008c1930(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  size_t sVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  sVar6 = _strlen(param_4);
  uVar8 = 0;
  if ((8 < sVar6) &&
     (iVar3 = _strncmp(param_4,"critical,",9), puVar2 = PTR___DefaultRuneLocale_100ba20c0,
     iVar3 == 0)) {
    param_4 = param_4 + 8;
    uVar8 = 1;
    do {
      bVar1 = param_4[1];
      if ((char)bVar1 < '\0') {
        uVar5 = ___maskrune((uint)bVar1,0x4000);
      }
      else {
        uVar5 = *(uint *)(puVar2 + (ulong)bVar1 * 4 + 0x3c) & 0x4000;
      }
      param_4 = param_4 + 1;
    } while (uVar5 != 0);
  }
  sVar6 = _strlen(param_4);
  if (sVar6 < 4) {
LAB_1008c1a20:
    uVar4 = FUN_100821f30(param_3);
    lVar7 = FUN_1008c1cc0(param_1,param_2,uVar4,uVar8,param_4);
    if (lVar7 == 0) {
      FUN_100887ce0(0x22,0x98,0x80,"v3_conf.c",0x5f);
      lVar7 = 0;
      FUN_1008890a0(4,"name=",param_3,", value=",param_4);
    }
    return lVar7;
  }
  iVar3 = _strncmp(param_4,"DER:",4);
  if (iVar3 == 0) {
    param_4 = param_4 + 4;
    uVar9 = 1;
  }
  else {
    if ((sVar6 < 5) || (iVar3 = _strncmp(param_4,"ASN1:",5), iVar3 != 0)) goto LAB_1008c1a20;
    param_4 = param_4 + 5;
    uVar9 = 2;
  }
  puVar2 = PTR___DefaultRuneLocale_100ba20c0;
  param_4 = param_4 + -1;
  do {
    bVar1 = param_4[1];
    if ((char)bVar1 < '\0') {
      uVar5 = ___maskrune((uint)bVar1,0x4000);
    }
    else {
      uVar5 = *(uint *)(puVar2 + (ulong)bVar1 * 4 + 0x3c) & 0x4000;
    }
    param_4 = param_4 + 1;
  } while (uVar5 != 0);
  lVar7 = FUN_1008c1b30(param_3,param_4,uVar8,uVar9,param_2);
  return lVar7;
}

