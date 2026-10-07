
ulong FUN_100897c50(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  byte bVar22;
  long local_c8;
  byte *local_78;
  uint local_60 [10];
  long local_38;
  
  bVar22 = 0;
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar4 = *(long *)(param_1 + 0x78);
  uVar19 = *(ulong *)(lVar4 + 0x218);
  uVar21 = (ulong)(0x40 - *(int *)(lVar4 + 0x210));
  *(undefined8 *)(lVar4 + 0x218) = 0xffffffffffffffff;
  uVar20 = 0;
  local_38 = lVar8;
  if ((param_4 & 0xf) != 0) goto LAB_100898592;
  puVar1 = (undefined4 *)(lVar4 + 0x1b4);
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar20 = 0;
    _aesni_cbc_encrypt(param_3,param_2,param_4,lVar4,param_1 + 0x28,0);
    if (uVar19 == 0) {
      FUN_1008987e0(puVar1,param_2,param_4);
      uVar20 = 1;
    }
    else {
      uVar21 = (ulong)(0x301 < CONCAT11(*(undefined1 *)(uVar19 + 0x21c + lVar4),
                                        *(undefined1 *)(uVar19 + 0x21d + lVar4)));
      local_c8 = uVar21 * 0x10;
      if (local_c8 + 0x15U <= param_4) {
        bVar3 = *(byte *)((param_4 - 1) + param_2);
        lVar10 = param_4 + uVar21 * -0x10;
        lVar8 = (lVar10 + -0x15) - (ulong)bVar3;
        *(char *)(lVar4 + 0x21e + uVar19) = (char)((ulong)lVar8 >> 8);
        *(char *)(lVar4 + 0x21f + uVar19) = (char)lVar8;
        puVar15 = (undefined4 *)(lVar4 + 0xf4);
        puVar18 = puVar1;
        for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar18 = *puVar15;
          puVar15 = puVar15 + (ulong)bVar22 * -2 + 1;
          puVar18 = puVar18 + (ulong)bVar22 * -2 + 1;
        }
        FUN_1008987e0(puVar1,lVar4 + 0x220);
        uVar19 = lVar10 - 0x14;
        if (0x13f < uVar19) {
          lVar11 = (ulong)(0x40 - *(int *)(lVar4 + 0x210)) + (lVar10 - 0x154U & 0xffffffffffffffc0);
          FUN_1008987e0(puVar1,param_2 + local_c8,lVar11);
          local_c8 = local_c8 + lVar11;
          uVar19 = uVar19 - lVar11;
          lVar8 = lVar8 - lVar11;
        }
        puVar2 = (undefined8 *)(lVar4 + 0x1d0);
        iVar13 = (int)lVar8;
        uVar6 = iVar13 * 8 + *(int *)(lVar4 + 0x1c8);
        uVar16 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000
        ;
        local_60[0] = 0;
        local_60[1] = 0;
        local_60[2] = 0;
        local_60[3] = 0;
        local_60[4] = 0;
        uVar6 = *(uint *)(lVar4 + 0x210);
        uVar20 = 0;
        if (uVar19 != 0) {
          uVar21 = 0;
          lVar11 = lVar8;
          do {
            bVar5 = (byte)(-lVar8 + uVar21 >> 0x38);
            uVar20 = (ulong)uVar6;
            uVar6 = uVar6 + 1;
            *(byte *)((long)puVar2 + uVar20) =
                 ~(byte)((ulong)lVar11 >> 0x38) & ~bVar5 & 0x80 |
                 *(byte *)(param_2 + local_c8 + uVar21) & bVar5;
            if (uVar6 == 0x40) {
              uVar6 = (uint)((ulong)(lVar11 + 7) >> 0x20);
              *(uint *)(lVar4 + 0x20c) = *(uint *)(lVar4 + 0x20c) | (int)uVar6 >> 0x1f & uVar16;
              _sha1_block_data_order(puVar1,puVar2,1);
              uVar6 = (int)((uint)(-lVar8 + -0x48 + uVar21 >> 0x20) & uVar6) >> 0x1f;
              local_60[0] = *(uint *)(lVar4 + 0x1b4) & uVar6 | local_60[0];
              local_60[1] = local_60[1] | *(uint *)(lVar4 + 0x1b8) & uVar6;
              local_60[2] = *(uint *)(lVar4 + 0x1bc) & uVar6 | local_60[2];
              local_60[3] = local_60[3] | *(uint *)(lVar4 + 0x1c0) & uVar6;
              local_60[4] = local_60[4] | uVar6 & *(uint *)(lVar4 + 0x1c4);
              uVar6 = 0;
            }
            uVar21 = uVar21 + 1;
            lVar11 = lVar11 + -1;
            uVar20 = uVar19;
          } while (uVar19 != uVar21);
        }
        uVar7 = 0x114U - (int)lVar10 >> 0x18 | (int)lVar10 - 0x15U & 0xff;
        if (uVar6 < 0x40) {
          uVar21 = (ulong)uVar6;
          ___bzero(lVar4 + 0x1d0 + uVar21,0x40 - uVar21);
          uVar20 = (uVar20 + 0x40) - uVar21;
          if (0x38 < uVar6) goto LAB_1008982e0;
          lVar8 = -0x49 - lVar8;
        }
        else {
LAB_1008982e0:
          uVar6 = (uint)((lVar8 + 8) - uVar20 >> 0x20);
          *(uint *)(lVar4 + 0x20c) = *(uint *)(lVar4 + 0x20c) | (int)uVar6 >> 0x1f & uVar16;
          _sha1_block_data_order(puVar1,puVar2,1);
          lVar8 = -0x49 - lVar8;
          uVar6 = (int)((uint)(lVar8 + uVar20 >> 0x20) & uVar6) >> 0x1f;
          local_60[0] = *(uint *)(lVar4 + 0x1b4) & uVar6 | local_60[0];
          local_60[1] = local_60[1] | *(uint *)(lVar4 + 0x1b8) & uVar6;
          local_60[2] = *(uint *)(lVar4 + 0x1bc) & uVar6 | local_60[2];
          local_60[3] = local_60[3] | *(uint *)(lVar4 + 0x1c0) & uVar6;
          local_60[4] = local_60[4] | uVar6 & *(uint *)(lVar4 + 0x1c4);
          *(undefined8 *)(lVar4 + 0x208) = 0;
          *(undefined8 *)(lVar4 + 0x200) = 0;
          *(undefined8 *)(lVar4 + 0x1f8) = 0;
          *(undefined8 *)(lVar4 + 0x1f0) = 0;
          *(undefined8 *)(lVar4 + 0x1e8) = 0;
          *(undefined8 *)(lVar4 + 0x1e0) = 0;
          *(undefined8 *)(lVar4 + 0x1d8) = 0;
          *puVar2 = 0;
          uVar20 = uVar20 + 0x40;
        }
        *(uint *)(lVar4 + 0x20c) = uVar16;
        _sha1_block_data_order(puVar1,puVar2,1);
        uVar6 = (uint)((long)(lVar8 + uVar20) >> 0x3f);
        local_60[0] = *(uint *)(lVar4 + 0x1b4) & uVar6 | local_60[0];
        local_60[1] = local_60[1] | *(uint *)(lVar4 + 0x1b8) & uVar6;
        local_60[2] = *(uint *)(lVar4 + 0x1bc) & uVar6 | local_60[2];
        local_60[3] = local_60[3] | *(uint *)(lVar4 + 0x1c0) & uVar6;
        local_60[4] = local_60[4] | uVar6 & *(uint *)(lVar4 + 0x1c4);
        local_60[1] = local_60[1] >> 0x18 | (local_60[1] & 0xff0000) >> 8 |
                      (local_60[1] & 0xff00) << 8 | local_60[1] << 0x18;
        local_60[0] = local_60[0] >> 0x18 | (local_60[0] & 0xff0000) >> 8 |
                      (local_60[0] & 0xff00) << 8 | local_60[0] << 0x18;
        local_60[3] = local_60[3] >> 0x18 | (local_60[3] & 0xff0000) >> 8 |
                      (local_60[3] & 0xff00) << 8 | local_60[3] << 0x18;
        local_60[2] = local_60[2] >> 0x18 | (local_60[2] & 0xff0000) >> 8 |
                      (local_60[2] & 0xff00) << 8 | local_60[2] << 0x18;
        local_60[4] = local_60[4] >> 0x18 | (local_60[4] & 0xff0000) >> 8 |
                      (local_60[4] & 0xff00) << 8 | local_60[4] << 0x18;
        puVar15 = (undefined4 *)(lVar4 + 0x154);
        puVar18 = puVar1;
        for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar18 = *puVar15;
          puVar15 = puVar15 + (ulong)bVar22 * -2 + 1;
          puVar18 = puVar18 + (ulong)bVar22 * -2 + 1;
        }
        FUN_1008987e0(puVar1,local_60,0x14);
        FUN_100824160(local_60,puVar1);
        uVar6 = (iVar13 + uVar7) - (int)uVar19;
        uVar20 = (ulong)(uVar7 + 0x14);
        local_78 = (byte *)(param_2 + ((local_c8 + -1 + uVar19) - (ulong)uVar7));
        uVar7 = (((int)uVar19 + -0x15) - iVar13) - uVar7;
        lVar8 = 0;
        uVar16 = 0;
        do {
          uVar17 = (int)(uVar7 & uVar6) >> 0x1f;
          uVar16 = (*local_78 ^ *(byte *)((long)local_60 + lVar8)) & uVar17 |
                   ~((int)uVar7 >> 0x1f) & (uint)(*local_78 ^ bVar3) | uVar16;
          lVar8 = lVar8 + (ulong)(uVar17 & 1);
          uVar6 = uVar6 - 1;
          local_78 = local_78 + 1;
          uVar7 = uVar7 + 1;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
        uVar20 = (ulong)(-uVar16 >> 0x1f ^ 1);
      }
    }
  }
  else {
    uVar20 = 0;
    uVar12 = param_4;
    if (uVar19 != 0xffffffffffffffff) {
      if ((uVar19 + 0x24 & 0xfffffffffffffff0) != param_4) goto LAB_100898592;
      uVar20 = 0x10;
      uVar12 = uVar19;
      if (*(uint *)(lVar4 + 0x220) < 0x302) {
        uVar20 = 0;
      }
    }
    uVar19 = uVar20 + uVar21;
    lVar11 = 0;
    uVar9 = uVar12 - uVar19;
    lVar8 = 0;
    if (uVar19 <= uVar12 && uVar9 != 0) {
      lVar11 = 0;
      uVar14 = uVar9 >> 6;
      lVar8 = 0;
      if (uVar14 != 0) {
        FUN_1008987e0(puVar1,param_3 + uVar20,uVar21);
        _aesni_cbc_sha1_enc(param_3,param_2,uVar14,lVar4,param_1 + 0x28,puVar1,uVar19 + param_3);
        lVar11 = uVar14 * 0x40;
        lVar8 = uVar21 + lVar11;
        iVar13 = (int)(uVar9 >> 0x1d) + *(int *)(lVar4 + 0x1cc);
        *(int *)(lVar4 + 0x1cc) = iVar13;
        uVar16 = (uint)(uVar14 << 9);
        uVar6 = *(int *)(lVar4 + 0x1c8) + uVar16;
        *(uint *)(lVar4 + 0x1c8) = uVar6;
        if (uVar6 < uVar16) {
          *(int *)(lVar4 + 0x1cc) = iVar13 + 1;
        }
      }
    }
    FUN_1008987e0(puVar1,param_3 + lVar8 + uVar20,uVar12 - (lVar8 + uVar20));
    if (uVar12 != param_4) {
      if (param_3 != param_2) {
        _memcpy((void *)(param_2 + lVar11),(void *)(param_3 + lVar11),uVar12 - lVar11);
      }
      lVar8 = param_2 + uVar12;
      FUN_100824160(lVar8,puVar1);
      puVar15 = (undefined4 *)(lVar4 + 0x154);
      puVar18 = puVar1;
      for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar18 = *puVar15;
        puVar15 = puVar15 + (ulong)bVar22 * -2 + 1;
        puVar18 = puVar18 + (ulong)bVar22 * -2 + 1;
      }
      FUN_1008987e0(puVar1,lVar8,0x14);
      FUN_100824160(lVar8,puVar1);
      param_3 = param_2;
      if (uVar12 + 0x14 < param_4) {
        _memset((void *)(uVar12 + 0x14 + param_2),(int)param_4 + (0xeb - (int)uVar12),
                (param_4 - 0x14) - uVar12);
      }
    }
    uVar20 = 1;
    _aesni_cbc_encrypt(param_3 + lVar11,param_2 + lVar11,param_4 - lVar11,lVar4,param_1 + 0x28,1);
  }
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_100898592:
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar20;
}

