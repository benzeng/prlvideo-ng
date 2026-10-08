
int FUN_100b109d0(long *param_1,long **param_2)

{
  uint uVar1;
  QArrayData *pQVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  short *psVar9;
  ulong uVar10;
  short *psVar11;
  long *plVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulong uVar15;
  bool bVar16;
  int local_204;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  undefined1 local_1b8 [16];
  QArrayData *local_1a8;
  size_t local_1a0;
  long local_198;
  long *local_190;
  long local_188 [2];
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QString local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  undefined1 local_111;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0 [2];
  long local_e8;
  long lStack_e0;
  uint local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  int local_a8;
  QString local_a0;
  undefined4 local_98 [2];
  undefined4 local_90 [20];
  QArrayData *local_40;
  long local_38;
  
  bVar4 = 0;
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_204 = -0x7ffdefef;
  if (param_1 == (long *)0x0) goto LAB_100b116c5;
  local_188[1] = 0;
  local_188[0] = 0;
  local_198 = 0;
  local_1a8 = (QArrayData *)PTR_shared_null_1021e1288;
  local_190 = local_188;
  (**(code **)(*param_1 + 0x38))(param_1,local_1b8);
  local_204 = FUN_100b0fbe0(param_1,local_1a0,&local_190,&local_198);
  lVar8 = local_198;
  if (local_204 < 0) {
    (**(code **)(*param_1 + 0xd0))(&local_1c8,param_1);
    QString::toUtf8();
    FUN_100df99c0("","dimg",0,"Error getting MBR partition 0x%x <%s>",local_204,
                  local_1c0 + *(long *)(local_1c0 + 0x10));
    if (*(int *)local_1c0 != -1) {
      if (*(int *)local_1c0 != 0) {
        LOCK();
        *(int *)local_1c0 = *(int *)local_1c0 + -1;
        local_111 = *(int *)local_1c0 != 0;
        UNLOCK();
        if ((bool)local_111) goto LAB_100b10c91;
      }
      QArrayData::deallocate(local_1c0,1,8);
    }
LAB_100b10c91:
    if (*(int *)local_1c8 != -1) {
      if (*(int *)local_1c8 != 0) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + -1;
        local_111 = *(int *)local_1c8 != 0;
        UNLOCK();
        if ((bool)local_111) goto LAB_100b11676;
      }
      QArrayData::deallocate(local_1c8,2,8);
    }
  }
  else if (local_198 == 0) {
    local_204 = 0;
    if (&local_190 != param_2) {
      FUN_100af8270(param_2,param_2[1]);
      param_2[2] = (long *)0x0;
      *param_2 = (long *)(param_2 + 1);
      param_2[1] = (long *)0x0;
      plVar7 = local_190;
      while (plVar7 != local_188) {
        local_98[0] = (undefined4)plVar7[4];
        plVar12 = plVar7 + 5;
        puVar13 = local_90;
        for (lVar8 = 0x13; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar13 = (int)*plVar12;
          plVar12 = (long *)((long)plVar12 + (ulong)bVar4 * -8 + 4);
          puVar13 = puVar13 + (ulong)bVar4 * -2 + 1;
        }
        pQVar2 = (QArrayData *)plVar7[0xf];
        if (1 < *(int *)pQVar2 + 1U) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + 1;
          local_111 = *(int *)pQVar2 != 0;
          UNLOCK();
          local_98[0] = (undefined4)plVar7[4];
        }
        local_40 = pQVar2;
        FUN_100b125a0(param_2,param_2 + 1,local_98);
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_111 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_111) goto LAB_100b10dad;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_100b10dad:
        plVar12 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar12 = (long *)plVar7[2];
            bVar16 = (long *)*plVar12 != plVar7;
            plVar7 = plVar12;
          } while (bVar16);
        }
        else {
          do {
            plVar7 = plVar12;
            plVar12 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      }
      local_204 = 0;
    }
  }
  else {
    plVar7 = _valloc(local_1a0);
    if (plVar7 == (long *)0x0) {
      local_204 = -0x7ffffffe;
      FUN_100df99c0("","dimg",0,"Error allocating memory for GPT sector");
      goto LAB_100b1149d;
    }
    local_204 = (**(code **)(*param_1 + 0x98))(param_1,plVar7,local_1a0 & 0xffffffff,lVar8);
    if (local_204 < 0) {
      (**(code **)(*param_1 + 0xd0))(&local_128,param_1);
      QString::toUtf8();
      FUN_100df99c0("","dimg",0,"Error reading GPT table (0x%x) <%s>",local_204,
                    local_120 + *(long *)(local_120 + 0x10));
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_111 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_111) goto LAB_100b10ebe;
        }
        QArrayData::deallocate(local_120,1,8);
      }
