
undefined8 * FUN_100336250(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  Data *pDVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  QMapNodeBase *pQVar11;
  ulong *puVar12;
  QMapNodeBase *pQVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  undefined8 *puVar17;
  uint *puVar18;
  long lVar19;
  uint *puVar20;
  int extraout_EDX;
  int extraout_var;
  long lVar21;
  Data *pDVar22;
  uint uVar23;
  undefined8 uVar24;
  uint *puVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  bool bVar34;
  double dVar35;
  undefined1 auVar36 [16];
  char *in_stack_fffffffffffffd98;
  ulong local_208;
  ulong local_200;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  QArrayData *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  uint local_198;
  Data *local_168;
  Data *local_160;
  Data *local_158;
  undefined4 local_150;
  QArrayData *local_148 [5];
  Data *local_120;
  Data *local_118;
  Data *local_110;
  uint local_108;
  Data *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0 [3];
  Data *local_d8;
  Data *local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  QMapNodeBase *local_98;
  undefined1 local_90 [16];
  Data *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  QVariant local_50;
  QVariant local_40;
  
  uVar24 = 0;
  FUN_100181fb0(local_90,0);
  if ((*(long *)(param_2 + 0x10) != 0) && (uVar24 = 0, *(int *)(*(long *)(param_2 + 0x10) + 4) != 0)
     ) {
    uVar24 = *(undefined8 *)(param_2 + 0x18);
  }
  plVar10 = (long *)FUN_100319950(uVar24);
  pQVar11 = (QMapNodeBase *)*plVar10;
  if (*(int *)pQVar11 == 0) {
    pQVar11 = (QMapNodeBase *)QMapDataBase::createData();
    local_98 = pQVar11;
    if (*(long *)(*plVar10 + 0x10) != 0) {
      puVar12 = (ulong *)FUN_1000340b0(*(long *)(*plVar10 + 0x10),pQVar11);
      *(ulong **)(pQVar11 + 0x10) = puVar12;
      *puVar12 = *puVar12 & 3 | (ulong)(pQVar11 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else {
    local_98 = pQVar11;
    if (*(int *)pQVar11 != -1) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + 1;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,*(int *)pQVar11 != 0);
      pQVar11 = (QMapNodeBase *)*plVar10;
      local_98 = pQVar11;
    }
  }
  if (*(int *)pQVar11 == 0) {
    pQVar13 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(pQVar11 + 0x10) != 0) {
      puVar12 = (ulong *)FUN_1000340b0(*(long *)(pQVar11 + 0x10),pQVar13);
      *(ulong **)(pQVar13 + 0x10) = puVar12;
      *puVar12 = *puVar12 & 3 | (ulong)(pQVar13 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else {
    pQVar13 = pQVar11;
    if (*(int *)pQVar11 != -1) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + 1;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,*(int *)pQVar11 != 0);
    }
  }
  if (*(long *)(pQVar13 + 0x10) != 0) {
    pQVar11 = *(QMapNodeBase **)(pQVar13 + 0x20);
    while (pQVar11 != pQVar13 + 8) {
      if ((((*(long *)(pQVar11 + 0x20) != 0) && (*(int *)(*(long *)(pQVar11 + 0x20) + 4) != 0)) &&
          (lVar33 = *(long *)(pQVar11 + 0x28), lVar33 != 0)) &&
         (iVar5 = FUN_100325aa0(lVar33), iVar5 != 0)) {
        plVar10 = (long *)FUN_100325f60(lVar33);
        if (2 < DAT_10230ffd0) {
          uVar6 = FUN_100323e20(lVar33);
          uVar7 = FUN_100325aa0(lVar33);
          in_stack_fffffffffffffd98 = "n/a";
          if (plVar10 != (long *)0x0) {
            (**(code **)*plVar10)(plVar10);
            in_stack_fffffffffffffd98 = (char *)QMetaObject::className();
          }
          FUN_100df99c0("GUI_DDLL","prl_client_app",3," DYN RES LOGIC FOR %d in MODE %d is %s",uVar6
                        ,uVar7,in_stack_fffffffffffffd98);
        }
        uVar14 = (**(code **)(*plVar10 + 0x68))(plVar10);
        uVar24 = 0;
        if ((*(long *)(param_2 + 0x10) != 0) &&
           (uVar24 = 0, *(int *)(*(long *)(param_2 + 0x10) + 4) != 0)) {
          uVar24 = *(undefined8 *)(param_2 + 0x18);
        }
        uVar24 = FUN_100319390(uVar24);
        local_a0 = FUN_100120d20(uVar24);
        iVar5 = (int)uVar14;
        iVar29 = (extraout_EDX + 1) - iVar5;
        iVar31 = (int)(uVar14 >> 0x20);
        if (iVar29 < (int)local_a0) {
          iVar27 = (extraout_var + 1) - iVar31;
LAB_100336513:
          local_a8 = CONCAT44(iVar27,iVar29);
          local_a8 = QSize::scaled(&local_a8,&local_a0,2);
          iVar28 = (int)((ulong)local_a8 >> 0x20);
          if (2 < DAT_10230ffd0) {
            in_stack_fffffffffffffd98 =
                 (char *)CONCAT44((int)((ulong)in_stack_fffffffffffffd98 >> 0x20),(int)local_a8);
            FUN_100df99c0("GUI_DDLL","prl_client_app",3,
                          "Resolution was adjusted from %ix%i to %ix%i",iVar29,iVar27,
                          in_stack_fffffffffffffd98,iVar28);
            iVar28 = (int)((ulong)local_a8 >> 0x20);
          }
          iVar8 = (int)local_a8 + iVar5 + -1;
          iVar28 = iVar28 + iVar31 + -1;
        }
        else {
          iVar27 = (extraout_var + 1) - iVar31;
          iVar8 = extraout_EDX;
          iVar28 = extraout_var;
          if (iVar27 < (int)((ulong)local_a0 >> 0x20)) goto LAB_100336513;
        }
        local_c0 = 0;
        local_bc = 0;
        local_b8 = -1;
        local_b4 = -1;
        local_b0 = 0;
        lVar21 = *param_3;
        uVar9 = FUN_100323e20();
        lVar16 = *(long *)(*param_3 + 0x10);
        lVar19 = 0;
        if (lVar16 == 0) {
LAB_10033666d:
          lVar26 = *param_3 + 8;
        }
        else {
          do {
            while (lVar26 = lVar16, uVar23 = *(uint *)(lVar26 + 0x18), uVar9 <= uVar23) {
              lVar16 = *(long *)(lVar26 + 8);
              lVar19 = lVar26;
              if (*(long *)(lVar26 + 8) == 0) goto LAB_100336669;
            }
            lVar16 = *(long *)(lVar26 + 0x10);
          } while (*(long *)(lVar26 + 0x10) != 0);
          if (lVar19 == 0) goto LAB_10033666d;
          uVar23 = *(uint *)(lVar19 + 0x18);
          lVar26 = lVar19;
LAB_100336669:
          if (uVar9 < uVar23) goto LAB_10033666d;
        }
        if (lVar21 + 8 == lVar26) {
          iVar27 = 0;
          iVar32 = -1;
          iVar30 = -1;
          iVar29 = 0;
        }
        else {
          uVar9 = FUN_100323e20(lVar33);
          local_68 = 0;
          uStack_60 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_58 = 0;
          lVar21 = *(long *)(*param_3 + 0x10);
          lVar16 = 0;
          if (*(long *)(*param_3 + 0x10) == 0) {
LAB_1003366fd:
            lVar19 = 0;
          }
          else {
            do {
              while (lVar19 = lVar21, uVar23 = *(uint *)(lVar19 + 0x18), uVar9 <= uVar23) {
                lVar21 = *(long *)(lVar19 + 8);
                lVar16 = lVar19;
                if (*(long *)(lVar19 + 8) == 0) goto LAB_1003366f9;
              }
              lVar21 = *(long *)(lVar19 + 0x10);
            } while (*(long *)(lVar19 + 0x10) != 0);
            if (lVar16 == 0) goto LAB_1003366fd;
            uVar23 = *(uint *)(lVar16 + 0x18);
            lVar19 = lVar16;
LAB_1003366f9:
            if (uVar9 < uVar23) goto LAB_1003366fd;
          }
          piVar15 = (int *)(lVar19 + 0x1c);
          if (lVar19 == 0) {
            piVar15 = (int *)&local_78;
          }
          local_c0 = piVar15[5];
          local_bc = piVar15[6];
          iVar30 = *piVar15 + -1 + local_c0;
          iVar32 = piVar15[1] + -1 + local_bc;
          local_b8 = iVar30;
          local_b4 = iVar32;
          iVar29 = local_c0;
          iVar27 = local_bc;
        }
        uVar6 = (undefined4)((ulong)in_stack_fffffffffffffd98 >> 0x20);
        uVar9 = *(uint *)(param_2 + 0x24);
        if ((uVar9 & 2) != 0) {
          iVar8 = iVar8 + (1 - iVar5);
          iVar28 = iVar28 + (1 - iVar31);
          iVar30 = iVar29 + -1 + iVar8;
          iVar32 = iVar27 + -1 + iVar28;
          local_b8 = iVar30;
          local_b4 = iVar32;
          if (2 < DAT_10230ffd0) {
            uVar7 = FUN_100323e20(lVar33);
            in_stack_fffffffffffffd98 = (char *)CONCAT44(uVar6,iVar28);
            FUN_100df99c0("GUI_DDLL","prl_client_app",3," DISPLAY #%d ADJUSTED SIZE: %dx%d",uVar7,
                          iVar8,in_stack_fffffffffffffd98);
            uVar9 = *(uint *)(param_2 + 0x24);
          }
        }
        uVar6 = (undefined4)((ulong)in_stack_fffffffffffffd98 >> 0x20);
        if ((uVar9 & 1) != 0) {
          iVar30 = (iVar5 - iVar29) + iVar30;
          iVar32 = (iVar31 - iVar27) + iVar32;
          iVar29 = iVar5;
          iVar27 = iVar31;
          local_c0 = iVar5;
          local_bc = iVar31;
          local_b8 = iVar30;
          local_b4 = iVar32;
          if (2 < DAT_10230ffd0) {
            uVar7 = FUN_100323e20(lVar33);
            in_stack_fffffffffffffd98 = (char *)CONCAT44(uVar6,iVar31);
            FUN_100df99c0("GUI_DDLL","prl_client_app",3," DISPLAY #%d ADJUSTED POS: (%d,%d)",uVar7,
                          uVar14 & 0xffffffff,in_stack_fffffffffffffd98);
          }
        }
        if ((iVar29 <= iVar30) && (iVar27 <= iVar32)) {
          local_c8 = (Data *)PTR_shared_null_1021e15e8;
          FUN_10033a070(&local_c8,&local_c0);
          iVar5 = FUN_100323e20(lVar33);
          QString::number((uint)&local_f8,iVar5);
          FUN_10033a220(local_f0,&local_f8,&local_c8,&local_c0);
          if (*(int *)local_f8 != -1) {
            if (*(int *)local_f8 != 0) {
              LOCK();
              *(int *)local_f8 = *(int *)local_f8 + -1;
              UNLOCK();
              local_78 = CONCAT71(local_78._1_7_,*(int *)local_f8 != 0);
              if (*(int *)local_f8 != 0) goto LAB_10033694d;
            }
            QArrayData::deallocate(local_f8,2,8);
          }
LAB_10033694d:
          FUN_100181fc0(local_90,local_f0,0,0);
          pDVar2 = local_d8;
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              UNLOCK();
              local_78 = CONCAT71(local_78._1_7_,*(int *)local_d8 != 0);
              if (*(int *)local_d8 != 0) goto LAB_1003369cf;
            }
            iVar5 = *(int *)(local_d8 + 0xc);
            if (iVar5 != *(int *)(local_d8 + 8)) {
              lVar33 = (long)*(int *)(local_d8 + 8) * 8 + (long)iVar5 * -8;
              pDVar22 = local_d8 + (long)iVar5 * 8 + 8;
              do {
                if (*(void **)pDVar22 != (void *)0x0) {
                  operator_delete(*(void **)pDVar22);
                }
                pDVar22 = pDVar22 + -8;
                lVar33 = lVar33 + 8;
              } while (lVar33 != 0);
            }
            QListData::dispose(pDVar2);
          }
LAB_1003369cf:
          if (*(int *)local_f0[0] != -1) {
            if (*(int *)local_f0[0] != 0) {
              LOCK();
              *(int *)local_f0[0] = *(int *)local_f0[0] + -1;
              UNLOCK();
              local_78 = CONCAT71(local_78._1_7_,*(int *)local_f0[0] != 0);
              if (*(int *)local_f0[0] != 0) goto LAB_100336a05;
            }
            QArrayData::deallocate(local_f0[0],2,8);
          }
LAB_100336a05:
          pDVar2 = local_c8;
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              UNLOCK();
              local_78 = CONCAT71(local_78._1_7_,*(int *)local_c8 != 0);
              if (*(int *)local_c8 != 0) goto LAB_100336a70;
            }
            iVar5 = *(int *)(local_c8 + 0xc);
            if (iVar5 != *(int *)(local_c8 + 8)) {
              lVar33 = (long)*(int *)(local_c8 + 8) * 8 + (long)iVar5 * -8;
              pDVar22 = local_c8 + (long)iVar5 * 8 + 8;
              do {
                if (*(void **)pDVar22 != (void *)0x0) {
                  operator_delete(*(void **)pDVar22);
                }
                pDVar22 = pDVar22 + -8;
                lVar33 = lVar33 + 8;
              } while (lVar33 != 0);
            }
            QListData::dispose(pDVar2);
          }
        }
      }
