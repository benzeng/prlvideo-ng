
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1007ff070(undefined8 *param_1,undefined8 param_2,ulong *param_3,undefined8 *param_4,
             void *param_5,int param_6,ulong param_7,undefined8 param_8,uint param_9,char param_10)

{
  undefined1 auVar1 [16];
  uint uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong *puVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  byte bVar17;
  uint uVar18;
  uint uVar19;
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte bVar24;
  uint uVar25;
  uint uVar26;
  byte bVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  code *local_3a0;
  undefined1 local_320 [52];
  uint local_2ec;
  byte local_2e8 [16];
  undefined1 local_2d8 [112];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined4 local_220;
  undefined1 local_21c;
  undefined1 local_21b [115];
  ulong local_1a8 [16];
  byte local_128 [24];
  undefined1 local_110 [216];
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar13;
  if (0xfffff < param_7) {
    FUN_10081d560("s3_cbc.c",0x1c7,"data_plus_mac_plus_padding_size < 1024 * 1024");
  }
  uVar6 = FUN_100894720(param_1);
  iVar5 = FUN_1008946b0(uVar6);
  if (iVar5 < 0x2a0) {
    if (iVar5 != 4) {
      if (iVar5 != 0x40) goto switchD_1007ff162_default;
      iVar5 = FUN_100824260(local_110);
      uVar6 = 0;
      if (iVar5 < 1) goto LAB_1007ffb25;
      local_3a0 = FUN_1007ffbd0;
      pcVar11 = FUN_100824150;
      uVar23 = 0x14;
      goto LAB_1007ff2c2;
    }
    iVar5 = FUN_100823660(local_110);
    uVar6 = 0;
    if (iVar5 < 1) goto LAB_1007ffb25;
    bVar4 = false;
    local_3a0 = FUN_1007ffb60;
    pcVar11 = FUN_100823560;
    uVar23 = 0x10;
    uVar21 = 0x40;
    iVar5 = 8;
    uVar15 = 0x30;
    goto LAB_1007ff2da;
  }
  switch(iVar5) {
  case 0x2a0:
    iVar5 = FUN_1008243b0(local_110);
    uVar6 = 0;
    if (iVar5 < 1) goto LAB_1007ffb25;
    local_3a0 = FUN_1007ffc50;
    pcVar11 = FUN_100824930;
    uVar23 = 0x20;
    break;
  case 0x2a1:
    iVar5 = FUN_100824940(local_110);
    uVar6 = 0;
    if (iVar5 < 1) goto LAB_1007ffb25;
    uVar23 = 0x30;
    goto LAB_1007ff274;
  case 0x2a2:
    iVar5 = FUN_1008249e0(local_110);
    uVar6 = 0;
    if (iVar5 < 1) goto LAB_1007ffb25;
    uVar23 = 0x40;
LAB_1007ff274:
    local_3a0 = FUN_1007ffd20;
    pcVar11 = FUN_1008250f0;
    uVar21 = 0x80;
    bVar4 = true;
    iVar5 = 0x10;
    uVar15 = 0x28;
    goto LAB_1007ff2da;
  case 0x2a3:
    iVar5 = FUN_1008242f0(local_110);
    uVar6 = 0;
    if (iVar5 < 1) goto LAB_1007ffb25;
    local_3a0 = FUN_1007ffc50;
    pcVar11 = FUN_100824930;
    uVar23 = 0x1c;
    break;
  default:
switchD_1007ff162_default:
    FUN_10081d560("s3_cbc.c",0x209,"0");
    uVar6 = 0;
    if (param_3 != (ulong *)0x0) {
      *param_3 = 0xffffffffffffffff;
    }
    goto LAB_1007ffb25;
  }
LAB_1007ff2c2:
  uVar21 = 0x40;
  bVar4 = true;
  iVar5 = 8;
  uVar15 = 0x28;
LAB_1007ff2da:
  uVar18 = 0xd;
  if (param_10 != '\0') {
    uVar18 = param_9 + 0xb + (int)uVar15;
  }
  uVar2 = (uint)uVar21;
  uVar22 = (uint)uVar23;
  uVar9 = (param_6 - uVar22) + uVar18;
  uVar14 = (uint)(param_10 == '\0') * 4 + 2;
  uVar19 = 0;
  uVar26 = (uint)((((iVar5 + -1 + uVar2) - uVar22) + (int)(uVar18 + param_7)) / uVar21);
  uVar29 = 0;
  if ((param_10 != '\0' | uVar14) < uVar26) {
    uVar29 = uVar26 - uVar14;
    uVar19 = uVar29 * uVar2;
  }
  iVar10 = uVar9 * 8;
  if (param_10 == '\0') {
    ___memset_chk(local_1a8,0,uVar21,0x80);
    if (0x80 < param_9) {
      FUN_10081d560("s3_cbc.c",0x271,"mac_secret_length <= sizeof(hmac_pad)");
    }
    iVar10 = iVar10 + uVar2 * 8;
    ___memcpy_chk(local_1a8,param_8,param_9,0x80);
    puVar7 = local_1a8 + 2;
    uVar12 = uVar21;
    do {
      puVar7[-2] = puVar7[-2] ^ _DAT_100b52190;
      puVar7[-1] = puVar7[-1] ^ _UNK_100b52198;
      *puVar7 = *puVar7 ^ _DAT_100b52190;
      puVar7[1] = puVar7[1] ^ _UNK_100b52198;
      puVar7 = puVar7 + 4;
      uVar12 = uVar12 - 0x20;
    } while (uVar12 != 0);
    (*pcVar11)(local_110,local_1a8);
  }
  bVar8 = (byte)((uint)iVar10 >> 8);
  bVar27 = (byte)((uint)iVar10 >> 0x18);
  bVar24 = (byte)((uint)iVar10 >> 0x10);
  if (bVar4) {
    uVar26 = iVar5 - 1;
    ___memset_chk(local_128,0,(ulong)(iVar5 - 4),0x10);
    local_128[iVar5 - 4] = bVar27;
    local_128[iVar5 - 3] = bVar24;
    local_128[iVar5 - 2] = bVar8;
  }
  else {
    ___memset_chk(local_128,0,iVar5,0x10);
    local_128[iVar5 - 5] = bVar27;
    local_128[iVar5 - 6] = bVar24;
    local_128[iVar5 - 7] = bVar8;
    uVar26 = iVar5 - 8;
  }
  local_128[uVar26] = (byte)iVar10;
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (uVar19 != 0) {
    if (param_10 == '\0') {
      local_21c = *(undefined1 *)((long)param_4 + 0xc);
      local_220 = *(undefined4 *)(param_4 + 1);
      local_228 = *param_4;
      ___memcpy_chk(local_21b,param_5,uVar2 - 0xd,0x73);
      (*pcVar11)(local_110);
      if (1 < (uint)(uVar19 / uVar21)) {
        uVar12 = 1;
        do {
          (*pcVar11)(local_110);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar19 / uVar21);
      }
    }
    else {
      uVar6 = 0;
      uVar26 = uVar18 - uVar2;
      if (uVar18 < uVar2 || uVar26 == 0) goto LAB_1007ffb25;
      (*pcVar11)(local_110,param_4);
      ___memcpy_chk(&local_228,uVar21 + (long)param_4,(ulong)uVar26,0x80);
      _memcpy((void *)((long)&local_228 + (ulong)uVar26),param_5,(ulong)(uVar2 - uVar26));
      (*pcVar11)(local_110);
      uVar26 = (int)(uVar19 / uVar21) - 1;
      if (1 < uVar26) {
        uVar12 = 1;
        do {
          (*pcVar11)(local_110);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar26);
      }
    }
  }
  local_238 = (undefined1  [16])0x0;
  local_248 = (undefined1  [16])0x0;
  local_258 = (undefined1  [16])0x0;
  local_268 = (undefined1  [16])0x0;
  uVar26 = uVar14 + uVar29;
  if (!CARRY4(uVar14,uVar29)) {
    uVar14 = (uint)((ulong)uVar9 % uVar21);
    do {
      uVar25 = uVar29 ^ (uint)(uVar9 / uVar21);
      uVar28 = uVar29 ^ (uint)((uVar9 + iVar5) / uVar21);
      uVar28 = uVar28 - 1 & ~uVar28;
      bVar27 = (byte)((int)uVar28 >> 0x1f);
      bVar24 = (char)((byte)(uVar25 - 1 >> 0x18) & ~(byte)(uVar25 >> 0x18)) >> 7;
      uVar12 = 0;
      uVar25 = uVar19;
      do {
        if (uVar25 < uVar18) {
          bVar8 = *(byte *)((long)param_4 + (ulong)uVar25);
        }
        else if ((ulong)uVar25 < uVar18 + param_7) {
          bVar8 = *(byte *)((long)param_5 + (ulong)(uVar25 - uVar18));
        }
        else {
          bVar8 = 0;
        }
        bVar3 = (byte)(uVar12 >> 0x18);
        iVar10 = (int)uVar12;
        bVar17 = ~((char)(((byte)(iVar10 - uVar14 >> 0x18) | bVar3) ^ bVar3) >> 7) & bVar24;
        bVar8 = ~(~((char)(((byte)(~uVar14 + iVar10 >> 0x18) | bVar3) ^ bVar3) >> 7) & bVar24) &
                (~bVar17 & bVar8 | bVar17 & 0x80);
        if (uVar12 < uVar2 - iVar5) {
          bVar8 = bVar8 & (bVar24 | ~bVar27);
        }
        else {
          bVar8 = bVar8 & ~bVar27 | local_128[(iVar5 - uVar2) + iVar10] & bVar27;
        }
        uVar25 = uVar25 + 1;
        local_2e8[uVar12] = bVar8;
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar21);
      (*pcVar11)(local_110,local_2e8);
      (*local_3a0)(local_110);
      uVar12 = 0;
      if (uVar22 != (uVar22 & 0x1c)) {
        uVar12 = uVar23 - (uVar22 & 0x1c);
        auVar30 = pshufb(ZEXT416((int)uVar28 >> 0x1f & 0xff),_DAT_100b2d3d0);
        pauVar16 = (undefined1 (*) [16])local_2d8;
        pauVar20 = &local_258;
        lVar13 = uVar23 + ((ulong)(uVar22 >> 2) & 7) * -4;
        do {
          auVar1 = *pauVar16;
          pauVar20[-1] = pauVar16[-1] & auVar30 | pauVar20[-1];
          *pauVar20 = auVar1 & auVar30 | *pauVar20;
          pauVar20 = pauVar20 + 2;
          pauVar16 = pauVar16 + 2;
          lVar13 = lVar13 + -0x20;
        } while (lVar13 != 0);
      }
      if (uVar23 != uVar12) {
        do {
          local_268[uVar12] = local_268[uVar12] | local_2e8[uVar12] & bVar27;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar23);
      }
      uVar19 = uVar19 + uVar2;
      uVar29 = uVar29 + 1;
    } while (uVar29 <= uVar26);
  }
  FUN_10088a650(local_320);
  iVar5 = FUN_10088a720(local_320,*param_1,0);
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (0 < iVar5) {
    if (param_10 == '\0') {
      puVar7 = local_1a8 + 2;
      uVar12 = uVar21;
      do {
        puVar7[-2] = puVar7[-2] ^ _DAT_100b4dbd0;
        puVar7[-1] = puVar7[-1] ^ _UNK_100b4dbd8;
        *puVar7 = *puVar7 ^ _DAT_100b4dbd0;
        puVar7[1] = puVar7[1] ^ _UNK_100b4dbd8;
        puVar7 = puVar7 + 4;
        uVar12 = uVar12 - 0x20;
        uVar15 = uVar21;
      } while (uVar12 != 0);
    }
    else {
      ___memset_chk(local_1a8,0x5c,uVar15,0x80);
      iVar5 = FUN_10088a910(local_320,param_8,param_9);
      if (iVar5 < 1) goto LAB_1007ffb17;
    }
    iVar5 = FUN_10088a910(local_320,local_1a8,uVar15);
    if ((0 < iVar5) && (iVar5 = FUN_10088a910(local_320,local_268,uVar23), 0 < iVar5)) {
      FUN_10088a920(local_320,param_2,&local_2ec);
      if (param_3 != (ulong *)0x0) {
        *param_3 = (ulong)local_2ec;
      }
      FUN_10088aa50(local_320);
      uVar6 = 1;
      goto LAB_1007ffb25;
    }
  }
LAB_1007ffb17:
  FUN_10088aa50(local_320);
  uVar6 = 0;
LAB_1007ffb25:
  if (lVar13 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

