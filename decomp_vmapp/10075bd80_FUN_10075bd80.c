
void FUN_10075bd80(long param_1,long param_2,long param_3,int *param_4,int *param_5)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong *puVar10;
  QArrayData *pQVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  ushort uVar15;
  ulong uVar16;
  int iVar17;
  bool bVar18;
  QString local_178;
  QArrayData *local_170;
  QString local_168;
  QString local_160;
  QArrayData *local_158;
  QString local_150;
  QString local_148;
  QArrayData *local_140;
  QString local_138;
  QArrayData *local_130;
  QString local_128;
  QArrayData *local_120;
  QString local_118;
  QString local_110;
  QArrayData *local_108;
  QString local_100;
  QString local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QArrayData *local_e0;
  long local_d8;
  undefined1 local_d0 [24];
  uint local_b8;
  uint local_b0;
  ushort local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint local_90;
  ushort local_78;
  undefined8 local_70;
  undefined1 local_45;
  undefined1 local_44 [12];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_d8 = 0;
  bVar18 = *(short *)(param_1 + 0x220) != 0x20;
  uVar8 = 0x88;
  if (!bVar18) {
    uVar8 = 0x48;
  }
  cVar3 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),param_3,&local_d8);
  iVar17 = 0;
  iVar14 = 0;
  if (cVar3 != '\0') {
    iVar17 = 0;
    iVar14 = 0;
    do {
      if ((local_d8 == param_3) ||
         (cVar3 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),local_d8,local_d0,uVar8),
         cVar3 == '\0')) break;
      if (*(short *)(param_1 + 0x220) == 0x20) {
        cVar3 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),local_a0,local_44,0xc);
        if (cVar3 == '\0') {
          FUN_1008e3970("","dbgdump",0,"Failed to read module name using addr=0x%x",local_a0);
        }
        QString::fromRawData((QChar *)&local_e0,(int)local_44);
        QString::toLatin1();
        iVar12 = 0;
        pQVar11 = local_f0 + *(long *)(local_f0 + 0x10);
        if ((pQVar11 != (QArrayData *)0x0) && (*(uint *)(local_f0 + 4) != 0)) {
          lVar13 = 0;
          do {
            if (pQVar11[lVar13] == (QArrayData)0x0) break;
            lVar13 = lVar13 + 1;
          } while ((uint)lVar13 < *(uint *)(local_f0 + 4));
          iVar12 = (int)lVar13;
          if (iVar12 == -1) {
            sVar5 = _strlen((char *)pQVar11);
            iVar12 = (int)sVar5;
          }
        }
        local_e8.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromLatin1_helper((char *)pQVar11,iVar12);
        local_f8.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("prl_pv",6);
        cVar3 = operator==(&local_e8,&local_f8);
        cVar4 = '\x01';
        if (cVar3 == '\0') {
          QString::toLatin1();
          iVar12 = 0;
          pQVar11 = local_108 + *(long *)(local_108 + 0x10);
          if ((pQVar11 != (QArrayData *)0x0) && (*(uint *)(local_108 + 4) != 0)) {
            lVar13 = 0;
            do {
              if (pQVar11[lVar13] == (QArrayData)0x0) break;
              lVar13 = lVar13 + 1;
            } while ((uint)lVar13 < *(uint *)(local_108 + 4));
            iVar12 = (int)lVar13;
            if (iVar12 == -1) {
              sVar5 = _strlen((char *)pQVar11);
              iVar12 = (int)sVar5;
            }
          }
          local_100.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromLatin1_helper((char *)pQVar11,iVar12)
          ;
          local_110.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("prl_tg",6);
          cVar3 = operator==(&local_100,&local_110);
          cVar4 = '\x01';
          if (cVar3 == '\0') {
            QString::toLatin1();
            iVar12 = 0;
            pQVar11 = local_120 + *(long *)(local_120 + 0x10);
            if ((pQVar11 != (QArrayData *)0x0) && (*(uint *)(local_120 + 4) != 0)) {
              lVar13 = 0;
              do {
                if (pQVar11[lVar13] == (QArrayData)0x0) break;
                lVar13 = lVar13 + 1;
              } while ((uint)lVar13 < *(uint *)(local_120 + 4));
              iVar12 = (int)lVar13;
              if (iVar12 == -1) {
                sVar5 = _strlen((char *)pQVar11);
                iVar12 = (int)sVar5;
              }
            }
            local_118.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)
                 QString::fromLatin1_helper((char *)pQVar11,iVar12);
            local_128.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("prl_st",6);
            cVar4 = operator==(&local_118,&local_128);
            if (*(int *)local_128.field0_0x0 != -1) {
              if (*(int *)local_128.field0_0x0 != 0) {
                LOCK();
                *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
                local_45 = *(int *)local_128.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_45) goto LAB_10075c0ef;
              }
              QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
            }
