
undefined8 FUN_100346380(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  long lVar8;
  long local_138 [33];
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_138[0x20] = lVar2;
  uVar5 = 9;
  if (0xf < (ulong)*(uint *)(param_2 + 4)) {
    uVar6 = *(uint *)(param_2 + 0xc);
    uVar3 = (ulong)uVar6;
    if (uVar3 <= ((ulong)*(uint *)(param_2 + 4) - 0x10) / 0xc) {
      uVar5 = 4;
      if ((*(uint *)(param_2 + 8) < 0x21) && (uVar6 <= 0x20 - *(uint *)(param_2 + 8))) {
        local_138[0x1e] = 0;
        local_138[0x1f] = 0;
        local_138[0x1c] = 0;
        local_138[0x1d] = 0;
        local_138[0x1a] = 0;
        local_138[0x1b] = 0;
        local_138[0x18] = 0;
        local_138[0x19] = 0;
        local_138[0x16] = 0;
        local_138[0x17] = 0;
        local_138[0x14] = 0;
        local_138[0x15] = 0;
        local_138[0x12] = 0;
        local_138[0x13] = 0;
        local_138[0x10] = 0;
        local_138[0x11] = 0;
        local_138[0xe] = 0;
        local_138[0xf] = 0;
        local_138[0xc] = 0;
        local_138[0xd] = 0;
        local_138[10] = 0;
        local_138[0xb] = 0;
        local_138[8] = 0;
        local_138[9] = 0;
        local_138[6] = 0;
        local_138[7] = 0;
        local_138[4] = 0;
        local_138[5] = 0;
        local_138[2] = 0;
        local_138[3] = 0;
        local_138[0] = 0;
        local_138[1] = 0;
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar6 = 0;
          do {
            uVar1 = *(uint *)(param_2 + 0x10 + (ulong)uVar6 * 0xc);
            if (uVar1 != 0) {
              puVar4 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                                 (ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) * 8);
              uVar5 = 7;
              while( true ) {
                if (puVar4 == (uint *)0x0) goto LAB_10034654f;
                if (*puVar4 == uVar1) break;
                puVar4 = *(uint **)(puVar4 + 4);
              }
              if (*(long *)(puVar4 + 2) == 0) goto LAB_10034654f;
              lVar8 = *(long *)(*(long *)(puVar4 + 2) + 8);
              local_138[uVar6] = lVar8;
              if (*(char *)(lVar8 + 0xb4) != '\0') {
                FUN_100362eb0(*(undefined8 *)(param_1 + 0x2778),lVar8,0,0);
                uVar3 = (ulong)*(uint *)(param_2 + 0xc);
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)uVar3);
          uVar5 = 0;
          if ((uint)uVar3 != 0) {
            puVar7 = (undefined4 *)(param_2 + 0x18);
            uVar5 = 0;
            lVar8 = 0;
            do {
              FUN_100344400(param_1,*(int *)(param_2 + 8) + (int)lVar8,local_138[lVar8],puVar7[-1],
                            *puVar7);
              puVar7 = puVar7 + 3;
              lVar8 = lVar8 + 1;
            } while ((uint)lVar8 < *(uint *)(param_2 + 0xc));
          }
        }
      }
    }
  }
LAB_10034654f:
  if (lVar2 == local_138[0x20]) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

