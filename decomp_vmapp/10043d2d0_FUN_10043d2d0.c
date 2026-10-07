
void FUN_10043d2d0(uint *param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  undefined2 *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint local_4c;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_34;
  undefined1 local_32;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar11 = *(uint *)((long)param_2 + 0xc);
  uVar10 = uVar11 + 4;
  if ((uVar10 <= uVar1) || (local_4c = 0, uVar1 - uVar11 == 4)) {
    lVar2 = *param_2;
    local_4c = (uint)*(byte *)(lVar2 + (ulong)(uVar11 + 2)) << 8 |
               (uint)*(byte *)(lVar2 + (ulong)(uVar11 + 1)) << 0x10 |
               (uint)*(byte *)(lVar2 + (ulong)uVar11) << 0x18 |
               (uint)*(byte *)(lVar2 + (ulong)(uVar11 + 3));
    *(uint *)((long)param_2 + 0xc) = uVar10;
    uVar11 = uVar10;
  }
  local_32 = 0;
  local_34 = 0;
  uVar10 = 3;
  if (uVar1 < uVar11 + 3) {
    uVar10 = uVar1 - uVar11;
  }
  if (uVar10 != 0) {
    _memcpy(&local_34,(void *)((ulong)uVar11 + *param_2),(ulong)uVar10);
    *(uint *)((long)param_2 + 0xc) = uVar10 + uVar11;
  }
  local_36 = local_32;
  local_38 = local_34;
  uVar6 = (ulong)(int)*param_1;
  puVar4 = (undefined2 *)(uVar6 * 3 + (ulong)(param_1[1] * param_4) + param_3);
  puVar3 = (undefined2 *)((ulong)(((1 - param_1[1]) + param_1[3]) * param_4) + (long)puVar4);
  if (puVar4 < puVar3) {
    while( true ) {
      iVar7 = (1 - (int)uVar6) + param_1[2];
      if (0 < iVar7) {
        puVar8 = puVar4;
        do {
          *(undefined1 *)(puVar8 + 1) = local_32;
          *puVar8 = local_34;
          puVar8 = (undefined2 *)((long)puVar8 + 3);
        } while (puVar8 < (undefined2 *)((long)iVar7 * 3 + (long)puVar4));
      }
      puVar4 = (undefined2 *)((long)puVar4 + (ulong)param_4);
      if (puVar3 <= puVar4) break;
      uVar6 = (ulong)*param_1;
    }
  }
  if (0 < (int)local_4c) {
    iVar7 = 0;
    do {
      local_3a = 0;
      local_3c = 0;
      uVar1 = *(uint *)(param_2 + 1);
      uVar11 = *(uint *)((long)param_2 + 0xc);
      uVar6 = (ulong)uVar11;
      uVar10 = uVar1 - uVar11;
      if (uVar11 + 3 <= uVar1) {
        uVar10 = 3;
      }
      if (uVar10 != 0) {
        _memcpy(&local_3c,(void *)(*param_2 + uVar6),(ulong)uVar10);
        uVar6 = (ulong)(uVar11 + uVar10);
        *(uint *)((long)param_2 + 0xc) = uVar11 + uVar10;
      }
      uVar11 = (uint)uVar6;
      uVar10 = uVar11 + 2;
      if ((uVar10 <= uVar1) || (uVar9 = 0, uVar1 - uVar11 == 2)) {
        uVar9 = (ulong)CONCAT11(*(undefined1 *)(*param_2 + uVar6),
                                *(undefined1 *)(*param_2 + (ulong)(uVar11 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar10;
        uVar11 = uVar10;
      }
      uVar10 = uVar11 + 2;
      if ((uVar10 <= uVar1) || (uVar5 = 0, uVar1 - uVar11 == 2)) {
        uVar5 = (uint)CONCAT11(*(undefined1 *)(*param_2 + (ulong)uVar11),
                               *(undefined1 *)(*param_2 + (ulong)(uVar11 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar10;
        uVar11 = uVar10;
      }
      uVar10 = uVar11 + 2;
      if ((uVar10 <= uVar1) || (uVar6 = 0, uVar1 - uVar11 == 2)) {
        uVar6 = (ulong)CONCAT11(*(undefined1 *)(*param_2 + (ulong)uVar11),
                                *(undefined1 *)(*param_2 + (ulong)(uVar11 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar10;
        uVar11 = uVar10;
      }
      if ((uVar11 + 2 <= uVar1) || (uVar10 = 0, uVar1 - uVar11 == 2)) {
        uVar10 = (uint)CONCAT11(*(undefined1 *)(*param_2 + (ulong)uVar11),
                                *(undefined1 *)(*param_2 + (ulong)(uVar11 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar11 + 2;
      }
      puVar3 = (undefined2 *)
               ((uVar9 + (long)(int)*param_1) * 3 +
               (ulong)((uVar5 + param_1[1]) * param_4) + param_3);
      puVar4 = (undefined2 *)((ulong)(uVar10 * param_4) + (long)puVar3);
      for (; puVar3 < puVar4; puVar3 = (undefined2 *)((long)puVar3 + (ulong)param_4)) {
        if ((int)uVar6 != 0) {
          puVar8 = puVar3;
          do {
            *(undefined1 *)(puVar8 + 1) = local_3a;
            *puVar8 = local_3c;
            puVar8 = (undefined2 *)((long)puVar8 + 3);
          } while (puVar8 < (undefined2 *)(uVar6 * 3 + (long)puVar3));
        }
      }
      bVar12 = iVar7 != local_4c - 1;
      iVar7 = iVar7 + 1;
    } while (bVar12);
  }
  return;
}

