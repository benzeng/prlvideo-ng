
void FUN_1000b9d30(long *param_1,int param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  QStringList *pQVar8;
  bool bVar9;
  ulong uVar10;
  long *plVar11;
  QString *pQVar12;
  byte bVar13;
  ulong uVar14;
  QTypedArrayData<unsigned_short> *pQVar15;
  int iVar16;
  long *plVar17;
  QWidget *pQVar18;
  int local_14c;
  long *local_148;
  undefined1 local_138 [8];
  QArrayData *local_130;
  QArrayData *local_128;
  QString local_120;
  QString local_118;
  QString local_110;
  QString local_108;
  undefined *local_100;
  undefined8 local_f8;
  QArrayData *local_f0;
  undefined4 local_e8;
  undefined *local_e0;
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  QFileInfo local_a0 [8];
  QArrayData *local_98;
  QArrayData *local_90;
  undefined1 local_88 [24];
  QString local_70;
  QString local_68;
  char local_59;
  void *local_58;
  ulong uStack_50;
  long local_48;
  QString local_40;
  undefined1 local_31;
  
  if (param_2 != 0) {
    return;
  }
  uVar5 = FUN_100152280();
  lVar6 = FUN_1001548f0(uVar5,param_1 + 2);
  if (lVar6 == 0) {
    return;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  pvVar7 = (void *)0x0;
  iVar16 = *(int *)(*param_4 + 0xc) - *(int *)(*param_4 + 8);
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  if (iVar16 != 0) {
    if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar14 = (ulong)iVar16;
    uVar10 = uVar14 - 1 >> 6;
    pvVar7 = operator_new(uVar10 * 8 + 8);
    local_48 = uVar10 + 1;
    uVar10 = uVar14 >> 6;
    local_58 = pvVar7;
    uStack_50 = uVar14;
    ___bzero(pvVar7,uVar10 * 8);
    if (uVar10 << 6 != uVar14) {
      puVar1 = (ulong *)((long)pvVar7 + uVar10 * 8);
      *puVar1 = *puVar1 & ~(0xffffffffffffffffU >> (0x40U - (char)iVar16 & 0x3f));
    }
  }
  local_59 = '\x01';
  lVar2 = *param_4;
  iVar16 = *(int *)(lVar2 + 8);
  bVar3 = true;
  if (iVar16 != *(int *)(lVar2 + 0xc)) {
    plVar11 = (long *)(lVar2 + 0x10 + (long)iVar16 * 8);
    bVar9 = true;
    uVar10 = 0;
    do {
      uVar14 = 1L << ((byte)uVar10 & 0x3f);
      puVar1 = (ulong *)((long)pvVar7 + (uVar10 >> 6) * 8);
      *puVar1 = *puVar1 | uVar14;
      lVar2 = *(long *)(*plVar11 + 8);
      if (*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0xc)) {
        pQVar12 = (QString *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
        do {
          local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
          local_70.field0_0x0 = pQVar12->field0_0x0;
          if (1 < *(int *)local_70.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
          }
          lVar2 = *param_3;
          bVar13 = 1;
          if (*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0xc)) {
            plVar17 = (long *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
            do {
              cVar4 = operator==((QString *)*plVar17,&local_70);
              if (cVar4 != '\0') {
                QString::operator=(&local_68,(QString *)(*plVar17 + 8));
                iVar16 = *(int *)(*plVar17 + 0x10);
                bVar13 = 0;
                break;
              }
              plVar17 = plVar17 + 1;
            } while (plVar17 != (long *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 0xc) * 8));
          }
          if (*(int *)local_70.field0_0x0 != -1) {
            if (*(int *)local_70.field0_0x0 != 0) {
              LOCK();
              *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
              local_31 = *(int *)local_70.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000b9f88;
            }
            QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
          }
LAB_1000b9f88:
          if (!(bool)(bVar13 | iVar16 == 0)) {
            if (bVar9) {
              QString::operator=(&local_40,pQVar12);
            }
            puVar1 = (ulong *)((long)local_58 + (uVar10 >> 6) * 8);
            *puVar1 = *puVar1 & ~uVar14;
            uVar5 = FUN_10018c280(lVar6);
            uVar5 = FUN_100319c30(uVar5);
            local_88._16_8_ = pQVar12->field0_0x0;
            if (1 < *(int *)local_88._16_8_ + 1U) {
              LOCK();
              *(int *)local_88._16_8_ = *(int *)local_88._16_8_ + 1;
              local_31 = *(int *)local_88._16_8_ != 0;
              UNLOCK();
            }
            FUN_10032fe90(uVar5,local_88 + 0x10,&local_59);
            if (*(int *)local_88._16_8_ != -1) {
              if (*(int *)local_88._16_8_ != 0) {
                LOCK();
                *(int *)local_88._16_8_ = *(int *)local_88._16_8_ + -1;
                local_31 = *(int *)local_88._16_8_ != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000ba027;
              }
              QArrayData::deallocate((QArrayData *)local_88._16_8_,2,8);
            }
LAB_1000ba027:
            if (local_59 == '\0') {
              local_59 = '\0';
            }
            bVar9 = false;
          }
          if (*(int *)local_68.field0_0x0 != -1) {
            if (*(int *)local_68.field0_0x0 != 0) {
              LOCK();
              *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
              local_31 = *(int *)local_68.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000ba063;
            }
            QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
          }
LAB_1000ba063:
          pQVar12 = pQVar12 + 1;
        } while (pQVar12 !=
                 (QString *)
                 (*(long *)(*plVar11 + 8) + 0x10 + (long)*(int *)(*(long *)(*plVar11 + 8) + 0xc) * 8
                 ));
      }
      plVar11 = plVar11 + 1;
      if (plVar11 == (long *)(*param_4 + 0x10 + (long)*(int *)(*param_4 + 0xc) * 8))
      goto code_r0x0001000ba0a0;
      uVar10 = uVar10 + 1;
      pvVar7 = local_58;
    } while( true );
  }
  goto LAB_1000ba296;
code_r0x0001000ba0a0:
  bVar3 = true;
  if (bVar9) goto LAB_1000ba296;
  pQVar18 = (QWidget *)0x3bca;
  if (local_59 != '\0') {
    pQVar18 = (QWidget *)0x3bcb;
  }
  iVar16 = CMessageManager::instance();
  pQVar8 = (QStringList *)FUN_1000b6b00(param_1[0x16]);
  local_88._8_8_ = PTR_shared_null_1021e15e8;
  local_88._0_8_ = PTR_shared_null_1021e15e8;
  FUN_10018f860(lVar6);
  EnumUtils::OsTypeToString((uint)&local_90);
  FUN_1000341d0(local_88,&local_90);
  QFileInfo::QFileInfo(local_a0,&local_40);
  QFileInfo::fileName();
  FUN_1000341d0(local_88,&local_98);
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  local_a8 = 1;
  iVar16 = CMessageManager::showMessageBox
                     (iVar16,pQVar18,pQVar8,(QStringList *)(local_88 + 8),(CSlotInfo *)local_88,
                      SUB81(&local_d8,0));
  QVariant::~QVariant((QVariant *)&local_b8);
  if (local_d8 != (int *)0x0) {
    LOCK();
    *local_d8 = *local_d8 + -1;
    local_31 = *local_d8 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_d8 != (int *)0x0)) {
      operator_delete(local_d8);
    }
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ba221;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1000ba221:
  QFileInfo::~QFileInfo(local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ba263;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1000ba263:
  FUN_100039a80(local_88);
  FUN_100039a80(local_88 + 8);
  if (iVar16 == 1) {
    FUN_100a4a370(lVar6,local_59 == '\0');
  }
  else {
    bVar3 = false;
  }
LAB_1000ba296:
  local_e0 = PTR_shared_null_1021e15e8;
  lVar2 = *param_4;
  if (*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0xc)) {
    local_148 = (long *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
    local_14c = (int)local_148;
    uVar10 = 0;
    do {
      if ((bVar3) || ((*(ulong *)((long)local_58 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0))
      {
        local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        local_100 = PTR_shared_null_1021e15e8;
        local_f0 = (QArrayData *)PTR_shared_null_1021e1288;
        local_f8 = 0;
        local_e8 = 0;
        pQVar12 = (QString *)*local_148;
        pQVar15 = pQVar12[1].field0_0x0;
        if (*(int *)(pQVar15 + 8) != *(int *)(pQVar15 + 0xc)) {
          pQVar15 = pQVar15 + (long)*(int *)(pQVar15 + 8) * 8 + 0x10;
          do {
            local_110.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
                    /* WARNING: Load size is inaccurate */
            local_118.field0_0x0 = *pQVar15;
            if (1 < *(int *)local_118.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + 1;
              local_31 = *(int *)local_118.field0_0x0 != 0;
              UNLOCK();
            }
            lVar2 = *param_3;
            if (*(int *)(lVar2 + 8) == *(int *)(lVar2 + 0xc)) {
              bVar9 = false;
            }
            else {
              plVar11 = (long *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
              do {
                cVar4 = operator==((QString *)*plVar11,&local_118);
                if (cVar4 != '\0') {
                  QString::operator=(&local_110,(QString *)(*plVar11 + 8));
                  local_14c = *(int *)(*plVar11 + 0x10);
                  bVar9 = true;
                  goto LAB_1000ba439;
                }
                plVar11 = plVar11 + 1;
              } while (plVar11 != (long *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 0xc) * 8));
              bVar9 = false;
            }
LAB_1000ba439:
            if (*(int *)local_118.field0_0x0 != -1) {
              if (*(int *)local_118.field0_0x0 != 0) {
                LOCK();
                *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
                local_31 = *(int *)local_118.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000ba46f;
              }
              QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
            }
LAB_1000ba46f:
            if (bVar9) {
              local_120.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
              if (local_14c == 0) {
                QString::operator=(&local_120,&local_110);
              }
              else if (local_59 == '\0') {
                uVar5 = FUN_10018c280(lVar6);
                uVar5 = FUN_100319c30(uVar5);
                local_130 = *(QArrayData **)pQVar15;
                if (1 < *(int *)local_130 + 1U) {
                  LOCK();
                  *(int *)local_130 = *(int *)local_130 + 1;
                  local_31 = *(int *)local_130 != 0;
                  UNLOCK();
                }
                FUN_10032fd10(uVar5,&local_130,&local_120);
                if (*(int *)local_130 != -1) {
                  if (*(int *)local_130 != 0) {
                    LOCK();
                    *(int *)local_130 = *(int *)local_130 + -1;
                    local_31 = *(int *)local_130 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000ba5e0;
                  }
                  QArrayData::deallocate(local_130,2,8);
                }
              }
              else {
                uVar5 = FUN_10018c280(lVar6);
                uVar5 = FUN_100319c30(uVar5);
                local_128 = *(QArrayData **)pQVar15;
                if (1 < *(int *)local_128 + 1U) {
                  LOCK();
                  *(int *)local_128 = *(int *)local_128 + 1;
                  local_31 = *(int *)local_128 != 0;
                  UNLOCK();
                }
                FUN_10032fdd0(uVar5,&local_128,&local_120);
                if (*(int *)local_128 != -1) {
                  if (*(int *)local_128 != 0) {
                    LOCK();
                    *(int *)local_128 = *(int *)local_128 + -1;
                    local_31 = *(int *)local_128 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000ba5e0;
                  }
                  QArrayData::deallocate(local_128,2,8);
                }
              }
LAB_1000ba5e0:
              FUN_1000341d0(&local_100,&local_120);
              if (*(int *)local_120.field0_0x0 != -1) {
                if (*(int *)local_120.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
                  local_31 = *(int *)local_120.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000ba630;
                }
                QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
              }
            }
            else {
              local_e8 = 1;
              FUN_1000341d0(&local_100,pQVar15);
            }
LAB_1000ba630:
            if (*(int *)local_110.field0_0x0 != -1) {
              if (*(int *)local_110.field0_0x0 != 0) {
                LOCK();
                *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
                local_31 = *(int *)local_110.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000ba666;
              }
              QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
            }
LAB_1000ba666:
            pQVar15 = pQVar15 + 8;
            pQVar12 = (QString *)*local_148;
          } while (pQVar15 !=
                   pQVar12[1].field0_0x0 + (long)*(int *)(pQVar12[1].field0_0x0 + 0xc) * 8 + 0x10);
        }
        if (*(int *)(local_100 + 8) < *(int *)(local_100 + 0xc)) {
          QString::operator=(&local_108,pQVar12);
          local_f8 = *(undefined8 *)(*local_148 + 0x10);
          FUN_1000bdac0(&local_e0,&local_108);
        }
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000ba711;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_1000ba711:
        FUN_100039a80(&local_100);
        if (*(int *)local_108.field0_0x0 != -1) {
          if (*(int *)local_108.field0_0x0 != 0) {
            LOCK();
            *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
            local_31 = *(int *)local_108.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000ba780;
          }
          QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
        }
      }
      else {
        (**(code **)(*param_1 + 0x80))(param_1,*local_148 + 0x10);
      }
LAB_1000ba780:
      local_148 = local_148 + 1;
      uVar10 = uVar10 + 1;
    } while (local_148 != (long *)(*param_4 + 0x10 + (long)*(int *)(*param_4 + 0xc) * 8));
  }
  if (*(int *)(local_e0 + 8) < *(int *)(local_e0 + 0xc)) {
    lVar6 = param_1[0x16];
    FUN_1000b7180(local_138,&local_e0);
    FUN_1000b6e20(lVar6,local_138);
    FUN_1000b70d0(local_138);
  }
  FUN_1000b70d0(&local_e0);
  if (local_58 != (void *)0x0) {
    operator_delete(local_58);
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

