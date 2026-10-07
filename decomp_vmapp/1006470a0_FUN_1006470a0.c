
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1006470a0(long *param_1,long *param_2,undefined8 *param_3)

{
  long *******ppppppplVar1;
  uint *puVar2;
  uint *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *******ppppppplVar7;
  char cVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  int iVar11;
  QString this;
  long *plVar12;
  Data *pDVar13;
  long lVar14;
  long *******ppppppplVar15;
  long lVar16;
  long *plVar17;
  long *******ppppppplVar18;
  undefined8 *puVar19;
  long lVar20;
  QTypedArrayData<unsigned_short> *pQVar21;
  uint uVar22;
  bool bVar23;
  Data *local_138;
  undefined4 local_130;
  Data *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QString local_c0;
  void *local_b8;
  undefined8 *puStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  long lStack_90;
  QTypedArrayData<unsigned_short> *local_80;
  Data *local_78;
  long *******local_70;
  long *******local_68;
  undefined8 local_60;
  QString local_58;
  QString local_50;
  undefined4 local_48 [2];
  Data *local_40;
  bool local_31;
  
  local_60 = 0;
  local_68 = (long *******)0x0;
  local_78 = (Data *)PTR_shared_null_100ba2188;
  local_98 = 0;
  lStack_90 = 0;
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  local_b8 = (void *)0x0;
  puStack_b0 = (undefined8 *)0x0;
  plVar12 = (long *)*param_2;
  local_70 = (long *******)&local_68;
  if ((long *)*param_2 != param_2 + 1) {
    do {
      local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
      if (1 < *(int *)local_c0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
        UNLOCK();
        local_31 = *(int *)local_c0.field0_0x0 != 0;
      }
      uVar22 = *(uint *)(plVar12 + 4);
      if (local_68 == (long *******)0x0) {
LAB_10064719e:
        ppppppplVar18 = (long *******)&local_68;
      }
      else {
        ppppppplVar7 = local_68;
        ppppppplVar15 = (long *******)&local_68;
        do {
          while (ppppppplVar18 = ppppppplVar7,
                *(uint *)(plVar12 + 5) <= *(uint *)(ppppppplVar18 + 4)) {
            ppppppplVar7 = (long *******)*ppppppplVar18;
            ppppppplVar15 = ppppppplVar18;
            if ((long *******)*ppppppplVar18 == (long *******)0x0) goto LAB_100647193;
          }
          ppppppplVar1 = ppppppplVar18 + 1;
          ppppppplVar18 = ppppppplVar15;
          ppppppplVar7 = (long *******)*ppppppplVar1;
        } while ((long *******)*ppppppplVar1 != (long *******)0x0);
LAB_100647193:
        if (((long ********)ppppppplVar18 == &local_68) ||
           (*(uint *)(plVar12 + 5) < *(uint *)(ppppppplVar18 + 4))) goto LAB_10064719e;
      }
      this.field0_0x0 = operator_new(0xe8);
      CHwHddPartition::CHwHddPartition((CHwHddPartition *)this.field0_0x0);
      if ((int)plVar12[5] == -0x80000000) {
        uVar22 = uVar22 ^ 0x80000000;
      }
      local_c8 = (QArrayData *)PTR_shared_null_100ba20d0;
      local_80 = this.field0_0x0;
      FUN_1007d6b20(&local_d0,plVar12 + 0xb);
      QString::toUpper();
      QString::operator=(&local_d0,&local_d8);
      if (*(int *)local_d8.field0_0x0 != -1) {
        if (*(int *)local_d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
          local_31 = *(int *)local_d8.field0_0x0 != 0;
          UNLOCK();
          if (local_31) goto LAB_100647244;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
      }
LAB_100647244:
      uVar10 = QDir::separator();
      QString::QString(&local_58,uVar10);
      QString::section(&local_e0,param_3,&local_58,0xffffffff,0xffffffff,0);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1006472a9;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1006472a9:
      local_f0 = (QArrayData *)QString::fromAscii_helper("s%1",3);
      QString::arg(&local_e8,&local_f0,uVar22,0,10);
      QString::append(&local_c0);
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if (local_31) goto LAB_10064732e;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_10064732e:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if (local_31) goto LAB_100647364;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100647364:
      iVar11 = FUN_100786550(&local_d0,&local_c8);
      if ((-1 < iVar11) && (cVar8 = QString::startsWith(&local_c8,&local_e0,1), cVar8 != '\0')) {
        uVar10 = QDir::separator();
        QString::QString(&local_50,uVar10);
        QString::section(&local_108,param_3,&local_50,0,0xfffffffe,0);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if (local_31) goto LAB_100647401;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_100647401:
        uVar9 = QDir::separator();
        local_100 = local_108;
        if (1 < *(uint *)local_108 + 1) {
          LOCK();
          *(uint *)local_108 = *(uint *)local_108 + 1;
          local_31 = *(uint *)local_108 != 0;
          UNLOCK();
        }
        uVar22 = *(uint *)(local_108 + 4);
        if ((1 < *(uint *)local_108) || ((*(uint *)(local_108 + 8) & 0x7fffffff) < uVar22 + 2)) {
          QString::reallocData((uint)&local_100,SUB41(uVar22 + 2,0));
          uVar22 = *(uint *)(local_100 + 4);
        }
        *(uint *)(local_100 + 4) = uVar22 + 1;
        *(undefined2 *)(local_100 + (long)(int)uVar22 * 2 + *(long *)(local_100 + 0x10)) = uVar9;
        *(undefined2 *)
         (local_100 + (long)(int)*(uint *)(local_100 + 4) * 2 + *(long *)(local_100 + 0x10)) = 0;
        if (1 < *(uint *)local_100 + 1) {
          LOCK();
          *(uint *)local_100 = *(uint *)local_100 + 1;
          local_31 = *(uint *)local_100 != 0;
          UNLOCK();
        }
        local_f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_100;
        QString::append(&local_f8);
        QString::operator=(&local_c0,&local_f8);
        if (*(int *)local_f8.field0_0x0 != -1) {
          if (*(int *)local_f8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
            local_31 = *(int *)local_f8.field0_0x0 != 0;
            UNLOCK();
            if (local_31) goto LAB_1006474fd;
          }
          QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
        }
LAB_1006474fd:
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if (local_31) goto LAB_100647533;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_100647533:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if (local_31) goto LAB_100647570;
          }
          QArrayData::deallocate(local_108,2,8);
        }
      }
LAB_100647570:
      local_110 = (QArrayData *)local_c0.field0_0x0;
      if (1 < *(int *)local_c0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
      }
      CHwHddPartition::setSystemName(this);
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if (local_31) goto LAB_1006475d4;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_1006475d4:
      CHwHddPartition::setSize((longlong)this.field0_0x0);
      uVar22 = (uint)this.field0_0x0;
      CHwHddPartition::setIndex(uVar22);
      iVar11 = FUN_100689860(plVar12 + 5);
      if (iVar11 == 0) {
        CHwHddPartition::setType(uVar22);
        local_120 = (QArrayData *)QString::fromAscii_helper("",0);
        CHwHddPartition::setName(this);
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if (local_31) goto LAB_1006476f0;
          }
          QArrayData::deallocate(local_120,2,8);
        }
      }
      else {
        FUN_100785660(plVar12 + 9);
        CHwHddPartition::setType(uVar22);
        local_118 = (QArrayData *)plVar12[0xf];
        if (1 < *(int *)local_118 + 1U) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + 1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
        }
        CHwHddPartition::setName(this);
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if (local_31) goto LAB_1006476f0;
          }
          QArrayData::deallocate(local_118,2,8);
        }
      }