LAB_10075c0ef:
            if (*(int *)local_118.field0_0x0 != -1) {
              if (*(int *)local_118.field0_0x0 != 0) {
                LOCK();
                *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
                local_45 = *(int *)local_118.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_45) goto LAB_10075c125;
              }
              QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
            }
LAB_10075c125:
            if (*(int *)local_120 != -1) {
              if (*(int *)local_120 != 0) {
                LOCK();
                *(int *)local_120 = *(int *)local_120 + -1;
                local_45 = *(int *)local_120 != 0;
                UNLOCK();
                if ((bool)local_45) goto LAB_10075c160;
              }
              QArrayData::deallocate(local_120,1,8);
            }
          }
LAB_10075c160:
          if (*(int *)local_110.field0_0x0 != -1) {
            if (*(int *)local_110.field0_0x0 != 0) {
              LOCK();
              *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
              local_45 = *(int *)local_110.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_45) goto LAB_10075c196;
            }
            QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
          }
LAB_10075c196:
          if (*(int *)local_100.field0_0x0 != -1) {
            if (*(int *)local_100.field0_0x0 != 0) {
              LOCK();
              *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
              local_45 = *(int *)local_100.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_45) goto LAB_10075c1cc;
            }
            QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
          }
LAB_10075c1cc:
          if (*(int *)local_108 != -1) {
            if (*(int *)local_108 != 0) {
              LOCK();
              *(int *)local_108 = *(int *)local_108 + -1;
              local_45 = *(int *)local_108 != 0;
              UNLOCK();
              if ((bool)local_45) goto LAB_10075c210;
            }
            QArrayData::deallocate(local_108,1,8);
          }
        }
LAB_10075c210:
        if (*(int *)local_f8.field0_0x0 != -1) {
          if (*(int *)local_f8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
            local_45 = *(int *)local_f8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_45) goto LAB_10075c246;
          }
          QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
        }
LAB_10075c246:
        if (*(int *)local_e8.field0_0x0 != -1) {
          if (*(int *)local_e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
            local_45 = *(int *)local_e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_45) goto LAB_10075c27c;
          }
          QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
        }
LAB_10075c27c:
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_45 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_45) goto LAB_10075c2b2;
          }
          QArrayData::deallocate(local_f0,1,8);
        }
LAB_10075c2b2:
        if ((cVar4 != '\0') &&
           (lVar13 = (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x90),local_b8)
           , lVar13 != 0)) {
          uVar6 = (ulong)local_b8;
          uVar16 = local_b0 + uVar6;
          uVar9 = 0;
          puVar10 = &DAT_1011bf9a8;
          uVar7 = uVar6;
          if (DAT_1011bf990 != 0) {
            do {
              uVar1 = *puVar10;
              uVar7 = uVar6;
              if ((uVar6 < uVar1) && (uVar2 = puVar10[-1], uVar2 < uVar16)) {
                uVar7 = uVar1;
                if (uVar6 < uVar2) {
                  if (uVar16 <= uVar1) {
                    uVar7 = uVar6;
                    uVar16 = uVar2;
                  }
                }
                else if (uVar16 <= uVar1) goto LAB_10075c399;
              }
              uVar9 = uVar9 + 1;
              puVar10 = puVar10 + 2;
              uVar6 = uVar7;
            } while (uVar9 < DAT_1011bf990);
            if (0x3f < DAT_1011bf990) goto LAB_10075c399;
          }
          FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar7,uVar16);
          uVar6 = (ulong)DAT_1011bf990;
          DAT_1011bf990 = DAT_1011bf990 + 1;
          (&DAT_1011bf9a0)[uVar6 * 2] = uVar7;
          (&DAT_1011bf9a8)[uVar6 * 2] = uVar16;
        }
