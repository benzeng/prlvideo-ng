
long FUN_1004de880(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  QArrayData *pQVar2;
  ulong uVar3;
  QArrayData *pQVar4;
  bool bVar5;
  QArrayData *pQVar6;
  char cVar7;
  char cVar8;
  short sVar9;
  short *psVar10;
  undefined8 uVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  QArrayData *pQVar16;
  long *plVar17;
  QArrayData *pQVar18;
  QArrayData *pQVar19;
  QArrayData *pQVar20;
  long local_130;
  QString local_d8;
  QArrayData *local_d0;
  undefined1 local_c8 [24];
  QArrayData *local_b0;
  QArrayData *local_a8;
  int local_9c;
  long *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  uint local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_c8._8_4_ = (int)PTR_shared_null_100ba20d0;
  local_c8._0_8_ = PTR_shared_null_100ba20d0;
  local_c8._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  local_130 = 0;
  while (cVar7 = (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                           (*(long **)(param_1 + 0x20),local_c8), cVar7 != '\0') {
    if (param_3 < 0x3a) goto LAB_1004df199;
    QString::normalized(&local_d0,local_c8 + 8,1,0);
    if ((*(char *)(param_1 + 0x18) == '\0') ||
       (psVar10 = (short *)QString::utf16(), *psVar10 != 0x2e)) {
LAB_1004de950:
      local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_d0;
      if (1 < *(uint *)local_d0 + 1) {
        LOCK();
        *(uint *)local_d0 = *(uint *)local_d0 + 1;
        local_31 = *(uint *)local_d0 != 0;
        UNLOCK();
      }
      *(undefined2 *)(param_2 + 7) = 0;
      param_2[6] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      local_40 = (QArrayData *)local_c8._0_8_;
      if (1 < *(int *)local_c8._0_8_ + 1U) {
        LOCK();
        *(int *)local_c8._0_8_ = *(int *)local_c8._0_8_ + 1;
        local_31 = *(int *)local_c8._0_8_ != 0;
        UNLOCK();
      }
      if (*(char *)(param_1 + 0x1b) == '\0') {
        cVar7 = '\0';
      }
      else {
        cVar7 = FUN_1004f1030(&local_40);
      }
      FUN_1004e2e80(&local_90,&local_40);
      FUN_1004e3fe0(&local_90);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004dea3b;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_1004dea3b:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004dea74;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1004dea74:
      *(uint *)(param_2 + 6) = local_48;
      bVar5 = true;
      if ((*(char *)(param_1 + 0x1a) == '\0') || ((local_48 & 0x400) == 0)) {
        plVar17 = (long *)0x0;
      }
      else {
        FUN_100504090(&local_98,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),&local_40);
        plVar1 = local_98;
        bVar5 = true;
        plVar17 = (long *)0x0;
        if (local_98 != (long *)0x0) {
          LOCK();
          *(int *)(local_98 + 1) = (int)local_98[1] + 1;
          UNLOCK();
          if (local_98 != (long *)0x0) {
            LOCK();
            plVar17 = local_98 + 1;
            lVar13 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)(*local_98 + 0x10))();
            }
          }
          if ((cVar7 == '\0') && (lVar13 = plVar1[2], lVar13 != 0)) {
            QString::operator=(&local_d8,(QString *)(lVar13 + 0x18));
          }
          bVar5 = false;
          plVar17 = plVar1;
        }
      }
      cVar7 = *(char *)(param_1 + 0x19);
      lVar13 = 0x3a;
      if (cVar7 != '\0') {
        lVar13 = 100;
      }
      uVar3 = lVar13 + -2 + (long)(int)*(uint *)(local_d8.field0_0x0 + 4) * 2;
      uVar14 = 0;
      if (uVar3 <= param_3) {
        if ((bVar5) || (plVar17[2] == 0)) {
          uVar15 = *(uint *)(param_2 + 6);
          if ((uVar15 & 0x400) == 0) {
            param_2[4] = local_50;
            local_a8 = (QArrayData *)QString::fromAscii_helper(".lnk",4);
            cVar8 = QString::endsWith(&local_40,&local_a8,0);
            if (cVar8 == '\0') {
              if (*(int *)local_a8 != -1) {
                if (*(int *)local_a8 != 0) {
                  LOCK();
                  *(int *)local_a8 = *(int *)local_a8 + -1;
                  local_31 = *(int *)local_a8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1004ded4c;
                }
                QArrayData::deallocate(local_a8,2,8);
              }
            }
            else {
              cVar8 = FUN_1004f6bd0(&local_40,&local_9c);
              if (*(int *)local_a8 != -1) {
                if (*(int *)local_a8 != 0) {
                  LOCK();
                  *(int *)local_a8 = *(int *)local_a8 + -1;
                  local_31 = *(int *)local_a8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1004ded3c;
                }
                QArrayData::deallocate(local_a8,2,8);
              }
LAB_1004ded3c:
              if (cVar8 != '\0') {
                param_2[4] = (long)local_9c;
              }
            }
LAB_1004ded4c:
            param_2[3] = local_60;
            *param_2 = local_78;
            param_2[1] = local_68;
            param_2[2] = local_70;
          }
          else {
            *(uint *)(param_2 + 6) = uVar15 & 0xffffffef;
          }
        }
        else {
          *(undefined2 *)(param_2 + 7) = 0;
          param_2[6] = 0;
          param_2[5] = 0;
          param_2[4] = 0;
          param_2[3] = 0;
          param_2[2] = 0;
          param_2[1] = 0;
          *param_2 = 0;
          uVar11 = (**(code **)(*(long *)plVar17[2] + 0x10))();
          param_2[4] = uVar11;
          (**(code **)(*(long *)plVar17[2] + 0x28))((long *)plVar17[2],param_2 + 6);
          (**(code **)(*(long *)plVar17[2] + 0x20))
                    ((long *)plVar17[2],param_2,param_2 + 1,param_2 + 2);
          param_2[3] = param_2[2];
        }
        param_2[5] = (ulong)(*(int *)(param_2 + 4) + 0x1ffU & 0xfffffe00);
        if ((1 < *(uint *)local_d8.field0_0x0) || (*(long *)(local_d8.field0_0x0 + 0x10) != 0x18)) {
          QString::reallocData
                    ((uint)&local_d8,(bool)((char)*(uint *)(local_d8.field0_0x0 + 4) + '\x01'));
        }
        uVar14 = (ulong)(int)*(uint *)(local_d8.field0_0x0 + 4);
        if ((uVar14 & 0x7fffffffffffffff) != 0) {
          pQVar18 = (QArrayData *)(local_d8.field0_0x0 + *(long *)(local_d8.field0_0x0 + 0x10));
          pQVar2 = pQVar18 + uVar14 * 2;
          pQVar16 = (QArrayData *)
                    (local_d8.field0_0x0 + *(long *)(local_d8.field0_0x0 + 0x10) + uVar14 * 2);
          do {
            if (*(short *)pQVar18 == 0x2f) {
              pQVar18 = pQVar18 + 2;
            }
            else {
              pQVar20 = pQVar2;
              pQVar19 = pQVar18;
              if (pQVar18 != pQVar2) {
                do {
                  pQVar19 = pQVar19 + 2;
                  pQVar20 = pQVar2;
                  if (pQVar16 == pQVar19) break;
                  pQVar20 = pQVar19;
                } while (*(short *)pQVar19 != 0x2f);
              }
              if ((long)pQVar20 - (long)pQVar18 != 0) {
                sVar9 = FUN_100541f30(*(short *)pQVar18);
                *(short *)pQVar18 = sVar9;
                pQVar6 = pQVar18 + 2;
                pQVar19 = pQVar18;
                while (pQVar4 = pQVar6, pQVar4 != pQVar20) {
                  sVar9 = FUN_100541f30(*(short *)(pQVar19 + 2));
                  *(short *)(pQVar19 + 2) = sVar9;
                  pQVar6 = pQVar19 + 4;
                  pQVar19 = pQVar4;
                }
                if (*(short *)(pQVar20 + -2) == 0x2e) {
                  if ((2 < (ulong)((long)pQVar20 - (long)pQVar18 >> 1)) ||
                     (sVar9 = *(short *)pQVar18, pQVar18 = pQVar20, sVar9 != 0x2e)) {
                    *(short *)(pQVar20 + -2) = -0xfd7;
                    pQVar18 = pQVar20;
                  }
                }
                else {
                  pQVar18 = pQVar20;
                  if (*(short *)(pQVar20 + -2) == 0x20) {
                    *(short *)(pQVar20 + -2) = -0xfd8;
                  }
                }
              }
            }
          } while (pQVar18 != pQVar2);
        }
        uVar14 = uVar3;
        if (cVar7 == '\0') {
          *(uint *)((long)param_2 + 0x34) = *(uint *)(local_d8.field0_0x0 + 4) * 2;
          pvVar12 = (void *)QString::utf16();
          _memcpy(param_2 + 7,pvVar12,(ulong)*(uint *)((long)param_2 + 0x34));
        }
        else {
          *(undefined2 *)(param_2 + 0xc) = 0;
          *(undefined4 *)((long)param_2 + 0x5c) = 0;
          *(undefined8 *)((long)param_2 + 0x54) = 0;
          *(undefined8 *)((long)param_2 + 0x4c) = 0;
          *(undefined8 *)((long)param_2 + 0x44) = 0;
          *(undefined8 *)((long)param_2 + 0x3c) = 0;
          *(undefined8 *)((long)param_2 + 0x34) = 0;
          *(undefined4 *)(param_2 + 7) = 100;
          *(uint *)((long)param_2 + 0x56) = *(uint *)(local_d8.field0_0x0 + 4) * 2;
          pvVar12 = (void *)QString::utf16();
          _memcpy((void *)((long)param_2 + 0x62),pvVar12,(ulong)*(uint *)((long)param_2 + 0x56));
          if ((*(char *)(param_1 + 0x19) != '\0') &&
             (cVar7 = FUN_1004f4ad0(&local_d8), cVar7 == '\0')) {
            FUN_1004f5140(&local_b0,&local_d8);
            *(short *)((long)param_2 + 0x3c) = *(short *)(local_b0 + 4) * 2;
            pvVar12 = (void *)QString::utf16();
            _memcpy((void *)((long)param_2 + 0x3e),pvVar12,(ulong)*(ushort *)((long)param_2 + 0x3c))
            ;
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004df09a;
              }
              QArrayData::deallocate(local_b0,2,8);
            }
          }
        }
      }
