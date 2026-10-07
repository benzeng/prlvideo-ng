
int FUN_10072a180(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  long lVar16;
  undefined1 *puVar17;
  int iVar18;
  long *plVar19;
  long *local_68;
  undefined8 *local_60;
  long *local_58;
  long *local_38;
  
  local_38 = (long *)0x0;
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  puVar8 = (undefined4 *)FUN_10081ddd0(0x38,"../src/snlic/sn_crypto_helper_01.c",0x48);
  iVar6 = 2;
  if (puVar8 == (undefined4 *)0x0) goto LAB_10072a927;
  *puVar8 = 1;
  puVar8[8] = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar8[9] = 4;
  puVar8[10] = 1;
  *(undefined8 *)(puVar8 + 0xc) = 0;
  iVar6 = FUN_10072a950(&local_38);
  if (iVar6 == 0) {
    iVar7 = FUN_10072b1d0(puVar8,local_38);
    iVar6 = 1;
    if (iVar7 != 0) {
      plVar19 = (long *)(puVar8 + 2);
      if ((((*(code **)(*(long *)*plVar19 + 0x38) != (code *)0x0) &&
           (iVar7 = (**(code **)(*(long *)*plVar19 + 0x38))(), iVar7 == 0x40)) && (*plVar19 != 0))
         && (plVar9 = (long *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136),
            plVar9 != (long *)0x0)) {
        *(undefined4 *)((long)plVar9 + 0x14) = 1;
        *(undefined4 *)(plVar9 + 2) = 0;
        plVar9[1] = 0;
        *plVar9 = 0;
        local_60 = (undefined8 *)FUN_10081ddd0(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
        if (local_60 == (undefined8 *)0x0) {
          local_60 = (undefined8 *)0x0;
          local_58 = (long *)0x0;
LAB_10072a4b3:
          local_68 = (long *)0x0;
          bVar5 = false;
        }
        else {
          *(undefined4 *)(local_60 + 7) = 0;
          local_60[6] = 0;
          local_60[5] = 0;
          local_60[4] = 0;
          local_60[3] = 0;
          local_60[2] = 0;
          local_60[1] = 0;
          *local_60 = 0;
          local_58 = *(long **)(puVar8 + 6);
          if (local_58 == (long *)0x0) {
            local_58 = (long *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
            if (local_58 == (long *)0x0) {
              local_58 = (long *)0x0;
              goto LAB_10072a4b3;
            }
            *(undefined4 *)((long)local_58 + 0x14) = 1;
            *(undefined4 *)(local_58 + 2) = 0;
            local_58[1] = 0;
            *local_58 = 0;
          }
          lVar10 = FUN_10072d5c0(plVar9,*plVar19 + 0x10);
          if (lVar10 == 0) goto LAB_10072a4b3;
          if ((int)plVar9[1] == 0) {
LAB_10072a4e1:
            local_68 = (long *)0x0;
            bVar5 = false;
          }
          else {
            do {
              iVar7 = FUN_10073ec50(local_58,plVar9);
              if (iVar7 == 0) {
                local_68 = (long *)0x0;
                bVar5 = false;
                goto LAB_10072a4ea;
              }
            } while ((int)local_58[1] == 0);
            local_68 = *(long **)(puVar8 + 4);
            if (local_68 == (long *)0x0) {
              plVar2 = (long *)*plVar19;
              if ((plVar2 != (long *)0x0) && (*(long *)(*plVar2 + 0x48) != 0)) {
                local_68 = (long *)FUN_10081ddd0(0x58,"../src/snlic/sn_crypto_helper_02.c",0x1fe);
                if (local_68 == (long *)0x0) {
                  local_68 = (long *)0x0;
                  bVar5 = false;
                  goto LAB_10072a4ea;
                }
                lVar10 = *plVar2;
                *local_68 = lVar10;
                iVar7 = (**(code **)(lVar10 + 0x48))(local_68);
                if (iVar7 != 0) goto LAB_10072a43e;
                FUN_10081e1a0();
              }
              goto LAB_10072a4e1;
            }
LAB_10072a43e:
            iVar7 = FUN_10073f000(*plVar19,local_68,local_58,0,0,local_60);
            if (iVar7 == 0) {
              bVar5 = false;
            }
            else {
              *(long **)(puVar8 + 6) = local_58;
              *(long **)(puVar8 + 4) = local_68;
              bVar5 = true;
            }
          }
        }
LAB_10072a4ea:
        if ((*plVar9 != 0) && ((*(byte *)((long)plVar9 + 0x14) & 2) == 0)) {
          FUN_10081e1a0();
        }
        if ((*(byte *)((long)plVar9 + 0x14) & 1) == 0) {
          *plVar9 = 0;
        }
        else {
          FUN_10081e1a0(plVar9);
        }
        if ((local_68 != (long *)0x0) && (*(long *)(puVar8 + 4) == 0)) {
          if (*(code **)(*local_68 + 0x50) != (code *)0x0) {
            (**(code **)(*local_68 + 0x50))();
          }
          FUN_10081e1a0(local_68);
        }
        if ((local_58 != (long *)0x0) && (*(long *)(puVar8 + 6) == 0)) {
          if ((*local_58 != 0) && ((*(byte *)((long)local_58 + 0x14) & 2) == 0)) {
            FUN_10081e1a0();
          }
          if ((*(byte *)((long)local_58 + 0x14) & 1) == 0) {
            *local_58 = 0;
          }
          else {
            FUN_10081e1a0();
          }
        }
        if (local_60 != (undefined8 *)0x0) {
          FUN_100729fd0();
        }
        plVar19 = local_38;
        if (bVar5) {
          pcVar3 = *(code **)(*local_38 + 0x98);
          if ((pcVar3 != (code *)0x0) && (plVar9 = *(long **)(puVar8 + 4), *local_38 == *plVar9)) {
            uVar1 = puVar8[9];
            lVar10 = (*pcVar3)(local_38,plVar9,uVar1,0,0,0);
            if (lVar10 != 0) {
              lVar16 = (lVar10 << 0x20) + 0x1000100000000 >> 0x20;
              puVar11 = (undefined1 *)FUN_10081ddd0(lVar16,"../src/snlic/sn_crypto.c",0x18d);
              iVar6 = 2;
              if (puVar11 != (undefined1 *)0x0) {
                *puVar11 = (char)lVar10;
                lVar4 = *plVar19;
                pcVar3 = *(code **)(lVar4 + 0x98);
                lVar12 = 0;
                if ((pcVar3 != (code *)0x0) && (lVar12 = 0, lVar4 == *plVar9)) {
                  lVar12 = (*pcVar3)(plVar19,plVar9,uVar1,puVar11 + 1,lVar10,0);
                }
                iVar6 = 1;
                if (lVar12 == lVar10) {
                  plVar19 = *(long **)(puVar8 + 6);
                  iVar6 = (int)plVar19[1];
                  iVar7 = 0;
                  if ((long)iVar6 != 0) {
                    iVar7 = FUN_10072d8e0(*(undefined8 *)(*plVar19 + -8 + (long)iVar6 * 8));
                    iVar7 = (iVar6 + -1) * 0x40 + 7 + iVar7;
                    iVar7 = (int)(((uint)(iVar7 >> 0x1f) >> 0x1d) + iVar7) >> 3;
                  }
                  puVar13 = (undefined1 *)
                            FUN_10081ddd0(iVar7 + 0x20001,"../src/snlic/sn_crypto.c",0x19f);
                  iVar6 = 2;
                  if (puVar13 != (undefined1 *)0x0) {
                    *puVar13 = (char)iVar7;
                    iVar6 = (int)plVar19[1];
                    iVar15 = 0;
                    if ((long)iVar6 != 0) {
                      iVar18 = (iVar6 + -1) * 0x40;
                      lVar4 = *plVar19;
                      iVar6 = FUN_10072d8e0(*(undefined8 *)(lVar4 + -8 + (long)iVar6 * 8));
                      iVar15 = 0;
                      if (0xe < (uint)(iVar6 + 0xe + iVar18)) {
                        iVar18 = iVar6 + 7 + iVar18;
                        iVar15 = (int)(((uint)(iVar18 >> 0x1f) >> 0x1d) + iVar18) >> 3;
                        iVar6 = iVar15 + -1;
                        iVar18 = iVar15 + -1 + ((uint)(iVar6 >> 0x1f) >> 0x1d);
                        puVar13[1] = (char)(*(ulong *)(lVar4 + (long)(iVar18 >> 3) * 8) >>
                                           (((char)iVar6 - ((byte)iVar18 & 0x18)) * '\b' & 0x3f));
                        if (iVar6 != 0) {
                          puVar14 = puVar13 + 1;
                          puVar17 = puVar13;
                          if ((iVar15 - 1U & 1) != 0) {
                            iVar6 = iVar15 + -2;
                            iVar18 = iVar15 + -2 + ((uint)(iVar6 >> 0x1f) >> 0x1d);
                            puVar13[2] = (char)(*(ulong *)(*plVar19 + (long)(iVar18 >> 3) * 8) >>
                                               (((char)iVar6 - ((byte)iVar18 & 0x18)) * '\b' & 0x3f)
                                               );
                            puVar14 = puVar13 + 2;
                            puVar17 = puVar13 + 1;
                          }
                          if (iVar15 != 2) {
                            iVar6 = iVar6 + -1;
                            do {
                              puVar17 = puVar17 + 2;
                              puVar14 = puVar14 + 2;
                              iVar18 = ((uint)(iVar6 >> 0x1f) >> 0x1d) + iVar6;
                              *puVar17 = (char)(*(ulong *)(*plVar19 + (long)(iVar18 >> 3) * 8) >>
                                               (((char)iVar6 - ((byte)iVar18 & 0x18)) * '\b' & 0x3f)
                                               );
                              iVar18 = iVar6 + -1 + ((uint)(iVar6 + -1 >> 0x1f) >> 0x1d);
                              *puVar14 = (char)(*(ulong *)(*plVar19 + (long)(iVar18 >> 3) * 8) >>
                                               ((((char)iVar6 + -1) - ((byte)iVar18 & 0x18)) * '\b'
                                               & 0x3f));
                              iVar6 = iVar6 + -2;
                            } while (iVar6 != -1);
                          }
                        }
                      }
                    }
                    iVar18 = 1;
                    if (iVar15 == iVar7) {
                      iVar18 = FUN_100729400(puVar8,0x2000,puVar13 + (iVar7 + 1),
                                             puVar11 + lVar10 + 1);
                      *param_1 = (long)puVar11;
                      *param_2 = lVar16;
                      *param_3 = (long)puVar13;
                      *param_4 = (long)(iVar7 + 0x20001);
                      iVar6 = 0;
                      if (iVar18 == 0) goto LAB_10072a91f;
                    }
                    FUN_10081e1a0(puVar13);
                    *param_3 = 0;
                    *param_4 = 0;
                    iVar6 = iVar18;
                  }
                }
                FUN_10081e1a0(puVar11);
                *param_1 = 0;
                *param_2 = 0;
              }
            }
          }
        }
      }
    }
  }
LAB_10072a91f:
  FUN_10072b560(puVar8);
LAB_10072a927:
  if (local_38 != (long *)0x0) {
    FUN_10072b630();
  }
  return iVar6;
}