LAB_100b10ebe:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_111 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_111) goto LAB_100b11495;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_100b11495:
      _free(plVar7);
    }
    else {
      if (*plVar7 != 0x5452415020494645) goto LAB_100b11495;
      uVar1 = *(uint *)(plVar7 + 10);
      uVar10 = (ulong)uVar1;
      lVar8 = plVar7[9];
      iVar6 = *(int *)((long)plVar7 + 0x54);
      _free(plVar7);
      if (uVar10 < 0x81) {
        uVar14 = iVar6 * uVar1;
        plVar7 = _valloc((ulong)uVar14);
        if (plVar7 != (long *)0x0) {
          local_204 = (**(code **)(*param_1 + 0x98))(param_1,plVar7,uVar14,lVar8);
          if (-1 < local_204) {
            if (uVar1 != 0) {
              psVar11 = (short *)((long)plVar7 + 0x3e);
              uVar15 = 0;
              do {
                FUN_100dda060(&local_d0);
                FUN_100dda060(&local_c0);
                local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
                iVar6 = (int)uVar15;
                FUN_100dda4c0(&local_100,plVar7 + uVar15 * 0x10);
                FUN_100dda4c0(&local_110,plVar7 + uVar15 * 0x10 + 2);
                cVar3 = FUN_100deade0(&local_100);
                iVar5 = 9;
                if ((cVar3 == '\0') && (cVar3 = FUN_100deade0(&local_110), cVar3 == '\0')) {
                  bVar4 = FUN_100dd5c60(&local_100);
                  local_d4 = (uint)bVar4;
                  local_e8 = plVar7[uVar15 * 0x10 + 4];
                  lStack_e0 = (plVar7 + uVar15 * 0x10 + 4)[1];
                  local_c8 = local_f8;
                  local_d0 = local_100;
                  local_b8 = local_108;
                  local_c0 = local_110;
                  iVar5 = 3;
                  psVar9 = psVar11;
                  do {
                    if ((((psVar9[-3] == 0) || (psVar9[-2] == 0)) || (psVar9[-1] == 0)) ||
                       (*psVar9 == 0)) break;
                    iVar5 = iVar5 + 4;
                    psVar9 = psVar9 + 4;
                  } while (iVar5 != 0x27);
                  local_b0 = lVar8;
                  local_a8 = iVar6;
                  QString::fromUtf16((ushort *)&local_168,(int)plVar7 + 0x38 + iVar6 * 0x80);
                  QString::normalized(&local_160,&local_168,1,0);
                  QString::operator=(&local_a0,&local_160);
                  if (*(int *)local_160.field0_0x0 != -1) {
                    if (*(int *)local_160.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
                      local_111 = *(int *)local_160.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_111) goto LAB_100b11130;
                    }
                    QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
                  }
LAB_100b11130:
                  if (*(int *)local_168 != -1) {
                    if (*(int *)local_168 != 0) {
                      LOCK();
                      *(int *)local_168 = *(int *)local_168 + -1;
                      local_111 = *(int *)local_168 != 0;
                      UNLOCK();
                      if ((bool)local_111) goto LAB_100b1116c;
                    }
                    QArrayData::deallocate(local_168,2,8);
                  }
LAB_100b1116c:
                  local_f0[0] = 0x80000000;
                  local_204 = FUN_100b10730(param_2,iVar6 + -0x7fffffff,local_f0);
                  iVar5 = -6;
                  if (local_204 < 0) {
                    (**(code **)(*param_1 + 0xd0))(&local_178,param_1);
                    QString::toUtf8();
                    FUN_100df99c0("","dimg",0,"Error adding GPT partition 0x%x <%s>",local_204,
                                  local_170 + *(long *)(local_170 + 0x10));
                    if (*(int *)local_170 != -1) {
                      if (*(int *)local_170 != 0) {
                        LOCK();
                        *(int *)local_170 = *(int *)local_170 + -1;
                        local_111 = *(int *)local_170 != 0;
                        UNLOCK();
                        if ((bool)local_111) goto LAB_100b11241;
                      }
                      QArrayData::deallocate(local_170,1,8);
                    }
LAB_100b11241:
                    iVar5 = 0;
                    if (*(int *)local_178 != -1) {
                      if (*(int *)local_178 != 0) {
                        LOCK();
                        *(int *)local_178 = *(int *)local_178 + -1;
                        local_111 = *(int *)local_178 != 0;
                        UNLOCK();
                        iVar5 = 0;
                        if ((bool)local_111) goto LAB_100b11280;
                      }
                      QArrayData::deallocate(local_178,2,8);
                      iVar5 = 0;
                    }
                  }
                }
LAB_100b11280:
                if (*(int *)local_a0.field0_0x0 != -1) {
                  if (*(int *)local_a0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                    local_111 = *(int *)local_a0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_111) goto LAB_100b112bc;
                  }
                  QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
                }
LAB_100b112bc:
                uVar15 = uVar15 + 1;
              } while ((uVar15 < uVar10) && (psVar11 = psVar11 + 0x40, iVar5 != 0));
            }
            goto LAB_100b11495;
          }
          (**(code **)(*param_1 + 0xd0))(&local_158,param_1);
          QString::toUtf8();
          FUN_100df99c0("","dimg",0,"Error reading GPT partition table (0x%x), %s",local_204,
                        local_150 + *(long *)(local_150 + 0x10));
          if (*(int *)local_150 != -1) {
            if (*(int *)local_150 != 0) {
              LOCK();
              *(int *)local_150 = *(int *)local_150 + -1;
              local_111 = *(int *)local_150 != 0;
              UNLOCK();
              if ((bool)local_111) goto LAB_100b11459;
            }
            QArrayData::deallocate(local_150,1,8);
          }
LAB_100b11459:
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_111 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_111) goto LAB_100b11495;
            }
            QArrayData::deallocate(local_158,2,8);
          }
          goto LAB_100b11495;
        }
        (**(code **)(*param_1 + 0xd0))(&local_148,param_1);
        QString::toUtf8();
        FUN_100df99c0("","dimg",0,"Error allocating memory for GPT partitions <%s>",
                      local_140 + *(long *)(local_140 + 0x10));
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_111 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_111) goto LAB_100b11376;
          }
          QArrayData::deallocate(local_140,1,8);
        }