LAB_10075c399:
        uVar15 = local_a4;
        if (*(int *)local_e0 != -1) {
          pQVar11 = local_e0;
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            iVar12 = *(int *)local_e0;
            UNLOCK();
joined_r0x00010075c93e:
            local_45 = iVar12 != 0;
            if ((bool)local_45) goto LAB_10075c95f;
          }
LAB_10075c950:
          QArrayData::deallocate(pQVar11,2,8);
        }
      }
      else {
        cVar3 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),local_70,local_44,0xc);
        if (cVar3 == '\0') {
          FUN_1008e3970("","dbgdump",0,"Failed to read module name using addr=0x%x",local_a0);
        }
        QString::fromRawData((QChar *)&local_130,(int)local_44);
        QString::toLatin1();
        iVar12 = 0;
        pQVar11 = local_140 + *(long *)(local_140 + 0x10);
        if ((pQVar11 != (QArrayData *)0x0) && (*(uint *)(local_140 + 4) != 0)) {
          lVar13 = 0;
          do {
            if (pQVar11[lVar13] == (QArrayData)0x0) break;
            lVar13 = lVar13 + 1;
          } while ((uint)lVar13 < *(uint *)(local_140 + 4));
          iVar12 = (int)lVar13;
          if (iVar12 == -1) {
            sVar5 = _strlen((char *)pQVar11);
            iVar12 = (int)sVar5;
          }
        }
        local_138.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromLatin1_helper((char *)pQVar11,iVar12);
        local_148.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("prl_pv",6);
        cVar3 = operator==(&local_138,&local_148);
        cVar4 = '\x01';
        if (cVar3 == '\0') {
          QString::toLatin1();
          iVar12 = 0;
          pQVar11 = local_158 + *(long *)(local_158 + 0x10);
          if ((pQVar11 != (QArrayData *)0x0) && (*(uint *)(local_158 + 4) != 0)) {
            lVar13 = 0;
            do {
              if (pQVar11[lVar13] == (QArrayData)0x0) break;
              lVar13 = lVar13 + 1;
            } while ((uint)lVar13 < *(uint *)(local_158 + 4));
            iVar12 = (int)lVar13;
            if (iVar12 == -1) {
              sVar5 = _strlen((char *)pQVar11);
              iVar12 = (int)sVar5;
            }
          }
          local_150.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromLatin1_helper((char *)pQVar11,iVar12)
          ;
          local_160.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("prl_tg",6);
          cVar3 = operator==(&local_150,&local_160);
          cVar4 = '\x01';
          if (cVar3 == '\0') {
            QString::toLatin1();
            iVar12 = 0;
            pQVar11 = local_170 + *(long *)(local_170 + 0x10);
            if ((pQVar11 != (QArrayData *)0x0) && (*(uint *)(local_170 + 4) != 0)) {
              lVar13 = 0;
              do {
                if (pQVar11[lVar13] == (QArrayData)0x0) break;
                lVar13 = lVar13 + 1;
              } while ((uint)lVar13 < *(uint *)(local_170 + 4));
              iVar12 = (int)lVar13;
              if (iVar12 == -1) {
                sVar5 = _strlen((char *)pQVar11);
                iVar12 = (int)sVar5;
              }
            }
            local_168.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)
                 QString::fromLatin1_helper((char *)pQVar11,iVar12);
            local_178.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("prl_st",6);
            cVar4 = operator==(&local_168,&local_178);
            if (*(int *)local_178.field0_0x0 != -1) {
              if (*(int *)local_178.field0_0x0 != 0) {
                LOCK();
                *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
                local_45 = *(int *)local_178.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_45) goto LAB_10075c620;
              }
              QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
            }
LAB_10075c620:
            if (*(int *)local_168.field0_0x0 != -1) {
              if (*(int *)local_168.field0_0x0 != 0) {
                LOCK();
                *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
                local_45 = *(int *)local_168.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_45) goto LAB_10075c656;
              }
              QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
            }
