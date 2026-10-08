
void FUN_1007da2a0(long param_1)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined *puVar5;
  undefined4 uVar6;
  size_t sVar7;
  undefined4 *puVar8;
  long lVar9;
  Data *pDVar10;
  Data *pDVar11;
  int iVar12;
  QArrayData *pQVar13;
  _func_void_Node_ptr *local_e8;
  Data *local_e0;
  Data *local_d8;
  Data *local_d0;
  undefined4 local_c8;
  Data *local_c0;
  Connection local_b8 [8];
  QVariant local_b0;
  QVariant local_a0;
  QVariant local_90;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  code *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  local_70 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  puVar5 = PTR_s_PDLFeedback_102275060;
  iVar12 = -1;
  if (PTR_s_PDLFeedback_102275060 != (undefined *)0x0) {
    sVar7 = _strlen(PTR_s_PDLFeedback_102275060);
    iVar12 = (int)sVar7;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar12);
  QString::arg(&local_68,&local_70,&local_78,0,0x20);
  puVar5 = PTR_s_ResendFeedbackInterval_102275088;
  iVar12 = -1;
  if (PTR_s_ResendFeedbackInterval_102275088 != (undefined *)0x0) {
    sVar7 = _strlen(PTR_s_ResendFeedbackInterval_102275088);
    iVar12 = (int)sVar7;
  }
  local_80 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar12);
  QString::arg(&local_60,&local_68,&local_80,0,0x20);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007da384;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1007da384:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007da3b4;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007da3b4:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007da3e4;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1007da3e4:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007da414;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007da414:
  QSettings::QSettings((QSettings *)&local_a0,(QObject *)0x0);
  QVariant::QVariant(&local_b0,DAT_100e2a558);
  QSettings::value((QString *)&local_90,&local_a0);
  uVar6 = QVariant::toInt((bool *)&local_90);
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  QVariant::~QVariant(&local_90);
  QVariant::~QVariant(&local_b0);
  QSettings::~QSettings((QSettings *)&local_a0);
  QTimer::setInterval((int)*(undefined8 *)(param_1 + 0x20));
  pbVar1 = (byte *)(*(long *)(param_1 + 0x20) + 0x1c);
  *pbVar1 = *pbVar1 | 1;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_48 = PTR_timeout_1021e14c0;
  local_40 = 0;
  local_58 = FUN_1007dab10;
  local_50 = 0;
  puVar8 = operator_new(0x20);
  *puVar8 = 1;
  *(code **)(puVar8 + 2) = FUN_1007db720;
  *(code **)(puVar8 + 4) = FUN_1007dab10;
  *(undefined8 *)(puVar8 + 6) = 0;
  QObject::connectImpl
            (local_b8,uVar3,&local_48,param_1,&local_58,puVar8,0,0,PTR_staticMetaObject_1021e14b8);
  QMetaObject::Connection::~Connection(local_b8);
  FUN_1007db8f0(&local_c0,param_1 + 0x2c);
  local_e0 = local_c0;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 == 0) {
      QListData::detach((int)&local_e0);
      iVar12 = *(int *)(local_e0 + 8);
      if (iVar12 != *(int *)(local_e0 + 0xc)) {
        pDVar10 = local_c0 + (long)*(int *)(local_c0 + 8) * 8 + 0x10;
        pDVar11 = local_e0 + (long)iVar12 * 8 + 0x10;
        lVar9 = (long)*(int *)(local_e0 + 0xc) * 8 + (long)iVar12 * -8;
        do {
          piVar4 = *(int **)pDVar10;
          *(int **)pDVar11 = piVar4;
          if (1 < *piVar4 + 1U) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_31 = *piVar4 != 0;
            UNLOCK();
          }
          pDVar11 = pDVar11 + 8;
          pDVar10 = pDVar10 + 8;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + 1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
    }
  }
  pDVar10 = local_e0 + (long)*(int *)(local_e0 + 8) * 8 + 0x10;
  local_d0 = local_e0 + (long)*(int *)(local_e0 + 0xc) * 8 + 0x10;
  local_d8 = pDVar10;
  if (*(int *)(local_e0 + 8) != *(int *)(local_e0 + 0xc)) {
    do {
      local_c8 = 1;
      local_d8 = pDVar10;
      FUN_1007dbcd0(&local_e8,param_1 + 0x2c,pDVar10);
      FUN_1007db070(param_1 + 0x18,pDVar10,&local_e8);
      if (*(int *)(local_e8 + 0x10) != -1) {
        if (*(int *)(local_e8 + 0x10) != 0) {
          LOCK();
          pcVar2 = local_e8 + 0x10;
          *(int *)pcVar2 = *(int *)pcVar2 + -1;
          local_31 = *(int *)pcVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007da681;
        }
        QHashData::free_helper(local_e8);
      }
LAB_1007da681:
      pDVar10 = local_d8 + 8;
      local_d8 = pDVar10;
    } while (pDVar10 != local_d0);
  }
  pDVar10 = local_e0;
  local_c8 = 1;
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007da731;
    }
    iVar12 = *(int *)(local_e0 + 0xc);
    if (iVar12 != *(int *)(local_e0 + 8)) {
      lVar9 = (long)*(int *)(local_e0 + 8) * 8 + (long)iVar12 * -8;
      pDVar11 = local_e0 + (long)iVar12 * 8 + 8;
      do {
        pQVar13 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar13 == 0) {
LAB_1007da710:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_31 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar13 = *(QArrayData **)pDVar11;
            goto LAB_1007da710;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar10);
  }
LAB_1007da731:
  FUN_1007dab10(param_1);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007da7d1;
    }
    iVar12 = *(int *)(local_c0 + 0xc);
    if (iVar12 != *(int *)(local_c0 + 8)) {
      lVar9 = (long)*(int *)(local_c0 + 8) * 8 + (long)iVar12 * -8;
      pDVar10 = local_c0 + (long)iVar12 * 8 + 8;
      do {
        pQVar13 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar13 == 0) {
LAB_1007da7b0:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_31 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar13 = *(QArrayData **)pDVar10;
            goto LAB_1007da7b0;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_c0);
  }
LAB_1007da7d1:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return;
}