LAB_100b11376:
        local_204 = -0x7ffffffe;
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_111 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_111) goto LAB_100b1149d;
          }
          QArrayData::deallocate(local_148,2,8);
        }
      }
      else {
        (**(code **)(*param_1 + 0xd0))(&local_138,param_1);
        QString::toUtf8();
        FUN_100df99c0("","dimg",0,"GPT entries count is too large %u <%s>",uVar10,
                      local_130 + *(long *)(local_130 + 0x10));
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_111 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_111) goto LAB_100b10bad;
          }
          QArrayData::deallocate(local_130,1,8);
        }
LAB_100b10bad:
        local_204 = -0x7fffffea;
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_111 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_111) goto LAB_100b1149d;
          }
          QArrayData::deallocate(local_138,2,8);
        }
      }
    }
LAB_100b1149d:
    if (local_204 < 0) {
      (**(code **)(*param_1 + 0xd0))(&local_1d8,param_1);
      QString::toUtf8();
      FUN_100df99c0("","dimg",0,"Error processing GPT table 0x%x <%s>",local_204,
                    local_1d0 + *(long *)(local_1d0 + 0x10));
      if (*(int *)local_1d0 != -1) {
        if (*(int *)local_1d0 != 0) {
          LOCK();
          *(int *)local_1d0 = *(int *)local_1d0 + -1;
          local_111 = *(int *)local_1d0 != 0;
          UNLOCK();
          if ((bool)local_111) goto LAB_100b1163a;
        }
        QArrayData::deallocate(local_1d0,1,8);
      }
LAB_100b1163a:
      if (*(int *)local_1d8 != -1) {
        if (*(int *)local_1d8 != 0) {
          LOCK();
          *(int *)local_1d8 = *(int *)local_1d8 + -1;
          local_111 = *(int *)local_1d8 != 0;
          UNLOCK();
          if ((bool)local_111) goto LAB_100b11676;
        }
        QArrayData::deallocate(local_1d8,2,8);
      }
    }
    else {
      iVar6 = FUN_100b11d10(param_2,&local_190);
      local_204 = 0;
      if (iVar6 < 0) {
        (**(code **)(*param_1 + 0xd0))(&local_1e8,param_1);
        QString::toUtf8();
        FUN_100df99c0("","dimg",0,"Error at merging partitions 0x%x <%s>",iVar6,
                      local_1e0 + *(long *)(local_1e0 + 0x10));
        if (*(int *)local_1e0 != -1) {
          if (*(int *)local_1e0 != 0) {
            LOCK();
            *(int *)local_1e0 = *(int *)local_1e0 + -1;
            local_111 = *(int *)local_1e0 != 0;
            UNLOCK();
            if ((bool)local_111) goto LAB_100b1155d;
          }
          QArrayData::deallocate(local_1e0,1,8);
        }
LAB_100b1155d:
        local_204 = iVar6;
        if (*(int *)local_1e8 != -1) {
          if (*(int *)local_1e8 != 0) {
            LOCK();
            *(int *)local_1e8 = *(int *)local_1e8 + -1;
            local_111 = *(int *)local_1e8 != 0;
            UNLOCK();
            if ((bool)local_111) goto LAB_100b11676;
          }
          QArrayData::deallocate(local_1e8,2,8);
        }
      }
    }
  }
LAB_100b11676:
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_111 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_111) goto LAB_100b116b2;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_100b116b2:
  FUN_100af8270(&local_190,local_188[0]);
LAB_100b116c5:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_204;
}