LAB_1006476f0:
      CHwHddPartition::setIsActive(uVar22);
      if ((long ********)ppppppplVar18 == &local_68) {
        FUN_10064f950(&local_78);
        FUN_100650940(&local_78,&local_80);
        uVar10 = (undefined4)plVar12[5];
        local_138 = local_78;
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 == 0) {
            QListData::detach((int)&local_138);
            lVar20 = (long)*(int *)(local_138 + 8);
            if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_138 + lVar20 * 8) &&
               (lVar14 = *(int *)(local_138 + 0xc) - lVar20,
               lVar14 != 0 && lVar20 <= *(int *)(local_138 + 0xc))) {
              _memcpy(local_138 + lVar20 * 8 + 0x10,
                      local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,lVar14 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + 1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
          }
        }
        local_128 = local_138;
        local_130 = uVar10;
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 == 0) {
            QListData::detach((int)&local_128);
            lVar20 = (long)*(int *)(local_128 + 8);
            if ((local_138 + (long)*(int *)(local_138 + 8) * 8 != local_128 + lVar20 * 8) &&
               (lVar14 = *(int *)(local_128 + 0xc) - lVar20,
               lVar14 != 0 && lVar20 <= *(int *)(local_128 + 0xc))) {
              _memcpy(local_128 + lVar20 * 8 + 0x10,
                      local_138 + (long)*(int *)(local_138 + 8) * 8 + 0x10,lVar14 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + 1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
          }
        }
        local_48[0] = local_130;
        local_40 = local_128;
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 == 0) {
            QListData::detach((int)&local_40);
            lVar20 = (long)*(int *)(local_40 + 8);
            if ((local_128 + (long)*(int *)(local_128 + 8) * 8 != local_40 + lVar20 * 8) &&
               (lVar14 = *(int *)(local_40 + 0xc) - lVar20,
               lVar14 != 0 && lVar20 <= *(int *)(local_40 + 0xc))) {
              _memcpy(local_40 + lVar20 * 8 + 0x10,
                      local_128 + (long)*(int *)(local_128 + 8) * 8 + 0x10,lVar14 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + 1;
            local_31 = *(int *)local_128 != 0;
            UNLOCK();
          }
        }
        local_48[0] = local_130;
        FUN_100650ab0(&local_70,local_48);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            UNLOCK();
            local_31 = *(int *)local_40 != 0;
            if (*(int *)local_40 != 0) goto LAB_1006478c9;
          }
          QListData::dispose(local_40);
        }
