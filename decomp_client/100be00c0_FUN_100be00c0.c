
ulong FUN_100be00c0(int *param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                   int *param_6)

{
  short *psVar1;
  ushort uVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined1 uVar10;
  ulong uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong local_1a8;
  ulong uStack_1a0;
  ulong local_198;
  ulong uStack_190;
  ulong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long local_150;
  byte local_144;
  byte local_143;
  byte local_142;
  byte local_141;
  undefined1 local_140;
  undefined1 local_13f;
  byte local_13e;
  byte local_13d;
  byte local_13c;
  byte local_13b;
  byte local_13a;
  byte local_139;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(lVar3 + 0x3c4) == 0) {
    lVar3 = *(long *)(param_1 + 0x22);
    *(undefined8 *)(lVar3 + 0x338) = 0;
    *(undefined8 *)(lVar3 + 0x330) = 0;
    *(undefined8 *)(lVar3 + 0x328) = 0;
    *(undefined8 *)(lVar3 + 800) = 0;
    *(undefined8 *)(lVar3 + 0x318) = 0;
    *(undefined8 *)(lVar3 + 0x310) = 0;
    *(undefined8 *)(lVar3 + 0x308) = 0;
    *(undefined8 *)(lVar3 + 0x300) = 0;
    *(undefined8 *)(lVar3 + 0x2f8) = 0;
    *(undefined8 *)(lVar3 + 0x2f0) = 0;
    *(undefined8 *)(lVar3 + 0x2e8) = 0;
LAB_100be01f8:
    *param_6 = 0;
    lVar7 = FUN_100cbc5d0(*(undefined8 *)(*(long *)(param_1 + 0x22) + 0x260));
    if (((lVar7 == 0) || (lVar8 = *(long *)(lVar7 + 8), *(long *)(lVar8 + 0x60) != 0)) ||
       (*(short *)(*(long *)(param_1 + 0x22) + 0x234) != *(short *)(lVar8 + 0x10))) {
      uVar15 = 0;
      if (*param_6 == 0) {
        iVar5 = (**(code **)(*(long *)(param_1 + 2) + 0x68))(param_1,0x16,&local_144,0xc,0);
        if (iVar5 < 1) {
LAB_100be048b:
          param_1[10] = 3;
          *param_6 = 0;
          uVar15 = (ulong)iVar5;
        }
        else {
          if (iVar5 == 0xc) {
            local_168 = 0;
            uStack_160 = 0;
            local_178 = 0;
            uStack_170 = 0;
            uStack_180 = 0;
            local_158 = 0;
            local_1a8 = (ulong)local_144;
            uStack_1a0 = (ulong)local_142 << 8 | (ulong)local_143 << 0x10 | (ulong)local_141;
            local_198 = (ulong)CONCAT11(local_140,local_13f);
            uVar14 = (ulong)local_13c | (ulong)local_13d << 8 | (ulong)local_13e << 0x10;
            uVar11 = (ulong)local_13a << 8 | (ulong)local_13b << 0x10;
            uVar16 = (ulong)local_139;
            uVar15 = uVar16 | uVar11;
            uStack_190 = uVar14;
            local_188 = uVar15;
            if (uVar15 <= *(uint *)(*(long *)(param_1 + 0x20) + 0x124)) {
              lVar7 = *(long *)(param_1 + 0x22);
              if ((CONCAT11(local_140,local_13f) != *(short *)(lVar7 + 0x234)) &&
                 ((CONCAT11(local_140,local_13f) != 1 || (*(int *)(lVar7 + 0x280) == 0)))) {
                iVar5 = -1;
                if (uStack_1a0 < uVar14 + uVar15) goto LAB_100be0910;
                local_150 = (ulong)CONCAT11(local_13f,local_140) << 0x30;
                lVar8 = FUN_100cbc600(*(undefined8 *)(lVar7 + 0x260),&local_150);
                lVar7 = 0;
                if ((lVar8 != 0) && (lVar7 = lVar8, uVar15 != uStack_1a0)) {
                  lVar7 = 0;
                }
                uVar2 = *(ushort *)(*(long *)(param_1 + 0x22) + 0x234);
                if (((((uint)uVar2 < (uint)(ushort)local_198) && (lVar7 == 0)) &&
                    ((uint)(ushort)local_198 <= uVar2 + 10)) &&
                   ((uVar2 != 0 || ((char)local_1a8 != '\x14')))) {
                  if (uVar15 == uStack_1a0) {
                    uVar14 = *(ulong *)(param_1 + 0x6e);
                    if (uVar14 < 0x454d) {
                      uVar14 = 0x454c;
                    }
                    if (uVar14 < uVar15) {
                      iVar5 = -1;
LAB_100be0910:
                      *param_6 = 0;
                    }
                    else {
                      pvVar9 = (void *)FUN_100bf3540(0x68,"d1_both.c",0xb5);
                      if (pvVar9 == (void *)0x0) {
                        iVar5 = -1;
                        goto LAB_100be0910;
                      }
                      lVar7 = 0;
                      if ((uVar15 != 0) &&
                         (lVar7 = FUN_100bf3540(uVar16 | uVar11,"d1_both.c",0xba), lVar7 == 0)) {
                        FUN_100bf3910(pvVar9);
                        iVar5 = -1;
                        goto LAB_100be0910;
                      }
                      *(long *)((long)pvVar9 + 0x58) = lVar7;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      _memcpy(pvVar9,&local_1a8,0x58);
                      iVar5 = -1;
                      if (uVar15 != 0) {
                        iVar5 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                                          (param_1,0x16,*(undefined8 *)((long)pvVar9 + 0x58),
                                           uVar16 | uVar11);
                        if ((long)iVar5 != uVar15) {
                          iVar5 = -1;
                        }
                        if (0 < iVar5) goto LAB_100be0858;
LAB_100be08bc:
                        if (*(int *)((long)pvVar9 + 0x28) != 0) {
                          FUN_100c66e70(*(undefined8 *)((long)pvVar9 + 0x30));
                          FUN_100c66030(*(undefined8 *)((long)pvVar9 + 0x38));
                        }
                        if (*(long *)((long)pvVar9 + 0x58) != 0) {
                          FUN_100bf3910();
                        }
                        if (*(long *)((long)pvVar9 + 0x60) != 0) {
                          FUN_100bf3910();
                        }
                        FUN_100bf3910(pvVar9);
                        goto LAB_100be0910;
                      }
LAB_100be0858:
                      lVar7 = FUN_100cbc470(&local_150,pvVar9);
                      if (lVar7 == 0) goto LAB_100be08bc;
                      lVar7 = FUN_100cbc540(*(undefined8 *)(*(long *)(param_1 + 0x22) + 0x260),lVar7
                                           );
                      iVar5 = -3;
                      if (lVar7 == 0) {
                        FUN_100bf2cd0("d1_both.c",0x35c,"item != NULL");
                        uVar15 = 0xfffffffffffffffd;
                        goto LAB_100be054c;
                      }
                    }
                    uVar15 = (ulong)iVar5;
                  }
                  else {
                    iVar5 = FUN_100be1c50(param_1,&local_1a8,param_6);
                    uVar15 = (ulong)iVar5;
                  }
                }
                else {
                  for (; uVar15 != 0; uVar15 = uVar15 - (long)iVar5) {
                    uVar11 = uVar15 & 0xffffffff;
                    if (0x100 < uVar15) {
                      uVar11 = 0x100;
                    }
                    iVar5 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                                      (param_1,0x16,local_138,uVar11);
                    if (iVar5 < 1) goto LAB_100be0910;
                  }
                  uVar15 = 0xfffffffffffffffd;
                }
                goto LAB_100be054c;
              }
              if ((uVar15 != 0) && (uVar15 < uStack_1a0)) {
                iVar5 = FUN_100be1c50(param_1,&local_1a8,param_6);
                uVar15 = (ulong)iVar5;
                goto LAB_100be054c;
              }
              if (((param_1[0xe] == 0) && (local_144 == 0)) && (*(long *)(lVar7 + 0x300) == 0)) {
                if ((local_142 != 0 || local_143 != 0) || local_141 != 0) goto LAB_100be0516;
                if (*(code **)(param_1 + 0x26) != (code *)0x0) {
                  (**(code **)(param_1 + 0x26))
                            (0,*param_1,0x16,&local_144,0xc,param_1,*(undefined8 *)(param_1 + 0x28))
                  ;
                }
                param_1[0x18] = 0;
                goto LAB_100be01f8;
              }
              iVar5 = FUN_100be2050(param_1,&local_1a8,param_5);
              if (iVar5 != 0) goto LAB_100be0531;
              iVar6 = 0;
              if (uVar15 != 0) {
                iVar5 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                                  (param_1,0x16,
                                   uVar14 + 0xc + *(long *)(*(long *)(param_1 + 0x14) + 8),
                                   uVar16 | uVar11);
                if (iVar5 < 1) goto LAB_100be048b;
                iVar6 = (int)uVar15;
                if (iVar5 != (int)uVar15) {
                  iVar5 = 0x2f;
                  FUN_100c62ee0(0x14,0xfd,0x2f,"d1_both.c");
                  goto LAB_100be0531;
                }
              }
              *param_6 = 1;
              param_1[0x12] = param_3;
              param_1[0x18] = iVar6;
              goto LAB_100be054c;
            }
            FUN_100c62ee0(0x14,0xfd,0x10f,"d1_both.c");
            iVar5 = 0x2f;
          }
          else {
LAB_100be0516:
            FUN_100c62ee0(0x14,0xfd,0xf4,"d1_both.c");
            iVar5 = 10;
          }
LAB_100be0531:
          FUN_100bd2dc0(param_1,2,iVar5);
          param_1[0x18] = 0;
          *param_6 = 0;
          uVar15 = 0xffffffffffffffff;
        }
      }
      else {
        param_1[0x18] = 0;
      }
    }
    else {
      uVar13 = *(undefined8 *)(lVar8 + 0x20);
      FUN_100cbc5e0(*(undefined8 *)(*(long *)(param_1 + 0x22) + 0x260));
      iVar5 = FUN_100be2050(param_1,lVar8,param_5);
      if (iVar5 != 0) {
        if (*(int *)(lVar8 + 0x28) != 0) {
          FUN_100c66e70(*(undefined8 *)(lVar8 + 0x30));
          FUN_100c66030(*(undefined8 *)(lVar8 + 0x38));
        }
        if (*(long *)(lVar8 + 0x58) != 0) {
          FUN_100bf3910();
        }
        if (*(long *)(lVar8 + 0x60) != 0) {
          FUN_100bf3910();
        }
        FUN_100bf3910(lVar8);
        FUN_100cbc4c0(lVar7);
        goto LAB_100be0531;
      }
      _memcpy((void *)(*(long *)(lVar8 + 0x18) + 0xc + *(long *)(*(long *)(param_1 + 0x14) + 8)),
              *(void **)(lVar8 + 0x58),*(size_t *)(lVar8 + 0x20));
      if (*(int *)(lVar8 + 0x28) != 0) {
        FUN_100c66e70(*(undefined8 *)(lVar8 + 0x30));
        FUN_100c66030(*(undefined8 *)(lVar8 + 0x38));
      }
      if (*(long *)(lVar8 + 0x58) != 0) {
        FUN_100bf3910();
      }
      if (*(long *)(lVar8 + 0x60) != 0) {
        FUN_100bf3910();
      }
      FUN_100bf3910(lVar8);
      FUN_100cbc4c0(lVar7);
      *param_6 = 1;
      iVar5 = (int)uVar13;
      uVar15 = (ulong)iVar5;
      param_1[0x18] = iVar5;
    }
LAB_100be054c:
    if (1 < (int)uVar15 + 3U) goto LAB_100be091f;
    goto LAB_100be01f8;
  }
  *(undefined4 *)(lVar3 + 0x3c4) = 0;
  if ((param_4 < 0) || (*(int *)(lVar3 + 0x3a0) == param_4)) {
    *param_6 = 1;
    *(long *)(param_1 + 0x16) = *(long *)(*(long *)(param_1 + 0x14) + 8) + 0xc;
    iVar5 = (int)*(undefined8 *)(lVar3 + 0x398);
    param_1[0x18] = iVar5;
    uVar15 = (ulong)iVar5;
    goto LAB_100be0ae9;
  }
  uVar13 = 0x1ef;
  goto LAB_100be0ac4;
