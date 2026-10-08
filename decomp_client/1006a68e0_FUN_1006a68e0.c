
undefined8 * FUN_1006a68e0(undefined8 *param_1,undefined8 param_2,long *param_3,QObject *param_4)

{
  code *pcVar1;
  QObject *pQVar2;
  int *piVar3;
  QArrayData *pQVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  QVariant *pQVar10;
  char *pcVar11;
  size_t sVar12;
  int *piVar13;
  Data_conflict *pDVar14;
  Data *pDVar15;
  QArrayData *pQVar16;
  long lVar17;
  bool bVar18;
  QVariant local_1d0;
  QArrayData *local_1c0;
  QVariant local_1b8;
  QArrayData *local_1a8;
  QVariant local_1a0;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  int *local_168;
  int *local_160;
  int *local_158;
  uint local_150;
  int *local_148;
  QObject local_140 [16];
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  undefined1 local_108 [32];
  QString local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  _func_void_Node_ptr *local_a8;
  QVariant local_a0;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  undefined4 local_78;
  undefined *local_70;
  QObject *local_68;
  QObject *pQStack_60;
  Data_conflict local_58;
  uint uStack_50;
  QVariant local_48;
  bool local_31;
  
  if (param_4 == (QObject *)0x0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != context","ActionManager/ActionUpdater/CActionUpdater.cpp",0x9d,
                  "scheduleUpdate");
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 5) = 0x80000000;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
    return param_1;
  }
  if (3 < DAT_10230ffd0) {
    iVar7 = *(int *)(*param_3 + 0xc);
    iVar8 = *(int *)(*param_3 + 8);
    (*(code *)**(undefined8 **)param_4)(param_4);
    uVar9 = QMetaObject::className();
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",4,
                  "Scheduling update of %d actions with context %s",iVar7 - iVar8,uVar9);
  }
  uStack_50 = 0x80000000;
  local_58.field7 = 0;
  local_68 = (QObject *)QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  pQStack_60 = param_4;
  if (DAT_10226c7b8 == 0) {
    DAT_10226c7b8 = FUN_100086f00("QPointer<QObject>",0xffffffffffffffff,1);
  }
  uVar6 = uStack_50 & 0x40000000;
  if (((uVar6 == 0) || (*(int *)(local_58.field7 + 8) == 1)) &&
     ((DAT_10226c7b8 == (uStack_50 & 0x3fffffff) || ((uStack_50 & 0x3fffffff | DAT_10226c7b8) < 8)))
     ) {
    uStack_50 = DAT_10226c7b8 & 0x3fffffff | uVar6;
    if (uVar6 == 0) {
      pDVar14 = &local_58;
    }
    else {
      pDVar14 = *(Data_conflict **)local_58.field15;
    }
    pQVar2 = pDVar14->field15;
    if (pQVar2 != (QObject *)0x0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      local_31 = *(int *)pQVar2 != 0;
      if ((*(int *)pQVar2 == 0) && (pDVar14->field16 != (void *)0x0)) {
        operator_delete(pDVar14->field16);
      }
    }
    pDVar14->field15 = local_68;
    pDVar14[1].field15 = pQStack_60;
    if (local_68 != (QObject *)0x0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  else {
    QVariant::QVariant(&local_48,DAT_10226c7b8,&local_68,0);
    QVariant::operator=((QVariant *)&local_58,&local_48);
    QVariant::~QVariant(&local_48);
  }
  local_70 = PTR_shared_null_1021e15e8;
  FUN_1000722f0(&local_90,param_3);
  local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
  local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
  if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
    do {
      local_78 = 1;
      QVariant::QVariant(&local_a0,**(int **)local_88);
      FUN_10012ae80(&local_70,&local_a0);
      QVariant::~QVariant(&local_a0);
      local_88 = local_88 + 8;
    } while (local_88 != local_80);
  }
  local_78 = 1;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_31) goto LAB_1006a6bf2;
    }
    iVar7 = *(int *)(local_90 + 0xc);
    if (iVar7 != *(int *)(local_90 + 8)) {
      lVar17 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar7 * -8;
      pDVar15 = local_90 + (long)iVar7 * 8 + 8;
      do {
        if (*(void **)pDVar15 != (void *)0x0) {
          operator_delete(*(void **)pDVar15);
        }
        pDVar15 = pDVar15 + -8;
        lVar17 = lVar17 + 8;
      } while (lVar17 != 0);
    }
    QListData::dispose(local_90);
  }
