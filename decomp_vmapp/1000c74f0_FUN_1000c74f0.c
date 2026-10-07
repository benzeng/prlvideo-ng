
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1000c74f0(long param_1)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  char cVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined1 uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  char *pcVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  void *local_68;
  void *local_60;
  int local_4c;
  undefined1 local_48 [16];
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar4;
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar14 = 0;
    goto switchD_1000c7589_caseD_4;
  }
  lVar18 = *(long *)(param_1 + 0x50);
  if (lVar18 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPendingCmd",
                  "SerializationApp.cpp",0x40f,"stateFinish");
    lVar18 = *(long *)(param_1 + 0x50);
  }
  uVar14 = 0;
  switch(*(undefined4 *)(lVar18 + 0x14)) {
  case 0:
    FUN_1008e3970("","vm",0,"Data restoring ...OK");
    cVar9 = FUN_1000cd790(param_1);
    if (cVar9 != '\0') {
      FUN_10008fa70(*(undefined8 *)(param_1 + 0x2b0),0x4e2b);
      cVar9 = FUN_1000a7e30(*(undefined8 *)(param_1 + 0x2b0));
      if (cVar9 != '\0') {
        iVar11 = FUN_1000cfc10(param_1);
        *(int *)(param_1 + 500) = iVar11;
        if (iVar11 < 0) break;
      }
      FUN_10008ec80(param_1,1);
      FUN_10008fa70(*(undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x1810),2);
      uVar14 = 1;
      if (*(int *)(param_1 + 0x204) != 100) {
        FUN_1000bea50(*(undefined8 *)(param_1 + 0x2b0),100);
        *(undefined4 *)(param_1 + 0x204) = 100;
      }
      goto switchD_1000c7589_caseD_4;
    }
    *(undefined4 *)(param_1 + 500) = 0x80020006;
    break;
  case 1:
    if (*(int *)(param_1 + 0x21c) == 0) {
      FUN_1008e3970("","vm",0,"Started pages preload...OK");
      FUN_1008e3970("","vm",0,"Data restoring ...OK");
      cVar9 = FUN_1000cd790(param_1);
      if (cVar9 == '\0') {
        *(undefined4 *)(param_1 + 500) = 0x80000054;
      }
      else {
        FUN_10008fa70(*(undefined8 *)(param_1 + 0x2b0),0x4e2b);
        cVar9 = FUN_1000d5de0(param_1 + 0x208,*(undefined8 *)(param_1 + 0x348),
                              *(undefined4 *)(param_1 + 0x338));
        if (cVar9 != '\0') {
          FUN_10008ec80(param_1,1);
          FUN_10008fa70(*(undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x1810),2);
          uVar14 = 1;
          goto switchD_1000c7589_caseD_4;
        }
        *(undefined4 *)(param_1 + 500) = 0x80000054;
      }
    }
    else {
      FUN_1008e3970("","vm",0,"Pages preload failed. Error = 0x%x");
      *(undefined4 *)(param_1 + 500) = 0x80000054;
    }
    break;
  case 2:
    cVar9 = FUN_1000cd790(param_1);
    if (cVar9 == '\0') {
      *(undefined4 *)(param_1 + 500) = 0x80020005;
    }
    else {
      cVar9 = FUN_1000a7e30(*(undefined8 *)(param_1 + 0x2b0));
      if (cVar9 != '\0') {
        iVar11 = FUN_1000cf4d0(param_1);
        *(int *)(param_1 + 500) = iVar11;
        if (iVar11 < 0) break;
      }
      if (*(int *)(param_1 + 0x204) != 9) {
        FUN_1000bea50(*(undefined8 *)(param_1 + 0x2b0),9);
        *(undefined4 *)(param_1 + 0x204) = 9;
      }
      iVar11 = FUN_1000d6af0(param_1 + 0x2b8,2,*(undefined8 *)(param_1 + 0x348),
                             *(undefined4 *)(param_1 + 0x338));
      auVar8 = _DAT_100b2ddb0;
      auVar7 = _DAT_100b2dda0;
      auVar6 = _PTR___mh_execute_header_100b2dd90;
      if (iVar11 == 0) {
        lVar18 = 0;
        if ((ulong)*(uint *)(param_1 + 0x338) != 0) {
          pbVar13 = *(byte **)(param_1 + 0x348);
          pbVar12 = pbVar13 + *(uint *)(param_1 + 0x338);
          lVar18 = 0;
          puVar15 = DAT_1011b6b00;
          do {
            bVar3 = *pbVar13;
            lVar20 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              do {
                iVar11 = (int)lVar20;
                auVar29._0_4_ = iVar11 + auVar6._0_4_;
                auVar29._4_4_ = iVar11 + auVar6._4_4_;
                auVar29._8_4_ = iVar11 + auVar6._8_4_;
                auVar29._12_4_ = iVar11 + auVar6._12_4_;
                auVar25 = auVar29 & auVar7;
                auVar33._0_4_ = auVar29._0_4_ >> 1;
                auVar33._4_4_ = auVar29._4_4_ >> 1;
                auVar33._8_4_ = auVar29._8_4_ >> 1;
                auVar33._12_4_ = auVar29._12_4_ >> 1;
                auVar33 = auVar33 & auVar7;
                auVar26._0_4_ = auVar29._0_4_ >> 2;
                auVar26._4_4_ = auVar29._4_4_ >> 2;
                auVar26._8_4_ = auVar29._8_4_ >> 2;
                auVar26._12_4_ = auVar29._12_4_ >> 2;
                auVar26 = auVar26 & auVar7;
                auVar34._0_4_ = auVar29._0_4_ >> 3;
                auVar34._4_4_ = auVar29._4_4_ >> 3;
                auVar34._8_4_ = auVar29._8_4_ >> 3;
                auVar34._12_4_ = auVar29._12_4_ >> 3;
                auVar34 = auVar34 & auVar7;
                auVar27._0_4_ = auVar29._0_4_ >> 4;
                auVar27._4_4_ = auVar29._4_4_ >> 4;
                auVar27._8_4_ = auVar29._8_4_ >> 4;
                auVar27._12_4_ = auVar29._12_4_ >> 4;
                auVar27 = auVar27 & auVar7;
                auVar35._0_4_ = auVar29._0_4_ >> 5;
                auVar35._4_4_ = auVar29._4_4_ >> 5;
                auVar35._8_4_ = auVar29._8_4_ >> 5;
                auVar35._12_4_ = auVar29._12_4_ >> 5;
                auVar35 = auVar35 & auVar7;
                auVar28._0_4_ = auVar29._0_4_ >> 6;
                auVar28._4_4_ = auVar29._4_4_ >> 6;
                auVar28._8_4_ = auVar29._8_4_ >> 6;
                auVar28._12_4_ = auVar29._12_4_ >> 6;
                auVar28 = auVar28 & auVar7;
                auVar21._0_4_ = auVar29._0_4_ >> 7;
                auVar21._4_4_ = auVar29._4_4_ >> 7;
                auVar21._8_4_ = auVar29._8_4_ >> 7;
                auVar21._12_4_ = auVar29._12_4_ >> 7;
                auVar21 = auVar21 & auVar7;
                auVar22._0_4_ =
                     auVar21._0_4_ +
                     auVar28._0_4_ +
                     auVar35._0_4_ +
                     auVar27._0_4_ + auVar34._0_4_ + auVar26._0_4_ + auVar33._0_4_ + auVar25._0_4_;
                auVar22._4_4_ =
                     auVar21._4_4_ +
                     auVar28._4_4_ +
                     auVar35._4_4_ +
                     auVar27._4_4_ + auVar34._4_4_ + auVar26._4_4_ + auVar33._4_4_ + auVar25._4_4_;
                auVar22._8_4_ =
                     auVar21._8_4_ +
                     auVar28._8_4_ +
                     auVar35._8_4_ +
                     auVar27._8_4_ + auVar34._8_4_ + auVar26._8_4_ + auVar33._8_4_ + auVar25._8_4_;
                auVar22._12_4_ =
                     auVar21._12_4_ +
                     auVar28._12_4_ +
                     auVar35._12_4_ +
                     auVar27._12_4_ +
                     auVar34._12_4_ + auVar26._12_4_ + auVar33._12_4_ + auVar25._12_4_;
                auVar25 = pshufb(auVar22,auVar8);
                *(int *)((long)&DAT_1011b6a00 + lVar20) = auVar25._0_4_;
                lVar20 = lVar20 + 4;
              } while (lVar20 != 0x100);
              DAT_1011b6b00 = &DAT_1011b6a00;
              puVar15 = &DAT_1011b6a00;
            }
            lVar18 = lVar18 + (ulong)*(byte *)((long)puVar15 + (ulong)bVar3);
            pbVar13 = pbVar13 + 1;
          } while (pbVar13 < pbVar12);
        }
        FUN_1008e3970("","vm",0,"Saved active WS bitmap with %llu pages",lVar18);
      }
      else {
        FUN_1008e3970("","vm",0,"Failed to save active WS bitmap");
      }
      FUN_1008e3970("","vm",0,"Flushing the data...");
      cVar9 = FUN_1000d6ce0(param_1 + 0x2b8);
      if (cVar9 == '\0') {
        FUN_1008e3970("","vm",0,"Flushing the data... failed");
        *(undefined4 *)(param_1 + 500) = 0x80020005;
      }
      else {
        FUN_1008e3970("","vm",0,"Flushing the data...OK");
        if (*(int *)(param_1 + 0x204) != 10) {
          FUN_1000bea50(*(undefined8 *)(param_1 + 0x2b0),10);
          *(undefined4 *)(param_1 + 0x204) = 10;
        }
      }
    }
    break;
  case 3:
  case 5:
    cVar9 = FUN_1000cd790(param_1);
    if (cVar9 == '\0') {
      *(undefined4 *)(param_1 + 500) = 0x80000053;
    }
    else {
      lVar18 = param_1 + 0x2b8;
      lVar20 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x1940);
      iVar11 = FUN_1000d6af0(lVar18,4,*(undefined8 *)(lVar20 + 0xb8),*(undefined4 *)(lVar20 + 0xc0))
      ;
      if (iVar11 == 0) {
        if (*(int *)(param_1 + 0x204) != 0xf) {
          FUN_1000bea50(*(undefined8 *)(param_1 + 0x2b0),0xf);
          *(undefined4 *)(param_1 + 0x204) = 0xf;
        }
        lVar20 = param_1 + 0x208;
        cVar9 = FUN_1000d5740(lVar20,*(undefined4 *)(param_1 + 0x1f0),param_1 + 0x1d8,
                              *(undefined4 *)(param_1 + 800),*(undefined4 *)(param_1 + 0x324),
                              FUN_1000d3140,param_1);
        if (cVar9 == '\0') {
          pcVar19 = "Failed to initialize snapshot";
LAB_1000c7975:
          FUN_1008e3970("","vm",0,pcVar19);
          *(undefined4 *)(param_1 + 500) = 0x80000053;
        }
        else {
          if (*(long *)(param_1 + 0x350) != 0) {
            FUN_1000d5ae0(lVar20);
          }
          cVar9 = FUN_1000d5b20(lVar20);
          if (cVar9 == '\0') {
            *(undefined4 *)(param_1 + 500) = 0x80000053;
          }
          else {
            lVar2 = param_1 + 0x370;
            FUN_1005a5960(lVar2);
            FUN_100097260(*(undefined8 *)(param_1 + 0x2b0),lVar2,0,0,0);
            if (*(int *)(*(long *)(param_1 + 0x50) + 0x14) == 5) {
              cVar9 = FUN_1000cf9e0(param_1);
              if (cVar9 != '\0') {
LAB_1000c7bd3:
                cVar9 = *(char *)(*(long *)(*(long *)(param_1 + 0x2b0) + 0x1940) + 0xd9);
                pcVar19 = "a";
                if (cVar9 == '\0') {
                  pcVar19 = "";
                }
                FUN_1008e3970("","vm",0,"Copy WS pages %ssynchronously",pcVar19);
                if (cVar9 != '\0') {
                  FUN_10008d1d0(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x1940),
                                &local_4c);
                  if (local_4c != 0) {
                    FUN_1008e3970("","vm",0,"Pre-process %u active pages...");
                    cVar10 = FUN_1000d5c20(lVar20,local_68,(int)local_60 - (int)local_68,0);
                    if (cVar10 == '\0') {
                      *(undefined4 *)(param_1 + 500) = 0x80000053;
                      if (local_68 != (void *)0x0) {
                        if (local_60 != local_68) {
                          local_60 = (void *)((~((long)local_60 + (-4 - (long)local_68)) &
                                              0xfffffffffffffffcU) + (long)local_60);
                        }
                        operator_delete(local_68);
                      }
                      break;
                    }
                  }
                  if (local_68 != (void *)0x0) {
                    if (local_60 != local_68) {
                      local_60 = (void *)((~((long)local_60 + (-4 - (long)local_68)) &
                                          0xfffffffffffffffcU) + (long)local_60);
                    }
                    operator_delete(local_68);
                  }
                }
                cVar9 = FUN_1000d5c20(lVar20,*(undefined8 *)(param_1 + 0x340),
                                      *(undefined4 *)(param_1 + 0x338),cVar9);
                if (cVar9 == '\0') {
                  *(undefined4 *)(param_1 + 500) = 0x80000053;
                }
                else {
                  iVar11 = FUN_1000d6af0(lVar18,2,*(undefined8 *)(param_1 + 0x348),
                                         *(undefined4 *)(param_1 + 0x338));
                  auVar8 = _DAT_100b2ddb0;
                  auVar7 = _DAT_100b2dda0;
                  auVar6 = _PTR___mh_execute_header_100b2dd90;
                  if (iVar11 == 0) {
                    lVar20 = 0;
                    if ((ulong)*(uint *)(param_1 + 0x338) != 0) {
                      pbVar13 = *(byte **)(param_1 + 0x348);
                      pbVar12 = pbVar13 + *(uint *)(param_1 + 0x338);
                      lVar20 = 0;
                      puVar15 = DAT_1011b6b00;
                      do {
                        bVar3 = *pbVar13;
                        lVar17 = 0;
                        if (puVar15 == (undefined4 *)0x0) {
                          do {
                            iVar11 = (int)lVar17;
                            auVar25._0_4_ = iVar11 + auVar6._0_4_;
                            auVar25._4_4_ = iVar11 + auVar6._4_4_;
                            auVar25._8_4_ = iVar11 + auVar6._8_4_;
                            auVar25._12_4_ = iVar11 + auVar6._12_4_;
                            auVar29 = auVar25 & auVar7;
                            auVar36._0_4_ = auVar25._0_4_ >> 1;
                            auVar36._4_4_ = auVar25._4_4_ >> 1;
                            auVar36._8_4_ = auVar25._8_4_ >> 1;
                            auVar36._12_4_ = auVar25._12_4_ >> 1;
                            auVar36 = auVar36 & auVar7;
                            auVar30._0_4_ = auVar25._0_4_ >> 2;
                            auVar30._4_4_ = auVar25._4_4_ >> 2;
                            auVar30._8_4_ = auVar25._8_4_ >> 2;
                            auVar30._12_4_ = auVar25._12_4_ >> 2;
                            auVar30 = auVar30 & auVar7;
                            auVar37._0_4_ = auVar25._0_4_ >> 3;
                            auVar37._4_4_ = auVar25._4_4_ >> 3;
                            auVar37._8_4_ = auVar25._8_4_ >> 3;
                            auVar37._12_4_ = auVar25._12_4_ >> 3;
                            auVar37 = auVar37 & auVar7;
                            auVar31._0_4_ = auVar25._0_4_ >> 4;
                            auVar31._4_4_ = auVar25._4_4_ >> 4;
                            auVar31._8_4_ = auVar25._8_4_ >> 4;
                            auVar31._12_4_ = auVar25._12_4_ >> 4;
                            auVar31 = auVar31 & auVar7;
                            auVar38._0_4_ = auVar25._0_4_ >> 5;
                            auVar38._4_4_ = auVar25._4_4_ >> 5;
                            auVar38._8_4_ = auVar25._8_4_ >> 5;
                            auVar38._12_4_ = auVar25._12_4_ >> 5;
                            auVar38 = auVar38 & auVar7;
                            auVar32._0_4_ = auVar25._0_4_ >> 6;
                            auVar32._4_4_ = auVar25._4_4_ >> 6;
                            auVar32._8_4_ = auVar25._8_4_ >> 6;
                            auVar32._12_4_ = auVar25._12_4_ >> 6;
                            auVar32 = auVar32 & auVar7;
                            auVar23._0_4_ = auVar25._0_4_ >> 7;
                            auVar23._4_4_ = auVar25._4_4_ >> 7;
                            auVar23._8_4_ = auVar25._8_4_ >> 7;
                            auVar23._12_4_ = auVar25._12_4_ >> 7;
                            auVar23 = auVar23 & auVar7;
                            auVar24._0_4_ =
                                 auVar23._0_4_ +
                                 auVar32._0_4_ +
                                 auVar38._0_4_ +
                                 auVar31._0_4_ +
                                 auVar37._0_4_ + auVar30._0_4_ + auVar36._0_4_ + auVar29._0_4_;
                            auVar24._4_4_ =
                                 auVar23._4_4_ +
                                 auVar32._4_4_ +
                                 auVar38._4_4_ +
                                 auVar31._4_4_ +
                                 auVar37._4_4_ + auVar30._4_4_ + auVar36._4_4_ + auVar29._4_4_;
                            auVar24._8_4_ =
                                 auVar23._8_4_ +
                                 auVar32._8_4_ +
                                 auVar38._8_4_ +
                                 auVar31._8_4_ +
                                 auVar37._8_4_ + auVar30._8_4_ + auVar36._8_4_ + auVar29._8_4_;
                            auVar24._12_4_ =
                                 auVar23._12_4_ +
                                 auVar32._12_4_ +
                                 auVar38._12_4_ +
                                 auVar31._12_4_ +
                                 auVar37._12_4_ + auVar30._12_4_ + auVar36._12_4_ + auVar29._12_4_;
                            auVar25 = pshufb(auVar24,auVar8);
                            *(int *)((long)&DAT_1011b6a00 + lVar17) = auVar25._0_4_;
                            lVar17 = lVar17 + 4;
                          } while (lVar17 != 0x100);
                          DAT_1011b6b00 = &DAT_1011b6a00;
                          puVar15 = &DAT_1011b6a00;
                        }
                        lVar20 = lVar20 + (ulong)*(byte *)((long)puVar15 + (ulong)bVar3);
                        pbVar13 = pbVar13 + 1;
                      } while (pbVar13 < pbVar12);
                    }
                    FUN_1008e3970("","vm",0,"Saved active WS bitmap with %llu pages",lVar20);
                  }
                  else {
                    FUN_1008e3970("","vm",0,"Failed to save active WS bitmap");
                  }
                  FUN_1008e3970("","vm",0,"Flushing the data...");
                  cVar9 = FUN_1000d6ce0(lVar18);
                  if (cVar9 == '\0') {
                    pcVar19 = "Flushing the data... failed";
                    goto LAB_1000c7975;
                  }
                  FUN_1008e3970("","vm",0,"Flushing the data...OK");
                  FUN_1008e3970("","vm",0,"Waiting for disk...");
                  FUN_1005a7950(lVar2);
                  if (*(int *)(param_1 + 500) == 0) {
                    FUN_1008e3970("","vm",0,"Waiting for disk...Completed.");
                    if ((*(long *)(param_1 + 0x368) != 0) &&
                       (*(long *)(*(long *)(param_1 + 0x368) + 0x10) != 0)) {
                      uVar16 = 0;
                      FUN_1008e3970("","vm",0,"Waiting the screenshot file to be written.");
                      if (*(long *)(param_1 + 0x368) != 0) {
                        uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x368) + 0x10);
                      }
                      FUN_1000e95b0(uVar16);
                      plVar5 = *(long **)(param_1 + 0x368);
                      *(undefined8 *)(param_1 + 0x368) = 0;
                      if (plVar5 != (long *)0x0) {
                        LOCK();
                        plVar1 = plVar5 + 1;
                        lVar18 = *plVar1;
                        *(int *)plVar1 = (int)*plVar1 + -1;
                        UNLOCK();
                        if ((int)lVar18 == 1) {
                          (**(code **)(*plVar5 + 0x10))();
                        }
                      }
                    }
                    FUN_10008ec80(param_1,3);
                    uVar14 = 1;
                    if ((*(int *)(*(long *)(param_1 + 0x2b0) + 0x109e0) == 1) &&
                       (*(int *)(*(long *)(param_1 + 0x50) + 0x14) != 5)) {
                      FUN_10008fdb0(*(long *)(param_1 + 0x2b0),0x4e45,0);
                      *(undefined1 *)(param_1 + 0x449) = 1;
                    }
                    goto switchD_1000c7589_caseD_4;
                  }
                  FUN_1008e3970("","vm",0,"Waiting for disk...Failed.");
                }
              }
            }
            else {
              FUN_1007d6920(local_48,param_1 + 0x440);
              iVar11 = FUN_1005a7300(lVar2,local_48,0,0);
              if (-1 < iVar11) goto LAB_1000c7bd3;
              FUN_1008e3970("","vm",0,"Disk.CreateState returns [%d]",iVar11);
              *(int *)(param_1 + 500) = iVar11;
            }
          }
        }
      }
      else {
        FUN_1008e3970("","vm",0,"Failed to update dirty pages bitmap (%d)",iVar11);
        *(undefined4 *)(param_1 + 500) = 0x80000053;
      }
    }
    break;
  default:
    goto switchD_1000c7589_caseD_4;
  }
  FUN_10008f910(param_1,*(undefined4 *)(param_1 + 500));
  FUN_1000cee20(param_1);
  FUN_10008ec80(param_1,0);
  uVar14 = 1;
switchD_1000c7589_caseD_4:
  if (lVar4 == local_38) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