LAB_1006478c9:
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            UNLOCK();
            local_31 = *(int *)local_128 != 0;
            if (*(int *)local_128 != 0) goto LAB_1006478f5;
          }
          QListData::dispose(local_128);
        }
LAB_1006478f5:
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            UNLOCK();
            local_31 = *(int *)local_138 != 0;
            if (*(int *)local_138 != 0) goto LAB_100647930;
          }
          QListData::dispose(local_138);
        }
      }
      else {
        FUN_100650940(ppppppplVar18 + 5,&local_80);
      }
LAB_100647930:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          UNLOCK();
          local_31 = *(int *)local_e0 != 0;
          if (*(int *)local_e0 != 0) goto LAB_100647966;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100647966:
      if (*(int *)local_d0.field0_0x0 != -1) {
        if (*(int *)local_d0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
          UNLOCK();
          local_31 = *(int *)local_d0.field0_0x0 != 0;
          if (*(int *)local_d0.field0_0x0 != 0) goto LAB_10064799c;
        }
        QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
      }
LAB_10064799c:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          UNLOCK();
          local_31 = *(int *)local_c8 != 0;
          if (*(int *)local_c8 != 0) goto LAB_1006479d2;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1006479d2:
      if (*(int *)local_c0.field0_0x0 != -1) {
        if (*(int *)local_c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
          UNLOCK();
          local_31 = *(int *)local_c0.field0_0x0 != 0;
          if (*(int *)local_c0.field0_0x0 != 0) goto LAB_100647a0f;
        }
        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
      }
