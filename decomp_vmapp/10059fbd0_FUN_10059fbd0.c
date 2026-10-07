
int FUN_10059fbd0(long *param_1,long *param_2,uint param_3)

{
  long ****pppplVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long *plVar9;
  long *plVar10;
  long ****pppplVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  QArrayData *pQVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  code *pcVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  bool bVar25;
  int local_1a0;
  QArrayData *local_188;
  int local_17c;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QString local_150;
  QString local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  long *local_130;
  long local_128 [2];
  undefined1 local_118 [16];
  QArrayData *local_108;
  int local_f4;
  long ***local_f0;
  long ***local_e8;
  undefined8 local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  undefined1 uStack_b1;
  undefined1 local_b0 [16];
  long local_a0;
  int local_90;
  undefined4 uStack_8c;
  undefined1 local_88 [48];
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  puVar22 = (undefined8 *)(ulong)param_3;
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar24 = *param_2;
  iVar5 = *(int *)(lVar24 + 8);
  iVar14 = *(int *)(lVar24 + 0xc);
  iVar13 = iVar5;
  local_38 = lVar12;
  if ((*(int *)(*param_1 + 4) == 0) || (iVar13 = iVar14, iVar14 == iVar5)) {
    FUN_1008e3970("","vdisk",0,"FileName size %u Partitions size %u",*(int *)(*param_1 + 4),
                  iVar14 - iVar13);
    iVar5 = -0x7ffffff8;
    goto LAB_1005a0a26;
  }
  FUN_10059f600(&local_170,lVar24 + 0x10 + (long)iVar5 * 8);
  if (*(int *)(local_170 + 4) == 0) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Unable to extract disk name from %s",
                  local_178 + *(long *)(local_178 + 0x10));
    iVar5 = -0x7ffdefac;
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        uStack_b1 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)uStack_b1) goto LAB_1005a09ea;
      }
      QArrayData::deallocate(local_178,1,8);
    }
  }
  else {
    plVar6 = (long *)FUN_100684400(&local_170,1,4,&local_17c,0);
    if (plVar6 == (long *)0x0) {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Error opening image %s [0x%x]",
                    local_188 + *(long *)(local_188 + 0x10),local_17c);
      iVar5 = local_17c;
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          uStack_b1 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)uStack_b1) goto LAB_1005a09ea;
        }
        QArrayData::deallocate(local_188,1,8);
        iVar5 = local_17c;
      }
    }
    else {
      local_f0 = (long ***)&local_e8;
      local_e0 = 0;
      local_e8 = (long ***)0x0;
      local_f4 = FUN_100688360(plVar6,&local_f0);
      if (local_f4 < 0) {
        FUN_1008e3970("","vdisk",0,"Error enumerating partitions 0x%x",local_f4);
        local_17c = local_f4;
      }
      else {
        local_108 = (QArrayData *)PTR_shared_null_100ba20d0;
        local_f4 = (**(code **)(*plVar6 + 0x38))(plVar6,local_118);
        if (local_f4 < 0) {
          FUN_1008e3970("","vdisk",0,"Error getting parameters from image 0x%x",local_f4);
          local_1a0 = local_f4;
        }
        else {
          FUN_100098d30(local_b0);
          local_f4 = FUN_10059c050(local_118,local_b0);
          if (local_f4 < 0) {
            FUN_1008e3970("","vdisk",0,"Error converting parameters from image 0x%x",local_f4);
            local_1a0 = local_f4;
          }
          else {
            FUN_100098f20(local_88);
            local_130 = local_128;
            local_128[1] = 0;
            local_128[0] = 0;
            iVar5 = FUN_1005a41f0(plVar6,local_b0,&local_130,0,0);
            if (iVar5 < 0) {
              FUN_1008e3970("","vdisk",0,"Error processing MBR. 0x%x",iVar5);
LAB_1005a00ab:
              local_f4 = iVar5;
              FUN_1008e3970("","vdisk",0,"Error adding MBR metadata 0x%x",iVar5);
              local_1a0 = local_f4;
            }
            else {
              if ((long ****)local_e8 != (long ****)0x0) {
                pppplVar8 = (long ****)local_e8;
                pppplVar11 = &local_e8;
                do {
                  while (pppplVar7 = pppplVar8, 0xfffffff < *(uint *)(pppplVar7 + 4)) {
                    pppplVar8 = (long ****)*pppplVar7;
                    pppplVar11 = pppplVar7;
                    if ((long ****)*pppplVar7 == (long ****)0x0) goto LAB_10059ff93;
                  }
                  pppplVar1 = pppplVar7 + 1;
                  pppplVar7 = pppplVar11;
                  pppplVar8 = (long ****)*pppplVar1;
                } while ((long ****)*pppplVar1 != (long ****)0x0);
LAB_10059ff93:
                if ((pppplVar7 != &local_e8) && (*(uint *)(pppplVar7 + 4) < 0x10000001)) {
                  iVar14 = 0;
                  while( true ) {
                    iVar5 = FUN_1005a41f0(plVar6,local_b0,&local_130,pppplVar7[6],iVar14);
                    if (iVar5 < 0) {
                      FUN_1008e3970("","vdisk",0,"Error processing extended partition %u. 0x%x",
                                    iVar14,iVar5);
                      goto LAB_1005a00ab;
                    }
                    if ((long ****)local_e8 == (long ****)0x0) break;
                    uVar15 = iVar14 + 0x10000001;
                    pppplVar8 = (long ****)local_e8;
                    pppplVar11 = &local_e8;
                    do {
                      while (pppplVar7 = pppplVar8, uVar15 <= *(uint *)(pppplVar7 + 4)) {
                        pppplVar8 = (long ****)*pppplVar7;
                        pppplVar11 = pppplVar7;
                        if ((long ****)*pppplVar7 == (long ****)0x0) goto LAB_1005a0020;
                      }
                      pppplVar1 = pppplVar7 + 1;
                      pppplVar7 = pppplVar11;
                      pppplVar8 = (long ****)*pppplVar1;
                    } while ((long ****)*pppplVar1 != (long ****)0x0);
LAB_1005a0020:
                    if ((pppplVar7 == &local_e8) ||
                       (iVar14 = iVar14 + 1, uVar15 < *(uint *)(pppplVar7 + 4))) break;
                  }
                }
              }
              local_f4 = 0;
              iVar5 = 0;
              if ((char)param_3 != '\0') {
                QByteArray::QByteArray((QByteArray *)&local_c8,local_90,'\0');
                if ((*(uint *)local_c8 < 2) && (*(long *)(local_c8 + 0x10) == 0x18)) {
                  pcVar20 = *(code **)(*plVar6 + 0x98);
LAB_1005a0116:
                  puVar22 = (undefined8 *)&DAT_00000018;
                  pQVar16 = local_c8;
                }
                else {
                  QByteArray::reallocData
                            (&local_c8,*(uint *)(local_c8 + 4) + 1,*(uint *)(local_c8 + 8) >> 0x1f);
                  pQVar16 = local_c8;
                  puVar22 = *(undefined8 **)(local_c8 + 0x10);
                  pcVar20 = *(code **)(*plVar6 + 0x98);
                  if ((*(uint *)local_c8 < 2) && (puVar22 == (undefined8 *)&DAT_00000018))
                  goto LAB_1005a0116;
                  QByteArray::reallocData
                            (&local_c8,*(uint *)(local_c8 + 4) + 1,*(uint *)(local_c8 + 8) >> 0x1f);
                }
                iVar5 = (*pcVar20)(plVar6,local_c8 + *(long *)(local_c8 + 0x10),local_90,1);
                if (iVar5 < 0) {
                  FUN_1008e3970("","vdisk",0,"Error reading GPT. 0x%x",iVar5);
                }
                else {
                  if ((1 < *(uint *)local_c8) || (*(long *)(local_c8 + 0x10) != 0x18)) {
                    QByteArray::reallocData
                              (&local_c8,*(uint *)(local_c8 + 4) + 1,*(uint *)(local_c8 + 8) >> 0x1f
                              );
                  }
                  iVar5 = 0;
                  if (*(long *)(local_c8 + *(long *)(local_c8 + 0x10)) == 0x5452415020494645) {
                    if (*(uint *)((long)(puVar22 + 10) + (long)pQVar16) < 0x81) {
                      uVar19 = (ulong)(*(uint *)((long)(puVar22 + 10) + (long)pQVar16) << 7);
                      QByteArray::resize((int)&local_c8);
                      if ((*(uint *)local_c8 < 2) && (*(long *)(local_c8 + 0x10) == 0x18)) {
                        pcVar20 = *(code **)(*plVar6 + 0x98);
LAB_1005a0a82:
                        puVar22 = (undefined8 *)&DAT_00000018;
                        pQVar16 = local_c8;
                      }
                      else {
                        QByteArray::reallocData
                                  (&local_c8,*(uint *)(local_c8 + 4) + 1,
                                   *(uint *)(local_c8 + 8) >> 0x1f);
                        pQVar16 = local_c8;
                        puVar22 = *(undefined8 **)(local_c8 + 0x10);
                        pcVar20 = *(code **)(*plVar6 + 0x98);
                        if ((*(uint *)local_c8 < 2) && (puVar22 == (undefined8 *)&DAT_00000018))
                        goto LAB_1005a0a82;
                        QByteArray::reallocData
                                  (&local_c8,*(uint *)(local_c8 + 4) + 1,
                                   *(uint *)(local_c8 + 8) >> 0x1f);
                      }
                      iVar5 = (*pcVar20)(plVar6,local_c8 +
                                                CONCAT44(uStack_8c,local_90) +
                                                *(long *)(local_c8 + 0x10),uVar19,
                                         *(undefined8 *)((long)(puVar22 + 9) + (long)pQVar16));
                      if (iVar5 < 0) {
                        FUN_1008e3970("","vdisk",0,
                                      "Error reading GPT entries from %llu Size %u. 0x%x",
                                      *(undefined8 *)(pQVar16 + 0x48 + (long)puVar22),uVar19,iVar5);
                      }
                      else {
                        local_d0 = (QArrayData *)QString::fromAscii_helper("PhysicalGpt.hds",0xf);
                        iVar5 = FUN_1005a4720(local_b0,&local_c8,&local_130,1,&local_d0);
                        if (*(int *)local_d0 != -1) {
                          if (*(int *)local_d0 != 0) {
                            LOCK();
                            *(int *)local_d0 = *(int *)local_d0 + -1;
                            uStack_b1 = *(int *)local_d0 != 0;
                            UNLOCK();
                            if ((bool)uStack_b1) goto LAB_1005a0ba5;
                          }
                          QArrayData::deallocate(local_d0,2,8);
                        }
LAB_1005a0ba5:
                        if (iVar5 < 0) {
                          FUN_1008e3970("","vdisk",0,"Error adding GPT to metadata 0x%x",iVar5);
                        }
                        else {
                          puVar22 = *(undefined8 **)((long)(puVar22 + 4) + (long)pQVar16);
                          pcVar20 = *(code **)(*plVar6 + 0x98);
                          if ((1 < *(uint *)local_c8) || (*(long *)(local_c8 + 0x10) != 0x18)) {
                            QByteArray::reallocData
                                      (&local_c8,*(uint *)(local_c8 + 4) + 1,
                                       *(uint *)(local_c8 + 8) >> 0x1f);
                          }
                          iVar5 = (*pcVar20)(plVar6,local_c8 + *(long *)(local_c8 + 0x10) + uVar19,
                                             local_90,puVar22);
                          if (iVar5 < 0) {
                            FUN_1008e3970("","vdisk",0,
                                          "Error reading alternate GPT entry from %llu. 0x%x",
                                          puVar22,iVar5);
                          }
                          else {
                            if ((*(uint *)local_c8 < 2) && (*(long *)(local_c8 + 0x10) == 0x18)) {
                              pcVar20 = *(code **)(*plVar6 + 0x98);
LAB_1005a0ce4:
                              lVar24 = 0x18;
                              pQVar16 = local_c8;
                            }
                            else {
                              QByteArray::reallocData
                                        (&local_c8,*(uint *)(local_c8 + 4) + 1,
                                         *(uint *)(local_c8 + 8) >> 0x1f);
                              pQVar16 = local_c8;
                              lVar24 = *(long *)(local_c8 + 0x10);
                              pcVar20 = *(code **)(*plVar6 + 0x98);
                              if ((*(uint *)local_c8 < 2) && (lVar24 == 0x18)) goto LAB_1005a0ce4;
                              QByteArray::reallocData
                                        (&local_c8,*(uint *)(local_c8 + 4) + 1,
                                         *(uint *)(local_c8 + 8) >> 0x1f);
                            }
                            puVar22 = (undefined8 *)((uVar19 | 0x48) + lVar24);
                            iVar5 = (*pcVar20)(plVar6,local_c8 + *(long *)(local_c8 + 0x10),uVar19,
                                               *(undefined8 *)(pQVar16 + (long)puVar22));
                            if (iVar5 < 0) {
                              FUN_1008e3970("","vdisk",0,
                                            "Error reading alternate GPT entries from %llu Size %u. 0x%x"
                                            ,*(undefined8 *)(pQVar16 + (long)puVar22),uVar19,iVar5);
                            }
                            else {
                              puVar22 = (undefined8 *)CONCAT44(uStack_8c,local_90);
                              uVar15 = *(uint *)(local_c8 + 4);
                              local_d8 = (QArrayData *)
                                         QString::fromAscii_helper("PhysicalGptCopy.hds",0x13);
                              iVar5 = FUN_1005a4720(local_b0,&local_c8,&local_130,
                                                    local_a0 -
                                                    (ulong)(long)(int)uVar15 / (ulong)puVar22,
                                                    &local_d8);
                              if (*(int *)local_d8 != -1) {
                                if (*(int *)local_d8 != 0) {
                                  LOCK();
                                  *(int *)local_d8 = *(int *)local_d8 + -1;
                                  uStack_b1 = *(int *)local_d8 != 0;
                                  UNLOCK();
                                  if ((bool)uStack_b1) goto LAB_1005a0e1b;
                                }
                                QArrayData::deallocate(local_d8,2,8);
                              }
LAB_1005a0e1b:
                              if (iVar5 < 0) {
                                FUN_1008e3970("","vdisk",0,"Error adding GPT copy to metadata 0x%x",
                                              iVar5);
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      iVar5 = -0x7fffffea;
                      FUN_1008e3970("","vdisk",0,"GPT entries count is too large in FillGPTData %u")
                      ;
                    }
                  }
                }
                if (*(int *)local_c8 != -1) {
                  if (*(int *)local_c8 != 0) {
                    LOCK();
                    *(int *)local_c8 = *(int *)local_c8 + -1;
                    uStack_b1 = *(int *)local_c8 != 0;
                    UNLOCK();
                    if ((bool)uStack_b1) goto LAB_1005a0241;
                  }
                  QArrayData::deallocate(local_c8,1,8);
                }
              }
LAB_1005a0241:
              local_f4 = iVar5;
              if (iVar5 < 0) {
                FUN_1008e3970("","vdisk",0,"Error adding GPT metadata 0x%x",iVar5);
                local_1a0 = local_f4;
              }
              else {
                lVar24 = *param_2;
                lVar12 = (long)*(int *)(lVar24 + 8);
                if (*(int *)(lVar24 + 8) != *(int *)(lVar24 + 0xc)) {
                  lVar17 = (long)*(int *)(lVar24 + 0xc) * 8 + lVar12 * -8;
                  local_1a0 = (int)lVar24;
                  puVar23 = (undefined8 *)(lVar24 + 0x10 + lVar12 * 8);
                  puVar3 = (undefined8 *)(lVar24 + 0x18 + lVar12 * 8);
                  do {
                    puVar22 = puVar3;
                    iVar5 = FUN_10059f480(puVar23);
                    if (iVar5 == -1) {
                      QString::toUtf8();
                      FUN_1008e3970("","vdisk",0,"Partition name %s is invalid",
                                    local_138 + *(long *)(local_138 + 0x10));
                      local_1a0 = -0x7ffdefac;
                      if (*(int *)local_138 == -1) goto LAB_1005a08c1;
                      if (*(int *)local_138 != 0) {
                        LOCK();
                        *(int *)local_138 = *(int *)local_138 + -1;
                        uStack_b1 = *(int *)local_138 != 0;
                        UNLOCK();
                        if ((bool)uStack_b1) goto LAB_1005a08c1;
                      }
                      QArrayData::deallocate(local_138,1,8);
                      goto LAB_1005a08c1;
                    }
                    pppplVar8 = (long ****)FUN_1005a36f0(&local_f0,puVar23);
                    if (pppplVar8 == &local_e8) {
                      QString::toUtf8();
                      FUN_1008e3970("","vdisk",0,"Partition %s is not found",
                                    local_140 + *(long *)(local_140 + 0x10));
                      local_1a0 = -0x7ffdefad;
                      if (*(int *)local_140 == -1) goto LAB_1005a08c1;
                      if (*(int *)local_140 != 0) {
                        LOCK();
                        *(int *)local_140 = *(int *)local_140 + -1;
                        uStack_b1 = *(int *)local_140 != 0;
                        UNLOCK();
                        if ((bool)uStack_b1) goto LAB_1005a08c1;
                      }
                      QArrayData::deallocate(local_140,1,8);
                      goto LAB_1005a08c1;
                    }
                    local_148.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar23;
                    if (1 < *(int *)local_148.field0_0x0 + 1U) {
                      LOCK();
                      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + 1;
                      uStack_b1 = *(int *)local_148.field0_0x0 != 0;
                      UNLOCK();
                    }
                    cVar4 = FUN_1007ea210(pppplVar8 + 0xb);
                    if (cVar4 == '\0') {
                      FUN_1007d6b20(&local_158,pppplVar8 + 0xb);
                      QString::toUpper();
                      QString::operator=(&local_148,&local_150);
                      if (*(int *)local_150.field0_0x0 != -1) {
                        if (*(int *)local_150.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
                          uStack_b1 = *(int *)local_150.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)uStack_b1) goto LAB_1005a036a;
                        }
                        QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
                      }
LAB_1005a036a:
                      if (*(int *)local_158 != -1) {
                        if (*(int *)local_158 != 0) {
                          LOCK();
                          *(int *)local_158 = *(int *)local_158 + -1;
                          uStack_b1 = *(int *)local_158 != 0;
                          UNLOCK();
                          if ((bool)uStack_b1) goto LAB_1005a03a6;
                        }
                        QArrayData::deallocate(local_158,2,8);
                      }
LAB_1005a03a6:
                      bVar25 = (*(uint *)((long)pppplVar8 + 0x44) & 0xfffffffe) == 0xee;
                      uVar18 = 7;
                    }
                    else {
                      uVar18 = 6;
                      bVar25 = false;
                    }
                    local_f4 = FUN_1005a4000(local_b0,uVar18,pppplVar8[6],
                                             (1 - (long)pppplVar8[6]) + (long)pppplVar8[7],
                                             &local_148,bVar25);
                    bVar25 = false;
                    if (local_f4 < 0) {
                      QString::toUtf8();
                      FUN_1008e3970("","vdisk",0,"Error adding partition %s to list [0x%x]",
                                    local_160 + *(long *)(local_160 + 0x10),local_f4);
                      if (*(int *)local_160 != -1) {
                        if (*(int *)local_160 != 0) {
                          LOCK();
                          *(int *)local_160 = *(int *)local_160 + -1;
                          uStack_b1 = *(int *)local_160 != 0;
                          UNLOCK();
                          if ((bool)uStack_b1) goto LAB_1005a0476;
                        }
                        QArrayData::deallocate(local_160,1,8);
                      }
LAB_1005a0476:
                      bVar25 = true;
                      local_1a0 = local_f4;
                    }
                    if (*(int *)local_148.field0_0x0 != -1) {
                      if (*(int *)local_148.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
                        uStack_b1 = *(int *)local_148.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)uStack_b1) goto LAB_1005a04c3;
                      }
                      QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
                    }
LAB_1005a04c3:
                    if (bVar25) goto LAB_1005a08c1;
                    lVar17 = lVar17 + -8;
                    puVar23 = puVar22;
                    puVar3 = puVar22 + 1;
                  } while (lVar17 != 0);
                }
                plVar9 = (long *)FUN_10059a920(param_1,local_b0,0x40003,0,0,&local_f4);
                if (local_f4 < 0) {
                  QString::toUtf8();
                  FUN_1008e3970("","vdisk",0,"Error creating disk %s with error 0x%x",
                                local_168 + *(long *)(local_168 + 0x10),local_f4);
                  local_1a0 = local_f4;
                  if (*(int *)local_168 != -1) {
                    if (*(int *)local_168 != 0) {
                      LOCK();
                      *(int *)local_168 = *(int *)local_168 + -1;
                      uStack_b1 = *(int *)local_168 != 0;
                      UNLOCK();
                      if ((bool)uStack_b1) goto LAB_1005a08c1;
                    }
                    QArrayData::deallocate(local_168,1,8);
                    local_1a0 = local_f4;
                  }
                }
                else {
                  plVar10 = local_130;
                  if (local_130 != local_128) {
                    do {
                      local_c0 = (QArrayData *)plVar10[5];
                      if (1 < *(uint *)local_c0 + 1) {
                        LOCK();
                        *(uint *)local_c0 = *(uint *)local_c0 + 1;
                        uStack_b1 = *(uint *)local_c0 != 0;
                        UNLOCK();
                      }
                      pcVar20 = *(code **)(*plVar9 + 0xf0);
                      if ((1 < *(uint *)local_c0) || (*(long *)(local_c0 + 0x10) != 0x18)) {
                        QByteArray::reallocData
                                  (&local_c0,*(uint *)(local_c0 + 4) + 1,
                                   *(uint *)(local_c0 + 8) >> 0x1f);
                      }
                      uVar15 = (*pcVar20)(plVar9,local_c0 + *(long *)(local_c0 + 0x10),
                                          *(uint *)(local_c0 + 4),plVar10[4]);
                      if ((int)uVar15 < 0) {
                        FUN_1008e3970("","vdisk",0,"Error writing sector %llu to the disk [0x%x]",
                                      plVar10[4],uVar15);
                        puVar22 = (undefined8 *)(ulong)uVar15;
                      }
                      if (*(int *)local_c0 != -1) {
                        if (*(int *)local_c0 != 0) {
                          LOCK();
                          *(int *)local_c0 = *(int *)local_c0 + -1;
                          uStack_b1 = *(int *)local_c0 != 0;
                          UNLOCK();
                          if ((bool)uStack_b1) goto LAB_1005a060a;
                        }
                        QArrayData::deallocate(local_c0,1,8);
                      }
LAB_1005a060a:
                      if ((int)uVar15 < 0) {
                        local_f4 = (int)puVar22;
                        if (local_f4 < 0) {
                          FUN_1008e3970("","vdisk",0,"Error writing metadata with error 0x%x",
                                        (ulong)puVar22 & 0xffffffff);
                        }
                        goto LAB_1005a08af;
                      }
                      plVar2 = (long *)plVar10[1];
                      if ((long *)plVar10[1] == (long *)0x0) {
                        do {
                          plVar21 = (long *)plVar10[2];
                          bVar25 = (long *)*plVar21 != plVar10;
                          plVar10 = plVar21;
                        } while (bVar25);
                      }
                      else {
                        do {
                          plVar21 = plVar2;
                          plVar2 = (long *)*plVar21;
                        } while ((long *)*plVar21 != (long *)0x0);
                      }
                      plVar10 = plVar21;
                    } while (plVar21 != local_128);
                  }
                  local_f4 = 0;
LAB_1005a08af:
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                  local_1a0 = local_f4;
                }
              }
            }
LAB_1005a08c1:
            FUN_1005a4a70(&local_130,local_128[0]);
            lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
          }
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              uStack_b1 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)uStack_b1) goto LAB_1005a0914;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_1005a0914:
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              uStack_b1 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)uStack_b1) goto LAB_1005a094a;
            }
            QArrayData::deallocate(local_58,1,8);
          }
LAB_1005a094a:
          FUN_100098f20(local_88);
        }
        local_17c = local_1a0;
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            uStack_b1 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)uStack_b1) goto LAB_1005a098f;
          }
          QArrayData::deallocate(local_108,2,8);
        }
      }
LAB_1005a098f:
      FUN_100650070(&local_f0,local_e8);
      (**(code **)(*plVar6 + 0x20))();
      iVar5 = 0;
      if (local_17c < 0) {
        FUN_1008e3970("","vdisk",0,"Error composing virtual disk in case of 0x%x");
        iVar5 = local_17c;
      }
    }
  }
LAB_1005a09ea:
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      uStack_b1 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)uStack_b1) goto LAB_1005a0a26;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1005a0a26:
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

