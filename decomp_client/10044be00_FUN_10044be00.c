
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10044be00(long param_1)

{
  QWidget *pQVar1;
  undefined8 *puVar2;
  bool bVar3;
  Data *pDVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  QArrayData *pQVar13;
  long *plVar14;
  undefined8 *puVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  Data *pDVar19;
  uint uVar20;
  Data *local_f8;
  Data *local_f0;
  Data *local_e8;
  undefined4 local_e0;
  int *local_d8;
  int *local_d0;
  QWidget *local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QWidget *local_a0;
  QArrayData *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  int local_70;
  int *local_68;
  QArrayData *local_60;
  Data *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  lVar11 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x28));
  if (lVar11 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  cVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x1f0))();
  uVar12 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x28));
  cVar6 = FUN_1003e5e80(uVar12);
  uVar12 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x28));
  iVar8 = FUN_10018a9d0(uVar12);
  if (iVar8 == 0x30000009) {
LAB_10044bf05:
    local_58 = (Data *)PTR_shared_null_1021e15e8;
LAB_10044bfda:
    (**(code **)(**(long **)(param_1 + 0x10) + 0x1b8))();
    bVar3 = false;
  }
  else {
    uVar12 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x28));
    iVar8 = FUN_10018a9d0(uVar12);
    if (iVar8 == 0x30000001) {
      uVar12 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x28));
      local_50 = (QArrayData *)
                 QString::fromAscii_helper("Hardware.HibernateState.ShutdownReason",0x26);
      FUN_1003e1800(&local_48,uVar12,&local_50,0);
      iVar8 = QVariant::toInt((bool *)&local_48);
      QVariant::~QVariant(&local_48);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10044beff;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_10044beff:
      if (iVar8 == 1) goto LAB_10044bf05;
    }
    local_58 = (Data *)PTR_shared_null_1021e15e8;
    if (cVar6 != '\0') goto LAB_10044bfda;
    uVar12 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x28));
    cVar6 = FUN_10018da50(uVar12);
    if (cVar6 == '\0') goto LAB_10044bfda;
    pQVar13 = (QArrayData *)QString::fromAscii_helper("m_ckbEnabled",0xc);
    local_60 = pQVar13;
    FUN_1000341d0(&local_58,&local_60);
    if (*(int *)pQVar13 != -1) {
      if (*(int *)pQVar13 != 0) {
        LOCK();
        *(int *)pQVar13 = *(int *)pQVar13 + -1;
        local_31 = *(int *)pQVar13 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10044bfce;
      }
      QArrayData::deallocate(pQVar13,2,8);
    }
LAB_10044bfce:
    bVar3 = true;
    if (cVar5 == '\0') goto LAB_10044bfda;
  }
  FUN_10044cb00(param_1);
  local_68 = (int *)PTR_shared_null_1021e15e8;
  local_98 = (QArrayData *)PTR_shared_null_1021e1288;
  local_90 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper
            (*(undefined8 *)(param_1 + 0x10),&local_98,PTR_staticMetaObject_1021e1540,&local_90,1);
  local_88 = local_90;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 == 0) {
      QListData::detach((int)&local_88);
      lVar11 = (long)*(int *)(local_88 + 8);
      if ((local_90 + (long)*(int *)(local_90 + 8) * 8 != local_88 + lVar11 * 8) &&
         (lVar17 = *(int *)(local_88 + 0xc) - lVar11,
         lVar17 != 0 && lVar11 <= *(int *)(local_88 + 0xc))) {
        _memcpy(local_88 + lVar11 * 8 + 0x10,local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10,
                lVar17 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
    }
  }
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  local_70 = 1;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044c0f2;
    }
    QListData::dispose(local_90);
  }