LAB_1006a6bf2:
  local_a8 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  local_b0 = (QArrayData *)QString::fromAscii_helper("context",7);
  pQVar10 = (QVariant *)FUN_1002edf40(&local_a8,&local_b0);
  QVariant::operator=(pQVar10,(QVariant *)&local_58);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_31) goto LAB_1006a6c6d;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1006a6c6d:
  local_b8 = (QArrayData *)QString::fromAscii_helper("actions",7);
  pQVar10 = (QVariant *)FUN_1002edf40(&local_a8,&local_b8);
  QVariant::QVariant(&local_c8,(QList *)&local_70);
  QVariant::operator=(pQVar10,&local_c8);
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_31) goto LAB_1006a6cfc;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1006a6cfc:
  local_d0 = (QArrayData *)QString::fromAscii_helper("contextClass",0xc);
  pQVar10 = (QVariant *)FUN_1002edf40(&local_a8,&local_d0);
  (*(code *)**(undefined8 **)param_4)(param_4);
  pcVar11 = (char *)QMetaObject::className();
  QVariant::QVariant(&local_e0,pcVar11);
  QVariant::operator=(pQVar10,&local_e0);
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_31) goto LAB_1006a6d9d;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1006a6d9d:
  local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  (*(code *)**(undefined8 **)param_4)(param_4);
  iVar7 = QMetaObject::propertyOffset();
  for (; iVar8 = QMetaObject::propertyCount(), iVar7 < iVar8; iVar7 = iVar7 + 1) {
    QMetaObject::property((int)local_108);
    cVar5 = QMetaProperty::isWritable();
    if (cVar5 != '\0') {
      pcVar11 = ",%1=%2";
      if (*(int *)(local_e8.field0_0x0 + 4) == 0) {
        pcVar11 = "%1=%2";
      }
      local_120 = (QArrayData *)
                  QString::fromAscii_helper(pcVar11,(*(int *)(local_e8.field0_0x0 + 4) != 0) + 5);
      pcVar11 = (char *)QMetaProperty::name();
      iVar8 = -1;
      if (pcVar11 != (char *)0x0) {
        sVar12 = _strlen(pcVar11);
        iVar8 = (int)sVar12;
      }
      local_128 = (QArrayData *)QString::fromAscii_helper(pcVar11,iVar8);
      QString::arg(&local_118,&local_120,&local_128,0,0x20);
      QMetaProperty::read(local_140);
      QVariant::toString();
      QString::arg(&local_110,&local_118,&local_130,0,0x20);
      QString::append(&local_e8);
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if (local_31) goto LAB_1006a6f2a;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_1006a6f2a:
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if (local_31) goto LAB_1006a6f60;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_1006a6f60:
      QVariant::~QVariant((QVariant *)local_140);
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if (local_31) goto LAB_1006a6f9e;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_1006a6f9e:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if (local_31) goto LAB_1006a6fd4;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_1006a6fd4:
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if (local_31) goto LAB_1006a6df0;
        }
        QArrayData::deallocate(local_120,2,8);
      }
    }