LAB_100336a70:
      pQVar11 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar13 != -1) {
    if (*(int *)pQVar13 != 0) {
      LOCK();
      *(int *)pQVar13 = *(int *)pQVar13 + -1;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,*(int *)pQVar13 != 0);
      if (*(int *)pQVar13 != 0) goto LAB_100336ad3;
    }
    if (*(long *)(pQVar13 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar13,(int)*(undefined8 *)(pQVar13 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar13);
  }
LAB_100336ad3:
  FUN_1001823e0(local_90);
  local_100 = local_80;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_100);
      lVar33 = (long)*(int *)(local_100 + 8);
      if ((local_80 + (long)*(int *)(local_80 + 8) * 8 != local_100 + lVar33 * 8) &&
         (lVar21 = *(int *)(local_100 + 0xc) - lVar33,
         lVar21 != 0 && lVar33 <= *(int *)(local_100 + 0xc))) {
        _memcpy(local_100 + lVar33 * 8 + 0x10,local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10,
                lVar21 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,*(int *)local_80 != 0);
    }
  }
  local_120 = local_100;
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 == 0) {
      QListData::detach((int)&local_120);
      lVar33 = (long)*(int *)(local_120 + 8);
      if ((local_100 + (long)*(int *)(local_100 + 8) * 8 != local_120 + lVar33 * 8) &&
         (lVar21 = *(int *)(local_120 + 0xc) - lVar33,
         lVar21 != 0 && lVar33 <= *(int *)(local_120 + 0xc))) {
        _memcpy(local_120 + lVar33 * 8 + 0x10,local_100 + (long)*(int *)(local_100 + 8) * 8 + 0x10,
                lVar21 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + 1;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,*(int *)local_100 != 0);
    }
  }
  local_118 = local_120 + (long)*(int *)(local_120 + 8) * 8 + 0x10;
  local_110 = local_120 + (long)*(int *)(local_120 + 0xc) * 8 + 0x10;
  local_108 = 1;
  local_200 = 0;
  local_208._0_4_ = 0;
  iVar5 = (int)local_208;
  if (*(int *)(local_120 + 8) != *(int *)(local_120 + 0xc)) {
    local_208 = 0;
    local_200 = 0;
    do {
      if (local_108 == 0) {
LAB_100336d5a:
        local_118 = local_118 + 8;
        local_108 = 1;
      }
      else {
        QGraphicsItem::sceneBoundingRect();
        uVar14 = QRectF::toAlignedRect();
        uVar24 = 0;
        if ((*(long *)(param_2 + 0x10) != 0) &&
           (uVar24 = 0, *(int *)(*(long *)(param_2 + 0x10) + 4) != 0)) {
          uVar24 = *(undefined8 *)(param_2 + 0x18);
        }
        QGraphicsItem::data((int)&local_50);
        QVariant::toString();
        QVariant::~QVariant(&local_50);
        uVar6 = QString::toUInt((bool *)local_148,0);
        uVar24 = FUN_1003192a0(uVar24,uVar6);
        if (*(int *)local_148[0] != -1) {
          if (*(int *)local_148[0] != 0) {
            LOCK();
            *(int *)local_148[0] = *(int *)local_148[0] + -1;
            UNLOCK();
            local_78 = CONCAT71(local_78._1_7_,*(int *)local_148[0] != 0);
            if (*(int *)local_148[0] != 0) goto LAB_100336cf6;
          }
          QArrayData::deallocate(local_148[0],2,8);
        }
LAB_100336cf6:
        cVar4 = FUN_100325f80(uVar24);
        if (cVar4 == '\0') goto LAB_100336d5a;
        local_208 = uVar14 >> 0x20;
        local_118 = local_118 + 8;
        uVar9 = local_108 ^ 1;
        bVar34 = local_108 == 1;
        local_200 = uVar14;
        local_108 = uVar9;
        iVar5 = (int)(uVar14 >> 0x20);
        if (bVar34) break;
      }
      iVar5 = (int)local_208;
    } while (local_118 != local_110);
  }
  local_208._0_4_ = iVar5;
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,*(int *)local_120 != 0);
      if (*(int *)local_120 != 0) goto LAB_100336db4;
    }
    QListData::dispose(local_120);
  }
