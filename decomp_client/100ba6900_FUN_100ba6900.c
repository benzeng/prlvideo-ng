
void FUN_100ba6900(long param_1,uint param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  ulong uVar6;
  byte bVar7;
  size_t sVar8;
  uint uVar9;
  byte in_R11B;
  uint uVar10;
  byte bVar11;
  byte unaff_R15B;
  byte local_34;
  byte local_33;
  byte local_32;
  
  uVar10 = 0;
  bVar2 = false;
  iVar4 = 0;
LAB_100ba6bd0:
  if (param_2 <= uVar10) {
    return;
  }
  uVar6 = (ulong)uVar10;
  uVar10 = uVar10 + 1;
  cVar1 = *(char *)(param_1 + uVar6);
  bVar11 = cVar1 + 0xbf;
  if (0x19 < bVar11) {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      bVar11 = cVar1 + 0xb9;
    }
    else if ((byte)(cVar1 - 0x30U) < 10) {
      bVar11 = cVar1 + 4;
    }
    else {
      bVar11 = 0x3e;
      if (cVar1 != '+') {
        if (cVar1 == '=') {
          return;
        }
        if (cVar1 != '/') goto LAB_100ba6bd0;
        bVar11 = 0x3f;
      }
    }
  }
  if (bVar2) {
    return;
  }
  do {
    if (param_2 <= uVar10) {
      return;
    }
    uVar6 = (ulong)uVar10;
    uVar10 = uVar10 + 1;
    cVar1 = *(char *)(param_1 + uVar6);
    bVar7 = cVar1 + 0xbfU;
    if ((byte)(cVar1 + 0xbfU) < 0x1a) goto LAB_100ba69e0;
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      bVar7 = cVar1 + 0xb9;
      goto LAB_100ba69e0;
    }
    if ((byte)(cVar1 - 0x30U) < 10) {
      bVar7 = cVar1 + 4;
      goto LAB_100ba69e0;
    }
    if (cVar1 == '+') {
      bVar7 = 0x3e;
      goto LAB_100ba69e0;
    }
    if (cVar1 == '/') {
      bVar7 = 0x3f;
      goto LAB_100ba69e0;
    }
  } while (cVar1 != '=');
  goto LAB_100ba6a2b;
  while( true ) {
    if ((byte)(cVar1 - 0x30U) < 10) {
      bVar7 = cVar1 + 4;
      goto LAB_100ba6a70;
    }
    if (cVar1 == '+') {
      bVar7 = 0x3e;
      goto LAB_100ba6a70;
    }
    if (cVar1 == '/') {
      bVar7 = 0x3f;
      goto LAB_100ba6a70;
    }
    bVar7 = unaff_R15B;
    if (cVar1 == '=') break;
LAB_100ba69e0:
    unaff_R15B = bVar7;
    if (param_2 <= uVar10) {
      return;
    }
    uVar6 = (ulong)uVar10;
    uVar10 = uVar10 + 1;
    cVar1 = *(char *)(param_1 + uVar6);
    bVar7 = cVar1 + 0xbf;
    if (bVar7 < 0x1a) goto LAB_100ba6a70;
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      bVar7 = cVar1 + 0xb9;
      goto LAB_100ba6a70;
    }
  }
LAB_100ba6a2b:
  uVar9 = 1;
  bVar5 = 0x3d;
  bVar3 = false;
  bVar2 = true;
  bVar7 = in_R11B;
LAB_100ba6b09:
  local_34 = unaff_R15B >> 4 & 3 | bVar11 << 2;
  local_33 = bVar7 >> 2 & 0xf | unaff_R15B << 4;
  local_32 = bVar5 & 0x3f | bVar7 << 6;
  sVar8 = (ulong)(uVar9 - 1) + 1;
  if (uVar9 < 2) {
    sVar8 = 1;
  }
  _memcpy((void *)(param_3 + iVar4),&local_34,sVar8);
  iVar4 = iVar4 + uVar9;
  in_R11B = bVar7;
  if (!bVar3) {
    return;
  }
  goto LAB_100ba6bd0;
  while( true ) {
    if ((byte)(cVar1 - 0x30U) < 10) {
      bVar5 = cVar1 + 4;
      goto LAB_100ba6bb8;
    }
    if (cVar1 == '=') {
      bVar2 = true;
      uVar9 = 2;
      bVar5 = 0x3d;
      bVar3 = false;
      goto LAB_100ba6b09;
    }
    if (cVar1 == '/') {
      bVar2 = false;
      uVar9 = 3;
      bVar3 = true;
      bVar5 = 0x3f;
      goto LAB_100ba6b09;
    }
    if (cVar1 == '+') break;
LAB_100ba6a70:
    if (param_2 <= uVar10) {
      return;
    }
    uVar6 = (ulong)uVar10;
    uVar10 = uVar10 + 1;
    cVar1 = *(char *)(param_1 + uVar6);
    bVar5 = cVar1 + 0xbf;
    if (bVar5 < 0x1a) {
      bVar2 = false;
      uVar9 = 3;
      bVar3 = true;
      goto LAB_100ba6b09;
    }
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      bVar5 = cVar1 + 0xb9;
LAB_100ba6bb8:
      bVar2 = false;
      uVar9 = 3;
      bVar3 = true;
      goto LAB_100ba6b09;
    }
  }
  bVar2 = false;
  uVar9 = 3;
  bVar3 = true;
  bVar5 = 0x3e;
  goto LAB_100ba6b09;
}