LAB_100647a0f:
      plVar4 = (long *)plVar12[1];
      if ((long *)plVar12[1] == (long *)0x0) {
        do {
          plVar17 = (long *)plVar12[2];
          bVar23 = (long *)*plVar17 != plVar12;
          plVar12 = plVar17;
        } while (bVar23);
      }
      else {
        do {
          plVar17 = plVar4;
          plVar4 = (long *)*plVar17;
        } while ((long *)*plVar17 != (long *)0x0);
      }
      plVar12 = plVar17;
    } while (plVar17 != param_2 + 1);
    ppppppplVar7 = local_68;
    ppppppplVar15 = (long *******)&local_68;
    if (local_68 != (long *******)0x0) {
      do {
        while (ppppppplVar18 = ppppppplVar7, 0x88888887 < *(uint *)(ppppppplVar18 + 4)) {
          ppppppplVar7 = (long *******)*ppppppplVar18;
          ppppppplVar15 = ppppppplVar18;
          if ((long *******)*ppppppplVar18 == (long *******)0x0) goto LAB_100647d2f;
        }
        ppppppplVar1 = ppppppplVar18 + 1;
        ppppppplVar18 = ppppppplVar15;
        ppppppplVar7 = (long *******)*ppppppplVar1;
      } while ((long *******)*ppppppplVar1 != (long *******)0x0);
LAB_100647d2f:
      if (((long ********)ppppppplVar18 != &local_68) && (*(uint *)(ppppppplVar18 + 4) < 0x88888889)
         ) {
        FUN_10064f9e0(param_1,ppppppplVar18 + 5);
        FUN_100650c70(&local_70,ppppppplVar18);
      }
      ppppppplVar7 = local_68;
      ppppppplVar15 = (long *******)&local_68;
      if (local_68 != (long *******)0x0) {
        do {
          while (ppppppplVar18 = ppppppplVar7, *(int *)(ppppppplVar18 + 4) < 0) {
            ppppppplVar7 = (long *******)*ppppppplVar18;
            ppppppplVar15 = ppppppplVar18;
            if ((long *******)*ppppppplVar18 == (long *******)0x0) goto LAB_100647ef7;
          }
          ppppppplVar1 = ppppppplVar18 + 1;
          ppppppplVar18 = ppppppplVar15;
          ppppppplVar7 = (long *******)*ppppppplVar1;
        } while ((long *******)*ppppppplVar1 != (long *******)0x0);
LAB_100647ef7:
        if (((long ********)ppppppplVar18 != &local_68) &&
           (*(uint *)(ppppppplVar18 + 4) < 0x80000001)) {
          FUN_10064f9e0(param_1,ppppppplVar18 + 5);
          FUN_100650c70(&local_70,ppppppplVar18);
        }
      }
    }
  }
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    uVar22 = puVar3[2];
    pDVar13 = (Data *)QListData::detach((int)param_1);
    lVar20 = *param_1;
    lVar14 = (long)*(int *)(lVar20 + 8);
    puVar2 = (uint *)(lVar20 + 0x10 + lVar14 * 8);
    if ((puVar3 + (long)(int)uVar22 * 2 + 4 != puVar2) &&
       (lVar16 = *(int *)(lVar20 + 0xc) - lVar14, lVar16 != 0 && lVar14 <= *(int *)(lVar20 + 0xc)))
    {
      _memcpy(puVar2,puVar3 + (long)(int)uVar22 * 2 + 4,lVar16 * 8);
    }
    if (*(int *)pDVar13 != -1) {
      if (*(int *)pDVar13 != 0) {
        LOCK();
        *(int *)pDVar13 = *(int *)pDVar13 + -1;
        local_31 = *(int *)pDVar13 != 0;
        UNLOCK();
        if (local_31) goto LAB_100647f84;
      }
      QListData::dispose(pDVar13);
    }
  }
LAB_100647f84:
  puVar2 = (uint *)*param_1;
  puVar3 = puVar2 + (long)(int)puVar2[2] * 2 + 4;
  if (1 < *puVar2) {
    pDVar13 = (Data *)QListData::detach((int)param_1);
    lVar20 = *param_1;
    lVar14 = (long)*(int *)(lVar20 + 8);
    puVar2 = (uint *)(lVar20 + 0x10 + lVar14 * 8);
    if ((puVar3 != puVar2) &&
       (lVar16 = *(int *)(lVar20 + 0xc) - lVar14, lVar16 != 0 && lVar14 <= *(int *)(lVar20 + 0xc)))
    {
      _memcpy(puVar2,puVar3,lVar16 * 8);
    }
    if (*(int *)pDVar13 != -1) {
      if (*(int *)pDVar13 != 0) {
        LOCK();
        *(int *)pDVar13 = *(int *)pDVar13 + -1;
        local_31 = *(int *)pDVar13 != 0;
        UNLOCK();
        if (local_31) goto LAB_100647fec;
      }
      QListData::dispose(pDVar13);
    }
  }
