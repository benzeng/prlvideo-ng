
void FUN_1004ec530(long param_1,QString *param_2)

{
  long *plVar1;
  uint uVar2;
  QArrayData *pQVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  char cVar8;
  int iVar9;
  uint *puVar10;
  size_t sVar11;
  Data *pDVar12;
  uint *puVar13;
  QFileInfo *this;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined1 auVar19 [16];
  QArrayData *pQStack_f0;
  undefined *local_e0;
  long *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  uint *local_b0;
  uint *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *pQStack_90;
  undefined1 local_88 [16];
  QDir local_78 [8];
  Data *local_70;
  uint *local_68;
  QString local_60;
  uint *local_58;
  undefined1 local_49;
  QArrayData *local_48;
  QArrayData *local_40;
  QFileInfo local_38 [8];
  
  QMutex::lock();
  lVar17 = *(long *)(param_1 + 0x48);
  if (lVar17 == 0) {
    lVar17 = *(long *)(*(long *)(param_1 + 0x38) + 0x40);
    *(long *)(param_1 + 0x48) = lVar17;
    if (lVar17 != 0) goto LAB_1004ec577;
LAB_1004ec580:
    QString::fromUtf8_helper((char *)&local_60,0xa320a0);
    pQVar3 = (QArrayData *)param_2->field0_0x0;
    param_2->field0_0x0 = local_60.field0_0x0;
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        local_58 = (uint *)CONCAT71(local_58._1_7_,*(int *)pQVar3 != 0);
        if (*(int *)pQVar3 != 0) goto LAB_1004ec5cc;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
  }
  else {
LAB_1004ec577:
    if (*(char *)(lVar17 + 0x89) == '\0') goto LAB_1004ec580;
  }
LAB_1004ec5cc:
  pQVar4 = param_2->field0_0x0;
  iVar9 = QString::compare_helper
                    (pQVar4 + *(long *)(pQVar4 + 0x10),*(undefined4 *)(pQVar4 + 4),"",0xffffffff,1);
  if (iVar9 == 0) {
    puVar15 = (undefined8 *)(param_1 + 0x20);
    puVar10 = *(uint **)(param_1 + 0x20);
    if (1 < *puVar10) {
      FUN_1004edac0(puVar15,puVar10[1]);
      puVar10 = (uint *)*puVar15;
    }
    puVar13 = puVar10 + (long)(int)puVar10[2] * 2 + 4;
    while( true ) {
      if (1 < *puVar10) {
        FUN_1004edac0(puVar15,puVar10[1]);
        puVar10 = (uint *)*puVar15;
      }
      if (puVar13 == puVar10 + (long)(int)puVar10[3] * 2 + 4) break;
      FUN_1004d0a00(*(long *)(param_1 + 0x40) + 0x48,*(undefined8 *)puVar13);
      puVar13 = puVar13 + 2;
      puVar10 = (uint *)*puVar15;
    }
    *puVar15 = PTR_shared_null_100ba2188;
    local_58 = puVar10;
    if (*puVar10 != 0xffffffff) {
      if (*puVar10 != 0) {
        LOCK();
        *puVar10 = *puVar10 - 1;
        local_49 = *puVar10 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1004ece9a;
      }
      FUN_1004ed6d0(&local_58);
    }
    goto LAB_1004ece9a;
  }
  local_68 = (uint *)PTR_shared_null_100ba2188;
  QDir::QDir(local_78,param_2);
  QDir::entryInfoList(&local_70,local_78,0xffffffff,0xffffffff);
  QDir::~QDir(local_78);
  if (1 < *(uint *)local_70) {
    FUN_10004e190(&local_70,*(uint *)(local_70 + 4));
  }
  puVar7 = PTR_shared_null_100ba20d0;
  pDVar12 = local_70 + (long)(int)*(uint *)(local_70 + 8) * 8 + 0x10;
  auVar19._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar19._0_8_ = PTR_shared_null_100ba20d0;
  auVar19._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  while( true ) {
    if (1 < *(uint *)local_70) {
      FUN_10004e190(&local_70,*(uint *)(local_70 + 4));
    }
    iVar9 = *(int *)(local_70 + 0xc);
    if (pDVar12 == local_70 + (long)iVar9 * 8 + 0x10) break;
    pQStack_f0 = auVar19._8_8_;
    local_98 = (QArrayData *)puVar7;
    pQStack_90 = pQStack_f0;
    QFileInfo::absoluteFilePath();
    pQVar3 = pQStack_90;
    pQStack_90 = local_a0;
    local_a0 = pQVar3;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        local_58 = (uint *)CONCAT71(local_58._1_7_,*(int *)pQVar3 != 0);
        if (*(int *)pQVar3 != 0) goto LAB_1004ec72a;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_1004ec72a:
    cVar8 = FUN_100024ca0(&pQStack_90,local_88);
    if (cVar8 != '\0') {
      FUN_1004ed3f0(&local_68,&local_98);
    }
    if (*(int *)pQStack_90 != -1) {
      if (*(int *)pQStack_90 != 0) {
        LOCK();
        *(int *)pQStack_90 = *(int *)pQStack_90 + -1;
        UNLOCK();
        local_58 = (uint *)CONCAT71(local_58._1_7_,*(int *)pQStack_90 != 0);
        if (*(int *)pQStack_90 != 0) goto LAB_1004ec77f;
      }
      QArrayData::deallocate(pQStack_90,2,8);
    }
LAB_1004ec77f:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        UNLOCK();
        local_58 = (uint *)CONCAT71(local_58._1_7_,*(int *)local_98 != 0);
        if (*(int *)local_98 != 0) goto LAB_1004ec690;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1004ec690:
    pDVar12 = pDVar12 + 8;
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      local_58 = (uint *)CONCAT71(local_58._1_7_,*(int *)local_70 != 0);
      if (*(int *)local_70 != 0) goto LAB_1004ec96a;
      iVar9 = *(int *)(local_70 + 0xc);
    }
    if (iVar9 != *(int *)(local_70 + 8)) {
      lVar17 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar9 * -8;
      this = (QFileInfo *)(local_70 + (long)iVar9 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(this);
        this = this + -8;
        lVar17 = lVar17 + 8;
      } while (lVar17 != 0);
    }
    QListData::dispose(local_70);
  }