LAB_10044c0f2:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044c128;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10044c128:
  if ((local_70 != 0) && (local_80 != local_78)) {
    do {
      pQVar1 = *(QWidget **)local_80;
      local_a0 = pQVar1;
      if (pQVar1 != (QWidget *)0x0) {
        QObject::objectName();
        local_b0 = (QArrayData *)QString::fromAscii_helper("qt_",3);
        cVar5 = QString::startsWith(&local_a8,&local_b0,1);
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10044c1ea;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_10044c1ea:
        if (cVar5 == '\0') {
          QObject::property((char *)&local_c0);
          cVar5 = QVariant::toBool();
          QVariant::~QVariant(&local_c0);
          if (cVar5 == '\0') {
            cVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x1f0))();
            if (cVar5 != '\0') {
              uVar12 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x28));
              cVar5 = FUN_1003e5e80(uVar12);
              if (cVar5 == '\0') {
                uVar12 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x28));
                cVar5 = FUN_10018dbd0(uVar12,0xe);
                if (cVar5 != '\0') {
                  plVar14 = (long *)FUN_10044ec60(param_1 + 0x50,&local_a0);
                  uVar12 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x28));
                  uVar9 = FUN_10018a9d0(uVar12);
                  uVar10 = EnumUtils::sdkToGuiEnum(uVar9);
                  puVar2 = (undefined8 *)*plVar14;
                  if (*(uint *)(puVar2 + 4) != 0) {
                    uVar20 = *(uint *)((long)puVar2 + 0x24) ^ uVar10;
                    for (puVar15 = *(undefined8 **)
                                    (puVar2[1] + ((ulong)uVar20 % (ulong)*(uint *)(puVar2 + 4)) * 8)
                        ; puVar15 != puVar2; puVar15 = (undefined8 *)*puVar15) {
                      if ((*(uint *)(puVar15 + 1) == uVar20) &&
                         (uVar10 == *(uint *)((long)puVar15 + 0xc))) {
                        if (puVar15 != puVar2) goto LAB_10044c440;
                        break;
                      }
                    }
                  }
                }
              }
            }
            cVar5 = WidgetUtils::isVisibleForCurrentProduct(pQVar1);
            if (cVar5 == '\0') {
              piVar16 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pQVar1);
              local_d0 = piVar16;
              local_c8 = pQVar1;
              FUN_10007b8d0(&local_68,&local_d0);
              if (piVar16 != (int *)0x0) {
                LOCK();
                *piVar16 = *piVar16 + -1;
                local_31 = *piVar16 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  operator_delete(piVar16);
                }
              }
            }
            cVar5 = QtPrivate::QStringList_contains(&local_58,&local_a8,1);
            if ((cVar5 == '\0') &&
               ((((((lVar11 = (**(code **)(*(long *)pQVar1 + 8))(pQVar1,"QComboBox"), lVar11 != 0 ||
                    (lVar11 = (**(code **)(*(long *)pQVar1 + 8))(pQVar1,"QLineEdit"), lVar11 != 0))
                   || (lVar11 = (**(code **)(*(long *)pQVar1 + 8))(pQVar1,"QLabel"), lVar11 != 0))
                  || ((lVar11 = (**(code **)(*(long *)pQVar1 + 8))(pQVar1,"QAbstractButton"),
                      lVar11 != 0 ||
                      (lVar11 = (**(code **)(*(long *)pQVar1 + 8))(pQVar1,"CMultilineCheckBox"),
                      lVar11 != 0)))) ||
                 ((lVar11 = (**(code **)(*(long *)pQVar1 + 8))(pQVar1,"QAbstractSlider"),
                  lVar11 != 0 ||
                  ((lVar11 = (**(code **)(*(long *)pQVar1 + 8))(pQVar1,"QAbstractSpinBox"),
                   lVar11 != 0 ||
                   (lVar11 = (**(code **)(*(long *)pQVar1 + 8))(pQVar1,"QAbstractScrollArea"),
                   lVar11 != 0)))))) ||
                (lVar11 = (**(code **)(*(long *)pQVar1 + 8))(pQVar1,"QGroupBox"), lVar11 != 0)))) {
              QWidget::setEnabled(SUB81(pQVar1,0));
            }
          }
        }
LAB_10044c440:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10044c480;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
      }
LAB_10044c480:
      local_80 = local_80 + 8;
      local_70 = 1;
    } while (local_80 != local_78);
  }
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044c4d1;
    }
    QListData::dispose(local_88);
  }
LAB_10044c4d1:
  if (bVar3) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x1b8))();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  FUN_10006b440(&local_d8,&local_68);
  WidgetUtils::hideWidgetsAndRemoveFromFormLayouts(uVar12,&local_d8);
  if (*local_d8 != -1) {
    if (*local_d8 != 0) {
      LOCK();
      *local_d8 = *local_d8 + -1;
      local_31 = *local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044c53c;
    }
    FUN_10006b5d0(&local_d8,local_d8);
  }
LAB_10044c53c:
  if (bVar3) {
    FUN_10044d3a0(param_1);
  }
  local_f8 = *(Data **)(param_1 + 0x58);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 == 0) {
      QListData::detach((int)&local_f8);
      lVar17 = (long)*(int *)(local_f8 + 8);
      lVar11 = *(long *)(param_1 + 0x58);
      if (((Data *)(lVar11 + (long)*(int *)(lVar11 + 8) * 8) != local_f8 + lVar17 * 8) &&
         (lVar18 = *(int *)(local_f8 + 0xc) - lVar17,
         lVar18 != 0 && lVar17 <= *(int *)(local_f8 + 0xc))) {
        _memcpy(local_f8 + lVar17 * 8 + 0x10,
                (void *)(lVar11 + 0x10 + (long)*(int *)(lVar11 + 8) * 8),lVar18 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + 1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
    }
  }
  local_f0 = local_f8 + (long)*(int *)(local_f8 + 8) * 8 + 0x10;
  local_e8 = local_f8 + (long)*(int *)(local_f8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_f8 + 8) != *(int *)(local_f8 + 0xc)) {
    do {
      local_e0 = 1;
      uVar12 = *(undefined8 *)local_f0;
      uVar7 = CMoreOptionsLabel::isOpened();
      FUN_10044aaa0(param_1,uVar12,uVar7);
      local_f0 = local_f0 + 8;
    } while (local_f0 != local_e8);
  }
  local_e0 = 1;
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044c6aa;
    }
    QListData::dispose(local_f8);
  }
LAB_10044c6aa:
  if (*local_68 != -1) {
    if (*local_68 != 0) {
      LOCK();
      *local_68 = *local_68 + -1;
      local_31 = *local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044c6d4;
    }
    FUN_10006b5d0(&local_68,local_68);
  }
LAB_10044c6d4:
  pDVar4 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar8 = *(int *)(local_58 + 0xc);
    if (iVar8 != *(int *)(local_58 + 8)) {
      lVar11 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar8 * -8;
      pDVar19 = local_58 + (long)iVar8 * 8 + 8;
      do {
        pQVar13 = *(QArrayData **)pDVar19;
        if (*(int *)pQVar13 == 0) {
LAB_10044c740:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_31 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar13 = *(QArrayData **)pDVar19;
            goto LAB_10044c740;
          }
        }
        pDVar19 = pDVar19 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar4);
  }
  return;
}

