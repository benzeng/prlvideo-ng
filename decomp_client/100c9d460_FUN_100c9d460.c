
void FUN_100c9d460(undefined8 param_1,undefined8 param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  sVar5 = _strlen(param_4);
  uVar7 = 0;
  if ((8 < sVar5) &&
     (iVar3 = _strncmp(param_4,"critical,",9), puVar2 = PTR___DefaultRuneLocale_1021e1278,
     iVar3 == 0)) {
    param_4 = param_4 + 8;
    uVar7 = 1;
    do {
      bVar1 = param_4[1];
      if ((char)bVar1 < '\0') {
        uVar4 = ___maskrune((uint)bVar1,0x4000);
      }
      else {
        uVar4 = *(uint *)(puVar2 + (ulong)bVar1 * 4 + 0x3c) & 0x4000;
      }
      param_4 = param_4 + 1;
    } while (uVar4 != 0);
  }
  sVar5 = _strlen(param_4);
  if (sVar5 < 4) {
LAB_100c9d548:
    FUN_100c9d240(param_1,param_2,param_3,uVar7,param_4);
    return;
  }
  iVar3 = _strncmp(param_4,"DER:",4);
  if (iVar3 == 0) {
    param_4 = param_4 + 4;
    uVar8 = 1;
  }
  else {
    if ((sVar5 < 5) || (iVar3 = _strncmp(param_4,"ASN1:",5), iVar3 != 0)) goto LAB_100c9d548;
    param_4 = param_4 + 5;
    uVar8 = 2;
  }
  puVar2 = PTR___DefaultRuneLocale_1021e1278;
  param_4 = param_4 + -1;
  do {
    bVar1 = param_4[1];
    if ((char)bVar1 < '\0') {
      uVar4 = ___maskrune((uint)bVar1,0x4000);
    }
    else {
      uVar4 = *(uint *)(puVar2 + (ulong)bVar1 * 4 + 0x3c) & 0x4000;
    }
    param_4 = param_4 + 1;
  } while (uVar4 != 0);
  uVar6 = FUN_100bf70a0(param_3);
  FUN_100c9d0b0(uVar6,param_4,uVar7,uVar8,param_2);
  return;
}

