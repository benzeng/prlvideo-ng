
undefined1 FUN_1006c7fa0(void)

{
  ushort uVar1;
  uint uVar2;
  size_t sVar3;
  int iVar4;
  ushort *puVar5;
  ulong uVar6;
  ushort *puVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  ushort *puVar11;
  ushort *puVar12;
  byte *local_278 [8];
  size_t local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  int local_138 [64];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_238 = 0;
  local_138[0] = 4;
  local_138[1] = 0x11;
  local_138[2] = 0;
  local_138[3] = 0;
  local_138[4] = 7;
  local_138[5] = 0;
  local_38 = lVar8;
  iVar4 = _sysctl(local_138,6,(void *)0x0,&local_238,(void *)0x0,0);
  sVar3 = local_238;
  if (iVar4 < 0) {
    FUN_1008e3970("","prl_net",0,"get_route_table: NET_RT_DUMP2 initial estimate failed");
    uVar9 = 0;
  }
  else {
    puVar5 = _malloc(local_238);
    if (puVar5 == (ushort *)0x0) {
      FUN_1008e3970("","prl_net",0,"get_route_table: failed to alloc %d bytes",sVar3 & 0xffffffff);
      uVar9 = 0;
    }
    else {
      iVar4 = _sysctl(local_138,6,puVar5,&local_238,(void *)0x0,0);
      if (iVar4 < 0) {
        FUN_1008e3970("","prl_net",0,"get_route_table: NET_RT_DUMP2 failed");
        _free(puVar5);
        uVar9 = 0;
      }
      else {
        if ((long)local_238 < 1) {
          uVar9 = 0;
        }
        else {
          puVar12 = (ushort *)((long)puVar5 + local_238);
          puVar11 = puVar5;
          do {
            uVar6 = (long)puVar12 - (long)puVar11;
            if ((uVar6 < 4) || (uVar1 = *puVar11, uVar6 < uVar1)) {
              uVar9 = 0;
              FUN_1008e3970("","prl_net",0,"IsIPv6DefaultRoutePresent: incorrect rt_table");
              goto LAB_1006c833e;
            }
            if (*(char *)((long)puVar11 + 0x5d) == '\x1e') {
              puVar7 = puVar11 + 0x2e;
              uVar2 = *(uint *)(puVar11 + 6);
              lVar8 = 0;
              do {
                if ((uVar2 >> ((uint)lVar8 & 0x1f) & 1) == 0) {
                  local_278[lVar8] = (byte *)0x0;
                }
                else {
                  local_278[lVar8] = (byte *)puVar7;
                  lVar10 = 4;
                  if ((ulong)(byte)*puVar7 != 0) {
                    lVar10 = ((ulong)(byte)*puVar7 - 1 | 3) + 1;
                  }
                  puVar7 = (ushort *)((long)puVar7 + lVar10);
                }
                lVar8 = lVar8 + 1;
              } while (lVar8 != 8);
              local_138[0x3c] = 0;
              local_138[0x3d] = 0;
              local_138[0x3e] = 0;
              local_138[0x3f] = 0;
              local_138[0x38] = 0;
              local_138[0x39] = 0;
              local_138[0x3a] = 0;
              local_138[0x3b] = 0;
              local_138[0x34] = 0;
              local_138[0x35] = 0;
              local_138[0x36] = 0;
              local_138[0x37] = 0;
              local_138[0x30] = 0;
              local_138[0x31] = 0;
              local_138[0x32] = 0;
              local_138[0x33] = 0;
              local_138[0x2c] = 0;
              local_138[0x2d] = 0;
              local_138[0x2e] = 0;
              local_138[0x2f] = 0;
              local_138[0x28] = 0;
              local_138[0x29] = 0;
              local_138[0x2a] = 0;
              local_138[0x2b] = 0;
              local_138[0x24] = 0;
              local_138[0x25] = 0;
              local_138[0x26] = 0;
              local_138[0x27] = 0;
              local_138[0x20] = 0;
              local_138[0x21] = 0;
              local_138[0x22] = 0;
              local_138[0x23] = 0;
              local_138[0x1c] = 0;
              local_138[0x1d] = 0;
              local_138[0x1e] = 0;
              local_138[0x1f] = 0;
              local_138[0x18] = 0;
              local_138[0x19] = 0;
              local_138[0x1a] = 0;
              local_138[0x1b] = 0;
              local_138[0x14] = 0;
              local_138[0x15] = 0;
              local_138[0x16] = 0;
              local_138[0x17] = 0;
              local_138[0x10] = 0;
              local_138[0x11] = 0;
              local_138[0x12] = 0;
              local_138[0x13] = 0;
              local_138[0xc] = 0;
              local_138[0xd] = 0;
              local_138[0xe] = 0;
              local_138[0xf] = 0;
              local_138[8] = 0;
              local_138[9] = 0;
              local_138[10] = 0;
              local_138[0xb] = 0;
              local_138[4] = 0;
              local_138[5] = 0;
              local_138[6] = 0;
              local_138[7] = 0;
              local_138[0] = 0;
              local_138[1] = 0;
              local_138[2] = 0;
              local_138[3] = 0;
              if ((puVar11[6] & 1) != 0) {
                _bcopy(local_278[0],local_138,(ulong)*local_278[0]);
              }
              local_148 = 0;
              uStack_140 = 0;
              local_158 = 0;
              uStack_150 = 0;
              local_168 = 0;
              uStack_160 = 0;
              local_178 = 0;
              uStack_170 = 0;
              local_188 = 0;
              uStack_180 = 0;
              local_198 = 0;
              uStack_190 = 0;
              local_1a8 = 0;
              uStack_1a0 = 0;
              local_1b8 = 0;
              uStack_1b0 = 0;
              local_1c8 = 0;
              uStack_1c0 = 0;
              local_1d8 = 0;
              uStack_1d0 = 0;
              local_1e8 = 0;
              uStack_1e0 = 0;
              local_1f8 = 0;
              uStack_1f0 = 0;
              local_208 = 0;
              uStack_200 = 0;
              local_218 = 0;
              uStack_210 = 0;
              local_228 = 0;
              uStack_220 = 0;
              local_238 = 0;
              uStack_230 = 0;
              if ((puVar11[6] & 4) != 0) {
                _bcopy(local_278[2],&local_238,(ulong)*local_278[2]);
                if (((char)local_238 != '\0') && ((char)uStack_230 != '\0')) goto LAB_1006c8280;
              }
              if ((local_138[2] == 0) && ((local_138[3] == 0 && (local_138[4] == 0)))) {
                uVar9 = 1;
                if (local_138[5] == 0) goto LAB_1006c833e;
              }
            }
LAB_1006c8280:
            puVar11 = (ushort *)((long)puVar11 + (ulong)uVar1);
          } while (puVar11 < puVar12);
          uVar9 = 0;
        }
LAB_1006c833e:
        _free(puVar5);
        lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
    }
  }
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

