
undefined8 FUN_1003cf860(undefined8 param_1,uint *param_2,long param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  void *pvVar24;
  void *local_38;
  
  uVar1 = param_2[2];
  uVar20 = *param_2;
  uVar7 = param_2[1];
  uVar14 = uVar1 & 0xfffffffc;
  uVar2 = param_2[3];
  uVar15 = uVar2 & 0xfffffffc;
  uVar10 = uVar20 & 0xfffffffc;
  uVar18 = uVar7 & 0xfffffffc;
  uVar3 = uVar1 + 3 & 0xfffffffc;
  pvVar9 = (void *)((ulong)(uint)(*(int *)(param_3 + 0xc) * param_4[1] + *param_4 * 4) +
                   *(long *)(param_3 + 0x10));
  iVar4 = uVar3 - uVar10;
  uVar17 = uVar7 - uVar18;
  if ((uVar17 == 0) && (uVar2 == uVar15)) {
    local_38 = (void *)0x0;
    if ((uVar1 != uVar14) || (uVar20 != uVar10)) {
      DAT_1011bbc70 = operator_new__(0x40);
      DAT_1011bbc78 = 0x40;
      local_38 = DAT_1011bbc70;
    }
  }
  else {
    DAT_1011bbc70 = operator_new__((ulong)(uint)(iVar4 * 0x10));
    DAT_1011bbc78 = iVar4 * 0x10;
    local_38 = DAT_1011bbc70;
  }
  uVar22 = uVar7 + 3 & 0xfffffffc;
  uVar5 = uVar20 - uVar10;
  if ((uVar7 != uVar18) &&
     (FUN_1003cff00(param_1,local_38,iVar4 * 4,uVar10,uVar18,param_2[2] - uVar10), uVar17 < 4)) {
    uVar13 = (ulong)((uVar1 - uVar20) * 4);
    uVar18 = uVar7 & 3;
    pvVar11 = (void *)(ulong)uVar18;
    pvVar24 = pvVar9;
    if ((-uVar7 & 1) != 0) {
      _memcpy(pvVar9,(void *)((long)local_38 + (ulong)(uVar18 * iVar4 + uVar5) * 4),uVar13);
      pvVar11 = (void *)((ulong)*(uint *)(param_3 + 0xc) + (long)pvVar9);
      uVar17 = uVar17 + 1;
      uVar18 = uVar18 + 1;
      pvVar24 = pvVar11;
    }
    pvVar9 = pvVar11;
    if ((uVar7 | 3) != uVar7) {
      uVar7 = uVar1 + 3 >> 2;
      uVar16 = uVar20 >> 2;
      iVar8 = uVar7 * 4 + uVar16 * -4;
      iVar21 = 4 - uVar17;
      iVar23 = 0;
      do {
        _memcpy(pvVar24,(void *)((long)local_38 +
                                (ulong)(iVar8 * uVar18 + uVar20 + uVar16 * -4 + iVar23) * 4),uVar13)
        ;
        pvVar24 = (void *)((ulong)*(uint *)(param_3 + 0xc) + (long)pvVar24);
        _memcpy(pvVar24,(void *)((long)local_38 +
                                (ulong)((uVar18 + 1) * iVar8 + uVar20 + uVar16 * -4 + iVar23) * 4),
                uVar13);
        pvVar24 = (void *)((ulong)*(uint *)(param_3 + 0xc) + (long)pvVar24);
        iVar23 = iVar23 + uVar7 * 8 + uVar16 * -8;
        iVar21 = iVar21 + -2;
        pvVar9 = pvVar24;
      } while (iVar21 != 0);
    }
  }
  if (uVar22 < uVar15) {
    uVar18 = uVar20 + 3 & 0xfffffffc;
    uVar7 = uVar14 - uVar18;
    uVar13 = (ulong)((4 - uVar5) * 4);
    uVar17 = uVar20 & 3;
    do {
      if ((uVar20 != uVar10) && (FUN_1003cff00(param_1,local_38,0x10,uVar10,uVar22,4), uVar5 < 4)) {
        pvVar24 = pvVar9;
        uVar16 = uVar17;
        uVar6 = uVar5;
        if ((-uVar20 & 1) != 0) {
          _memcpy(pvVar9,(void *)((long)local_38 + (ulong)(uVar5 + uVar17 * 4) * 4),uVar13);
          pvVar24 = (void *)((ulong)*(uint *)(param_3 + 0xc) + (long)pvVar9);
          uVar6 = uVar5 + 1;
          uVar16 = uVar17 + 1;
        }
        if (uVar10 + 3 != uVar20) {
          uVar19 = uVar5 + uVar16 * 4;
          uVar16 = uVar5 + 4 + uVar16 * 4;
          iVar8 = 4 - uVar6;
          do {
            _memcpy(pvVar24,(void *)((long)local_38 + (ulong)uVar19 * 4),uVar13);
            pvVar24 = (void *)((ulong)*(uint *)(param_3 + 0xc) + (long)pvVar24);
            _memcpy(pvVar24,(void *)((long)local_38 + (ulong)uVar16 * 4),uVar13);
            pvVar24 = (void *)((ulong)*(uint *)(param_3 + 0xc) + (long)pvVar24);
            uVar19 = uVar19 + 8;
            uVar16 = uVar16 + 8;
            iVar8 = iVar8 + -2;
          } while (iVar8 != 0);
        }
      }
      FUN_1003cff00(param_1,pvVar9,*(undefined4 *)(param_3 + 0xc),uVar18,uVar22,uVar7);
      if (uVar1 != uVar14) {
        FUN_1003cff00(param_1,local_38,0x10,uVar3,uVar22,4);
        pvVar24 = (void *)((long)pvVar9 + (ulong)uVar7 * 4);
        uVar16 = 0;
        uVar12 = 0;
        do {
          _memcpy(pvVar24,(void *)((long)local_38 + (ulong)uVar16 * 4),(ulong)((uVar1 - uVar14) * 4)
                 );
          pvVar24 = (void *)((long)pvVar24 + (ulong)*(uint *)(param_3 + 0xc));
          uVar12 = uVar12 + 1;
          uVar16 = uVar16 + 4;
        } while (uVar12 < uVar1 - uVar14);
      }
      pvVar9 = (void *)((long)pvVar9 + (ulong)(uint)(*(int *)(param_3 + 0xc) << 2));
      uVar22 = uVar22 + 4;
    } while (uVar22 < uVar15);
  }
  if (uVar2 != uVar15) {
    FUN_1003cff00(param_1,local_38,iVar4 * 4,uVar10,uVar15,param_2[2] - uVar10);
    uVar20 = uVar20 - uVar10;
    uVar13 = 0;
    do {
      _memcpy(pvVar9,(void *)((long)local_38 + (ulong)uVar20 * 4),
              (ulong)((param_2[2] - *param_2) * 4));
      pvVar9 = (void *)((long)pvVar9 + (ulong)*(uint *)(param_3 + 0xc));
      uVar13 = uVar13 + 1;
      uVar20 = uVar20 + iVar4;
    } while (uVar13 < uVar2 - uVar15);
  }
  if ((DAT_1011bbc78 != 0) && (DAT_1011bbc70 != (void *)0x0)) {
    operator_delete__(DAT_1011bbc70);
  }
  DAT_1011bbc78 = 0;
  return 1;
}

