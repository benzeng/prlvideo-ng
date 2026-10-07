
void FUN_1002b09a0(long param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  uint local_34;
  
  lVar11 = (param_2 & 0xffffffff) * 0x8f0;
  plVar1 = (long *)(*(long *)(param_1 + 0x9f0 + lVar11) + 0xf0);
  *plVar1 = *plVar1 + 1;
  if (*(char *)(param_1 + 0x871) != '\0') {
    uVar9 = FUN_1007d8850();
    lVar2 = param_1 + lVar11;
    uVar10 = *(int *)(param_1 + 0xe08 + lVar11) + 1;
    *(uint *)(param_1 + 0xe08 + lVar11) = uVar10;
    *(undefined4 *)(lVar2 + 0xa08 + (ulong)(uVar10 & 0xff) * 4) = uVar9;
    uVar6 = *(uint *)(param_1 + 0xe08 + lVar11);
    uVar10 = *(uint *)(param_1 + 0xe0c + lVar11);
    iVar7 = *(int *)(lVar2 + 0xa08 + (ulong)(uVar6 & 0xff) * 4);
    puVar3 = (uint *)(param_1 + 0xe0c + lVar11);
    if (0xff < uVar6 - uVar10) {
      uVar10 = uVar6 - 0xff;
      *puVar3 = uVar10;
    }
    iVar8 = *(int *)(lVar2 + 0xa08 + (ulong)(uVar10 & 0xff) * 4);
    while (1000 < (uint)(iVar7 - iVar8)) {
      uVar10 = uVar10 + 1;
      *puVar3 = uVar10;
      iVar8 = *(int *)(lVar2 + 0xa08 + (ulong)(uVar10 & 0xff) * 4);
    }
    FUN_1002b0e90(param_1,uVar6 - uVar10,4,1,0xff0000ff);
    uVar10 = *(uint *)(param_1 + 0xe08 + lVar11);
    FUN_1002b0e90(param_1,*(int *)(lVar2 + 0xa08 + (ulong)(uVar10 & 0xff) * 4) -
                          *(int *)(lVar2 + 0xa08 + (ulong)(byte)((char)uVar10 - 1) * 4),0x10,1,
                  0xff0000ff);
    if (*(int *)(param_1 + 0x9d0 + lVar11) != *(int *)(param_1 + 0x9d4 + lVar11)) {
      uVar6 = *(uint *)(param_1 + 0x1210 + lVar11);
      uVar10 = *(uint *)(param_1 + 0x1214 + lVar11);
      iVar7 = *(int *)(lVar2 + 0xe10 + (ulong)(uVar6 & 0xff) * 4);
      puVar3 = (uint *)(param_1 + 0x1214 + lVar11);
      if (0xff < uVar6 - uVar10) {
        uVar10 = uVar6 - 0xff;
        *puVar3 = uVar10;
      }
      iVar8 = *(int *)(lVar2 + 0xe10 + (ulong)(uVar10 & 0xff) * 4);
      while (1000 < (uint)(iVar7 - iVar8)) {
        uVar10 = uVar10 + 1;
        *puVar3 = uVar10;
        iVar8 = *(int *)(lVar2 + 0xe10 + (ulong)(uVar10 & 0xff) * 4);
      }
      FUN_1002b0e90(param_1,uVar6 - uVar10,4,2,0xff00ffff);
      uVar10 = *(uint *)(param_1 + 0x1210 + lVar11);
      FUN_1002b0e90(param_1,*(int *)(lVar2 + 0xe10 + (ulong)(uVar10 & 0xff) * 4) -
                            *(int *)(lVar2 + 0xe10 + (ulong)(byte)((char)uVar10 - 1) * 4),0x10,2,
                    0xff00ffff);
    }
    iVar7 = *(int *)(param_1 + 0x1218 + lVar11);
    if (iVar7 != 0) {
      FUN_1002b0e90(param_1,iVar7,0x46,1,0xff00ff00);
    }
  }
  bVar5 = *(byte *)(param_1 + 0x9f8 + lVar11);
  bVar12 = true;
  if (((param_3 & 4) == 0) && ((char)((param_3 & 8) >> 3) != '\0' || bVar5 == 0)) {
    bVar12 = *(int *)(param_1 + 0x9838) == 0;
  }
  puVar4 = (undefined8 *)(param_1 + 0x9b8 + lVar11);
  if ((uint)bVar12 != (uint)bVar5) {
    local_34 = bVar12 ^ 1;
    _CGLSetParameter(*puVar4,0xde,&local_34);
    *(bool *)(param_1 + 0x9f8 + lVar11) = bVar12;
  }
  _CGLFlushDrawable(*puVar4);
  return;
}