LAB_100647fec:
  lVar20 = *param_1;
  iVar11 = *(int *)(lVar20 + 0xc);
  lVar14 = 0;
  if ((long)local_a8 - (long)puStack_b0 != 0) {
    lVar14 = ((long)local_a8 - (long)puStack_b0) * 0x20 + -1;
  }
  if (lVar14 - local_98 == lStack_90) {
    FUN_100650d00(&local_b8);
  }
  lVar14 = puStack_b0[lStack_90 + local_98 >> 8];
  lVar16 = (lStack_90 + local_98 & 0xff) * 0x10;
  *(uint **)(lVar14 + lVar16) = puVar3;
  *(long *)(lVar14 + 8 + lVar16) = lVar20 + 0x10 + (long)iVar11 * 8;
  lVar20 = lStack_90 + 1;
joined_r0x000100648076:
  if (lVar20 != 0) {
    lStack_90 = lVar20 + -1;
    uVar5 = (local_98 - 1) + lVar20;
    lVar14 = (uVar5 & 0xff) * 0x10;
    plVar12 = *(long **)(puStack_b0[uVar5 >> 8] + lVar14);
    plVar4 = *(long **)(puStack_b0[uVar5 >> 8] + 8 + lVar14);
    lVar14 = 0;
    if ((long)local_a8 - (long)puStack_b0 != 0) {
      lVar14 = ((long)local_a8 - (long)puStack_b0) * 0x20 + -1;
    }
    if (0x1ff < ((1 - lVar20) + lVar14) - local_98) {
      operator_delete((void *)local_a8[-1]);
      local_a8 = local_a8 + -1;
    }
    do {
      do {
        lVar20 = lStack_90;
        if (plVar12 == plVar4) goto joined_r0x000100648076;
        pQVar21 = (QTypedArrayData<unsigned_short> *)*plVar12;
        local_80 = pQVar21;
        uVar22 = CHwHddPartition::getIndex();
        plVar12 = plVar12 + 1;
        ppppppplVar7 = local_68;
        ppppppplVar15 = (long *******)&local_68;
      } while (local_68 == (long *******)0x0);
      do {
        while (ppppppplVar18 = ppppppplVar7, uVar22 <= *(uint *)(ppppppplVar18 + 4)) {
          ppppppplVar7 = (long *******)*ppppppplVar18;
          ppppppplVar15 = ppppppplVar18;
          if ((long *******)*ppppppplVar18 == (long *******)0x0) goto LAB_100648153;
        }
        ppppppplVar1 = ppppppplVar18 + 1;
        ppppppplVar18 = ppppppplVar15;
        ppppppplVar7 = (long *******)*ppppppplVar1;
      } while ((long *******)*ppppppplVar1 != (long *******)0x0);
LAB_100648153:
    } while (((long ********)ppppppplVar18 == &local_68) || (uVar22 < *(uint *)(ppppppplVar18 + 4)))
    ;
    pQVar21 = pQVar21 + 0xa8;
    FUN_10064f9e0(pQVar21,ppppppplVar18 + 5);
    FUN_100650c70(&local_70,ppppppplVar18);
    puVar3 = *(uint **)pQVar21;
    if (1 < *puVar3) {
      uVar22 = puVar3[2];
      pDVar13 = (Data *)QListData::detach((int)pQVar21);
      lVar20 = *(long *)pQVar21;
      lVar14 = (long)*(int *)(lVar20 + 8);
      puVar2 = (uint *)(lVar20 + 0x10 + lVar14 * 8);
      if ((puVar3 + (long)(int)uVar22 * 2 + 4 != puVar2) &&
         (lVar16 = *(int *)(lVar20 + 0xc) - lVar14, lVar16 != 0 && lVar14 <= *(int *)(lVar20 + 0xc))
         ) {
        _memcpy(puVar2,puVar3 + (long)(int)uVar22 * 2 + 4,lVar16 * 8);
      }
      if (*(int *)pDVar13 != -1) {
        if (*(int *)pDVar13 != 0) {
          LOCK();
          *(int *)pDVar13 = *(int *)pDVar13 + -1;
          local_31 = *(int *)pDVar13 != 0;
          UNLOCK();
          if (local_31) goto LAB_1006481f2;
        }
        QListData::dispose(pDVar13);
      }
    }
LAB_1006481f2:
    puVar2 = *(uint **)pQVar21;
    puVar3 = puVar2 + (long)(int)puVar2[2] * 2 + 4;
    if (1 < *puVar2) {
      pDVar13 = (Data *)QListData::detach((int)pQVar21);
      lVar20 = *(long *)pQVar21;
      lVar14 = (long)*(int *)(lVar20 + 8);
      puVar2 = (uint *)(lVar20 + 0x10 + lVar14 * 8);
      if ((puVar3 != puVar2) &&
         (lVar16 = *(int *)(lVar20 + 0xc) - lVar14, lVar16 != 0 && lVar14 <= *(int *)(lVar20 + 0xc))
         ) {
        _memcpy(puVar2,puVar3,lVar16 * 8);
      }
      if (*(int *)pDVar13 != -1) {
        if (*(int *)pDVar13 != 0) {
          LOCK();
          *(int *)pDVar13 = *(int *)pDVar13 + -1;
          local_31 = *(int *)pDVar13 != 0;
          UNLOCK();
          if (local_31) goto LAB_100648269;
        }
        QListData::dispose(pDVar13);
      }
    }
LAB_100648269:
    lVar20 = *(long *)pQVar21;
    iVar11 = *(int *)(lVar20 + 0xc);
    lVar14 = 0;
    if ((long)local_a8 - (long)puStack_b0 != 0) {
      lVar14 = ((long)local_a8 - (long)puStack_b0) * 0x20 + -1;
    }
    if (lVar14 - local_98 == lStack_90) {
      FUN_100650d00(&local_b8);
    }
    lVar14 = puStack_b0[lStack_90 + local_98 >> 8];
    lVar16 = (lStack_90 + local_98 & 0xff) * 0x10;
    *(long **)(lVar14 + lVar16) = plVar12;
    *(long **)(lVar14 + 8 + lVar16) = plVar4;
    lStack_90 = lStack_90 + 1;
    lVar14 = 0;
    if ((long)local_a8 - (long)puStack_b0 != 0) {
      lVar14 = ((long)local_a8 - (long)puStack_b0) * 0x20 + -1;
    }
    if (lVar14 - local_98 == lStack_90) {
      FUN_100650d00(&local_b8);
    }
    lVar14 = puStack_b0[local_98 + lStack_90 >> 8];
    lVar16 = (local_98 + lStack_90 & 0xff) * 0x10;
    *(uint **)(lVar14 + lVar16) = puVar3;
    *(long *)(lVar14 + 8 + lVar16) = lVar20 + 0x10 + (long)iVar11 * 8;
    lVar20 = lStack_90 + 1;
    goto joined_r0x000100648076;
  }
  plVar12 = puStack_b0 + (local_98 >> 8);
  lVar20 = 0;
  lVar16 = (long)local_a8 - (long)puStack_b0;
  lVar14 = lVar20;
  if (lVar16 != 0) {
    lVar20 = (local_98 & 0xff) * 0x10 + *plVar12;
    lVar14 = lVar20;
  }
  while (lVar20 != lVar14) {
    lVar20 = lVar20 + 0x10;
    if (lVar20 - *plVar12 == 0x1000) {
      lVar20 = plVar12[1];
      plVar12 = plVar12 + 1;
    }
  }
  lStack_90 = 0;
  puVar19 = puStack_b0;
  puVar6 = local_a8;
  while (uVar5 = lVar16 >> 3, puStack_b0 = puVar19, local_a8 = puVar6, 2 < uVar5) {
    operator_delete((void *)*puVar19);
    puVar19 = puStack_b0 + 1;
    puVar6 = local_a8;
    lVar16 = (long)local_a8 - (long)puVar19;
  }
  if (uVar5 == 2) {
    local_98 = 0x100;
  }
  else if (uVar5 == 1) {
    local_98 = 0x80;
  }
  if (puVar19 != puVar6) {
    do {
      operator_delete((void *)*puVar19);
      puVar19 = puVar19 + 1;
    } while (puVar6 != puVar19);
    if (local_a8 != puStack_b0) {
      local_a8 = (undefined8 *)
                 ((~((long)local_a8 + (-8 - (long)puStack_b0)) & 0xfffffffffffffff8U) +
                 (long)local_a8);
    }
  }
  if (local_b8 != (void *)0x0) {
    operator_delete(local_b8);
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_31) goto LAB_100648663;
    }
    QListData::dispose(local_78);
  }
LAB_100648663:
  FUN_100650000(&local_70,local_68);
  return 0;
}