LAB_100336db4:
  *param_1 = PTR_shared_null_1021e12f0;
  local_168 = local_100;
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 == 0) {
      QListData::detach((int)&local_168);
      lVar33 = (long)*(int *)(local_168 + 8);
      if ((local_100 + (long)*(int *)(local_100 + 8) * 8 != local_168 + lVar33 * 8) &&
         (lVar21 = *(int *)(local_168 + 0xc) - lVar33,
         lVar21 != 0 && lVar33 <= *(int *)(local_168 + 0xc))) {
        _memcpy(local_168 + lVar33 * 8 + 0x10,local_100 + (long)*(int *)(local_100 + 8) * 8 + 0x10,
                lVar21 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + 1;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,*(int *)local_100 != 0);
    }
  }
  local_160 = local_168 + (long)*(int *)(local_168 + 8) * 8 + 0x10;
  local_158 = local_168 + (long)*(int *)(local_168 + 0xc) * 8 + 0x10;
  if (*(int *)(local_168 + 8) != *(int *)(local_168 + 0xc)) {
    do {
      local_150 = 1;
      QGraphicsItem::sceneBoundingRect();
      auVar36 = QRectF::toAlignedRect();
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_198 = 0;
      QGraphicsItem::data((int)&local_40);
      QVariant::toString();
      QVariant::~QVariant(&local_40);
      uVar9 = QString::toUInt((bool *)&local_1c0,0);
      local_1a8 = CONCAT44(local_1a8._4_4_,uVar9);
      if (*(int *)local_1c0 != -1) {
        if (*(int *)local_1c0 != 0) {
          LOCK();
          *(int *)local_1c0 = *(int *)local_1c0 + -1;
          UNLOCK();
          local_78 = CONCAT71(local_78._1_7_,*(int *)local_1c0 != 0);
          if (*(int *)local_1c0 != 0) goto LAB_100336f39;
        }
        QArrayData::deallocate(local_1c0,2,8);
      }
LAB_100336f39:
      local_1a8 = CONCAT44(auVar36._0_4_ - (int)local_200,(undefined4)local_1a8);
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,auVar36._4_4_ - (int)local_208);
      local_1b8 = CONCAT44((auVar36._12_4_ + 1) - auVar36._4_4_,(auVar36._8_4_ + 1) - auVar36._0_4_)
      ;
      local_1d8 = 0;
      uStack_1d0 = 0;
      lVar33 = *(long *)(local_98 + 0x10);
      lVar21 = 0;
      if (*(long *)(local_98 + 0x10) == 0) {
LAB_100336ff0:
        lVar16 = 0;
      }
      else {
        do {
          while (lVar16 = lVar33, uVar23 = *(uint *)(lVar16 + 0x18), uVar9 <= uVar23) {
            lVar33 = *(long *)(lVar16 + 8);
            lVar21 = lVar16;
            if (*(long *)(lVar16 + 8) == 0) goto LAB_100336feb;
          }
          lVar33 = *(long *)(lVar16 + 0x10);
        } while (*(long *)(lVar16 + 0x10) != 0);
        if (lVar21 == 0) goto LAB_100336ff0;
        uVar23 = *(uint *)(lVar21 + 0x18);
        lVar16 = lVar21;
LAB_100336feb:
        if (uVar9 < uVar23) goto LAB_100336ff0;
      }
      puVar17 = (undefined8 *)(lVar16 + 0x20);
      if (lVar16 == 0) {
        puVar17 = &local_1d8;
      }
      piVar15 = (int *)*puVar17;
      uVar24 = 0;
      if (piVar15 != (int *)0x0) {
        uVar1 = puVar17[1];
        LOCK();
        *piVar15 = *piVar15 + 1;
        UNLOCK();
        local_78 = CONCAT71(local_78._1_7_,*piVar15 != 0);
        uVar24 = 0;
        if (piVar15[1] != 0) {
          uVar24 = uVar1;
        }
      }
      dVar35 = (double)FUN_1003588f0(uVar24);
      uStack_1a0 = CONCAT44((int)dVar35,(undefined4)uStack_1a0);
      if (piVar15 != (int *)0x0) {
        LOCK();
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        local_78 = CONCAT71(local_78._1_7_,*piVar15 != 0);
        if (*piVar15 == 0) {
          operator_delete(piVar15);
        }
      }
      puVar25 = (uint *)*param_1;
      if (1 < *puVar25) {
        FUN_100322820(param_1);
        puVar25 = (uint *)*param_1;
      }
      puVar18 = (uint *)0x0;
      puVar3 = *(uint **)(puVar25 + 4);
      if (*(uint **)(puVar25 + 4) == (uint *)0x0) {
        puVar20 = puVar25 + 2;
LAB_1003370f2:
        puVar18 = (uint *)QMapDataBase::createNode
                                    ((int)puVar25,0x40,(QMapNodeBase *)0x8,SUB81(puVar20,0));
        puVar18[6] = uVar9;
      }
      else {
        do {
          while (puVar20 = puVar3, uVar23 = puVar20[6], uVar23 < uVar9) {
            puVar3 = *(uint **)(puVar20 + 4);
            if (*(uint **)(puVar20 + 4) == (uint *)0x0) {
              if (puVar18 == (uint *)0x0) goto LAB_1003370f2;
              uVar23 = puVar18[6];
              goto LAB_1003370ca;
            }
          }
          puVar18 = puVar20;
          puVar3 = *(uint **)(puVar20 + 2);
        } while (*(uint **)(puVar20 + 2) != (uint *)0x0);
LAB_1003370ca:
        if (uVar9 < uVar23) goto LAB_1003370f2;
      }
      puVar18[0xf] = local_198;
      *(undefined8 *)(puVar18 + 0xd) = uStack_1a0;
      *(undefined8 *)(puVar18 + 0xb) = local_1a8;
      *(undefined8 *)(puVar18 + 9) = uStack_1b0;
      *(undefined8 *)(puVar18 + 7) = local_1b8;
      FUN_10033a130(&local_98,&local_1a8);
      local_160 = local_160 + 8;
    } while (local_160 != local_158);
  }
  local_150 = 1;
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,*(int *)local_168 != 0);
      if (*(int *)local_168 != 0) goto LAB_1003371a6;
    }
    QListData::dispose(local_168);
  }
