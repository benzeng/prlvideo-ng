
void FUN_100b0a240(undefined8 param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  undefined1 local_a8 [112];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (param_3 == 0) {
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","PrlPCSC",3,"PCSC: %s %s",param_1,"0000: |");
    }
  }
  else {
    uVar7 = param_4;
    if (8 < param_4) {
      uVar7 = 8;
    }
    if (0x10 < param_5) {
      param_5 = 0x10;
    }
    uVar12 = 0x100;
    if (param_3 < 0x101) {
      uVar12 = param_3;
    }
    uVar9 = (ulong)uVar7;
    if (uVar7 == 0) {
      uVar9 = 1;
    }
    if (param_5 == 0) {
      param_5 = 0x10;
    }
    uVar7 = (uint)(((int)uVar9 + -1 + param_5) / uVar9);
    uVar14 = (ulong)(param_5 * 3 + 8 + uVar7);
    ___memset_chk(local_a8,0x20,uVar14,100);
    local_a8[uVar7 + 6 + param_5 * 2] = 0x7c;
    local_a8[uVar14] = 0;
    if (uVar12 != 0) {
      iVar3 = uVar7 + 8 + param_5 * 2;
      uVar13 = 8;
      if (param_4 < 8) {
        uVar13 = param_4;
      }
      uVar2 = 1;
      if (1 < uVar13) {
        uVar2 = uVar13;
      }
      uVar13 = 0;
      do {
        uVar4 = ___sprintf_chk(local_a8,0,100,"%04x",uVar13);
        local_a8[uVar4] = 0x3a;
        uVar4 = 0;
        uVar14 = 6;
        iVar10 = iVar3;
        if (uVar7 != 0) {
          do {
            if (((int)uVar9 != 0) && ((uint)(iVar10 - iVar3) < param_5)) {
              uVar8 = param_5 * -3 + (-8 - ((param_5 - 1) + uVar2) / uVar2) + iVar10;
              if (uVar8 < -uVar2) {
                uVar8 = -uVar2;
              }
              uVar11 = (ulong)uVar13;
              uVar13 = 0;
              do {
                uVar15 = uVar13;
                if (uVar12 == 0) {
                  iVar5 = ___sprintf_chk(local_a8 + uVar14,0,0xffffffffffffffff,"  ");
                  uVar12 = 0;
                  local_a8[iVar10 + uVar15] = 0x20;
                }
                else {
                  iVar5 = ___sprintf_chk(local_a8 + uVar14,0,0xffffffffffffffff,"%02x",
                                         *(undefined1 *)(param_2 + uVar11));
                  bVar1 = *(byte *)(param_2 + uVar11);
                  if ((char)bVar1 < '\0') {
                    uVar13 = ___maskrune((uint)bVar1,0x40000);
                  }
                  else {
                    uVar13 = *(uint *)(PTR___DefaultRuneLocale_1021e1278 + (ulong)bVar1 * 4 + 0x3c)
                             & 0x40000;
                  }
                  uVar6 = 0x2e;
                  if (uVar13 != 0) {
                    uVar6 = *(undefined1 *)(param_2 + uVar11);
                  }
                  local_a8[iVar10 + uVar15] = uVar6;
                  uVar12 = uVar12 - 1;
                  uVar11 = (ulong)((int)uVar11 + 1);
                }
                uVar14 = (ulong)(uint)((int)uVar14 + iVar5);
                uVar13 = uVar15 + 1;
              } while (uVar15 != ~uVar8);
              uVar13 = (uint)uVar11;
              iVar10 = iVar10 + 1 + uVar15;
            }
            local_a8[uVar14] = 0x20;
            uVar4 = uVar4 + 1;
            uVar14 = (ulong)((int)uVar14 + 1);
          } while (uVar4 < uVar7);
        }
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("","PrlPCSC",3,"PCSC: %s %s",param_1,local_a8);
        }
      } while (uVar12 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

