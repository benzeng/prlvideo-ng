
/* WARNING: Type propagation algorithm not settling */

undefined1
FUN_10072bd40(byte *param_1,long param_2,byte *param_3,long param_4,undefined4 param_5,
             undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined1 *puVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  undefined1 uVar21;
  undefined8 *local_f0;
  undefined8 *local_d0;
  int local_bc;
  undefined1 local_b8 [2];
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 local_b0;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  byte local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar20 = (ulong)*param_3;
  local_bc = 0;
  uVar21 = 5;
  local_38 = lVar7;
  if (((ulong)*param_1 + 0x10001 != param_2) || (uVar20 + 0x20001 != param_4)) goto LAB_10072c844;
  lVar5 = FUN_10072b730(param_1 + 1,(ulong)*param_1,param_3 + 1,uVar20);
  uVar21 = 5;
  if (lVar5 == 0) goto LAB_10072c844;
  iVar3 = FUN_10072c870();
  uVar21 = 5;
  if (iVar3 != 0) {
    FUN_100823660(&local_b0);
    FUN_100823400(&local_b0,param_6,0xb);
    FUN_100823570(&local_48,&local_b0);
    uVar6 = CONCAT44(uStack_3c,local_40) ^ CONCAT44(uStack_44,local_48);
    local_4d = (byte)((uint)local_40 >> 0x18) ^ (byte)((uint)local_48 >> 0x18);
    local_50 = (undefined1)uVar6;
    local_4f = (undefined1)(uVar6 >> 8);
    local_4e = (undefined1)(uVar6 >> 0x10);
    local_4c = (undefined1)(uVar6 >> 0x20);
    local_4b = (undefined1)(uVar6 >> 0x28);
    local_4a = (undefined1)(uVar6 >> 0x30);
    local_49 = (undefined1)(uVar6 >> 0x38);
    lVar7 = FUN_100729300(param_5);
    plVar8 = (long *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    uVar21 = 2;
    if (plVar8 != (long *)0x0) {
      *(undefined4 *)((long)plVar8 + 0x14) = 1;
      *(undefined4 *)(plVar8 + 2) = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar9 = (long *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
      uVar21 = 2;
      plVar19 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        *(undefined4 *)((long)plVar9 + 0x14) = 1;
        *(undefined4 *)(plVar9 + 2) = 0;
        plVar9[1] = 0;
        *plVar9 = 0;
        lVar17 = lVar7 * 0x10 + uVar20 + 1;
        lVar7 = FUN_10072bbb0(param_3 + lVar17,8,plVar8);
        uVar21 = 5;
        plVar19 = plVar9;
        if ((lVar7 != 0) && (lVar7 = FUN_10072bbb0(param_3 + lVar17 + 8,8,plVar9), lVar7 != 0)) {
          local_b0 = 0;
          lVar7 = *(long *)(lVar5 + 8);
          if ((lVar7 == 0) ||
             ((lVar17 = *(long *)(lVar5 + 0x18), lVar17 == 0 ||
              (puVar10 = (undefined8 *)FUN_10072d4c0(), puVar10 == (undefined8 *)0x0)))) {
            uVar21 = 1;
          }
          else {
            plVar1 = (long *)puVar10[1];
            local_f0 = (undefined8 *)FUN_10081ddd0(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
            if (local_f0 == (undefined8 *)0x0) {
              bVar2 = true;
              local_f0 = (undefined8 *)0x0;
LAB_10072c240:
              puVar18 = (undefined8 *)0x0;
              local_d0 = (undefined8 *)0x0;
              plVar11 = (long *)0x0;
LAB_10072c265:
              plVar9 = (long *)*puVar10;
              if (plVar9 != (long *)0x0) {
                if ((*plVar9 != 0) && ((*(byte *)((long)plVar9 + 0x14) & 2) == 0)) {
                  FUN_10081e1a0();
                }
                if ((*(byte *)((long)plVar9 + 0x14) & 1) == 0) {
                  *plVar9 = 0;
                }
                else {
                  FUN_10081e1a0(plVar9);
                }
              }
              plVar9 = (long *)puVar10[1];
              if (plVar9 != (long *)0x0) {
                if ((*plVar9 != 0) && ((*(byte *)((long)plVar9 + 0x14) & 2) == 0)) {
                  FUN_10081e1a0();
                }
                if ((*(byte *)((long)plVar9 + 0x14) & 1) == 0) {
                  *plVar9 = 0;
                }
                else {
                  FUN_10081e1a0(plVar9);
                }
              }
              FUN_10081e1a0(puVar10);
              puVar10 = (undefined8 *)0x0;
              puVar12 = puVar18;
              if (!bVar2) goto LAB_10072c332;
            }
            else {
              *(undefined4 *)(local_f0 + 7) = 0;
              local_f0[6] = 0;
              local_f0[5] = 0;
              local_f0[4] = 0;
              local_f0[3] = 0;
              local_f0[2] = 0;
              local_f0[1] = 0;
              *local_f0 = 0;
              plVar11 = (long *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
              if (plVar11 == (long *)0x0) {
                bVar2 = false;
                goto LAB_10072c240;
              }
              *(undefined4 *)((long)plVar11 + 0x14) = 1;
              *(undefined4 *)(plVar11 + 2) = 0;
              plVar11[1] = 0;
              *plVar11 = 0;
              local_d0 = (undefined8 *)
                         FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
              puVar18 = (undefined8 *)0x0;
              if (local_d0 == (undefined8 *)0x0) {
                bVar2 = false;
                local_d0 = (undefined8 *)0x0;
                goto LAB_10072c265;
              }
              *(undefined4 *)((long)local_d0 + 0x14) = 1;
              *(undefined4 *)(local_d0 + 2) = 0;
              local_d0[1] = 0;
              *local_d0 = 0;
              puVar12 = (undefined8 *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136)
              ;
              puVar18 = (undefined8 *)0x0;
              if (puVar12 == (undefined8 *)0x0) {
LAB_10072c24e:
                bVar2 = false;
                goto LAB_10072c265;
              }
              *(undefined4 *)((long)puVar12 + 0x14) = 1;
              *(undefined4 *)(puVar12 + 2) = 0;
              puVar12[1] = 0;
              *puVar12 = 0;
              lVar7 = FUN_10072d5c0(plVar11,lVar7 + 0x10);
              puVar18 = puVar12;
              if (lVar7 == 0) goto LAB_10072c24e;
              iVar3 = (int)plVar11[1];
              if (((((long)iVar3 == 0) ||
                   (iVar4 = FUN_10072d8e0(*(undefined8 *)(*plVar11 + -8 + (long)iVar3 * 8)),
                   iVar4 + 7 + (iVar3 + -1) * 0x40 < 0x40)) ||
                  (lVar7 = FUN_10072bbb0(&local_50,8,puVar12), lVar7 == 0)) ||
                 (lVar7 = FUN_10072d5c0(*puVar10,plVar9), lVar7 == 0)) goto LAB_10072c24e;
              iVar3 = FUN_10073b600(local_d0,lVar17,*puVar10,plVar11,local_f0);
              if ((iVar3 == 0) || (iVar3 = FUN_100736d50(plVar1,local_d0,puVar12), iVar3 == 0)) {
LAB_10072c85f:
                bVar2 = false;
                goto LAB_10072c265;
              }
              iVar3 = (int)plVar1[1];
              lVar7 = (long)iVar3;
              if (iVar3 == (int)plVar11[1]) {
                lVar17 = (long)(iVar3 + -1) * 8;
                puVar14 = (ulong *)(*plVar11 + lVar17);
                puVar13 = (ulong *)(lVar17 + *plVar1);
                do {
                  if (lVar7 < 1) goto LAB_10072c2e0;
                  uVar20 = *puVar14;
                  lVar7 = lVar7 + -1;
                  puVar14 = puVar14 + -1;
                  uVar6 = *puVar13;
                  puVar13 = puVar13 + -1;
                } while (uVar6 == uVar20);
                if (uVar20 <= uVar6) {
LAB_10072c2e0:
                  iVar3 = FUN_100737410(plVar1,plVar1,plVar11);
                  if (iVar3 == 0) goto LAB_10072c85f;
                }
              }
              else if ((int)plVar11[1] <= iVar3) goto LAB_10072c2e0;
              iVar3 = FUN_10073b600(plVar1,plVar1,plVar8,plVar11,local_f0);
              if ((iVar3 == 0) || ((int)plVar1[1] == 0)) goto LAB_10072c85f;
LAB_10072c332:
              FUN_100729fd0(local_f0);
              puVar18 = puVar12;
            }
            if (puVar18 != (undefined8 *)0x0) {
              FUN_10072d9d0(puVar18);
            }
            if (local_d0 != (undefined8 *)0x0) {
              FUN_10072d9d0();
            }
            if (plVar11 != (long *)0x0) {
              if ((*plVar11 != 0) && ((*(byte *)((long)plVar11 + 0x14) & 2) == 0)) {
                FUN_10081e1a0();
              }
              if ((*(byte *)((long)plVar11 + 0x14) & 1) == 0) {
                *plVar11 = 0;
                if (local_b0 != 0) {
                  FUN_10072d9d0();
                }
              }
              else {
                FUN_10081e1a0(plVar11);
              }
            }
            if (puVar10 == (undefined8 *)0x0) {
              uVar21 = 1;
            }
            else {
              *(undefined1 *)((long)param_7 + 0x12) = 0;
              *(undefined2 *)(param_7 + 2) = 0;
              param_7[1] = 0;
              *param_7 = 0;
              iVar3 = (int)((long *)puVar10[1])[1];
              iVar4 = 7;
              if ((long)iVar3 == 0) {
LAB_10072c401:
                _local_b8 = 0;
                plVar9 = (long *)puVar10[1];
                iVar3 = (int)plVar9[1];
                uVar21 = 1;
                if ((long)iVar3 != 0) {
                  iVar16 = (iVar3 + -1) * 0x40;
                  lVar7 = *plVar9;
                  iVar3 = FUN_10072d8e0(*(undefined8 *)(lVar7 + -8 + (long)iVar3 * 8));
                  if (0xe < (uint)(iVar3 + 0xe + iVar16)) {
                    iVar16 = iVar3 + 7 + iVar16;
                    iVar16 = (int)(((uint)(iVar16 >> 0x1f) >> 0x1d) + iVar16) >> 3;
                    lVar17 = (long)((int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + iVar4) >> 3);
                    iVar3 = iVar16 + -1;
                    iVar4 = iVar16 + -1 + ((uint)(iVar3 >> 0x1f) >> 0x1d);
                    *(char *)((long)&local_b0 - lVar17) =
                         (char)(*(ulong *)(lVar7 + (long)(iVar4 >> 3) * 8) >>
                               ((((char)iVar16 + -1) - ((byte)iVar4 & 0x18)) * '\b' & 0x3f));
                    if (iVar3 != 0) {
                      lVar17 = -lVar17;
                      puVar18 = (undefined8 *)local_b8;
                      if ((iVar16 - 1U & 1) != 0) {
                        iVar3 = iVar16 + -2;
                        iVar4 = iVar16 + -2 + ((uint)(iVar3 >> 0x1f) >> 0x1d);
                        *(char *)((long)&local_b0 + lVar17 + 1) =
                             (char)(*(ulong *)(*plVar9 + (long)(iVar4 >> 3) * 8) >>
                                   (((char)iVar3 - ((byte)iVar4 & 0x18)) * '\b' & 0x3f));
                        puVar18 = (undefined8 *)((long)local_b8 + 1);
                      }
                      if (iVar16 != 2) {
                        iVar3 = iVar3 + -1;
                        puVar15 = (undefined1 *)((long)puVar18 + lVar17 + 8);
                        do {
                          iVar4 = ((uint)(iVar3 >> 0x1f) >> 0x1d) + iVar3;
                          puVar15[1] = (char)(*(ulong *)(*plVar9 + (long)(iVar4 >> 3) * 8) >>
                                             (((char)iVar3 - ((byte)iVar4 & 0x18)) * '\b' & 0x3f));
                          iVar4 = iVar3 + -1 + ((uint)(iVar3 + -1 >> 0x1f) >> 0x1d);
                          puVar15[2] = (char)(*(ulong *)(*plVar9 + (long)(iVar4 >> 3) * 8) >>
                                             ((((char)iVar3 + -1) - ((byte)iVar4 & 0x18)) * '\b' &
                                             0x3f));
                          iVar3 = iVar3 + -2;
                          puVar15 = puVar15 + 2;
                        } while (iVar3 != -1);
                      }
                    }
                    *(undefined1 *)((long)param_7 + 10) = *(undefined1 *)((long)param_6 + 10);
                    *(undefined2 *)(param_7 + 1) = *(undefined2 *)(param_6 + 1);
                    *param_7 = *param_6;
                    local_bc = 0x55;
                    iVar3 = FUN_1007402e0(param_7,&local_bc,8,_local_b8 & 0xff);
                    if ((iVar3 == 0) && (local_bc < 0x98)) {
                      iVar3 = FUN_1007402e0(param_7,&local_bc,8,local_b8[1]);
                      if ((iVar3 == 0) && (local_bc < 0x98)) {
                        iVar3 = FUN_1007402e0(param_7,&local_bc,8,uStack_b6);
                        if ((iVar3 == 0) && (local_bc < 0x98)) {
                          iVar3 = FUN_1007402e0(param_7,&local_bc,8,uStack_b5);
                          if ((iVar3 == 0) && (local_bc < 0x98)) {
                            iVar3 = FUN_1007402e0(param_7,&local_bc,8,uStack_b4);
                            if ((iVar3 == 0) && (local_bc < 0x98)) {
                              iVar3 = FUN_1007402e0(param_7,&local_bc,8,uStack_b3);
                              if ((iVar3 == 0) && (local_bc < 0x98)) {
                                iVar3 = FUN_1007402e0(param_7,&local_bc,8,uStack_b2);
                                if (iVar3 == 0) {
                                  uVar21 = 1;
                                  if (local_bc < 0x98) {
                                    iVar3 = FUN_1007402e0(param_7,&local_bc,8,uStack_b1);
                                    uVar21 = iVar3 != 0;
                                  }
                                  goto LAB_10072c725;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  uVar21 = 1;
                }
              }
              else {
                iVar4 = FUN_10072d8e0(*(undefined8 *)(*(long *)puVar10[1] + -8 + (long)iVar3 * 8));
                iVar4 = (iVar3 + -1) * 0x40 + 7 + iVar4;
                uVar21 = 5;
                if (iVar4 < 0x48) goto LAB_10072c401;
              }
LAB_10072c725:
              plVar9 = (long *)*puVar10;
              if (plVar9 != (long *)0x0) {
                if ((*plVar9 != 0) && ((*(byte *)((long)plVar9 + 0x14) & 2) == 0)) {
                  FUN_10081e1a0();
                }
                if ((*(byte *)((long)plVar9 + 0x14) & 1) == 0) {
                  *plVar9 = 0;
                }
                else {
                  FUN_10081e1a0(plVar9);
                }
              }
              plVar9 = (long *)puVar10[1];
              if (plVar9 != (long *)0x0) {
                if ((*plVar9 != 0) && ((*(byte *)((long)plVar9 + 0x14) & 2) == 0)) {
                  FUN_10081e1a0();
                }
                if ((*(byte *)((long)plVar9 + 0x14) & 1) == 0) {
                  *plVar9 = 0;
                }
                else {
                  FUN_10081e1a0(plVar9);
                }
              }
              FUN_10081e1a0(puVar10);
            }
          }
        }
      }
      FUN_10072b560(lVar5);
      lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (plVar8 != (long *)0x0) {
        if ((*plVar8 != 0) && ((*(byte *)((long)plVar8 + 0x14) & 2) == 0)) {
          FUN_10081e1a0();
        }
        if ((*(byte *)((long)plVar8 + 0x14) & 1) == 0) {
          *plVar8 = 0;
        }
        else {
          FUN_10081e1a0(plVar8);
        }
      }
      if (plVar19 != (long *)0x0) {
        if ((*plVar19 != 0) && ((*(byte *)((long)plVar19 + 0x14) & 2) == 0)) {
          FUN_10081e1a0();
        }
        if ((*(byte *)((long)plVar19 + 0x14) & 1) == 0) {
          *plVar19 = 0;
        }
        else {
          FUN_10081e1a0(plVar19);
        }
      }
      goto LAB_10072c844;
    }
  }
  FUN_10072b560(lVar5);
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_10072c844:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar21;
}