LAB_1003371a6:
  pQVar11 = local_98;
  pQVar13 = local_98;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 == 0) {
      pQVar13 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(pQVar11 + 0x10) != 0) {
        puVar12 = (ulong *)FUN_1000340b0(*(long *)(pQVar11 + 0x10),pQVar13);
        *(ulong **)(pQVar13 + 0x10) = puVar12;
        *puVar12 = *puVar12 & 3 | (ulong)(pQVar13 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,*(int *)local_98 != 0);
    }
  }
  if (*(long *)(pQVar13 + 0x10) != 0) {
    pQVar11 = *(QMapNodeBase **)(pQVar13 + 0x20);
    while (pQVar11 != pQVar13 + 8) {
      if ((((*(long *)(pQVar11 + 0x20) != 0) && (*(int *)(*(long *)(pQVar11 + 0x20) + 4) != 0)) &&
          (lVar33 = *(long *)(pQVar11 + 0x28), lVar33 != 0)) &&
         (iVar5 = FUN_100325aa0(lVar33), iVar5 != 0)) {
        uVar9 = FUN_100323e20(lVar33);
        dVar35 = (double)FUN_1003588f0(lVar33);
        puVar25 = (uint *)*param_1;
        if (1 < *puVar25) {
          FUN_100322820(param_1);
          puVar25 = (uint *)*param_1;
        }
        puVar18 = (uint *)0x0;
        puVar3 = *(uint **)(puVar25 + 4);
        if (*(uint **)(puVar25 + 4) == (uint *)0x0) {
          puVar20 = puVar25 + 2;
LAB_100337350:
          puVar18 = (uint *)QMapDataBase::createNode
                                      ((int)puVar25,0x40,(QMapNodeBase *)0x8,SUB81(puVar20,0));
          puVar18[6] = uVar9;
          puVar18[9] = 0;
          puVar18[10] = 0;
          puVar18[7] = 0;
          puVar18[8] = 0;
          puVar18[0xb] = uVar9;
          puVar18[0xc] = 0;
          puVar18[0xd] = 0;
        }
        else {
          do {
            while (puVar20 = puVar3, uVar23 = puVar20[6], uVar23 < uVar9) {
              puVar3 = *(uint **)(puVar20 + 4);
              if (*(uint **)(puVar20 + 4) == (uint *)0x0) {
                if (puVar18 == (uint *)0x0) goto LAB_100337350;
                uVar23 = puVar18[6];
                goto LAB_100337315;
              }
            }
            puVar18 = puVar20;
            puVar3 = *(uint **)(puVar20 + 2);
          } while (*(uint **)(puVar20 + 2) != (uint *)0x0);
LAB_100337315:
          if (uVar9 < uVar23) goto LAB_100337350;
          puVar18[9] = 0;
          puVar18[10] = 0;
          puVar18[7] = 0;
          puVar18[8] = 0;
          puVar18[0xb] = uVar9;
          puVar18[0xc] = 0;
          puVar18[0xd] = 0;
        }
        puVar18[0xe] = (int)dVar35;
        puVar18[0xf] = 0;
      }
      pQVar11 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar13 != -1) {
    if (*(int *)pQVar13 != 0) {
      LOCK();
      *(int *)pQVar13 = *(int *)pQVar13 + -1;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,*(int *)pQVar13 != 0);
      if (*(int *)pQVar13 != 0) goto LAB_1003373f7;
    }
    if (*(long *)(pQVar13 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar13,(int)*(undefined8 *)(pQVar13 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar13);
  }
LAB_1003373f7:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,*(int *)local_100 != 0);
      if (*(int *)local_100 != 0) goto LAB_100337423;
    }
    QListData::dispose(local_100);
  }
LAB_100337423:
  pQVar11 = local_98;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,*(int *)local_98 != 0);
      if (*(int *)local_98 != 0) goto LAB_10033746a;
    }
    if (*(long *)(local_98 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar11,(int)*(undefined8 *)(pQVar11 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar11);
  }
LAB_10033746a:
  FUN_10033a460(local_90);
  return param_1;
}

