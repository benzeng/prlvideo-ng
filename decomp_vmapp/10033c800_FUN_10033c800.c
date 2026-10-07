
void FUN_10033c800(long param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  uint local_f8;
  uint local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  uint local_e4;
  uint local_e0;
  undefined4 local_dc;
  long local_d8;
  int local_d0;
  uint local_cc;
  uint local_c8;
  undefined4 local_c4;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  long local_88;
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  long local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  int local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar8 = *param_2;
  lVar11 = 0;
  if (uVar8 != 0) {
    puVar6 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                       (ulong)((uVar8 >> 0xc ^ uVar8) & 0xfff ^ uVar8 >> 0x18) * 8);
    lVar11 = 0;
    if (puVar6 != (uint *)0x0) {
      lVar11 = 0;
      do {
        if (*puVar6 == uVar8) {
          lVar11 = *(long *)(puVar6 + 2);
          break;
        }
        puVar6 = *(uint **)(puVar6 + 4);
      } while (puVar6 != (uint *)0x0);
    }
  }
  uVar8 = param_2[6];
  puVar6 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                     (ulong)((uVar8 >> 0xc ^ uVar8) & 0xfff ^ uVar8 >> 0x18) * 8);
  lVar12 = 0;
  if (puVar6 != (uint *)0x0) {
    lVar12 = 0;
    do {
      if (*puVar6 == uVar8) {
        lVar12 = *(long *)(puVar6 + 2);
        break;
      }
      puVar6 = *(uint **)(puVar6 + 4);
    } while (puVar6 != (uint *)0x0);
  }
  uVar8 = param_2[0xc];
  local_48 = (uVar8 >> 1 & 1) + 1;
  if (((uVar8 & 3) == 0) &&
     ((param_2[3] - param_2[1] != param_2[9] - param_2[7] ||
      (param_2[4] - param_2[2] != param_2[10] - param_2[8])))) {
    local_48 = 2;
  }
  local_38 = 0;
  local_40 = 0x8e;
  local_44 = (uVar8 & 4) != 0;
  if ((bool)local_44) {
    local_40 = CONCAT44(param_3,*(undefined4 *)(*(long *)(lVar11 + 8) + 8));
  }
  if (lVar12 != 0) {
    lVar2 = *(long *)(lVar12 + 8);
    uVar4 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar12 + 4));
    uVar8 = param_2[0xb];
    uVar9 = 1 << ((byte)uVar4 & 0x1f);
    if ((*(ushort *)(lVar2 + 0xb0) & 1) != 0) {
      uVar9 = 1;
    }
    *(uint *)(lVar2 + 0xa8) = *(uint *)(lVar2 + 0xa8) | uVar9;
    bVar7 = (byte)uVar8;
    if (lVar11 == 0) {
      local_68 = *(undefined1 (*) [16])(param_2 + 7);
      local_58 = 0;
      local_54 = 1;
      if ((*(int *)(lVar2 + 8) == 0x1b) && ((*(ushort *)(lVar2 + 0xb0) & 1) == 0)) {
        if (local_68._0_4_ == 0) {
          uVar8 = 1;
          if (*(uint *)(lVar2 + 0xc) >> (bVar7 & 0x1f) != 0) {
            uVar8 = *(uint *)(lVar2 + 0xc) >> (bVar7 & 0x1f);
          }
          if (local_68._8_4_ == uVar8) {
            iVar1 = *(int *)(lVar2 + 0x24);
            if ((iVar1 != 2) && (iVar1 != 7)) {
              if (local_68._4_4_ != 0) {
                return;
              }
              uVar8 = 1;
              if (*(uint *)(lVar2 + 0x10) >> (bVar7 & 0x1f) != 0) {
                uVar8 = *(uint *)(lVar2 + 0x10) >> (bVar7 & 0x1f);
              }
              if (local_68._12_4_ != uVar8) {
                return;
              }
              if ((iVar1 == 5) && (1 < *(uint *)(lVar2 + 0x14) >> (bVar7 & 0x1f))) {
                return;
              }
            }
            puVar6 = (uint *)(*(long *)(lVar2 + 0x90) + (ulong)uVar4 * 4);
            *puVar6 = *puVar6 | 1 << (bVar7 & 0x1f);
          }
        }
      }
      else {
        FUN_10035e0e0(*(undefined8 *)(param_1 + 48000),lVar2,local_68);
      }
    }
    else {
      lVar3 = *(long *)(lVar11 + 8);
      uVar5 = FUN_10032dee0(lVar3,*(undefined4 *)(lVar11 + 4));
      local_d0 = *(int *)(lVar3 + 8);
      bVar10 = (byte)param_2[5];
      if (local_d0 == 0x1b) {
        if (*(int *)(lVar2 + 8) == 0x1b) {
          local_80 = 0x1b;
          local_7c = *(uint *)(lVar3 + 0xc) >> (bVar10 & 0x1f);
          if (*(uint *)(lVar3 + 0xc) >> (bVar10 & 0x1f) == 0) {
            local_7c = 1;
          }
          local_78 = *(uint *)(lVar3 + 0x10) >> (bVar10 & 0x1f);
          if (*(uint *)(lVar3 + 0x10) >> (bVar10 & 0x1f) == 0) {
            local_78 = 1;
          }
          local_74 = *(undefined4 *)
                      (*(long *)(lVar3 + 0x28) + 4 + (ulong)*(uint *)(lVar11 + 4) * 0xc);
          local_88 = *(long *)(*(long *)(param_1 + 0xbb78) + 0x920);
          local_70 = (ulong)*(uint *)(*(long *)(lVar3 + 0x28) + (ulong)*(uint *)(lVar11 + 4) * 0xc)
                     + local_88;
          local_98 = 0x1b;
          local_94 = *(uint *)(lVar2 + 0xc) >> (bVar7 & 0x1f);
          if (*(uint *)(lVar2 + 0xc) >> (bVar7 & 0x1f) == 0) {
            local_94 = 1;
          }
          local_90 = *(uint *)(lVar2 + 0x10) >> (bVar7 & 0x1f);
          if (*(uint *)(lVar2 + 0x10) >> (bVar7 & 0x1f) == 0) {
            local_90 = 1;
          }
          local_8c = *(undefined4 *)
                      (*(long *)(lVar2 + 0x28) + 4 + (ulong)*(uint *)(lVar12 + 4) * 0xc);
          local_88 = (ulong)*(uint *)(*(long *)(lVar2 + 0x28) + (ulong)*(uint *)(lVar12 + 4) * 0xc)
                     + local_88;
          local_a8 = *(undefined8 *)(param_2 + 1);
          uStack_a0 = *(undefined8 *)(param_2 + 3);
          local_b8 = *(undefined8 *)(param_2 + 7);
          uStack_b0 = *(undefined8 *)(param_2 + 9);
          if ((param_2[0xc] & 4) == 0) {
            FUN_1003c6660(&local_80,&local_a8,&local_98,&local_b8,1);
            return;
          }
          FUN_1003c8820(&local_80,&local_a8,&local_98,&local_b8,param_3,0xffffffff);
          return;
        }
      }
      else if ((local_d0 - 0x57U < 9) && (2 < (long)(int)(local_d0 - 0x57U) - 4U)) {
        local_e8 = *(int *)(lVar2 + 8);
        if ((local_e8 - 0x57U < 9) && (2 < (long)(int)(local_e8 - 0x57U) - 4U)) {
          local_cc = *(uint *)(lVar3 + 0xc) >> (bVar10 & 0x1f);
          if (*(uint *)(lVar3 + 0xc) >> (bVar10 & 0x1f) == 0) {
            local_cc = 1;
          }
          local_c8 = *(uint *)(lVar3 + 0x10) >> (bVar10 & 0x1f);
          if (*(uint *)(lVar3 + 0x10) >> (bVar10 & 0x1f) == 0) {
            local_c8 = 1;
          }
          local_c4 = *(undefined4 *)
                      (*(long *)(lVar3 + 0x28) + 4 + (ulong)*(uint *)(lVar11 + 4) * 0xc);
          local_d8 = *(long *)(*(long *)(param_1 + 0xbb78) + 0x920);
          local_c0 = (ulong)*(uint *)(*(long *)(lVar3 + 0x28) + (ulong)*(uint *)(lVar11 + 4) * 0xc)
                     + local_d8;
          local_e4 = *(uint *)(lVar2 + 0xc) >> (bVar7 & 0x1f);
          if (*(uint *)(lVar2 + 0xc) >> (bVar7 & 0x1f) == 0) {
            local_e4 = 1;
          }
          local_e0 = *(uint *)(lVar2 + 0x10) >> (bVar7 & 0x1f);
          if (*(uint *)(lVar2 + 0x10) >> (bVar7 & 0x1f) == 0) {
            local_e0 = 1;
          }
          local_dc = *(undefined4 *)
                      (*(long *)(lVar2 + 0x28) + 4 + (ulong)*(uint *)(lVar12 + 4) * 0xc);
          local_d8 = (ulong)*(uint *)(*(long *)(lVar2 + 0x28) + (ulong)*(uint *)(lVar12 + 4) * 0xc)
                     + local_d8;
          FUN_1003c6660(&local_d0,0,&local_e8,0,1);
          local_100 = 0;
          local_f8 = local_e4;
          local_f4 = local_e0;
          local_f0 = 0;
          local_ec = 1;
          FUN_10035e0e0(*(undefined8 *)(param_1 + 48000),lVar2,&local_100,uVar4,uVar8);
          return;
        }
      }
      if (((int)((ulong)(*(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40)) >> 3) != 0) &&
         ((int)((ulong)(*(long *)(lVar2 + 0x48) - *(long *)(lVar2 + 0x40)) >> 3) != 0)) {
        local_118 = *(undefined8 *)(param_2 + 1);
        uStack_110 = *(undefined8 *)(param_2 + 3);
        local_128 = *(undefined8 *)(param_2 + 7);
        uStack_120 = *(undefined8 *)(param_2 + 9);
        FUN_10035f410(*(undefined8 *)(param_1 + 48000),lVar3,&local_118,uVar5,param_2[5],lVar2,
                      &local_128,uVar4,uVar8,&local_48);
      }
    }
  }
  return;
}