LAB_1006a6df0:
  }
  QObject::dynamicPropertyNames();
  local_168 = local_148;
  if (*local_148 != -1) {
    if (*local_148 == 0) {
      QListData::detach((int)&local_168);
      iVar7 = local_168[2];
      if (iVar7 != local_168[3]) {
        local_148 = local_148 + (long)local_148[2] * 2 + 4;
        piVar13 = local_168 + (long)iVar7 * 2 + 4;
        lVar17 = (long)local_168[3] * 8 + (long)iVar7 * -8;
        do {
          piVar3 = *(int **)local_148;
          *(int **)piVar13 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar13 = piVar13 + 2;
          local_148 = local_148 + 2;
          lVar17 = lVar17 + -8;
        } while (lVar17 != 0);
      }
    }
    else {
      LOCK();
      *local_148 = *local_148 + 1;
      local_31 = *local_148 != 0;
      UNLOCK();
    }
  }
  local_160 = local_168 + (long)local_168[2] * 2 + 4;
  local_158 = local_168 + (long)local_168[3] * 2 + 4;
  local_150 = 1;
  if (local_168[2] != local_168[3]) {
    do {
      pQVar4 = *(QArrayData **)local_160;
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
      }
      if (local_150 != 0) {
        pcVar11 = ",%1=%2";
        if (*(int *)(local_e8.field0_0x0 + 4) == 0) {
          pcVar11 = "%1=%2";
        }
        local_180 = (QArrayData *)
                    QString::fromAscii_helper(pcVar11,(*(int *)(local_e8.field0_0x0 + 4) != 0) + 5);
        pQVar16 = pQVar4 + *(long *)(pQVar4 + 0x10);
        iVar7 = -1;
        if (pQVar16 != (QArrayData *)0x0) {
          sVar12 = _strlen((char *)pQVar16);
          iVar7 = (int)sVar12;
        }
        local_188 = (QArrayData *)QString::fromAscii_helper((char *)pQVar16,iVar7);
        QString::arg(&local_178,&local_180,&local_188,0,0x20);
        QObject::property((char *)&local_1a0);
        QVariant::toString();
        QString::arg(&local_170,&local_178,&local_190,0,0x20);
        QString::append(&local_e8);
        if (*(int *)local_170 != -1) {
          if (*(int *)local_170 != 0) {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + -1;
            local_31 = *(int *)local_170 != 0;
            UNLOCK();
            if (local_31) goto LAB_1006a7244;
          }
          QArrayData::deallocate(local_170,2,8);
        }
LAB_1006a7244:
        if (*(int *)local_190 != -1) {
          if (*(int *)local_190 != 0) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + -1;
            local_31 = *(int *)local_190 != 0;
            UNLOCK();
            if (local_31) goto LAB_1006a727a;
          }
          QArrayData::deallocate(local_190,2,8);
        }
LAB_1006a727a:
        QVariant::~QVariant(&local_1a0);
        if (*(int *)local_178 != -1) {
          if (*(int *)local_178 != 0) {
            LOCK();
            *(int *)local_178 = *(int *)local_178 + -1;
            local_31 = *(int *)local_178 != 0;
            UNLOCK();
            if (local_31) goto LAB_1006a72b8;
          }
          QArrayData::deallocate(local_178,2,8);
        }
LAB_1006a72b8:
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_31 = *(int *)local_188 != 0;
            UNLOCK();
            if (local_31) goto LAB_1006a72ee;
          }
          QArrayData::deallocate(local_188,2,8);
        }
LAB_1006a72ee:
        if (*(int *)local_180 != -1) {
          if (*(int *)local_180 != 0) {
            LOCK();
            *(int *)local_180 = *(int *)local_180 + -1;
            local_31 = *(int *)local_180 != 0;
            UNLOCK();
            if (local_31) goto LAB_1006a7324;
          }
          QArrayData::deallocate(local_180,2,8);
        }
LAB_1006a7324:
        local_150 = 0;
      }
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (local_31) goto LAB_1006a735d;
        }
        QArrayData::deallocate(pQVar4,1,8);
      }
LAB_1006a735d:
      local_160 = local_160 + 2;
      uVar6 = local_150 ^ 1;
      bVar18 = local_150 != 1;
      local_150 = uVar6;
    } while ((bVar18) && (local_160 != local_158));
  }
  FUN_1000ee530(&local_168);
  local_1a8 = (QArrayData *)QString::fromAscii_helper("contextProps",0xc);
  pQVar10 = (QVariant *)FUN_1002edf40(&local_a8,&local_1a8);
  QVariant::QVariant(&local_1b8,&local_e8);
  QVariant::operator=(pQVar10,&local_1b8);
  QVariant::~QVariant(&local_1b8);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
      if (local_31) goto LAB_1006a7437;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_1006a7437:
  local_1c0 = (QArrayData *)QString::fromAscii_helper("updateActionGroup",0x11);
  QVariant::QVariant(&local_1d0,(QHash *)&local_a8);
  FUN_100a1c6b0(param_1,&local_1c0,param_2,&local_1d0);
  QVariant::~QVariant(&local_1d0);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if (local_31) goto LAB_1006a74c1;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_1006a74c1:
  FUN_1000ee530(&local_148);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_31 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if (local_31) goto LAB_1006a7503;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_1006a7503:
  if (*(int *)(local_a8 + 0x10) != -1) {
    if (*(int *)(local_a8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_a8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if (local_31) goto LAB_1006a7538;
    }
    QHashData::free_helper(local_a8);
  }
LAB_1006a7538:
  FUN_100035ea0(&local_70);
  if (local_68 != (QObject *)0x0) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + -1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
    if ((!local_31) && (local_68 != (QObject *)0x0)) {
      operator_delete(local_68);
    }
  }
  QVariant::~QVariant((QVariant *)&local_58);
  return param_1;
}