LAB_10075c656:
            if (*(int *)local_170 != -1) {
              if (*(int *)local_170 != 0) {
                LOCK();
                *(int *)local_170 = *(int *)local_170 + -1;
                local_45 = *(int *)local_170 != 0;
                UNLOCK();
                if ((bool)local_45) goto LAB_10075c690;
              }
              QArrayData::deallocate(local_170,1,8);
            }
          }
LAB_10075c690:
          if (*(int *)local_160.field0_0x0 != -1) {
            if (*(int *)local_160.field0_0x0 != 0) {
              LOCK();
              *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
              local_45 = *(int *)local_160.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_45) goto LAB_10075c6c6;
            }
            QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
          }
LAB_10075c6c6:
          if (*(int *)local_150.field0_0x0 != -1) {
            if (*(int *)local_150.field0_0x0 != 0) {
              LOCK();
              *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
              local_45 = *(int *)local_150.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_45) goto LAB_10075c6fc;
            }
            QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
          }
LAB_10075c6fc:
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_45 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_45) goto LAB_10075c740;
            }
            QArrayData::deallocate(local_158,1,8);
          }
        }
LAB_10075c740:
        if (*(int *)local_148.field0_0x0 != -1) {
          if (*(int *)local_148.field0_0x0 != 0) {
            LOCK();
            *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
            local_45 = *(int *)local_148.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_45) goto LAB_10075c776;
          }
          QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
        }
LAB_10075c776:
        if (*(int *)local_138.field0_0x0 != -1) {
          if (*(int *)local_138.field0_0x0 != 0) {
            LOCK();
            *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
            local_45 = *(int *)local_138.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_45) goto LAB_10075c7ac;
          }
          QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
        }
LAB_10075c7ac:
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_45 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_45) goto LAB_10075c7e2;
          }
          QArrayData::deallocate(local_140,1,8);
        }
LAB_10075c7e2:
        if ((cVar4 != '\0') &&
           (lVar13 = (**(code **)(param_2 + 0x20))
                               (param_2,*(undefined8 *)(param_1 + 0x90),CONCAT44(uStack_9c,local_a0)
                               ), lVar13 != 0)) {
          uVar7 = CONCAT44(uStack_9c,local_a0);
          uVar16 = local_90 + uVar7;
          uVar9 = 0;
          puVar10 = &DAT_1011bf9a8;
          uVar6 = uVar7;
          if (DAT_1011bf990 != 0) {
            do {
              uVar1 = *puVar10;
              uVar6 = uVar7;
              if ((uVar7 < uVar1) && (uVar2 = puVar10[-1], uVar2 < uVar16)) {
                uVar6 = uVar1;
                if (uVar7 < uVar2) {
                  if (uVar16 <= uVar1) {
                    uVar6 = uVar7;
                    uVar16 = uVar2;
                  }
                }
                else if (uVar16 <= uVar1) goto LAB_10075c8c9;
              }
              uVar9 = uVar9 + 1;
              puVar10 = puVar10 + 2;
              uVar7 = uVar6;
            } while (uVar9 < DAT_1011bf990);
            if (0x3f < DAT_1011bf990) goto LAB_10075c8c9;
          }
          FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar6,uVar16);
          uVar7 = (ulong)DAT_1011bf990;
          DAT_1011bf990 = DAT_1011bf990 + 1;
          (&DAT_1011bf9a0)[uVar7 * 2] = uVar6;
          (&DAT_1011bf9a8)[uVar7 * 2] = uVar16;
        }
LAB_10075c8c9:
        uVar15 = local_78;
        if (*(int *)local_130 != -1) {
          pQVar11 = local_130;
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            iVar12 = *(int *)local_130;
            UNLOCK();
            goto joined_r0x00010075c93e;
          }
          goto LAB_10075c950;
        }
      }
LAB_10075c95f:
      iVar17 = iVar17 + 1;
      iVar14 = iVar14 + (uVar15 + 9 & 0x1fff8);
      cVar3 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),local_d8,&local_d8,
                            bVar18 * '\x04' + '\x04');
    } while (cVar3 != '\0');
  }
  *param_4 = iVar17;
  *param_5 = iVar14;
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

