
void FUN_100260420(long param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  piVar7 = &DAT_100b35ea0;
  iVar5 = -1;
  do {
    iVar1 = iVar5 + 1;
    if (*piVar7 == *(int *)(lVar3 + 0x10)) break;
    iVar6 = iVar5 + 2;
    piVar7 = piVar7 + 1;
    iVar5 = iVar1;
  } while (iVar6 < 0x14);
  *(int *)(param_2 + 4) = iVar1;
  bVar2 = *(byte *)(lVar3 + 2);
  param_2[8] = (bVar2 & 3) + 5;
  param_2[9] = bVar2 >> 2 & 1;
  if ((bVar2 & 8) == 0) {
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  else if ((bVar2 & 0x20) == 0) {
    param_2[0xc] = 1;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  else if ((bVar2 & 0x10) == 0) {
    param_2[0xc] = 3;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  else {
    param_2[0xc] = 4;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  *(uint *)(param_2 + 0x10) = (uint)(bVar2 >> 6 & 1);
  bVar2 = param_2[0x14];
  bVar4 = *(byte *)(lVar3 + 3) & 1;
  param_2[0x14] = bVar2 & 0xfe | bVar4;
  param_2[0x14] = bVar2 & 0xfc | bVar4 | *(byte *)(*(long *)(param_1 + 0xa0) + 3) & 2;
  *param_2 = *param_2 & 0xe0 | 7;
  return;
}