LAB_1004df09a:
      if (!bVar5) {
        LOCK();
        plVar1 = plVar17 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)(*plVar17 + 0x10))();
        }
      }
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004df0ed;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1004df0ed:
      if (*(int *)local_d8.field0_0x0 != -1) {
        if (*(int *)local_d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
          local_31 = *(int *)local_d8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004df123;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
      }
LAB_1004df123:
      uVar15 = 2;
      if (uVar14 != 0) {
        param_2 = (undefined8 *)((long)param_2 + uVar14);
        local_130 = local_130 + uVar14;
        param_3 = param_3 - uVar14;
        uVar15 = 0;
      }
    }
    else {
      uVar15 = 4;
      if ((psVar10[1] != 0) && ((psVar10[1] != 0x2e || (psVar10[2] != 0)))) goto LAB_1004de950;
    }
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004df172;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1004df172:
    if ((uVar15 | 4) != 4) goto LAB_1004df199;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
LAB_1004df199:
  if (*(int *)local_c8._8_8_ != -1) {
    if (*(int *)local_c8._8_8_ != 0) {
      LOCK();
      *(int *)local_c8._8_8_ = *(int *)local_c8._8_8_ + -1;
      local_31 = *(int *)local_c8._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004df1cf;
    }
    QArrayData::deallocate((QArrayData *)local_c8._8_8_,2,8);
  }
LAB_1004df1cf:
  if (*(int *)local_c8._0_8_ != -1) {
    if (*(int *)local_c8._0_8_ != 0) {
      LOCK();
      *(int *)local_c8._0_8_ = *(int *)local_c8._0_8_ + -1;
      UNLOCK();
      if (*(int *)local_c8._0_8_ != 0) {
        return local_130;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_c8._0_8_,2,8);
  }
  return local_130;
}

