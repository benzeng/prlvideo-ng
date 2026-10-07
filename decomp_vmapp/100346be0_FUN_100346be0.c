
undefined8 FUN_100346be0(long param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined4 local_bc;
  long local_b8 [16];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar3;
  uVar7 = 9;
  if ((0xf < (ulong)*(uint *)(param_2 + 2)) &&
     (uVar2 = *(uint *)(param_2 + 6), (ulong)uVar2 <= (ulong)*(uint *)(param_2 + 2) - 0x10 >> 2)) {
    uVar9 = *(uint *)(param_2 + 4);
    uVar7 = 4;
    if ((uVar9 < 0x10) && (uVar2 <= 0xf - uVar9)) {
      uVar1 = *param_2;
      uVar7 = 8;
      if (uVar1 < 0x13) {
        if (uVar1 != 0x12) goto LAB_100346dc6;
        local_bc = 1;
      }
      else {
        local_bc = 0;
        if (0x13 < uVar1) {
          if (uVar1 < 0x57) {
            if (uVar1 == 0x14) {
              local_bc = 2;
            }
            else {
              if (uVar1 != 0x56) goto LAB_100346dc6;
              local_bc = 3;
            }
          }
          else if (uVar1 == 0x57) {
            local_bc = 4;
          }
          else {
            if (uVar1 != 0x58) goto LAB_100346dc6;
            local_bc = 5;
          }
        }
      }
      local_b8[0xc] = 0;
      local_b8[0xd] = 0;
      local_b8[10] = 0;
      local_b8[0xb] = 0;
      local_b8[8] = 0;
      local_b8[9] = 0;
      local_b8[6] = 0;
      local_b8[7] = 0;
      local_b8[4] = 0;
      local_b8[5] = 0;
      local_b8[2] = 0;
      local_b8[3] = 0;
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_b8[0xe] = 0;
      uVar7 = 0;
      if (uVar2 != 0) {
        uVar6 = 0;
        do {
          uVar5 = *(uint *)(param_2 + uVar6 * 2 + 8);
          if (uVar5 != 0) {
            puVar8 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                               (ulong)((uVar5 >> 0xc ^ uVar5) & 0xfff ^ uVar5 >> 0x18) * 8);
            uVar7 = 7;
            while( true ) {
              if (puVar8 == (uint *)0x0) goto LAB_100346dc6;
              if (*puVar8 == uVar5) break;
              puVar8 = *(uint **)(puVar8 + 4);
            }
            if (*(long *)(puVar8 + 2) == 0) goto LAB_100346dc6;
            local_b8[uVar6] = *(long *)(*(long *)(puVar8 + 2) + 8);
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulong)uVar5;
        } while (uVar5 < uVar2);
        uVar7 = 0;
        if (uVar2 != 0) {
          lVar11 = 0;
          while( true ) {
            lVar4 = local_b8[lVar11];
            uVar10 = 0;
            if (lVar4 != 0) {
              uVar10 = *(undefined4 *)(lVar4 + 0xc);
            }
            uVar7 = 0;
            FUN_100344580(param_1,local_bc,(ulong)uVar9 + lVar11,lVar4,0,uVar10);
            if (*(uint *)(param_2 + 6) <= (int)lVar11 + 1U) break;
            uVar9 = *(uint *)(param_2 + 4);
            lVar11 = lVar11 + 1;
          }
        }
      }
    }
  }
LAB_100346dc6:
  if (lVar3 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