LAB_100be091f:
  if (((int)uVar15 < 1) && (*param_6 == 0)) goto LAB_100be0ae9;
  if ((param_4 < 0) || (*(int *)(*(long *)(param_1 + 0x20) + 0x3a0) == param_4)) {
    puVar4 = *(undefined1 **)(*(long *)(param_1 + 0x14) + 8);
    uVar11 = *(ulong *)(lVar3 + 0x2f0);
    *puVar4 = *(undefined1 *)(lVar3 + 0x2e8);
    uVar10 = (undefined1)(uVar11 >> 0x10);
    puVar4[1] = uVar10;
    uVar12 = (undefined1)(uVar11 >> 8);
    puVar4[2] = uVar12;
    puVar4[3] = (char)uVar11;
    puVar4[4] = *(undefined1 *)(lVar3 + 0x2f9);
    puVar4[5] = *(undefined1 *)(lVar3 + 0x2f8);
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = uVar10;
    puVar4[10] = uVar12;
    puVar4[0xb] = (char)uVar11;
    uVar15 = uVar11 + 0xc;
    if (*param_1 == 0x100) {
      uVar15 = uVar11;
      puVar4 = puVar4 + 0xc;
    }
    FUN_100bcfd60(param_1,puVar4,uVar15 & 0xffffffff);
    if (*(code **)(param_1 + 0x26) != (code *)0x0) {
      (**(code **)(param_1 + 0x26))
                (0,*param_1,0x16,puVar4,uVar15,param_1,*(undefined8 *)(param_1 + 0x28));
    }
    *(undefined8 *)(lVar3 + 0x338) = 0;
    *(undefined8 *)(lVar3 + 0x330) = 0;
    *(undefined8 *)(lVar3 + 0x328) = 0;
    *(undefined8 *)(lVar3 + 800) = 0;
    *(undefined8 *)(lVar3 + 0x318) = 0;
    *(undefined8 *)(lVar3 + 0x310) = 0;
    *(undefined8 *)(lVar3 + 0x308) = 0;
    *(undefined8 *)(lVar3 + 0x300) = 0;
    *(undefined8 *)(lVar3 + 0x2f8) = 0;
    *(undefined8 *)(lVar3 + 0x2f0) = 0;
    *(undefined8 *)(lVar3 + 0x2e8) = 0;
    if (*(int *)(*(long *)(param_1 + 0x22) + 0x280) == 0) {
      psVar1 = (short *)(*(long *)(param_1 + 0x22) + 0x234);
      *psVar1 = *psVar1 + 1;
    }
    *(long *)(param_1 + 0x16) = *(long *)(*(long *)(param_1 + 0x14) + 8) + 0xc;
    uVar15 = (ulong)param_1[0x18];
    goto LAB_100be0ae9;
  }
  uVar13 = 0x206;
LAB_100be0ac4:
  FUN_100c62ee0(0x14,0xfc,0xf4,"d1_both.c",uVar13);
  FUN_100bd2dc0(param_1,2,10);
  *param_6 = 0;
  uVar15 = 0xffffffffffffffff;
LAB_100be0ae9:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

