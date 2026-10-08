
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bbf0c0(long param_1,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar13;
  uint uVar14;
  undefined1 auVar12 [16];
  uint uVar15;
  uint uVar17;
  undefined1 auVar16 [16];
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  if (param_3 == 0) {
    return 0;
  }
  uVar8 = 0;
  if (0 < (int)param_3) {
    uVar8 = 0;
    uVar10 = 0;
    if (param_3 != 0) {
      uVar10 = param_3 & 0xfffffff8;
      if (uVar10 == 0) {
        uVar10 = 0;
        uVar11 = 0;
        uVar13 = 0;
        uVar14 = 0;
        uVar15 = 0;
        uVar8 = 0;
        uVar9 = 0;
        uVar17 = 0;
        uVar18 = 0;
      }
      else {
        uVar5 = (param_3 & 0xfffffff8) - 8;
        if (((uVar5 >> 3) + 1 & 1) == 0) {
          uVar11 = 0;
          uVar13 = 0;
          uVar14 = 0;
          uVar15 = 0;
          uVar4 = 0;
          uVar8 = 0;
          uVar9 = 0;
          uVar17 = 0;
          uVar18 = 0;
        }
        else {
          uVar4 = 8;
          uVar8 = _DAT_101da2660;
          uVar9 = _UNK_101da2664;
          uVar17 = _UNK_101da2668;
          uVar18 = _UNK_101da266c;
          uVar11 = _DAT_101da2650;
          uVar13 = _UNK_101da2654;
          uVar14 = _UNK_101da2658;
          uVar15 = _UNK_101da265c;
        }
        if (uVar5 != 0) {
          do {
            auVar19._0_4_ =
                 (int)(float)((uVar4 + (int)PTR___mh_execute_header_101da2670) * 0x800000 +
                             _DAT_101cdba40);
            auVar19._4_4_ =
                 (int)(float)((uVar4 + PTR___mh_execute_header_101da2670._4_4_) * 0x800000 +
                             _UNK_101cdba44);
            auVar19._8_4_ = (int)(float)((uVar4 + _UNK_101da2678) * 0x800000 + _UNK_101cdba48);
            auVar19._12_4_ = (int)(float)((uVar4 + _UNK_101da267c) * 0x800000 + _UNK_101cdba4c);
            auVar20._0_4_ = (int)(float)((uVar4 + _DAT_101da2680) * 0x800000 + _DAT_101cdba40);
            auVar20._4_4_ = (int)(float)((uVar4 + _UNK_101da2684) * 0x800000 + _UNK_101cdba44);
            auVar20._8_4_ = (int)(float)((uVar4 + _UNK_101da2688) * 0x800000 + _UNK_101cdba48);
            auVar20._12_4_ = (int)(float)((uVar4 + _UNK_101da268c) * 0x800000 + _UNK_101cdba4c);
            iVar6 = uVar4 + 8;
            auVar12._0_4_ =
                 (int)(float)((iVar6 + (int)PTR___mh_execute_header_101da2670) * 0x800000 +
                             _DAT_101cdba40);
            auVar12._4_4_ =
                 (int)(float)((iVar6 + PTR___mh_execute_header_101da2670._4_4_) * 0x800000 +
                             _UNK_101cdba44);
            auVar12._8_4_ = (int)(float)((iVar6 + _UNK_101da2678) * 0x800000 + _UNK_101cdba48);
            auVar12._12_4_ = (int)(float)((iVar6 + _UNK_101da267c) * 0x800000 + _UNK_101cdba4c);
            auVar16._0_4_ = (int)(float)((iVar6 + _DAT_101da2680) * 0x800000 + _DAT_101cdba40);
            auVar16._4_4_ = (int)(float)((iVar6 + _UNK_101da2684) * 0x800000 + _UNK_101cdba44);
            auVar16._8_4_ = (int)(float)((iVar6 + _UNK_101da2688) * 0x800000 + _UNK_101cdba48);
            auVar16._12_4_ = (int)(float)((iVar6 + _UNK_101da268c) * 0x800000 + _UNK_101cdba4c);
            uVar11 = auVar12._0_4_ * _DAT_101db39f0 | auVar19._0_4_ * _DAT_101db39f0 | uVar11;
            uVar13 = auVar12._4_4_ * _DAT_101db39f0 | auVar19._4_4_ * _DAT_101db39f0 | uVar13;
            uVar14 = (uint)((auVar12._8_8_ & 0xffffffff) * (ulong)_UNK_101db39f8) |
                     (uint)((auVar19._8_8_ & 0xffffffff) * (ulong)_UNK_101db39f8) | uVar14;
            uVar15 = auVar12._12_4_ * _UNK_101db39f8 | auVar19._12_4_ * _UNK_101db39f8 | uVar15;
            uVar8 = auVar16._0_4_ * _DAT_101db39f0 | auVar20._0_4_ * _DAT_101db39f0 | uVar8;
            uVar9 = auVar16._4_4_ * _DAT_101db39f0 | auVar20._4_4_ * _DAT_101db39f0 | uVar9;
            uVar17 = (uint)((auVar16._8_8_ & 0xffffffff) * (ulong)_UNK_101db39f8) |
                     (uint)((auVar20._8_8_ & 0xffffffff) * (ulong)_UNK_101db39f8) | uVar17;
            uVar18 = auVar16._12_4_ * _UNK_101db39f8 | auVar20._12_4_ * _UNK_101db39f8 | uVar18;
            uVar4 = uVar4 + 0x10;
          } while (uVar4 != uVar10);
        }
      }
      uVar8 = uVar15 | uVar18 | uVar13 | uVar9 | uVar14 | uVar17 | uVar11 | uVar8;
      if (uVar10 == param_3) goto LAB_100bbf304;
    }
    uVar9 = (param_3 - 1) - uVar10;
    if ((param_3 & 7) != 0) {
      iVar6 = -(param_3 & 7);
      do {
        uVar8 = uVar8 | 1 << ((byte)uVar10 & 0x1f);
        uVar10 = uVar10 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0);
    }
    if (6 < uVar9) {
      do {
        bVar3 = (byte)uVar10;
        iVar6 = uVar10 + 7;
        uVar8 = 1 << ((byte)iVar6 & 0x1f) |
                1 << (bVar3 + 6 & 0x1f) |
                1 << (bVar3 + 5 & 0x1f) |
                1 << (bVar3 + 4 & 0x1f) |
                1 << (bVar3 + 3 & 0x1f) |
                1 << (bVar3 + 2 & 0x1f) | 1 << (bVar3 + 1 & 0x1f) | 1 << (bVar3 & 0x1f) | uVar8;
        uVar10 = uVar10 + 8;
      } while (iVar6 != param_3 - 1);
    }
  }
LAB_100bbf304:
  uVar2 = 0xffffffff;
  if (param_4 <= uVar8) {
    iVar6 = *param_2;
    if (0 < (int)param_3) {
      uVar8 = param_3 - 1;
      iVar7 = 0;
      do {
        iVar1 = iVar6 + iVar7 >> 3;
        bVar3 = (byte)(1 << (~(byte)(iVar6 + iVar7) & 7));
        if ((param_4 >> (uVar8 & 0x1f) & 1) == 0) {
          bVar3 = *(byte *)(param_1 + iVar1) & ~bVar3;
        }
        else {
          bVar3 = *(byte *)(param_1 + iVar1) | bVar3;
        }
        *(byte *)(param_1 + iVar1) = bVar3;
        iVar7 = iVar7 + 1;
        iVar6 = *param_2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0xffffffff);
    }
    *param_2 = iVar6 + param_3;
    uVar2 = 0;
  }
  return uVar2;
}

