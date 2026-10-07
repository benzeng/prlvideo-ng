
void FUN_10043db10(int *param_1,long *param_2,long param_3,uint param_4,byte param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  uint local_68;
  ulong local_40;
  byte local_32;
  byte local_31;
  
  uVar10 = *(uint *)(param_2 + 1);
  uVar13 = *(uint *)((long)param_2 + 0xc);
  uVar12 = uVar13 + 4;
  if ((uVar12 <= uVar10) || (local_68 = 0, uVar10 - uVar13 == 4)) {
    lVar14 = *param_2;
    local_68 = (uint)*(byte *)(lVar14 + (ulong)(uVar13 + 2)) << 8 |
               (uint)*(byte *)(lVar14 + (ulong)(uVar13 + 1)) << 0x10 |
               (uint)*(byte *)(lVar14 + (ulong)uVar13) << 0x18 |
               (uint)*(byte *)(lVar14 + (ulong)(uVar13 + 3));
    *(uint *)((long)param_2 + 0xc) = uVar12;
    uVar13 = uVar12;
  }
  uVar12 = uVar10 - uVar13;
  if (uVar13 + 1 <= uVar10) {
    uVar12 = 1;
  }
  if (uVar12 != 0) {
    _memcpy(&local_31,(void *)((ulong)uVar13 + *param_2),(ulong)uVar12);
    *(uint *)((long)param_2 + 0xc) = uVar12 + uVar13;
    param_5 = local_31;
  }
  uVar5 = (ulong)(param_1[1] * param_4);
  uVar10 = ((1 - param_1[1]) + param_1[3]) * param_4;
  if (uVar10 != 0) {
    iVar3 = *param_1;
    lVar14 = (long)iVar3;
    pvVar8 = (void *)(uVar5 + lVar14 + param_3);
    uVar9 = (ulong)param_4;
    uVar11 = param_3 + 1 + lVar14 + uVar5;
    lVar15 = -(lVar14 + param_3 + uVar5);
    while( true ) {
      if (0 < (1 - iVar3) + param_1[2]) {
        uVar6 = (long)((param_1[2] + 1) - iVar3) + (long)pvVar8;
        if (uVar6 < uVar11) {
          uVar6 = uVar11;
        }
        _memset(pvVar8,(uint)param_5,uVar6 + lVar15);
      }
      if ((ulong)uVar10 + uVar5 + lVar14 + param_3 <= (long)pvVar8 + uVar9) break;
      pvVar8 = (void *)((long)pvVar8 + uVar9);
      iVar3 = *param_1;
      uVar11 = uVar11 + uVar9;
      lVar15 = lVar15 - uVar9;
    }
  }
  if (0 < (int)local_68) {
    uVar5 = (ulong)param_4;
    iVar3 = 0;
    do {
      uVar10 = *(uint *)(param_2 + 1);
      uVar13 = *(uint *)((long)param_2 + 0xc);
      uVar11 = (ulong)uVar13;
      uVar12 = uVar10 - uVar13;
      bVar1 = 1;
      if (uVar13 + 1 <= uVar10) {
        uVar12 = 1;
      }
      if (uVar12 != 0) {
        _memcpy(&local_32,(void *)(*param_2 + uVar11),(ulong)uVar12);
        uVar11 = (ulong)(uVar13 + uVar12);
        *(uint *)((long)param_2 + 0xc) = uVar13 + uVar12;
        bVar1 = local_32;
      }
      uVar13 = (uint)uVar11;
      uVar12 = uVar13 + 2;
      if ((uVar12 <= uVar10) || (uVar2 = 0, uVar10 - uVar13 == 2)) {
        uVar2 = (uint)CONCAT11(*(undefined1 *)(*param_2 + uVar11),
                               *(undefined1 *)(*param_2 + (ulong)(uVar13 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar12;
        uVar13 = uVar12;
      }
      uVar12 = uVar13 + 2;
      if ((uVar12 <= uVar10) || (uVar4 = 0, uVar10 - uVar13 == 2)) {
        uVar4 = (uint)CONCAT11(*(undefined1 *)(*param_2 + (ulong)uVar13),
                               *(undefined1 *)(*param_2 + (ulong)(uVar13 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar12;
        uVar13 = uVar12;
      }
      uVar12 = uVar13 + 2;
      if ((uVar12 <= uVar10) || (local_40 = 0, uVar10 - uVar13 == 2)) {
        local_40 = (ulong)CONCAT11(*(undefined1 *)(*param_2 + (ulong)uVar13),
                                   *(undefined1 *)(*param_2 + (ulong)(uVar13 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar12;
        uVar13 = uVar12;
      }
      if ((uVar13 + 2 <= uVar10) || (uVar12 = 0, uVar10 - uVar13 == 2)) {
        uVar12 = (uint)CONCAT11(*(undefined1 *)(*param_2 + (ulong)uVar13),
                                *(undefined1 *)(*param_2 + (ulong)(uVar13 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar13 + 2;
      }
      uVar11 = (ulong)((uVar4 + param_1[1]) * param_4);
      if (uVar12 * param_4 != 0) {
        lVar14 = (long)(int)(uVar2 + *param_1);
        pvVar8 = (void *)(uVar11 + lVar14 + param_3);
        uVar9 = local_40 + lVar14 + uVar11 + param_3;
        uVar6 = lVar14 + uVar11 + param_3 + 1;
        lVar15 = -(lVar14 + param_3 + uVar11);
        do {
          uVar7 = uVar6;
          if (uVar6 < uVar9) {
            uVar7 = uVar9;
          }
          if ((int)local_40 != 0) {
            _memset(pvVar8,(uint)bVar1,uVar7 + lVar15);
          }
          pvVar8 = (void *)((long)pvVar8 + uVar5);
          uVar9 = uVar9 + uVar5;
          uVar6 = uVar6 + uVar5;
          lVar15 = lVar15 - uVar5;
        } while (pvVar8 < (void *)(uVar11 + lVar14 + (ulong)(uVar12 * param_4) + param_3));
      }
      bVar16 = iVar3 != local_68 - 1;
      iVar3 = iVar3 + 1;
    } while (bVar16);
  }
  return;
}