LAB_1004ec96a:
  plVar1 = (long *)(param_1 + 0x20);
  puVar10 = *(uint **)(param_1 + 0x20);
  if (1 < *puVar10) {
    FUN_1004edac0(plVar1,puVar10[1]);
    puVar10 = (uint *)*plVar1;
  }
  puVar13 = puVar10 + (long)(int)puVar10[2] * 2 + 4;
LAB_1004eca1a:
  if (1 < *puVar10) {
    FUN_1004edac0(plVar1,puVar10[1]);
    puVar10 = (uint *)*plVar1;
  }
  if (puVar13 != puVar10 + (long)(int)puVar10[3] * 2 + 4) {
    lVar17 = *(long *)puVar13;
    if (local_68[2] != local_68[3]) {
      puVar10 = local_68 + (long)(int)local_68[2] * 2 + 4;
      do {
        cVar8 = operator==((QString *)(*(long *)puVar10 + 8),(QString *)(lVar17 + 8));
        if (cVar8 != '\0') {
          puVar13 = puVar13 + 2;
          puVar10 = (uint *)*plVar1;
          goto LAB_1004eca1a;
        }
        puVar10 = puVar10 + 2;
      } while (puVar10 != local_68 + (long)(int)local_68[3] * 2 + 4);
      lVar17 = *(long *)puVar13;
    }
    FUN_1004d0a00(*(long *)(param_1 + 0x40) + 0x48,lVar17);
    local_b0 = puVar13;
    FUN_1004ed500(&local_a8,plVar1,&local_b0);
    puVar10 = (uint *)*plVar1;
    puVar13 = local_a8;
    goto LAB_1004eca1a;
  }
  if (1 < *local_68) {
    FUN_1004edac0(&local_68,local_68[1]);
  }
  puVar10 = local_68 + (long)(int)local_68[2] * 2 + 4;
  while( true ) {
    if (1 < *local_68) {
      FUN_1004edac0(&local_68,local_68[1]);
    }
    if (puVar10 == local_68 + (long)(int)local_68[3] * 2 + 4) break;
    lVar17 = *(long *)puVar10;
    lVar5 = *plVar1;
    if (*(int *)(lVar5 + 8) != *(int *)(lVar5 + 0xc)) {
      plVar14 = (long *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8);
      do {
        cVar8 = operator==((QString *)(*plVar14 + 8),(QString *)(lVar17 + 8));
        if (cVar8 != '\0') goto LAB_1004ecb10;
        plVar14 = plVar14 + 1;
      } while (plVar14 != (long *)(*plVar1 + 0x10 + (long)*(int *)(*plVar1 + 0xc) * 8));
      lVar17 = *(long *)puVar10;
    }
    uVar2 = *(uint *)(lVar17 + 0x10);
    local_b8.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("SmartMount",10);
    ppuVar18 = &PTR_s_External_100bc39b8;
    uVar16 = 0;
    do {
      if ((*(uint *)(ppuVar18 + -1) & uVar2) != 0) {
        local_40 = (QArrayData *)QString::fromAscii_helper(" ",1);
        QString::append(&local_b8);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            UNLOCK();
            local_58 = (uint *)CONCAT71(local_58._1_7_,*(int *)local_40 != 0);
            if (*(int *)local_40 != 0) goto LAB_1004ecc2b;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_1004ecc2b:
        pcVar6 = *ppuVar18;
        sVar11 = _strlen(pcVar6);
        local_48 = (QArrayData *)QString::fromAscii_helper(pcVar6,(int)sVar11);
        QString::append(&local_b8);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            UNLOCK();
            local_58 = (uint *)CONCAT71(local_58._1_7_,*(int *)local_48 != 0);
            if (*(int *)local_48 != 0) goto LAB_1004ecc80;
          }
          QArrayData::deallocate(local_48,2,8);
        }
      }
