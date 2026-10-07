
void FUN_1003019f0(long param_1,int param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  uint local_38;
  uint local_34;
  
  if (param_2 < 1) {
    return;
  }
  lVar12 = 0;
  bVar5 = false;
LAB_100301a20:
  uVar1 = *(uint *)(param_3 + lVar12 * 4);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x1038);
  uVar6 = 0x20;
  uVar10 = uVar1;
  if (uVar2 < 0x20) {
    do {
      uVar6 = uVar6 >> 1;
      uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar6;
    } while (uVar2 < uVar6);
  }
  puVar8 = *(uint **)(*(long *)(param_1 + 0x30) + 0x838 + (ulong)(uVar10 & 0xff) * 8);
LAB_100301a64:
  if (puVar8 == (uint *)0x0) goto LAB_100301bb0;
  if (*puVar8 != uVar1) goto LAB_100301a60;
  local_38 = puVar8[1];
  if (local_38 == 0) goto LAB_100301bb7;
  if ((local_38 == *(uint *)(param_1 + 0x15a8)) || (uVar1 == *(uint *)(param_1 + 0x15a0))) {
    *(undefined4 *)(param_1 + 0x15a0) = 0;
    bVar5 = true;
  }
  if ((local_38 == *(uint *)(param_1 + 0x15ac)) ||
     (*(int *)(param_3 + lVar12 * 4) == *(int *)(param_1 + 0x15a4))) {
    *(undefined4 *)(param_1 + 0x15a4) = 0;
    bVar5 = true;
  }
  (*DAT_1011c5b20)(1,&local_38);
  lVar3 = *(long *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_3 + lVar12 * 4);
  uVar2 = *(uint *)(lVar3 + 0x1038);
  uVar6 = 0x20;
  uVar10 = uVar1;
  if (uVar2 < 0x20) {
    do {
      uVar6 = uVar6 >> 1;
      uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar6;
    } while (uVar2 < uVar6);
  }
  uVar6 = 0;
  for (puVar8 = *(uint **)(lVar3 + 0x838 + (ulong)(uVar10 & 0xff) * 8); puVar8 != (uint *)0x0;
      puVar8 = *(uint **)(puVar8 + 2)) {
    if (*puVar8 == uVar1) {
      uVar6 = puVar8[1];
      break;
    }
  }
  local_34 = uVar6;
  if (uVar1 != 0) {
    uVar7 = 0x20;
    uVar10 = uVar1;
    if (uVar2 < 0x20) {
      do {
        uVar7 = uVar7 >> 1;
        uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar7;
      } while (uVar2 < uVar7);
    }
    puVar8 = (uint *)(lVar3 + 0x838 + (ulong)(uVar10 & 0xff) * 8);
    do {
      puVar9 = puVar8;
      puVar4 = *(uint **)puVar9;
      if (puVar4 == (uint *)0x0) goto LAB_100301b8f;
      puVar8 = puVar4 + 2;
    } while (uVar1 != *puVar4);
    *(undefined8 *)puVar9 = *(undefined8 *)(puVar4 + 2);
    operator_delete(puVar4);
  }
LAB_100301b8f:
  if (uVar6 != 0) {
    FUN_1003071e0(lVar3 + 0x1850,&local_34);
  }
  goto LAB_100301bb7;
LAB_100301bb0:
  local_38 = 0;
LAB_100301bb7:
  iVar11 = (int)lVar12;
  lVar12 = lVar12 + 1;
  if (iVar11 == param_2 + -1) {
    if (!bVar5) {
      return;
    }
    FUN_100301c50(param_1,0x8ca8,*(undefined4 *)(param_1 + 0x15a0));
    FUN_100301c50(param_1,0x8ca9,*(undefined4 *)(param_1 + 0x15a4));
    return;
  }
  goto LAB_100301a20;
LAB_100301a60:
  puVar8 = *(uint **)(puVar8 + 2);
  goto LAB_100301a64;
}