LAB_1004ecc80:
      uVar16 = uVar16 + 1;
      ppuVar18 = ppuVar18 + 2;
    } while (uVar16 < 4);
    puVar15 = *(undefined8 **)puVar10;
    lVar17 = *(long *)(param_1 + 0x40);
    local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar15[1];
    if (1 < *(int *)local_d0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + 1;
      UNLOCK();
      local_58 = (uint *)CONCAT71(local_58._1_7_,*(int *)local_d0.field0_0x0 != 0);
    }
    QFileInfo::QFileInfo(local_38,&local_d0);
    QFileInfo::fileName();
    QFileInfo::~QFileInfo(local_38);
    local_d8 = (long *)0x0;
    FUN_1004d02a0(&local_c0,lVar17 + 0x48,puVar15 + 1,&local_c8,&local_b8,0x10,&local_d8);
    pQVar3 = (QArrayData *)*puVar15;
    *puVar15 = local_c0;
    local_c0 = pQVar3;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        local_58 = (uint *)CONCAT71(local_58._1_7_,*(int *)pQVar3 != 0);
        if (*(int *)pQVar3 != 0) goto LAB_1004ecd81;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_1004ecd81:
    if (local_d8 != (long *)0x0) {
      LOCK();
      plVar14 = local_d8 + 1;
      lVar17 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)(*local_d8 + 0x10))();
      }
    }
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        UNLOCK();
        local_58 = (uint *)CONCAT71(local_58._1_7_,*(int *)local_c8 != 0);
        if (*(int *)local_c8 != 0) goto LAB_1004ecde9;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_1004ecde9:
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        UNLOCK();
        local_58 = (uint *)CONCAT71(local_58._1_7_,*(int *)local_d0.field0_0x0 != 0);
        if (*(int *)local_d0.field0_0x0 != 0) goto LAB_1004ece1f;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
LAB_1004ece1f:
    FUN_1004ed3f0(plVar1,*(undefined8 *)puVar10);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        UNLOCK();
        local_58 = (uint *)CONCAT71(local_58._1_7_,*(int *)local_b8.field0_0x0 != 0);
        if (*(int *)local_b8.field0_0x0 != 0) goto LAB_1004ecb10;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_1004ecb10:
    puVar10 = puVar10 + 2;
  }
  if (*local_68 != 0xffffffff) {
    if (*local_68 != 0) {
      LOCK();
      *local_68 = *local_68 - 1;
      UNLOCK();
      local_58 = (uint *)CONCAT71(local_58._1_7_,*local_68 != 0);
      if (*local_68 != 0) goto LAB_1004ece9a;
    }
    FUN_1004ed6d0(&local_68,local_68);
  }
LAB_1004ece9a:
  lVar17 = *(long *)(param_1 + 0x48);
  if (lVar17 != 0) {
    local_e0 = PTR_shared_null_100ba2188;
    lVar5 = *(long *)(param_1 + 0x20);
    if (*(int *)(lVar5 + 8) != *(int *)(lVar5 + 0xc)) {
      puVar15 = (undefined8 *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8);
      do {
        FUN_10000c490(&local_e0,*puVar15);
        puVar15 = puVar15 + 1;
      } while (puVar15 !=
               (undefined8 *)
               (*(long *)(param_1 + 0x20) + 0x10 +
               (long)*(int *)(*(long *)(param_1 + 0x20) + 0xc) * 8));
      lVar17 = *(long *)(param_1 + 0x48);
    }
    FUN_100025170(lVar17,&local_e0);
    FUN_100013180(&local_e0);
  }
  QMutex::unlock();
  return;
}

