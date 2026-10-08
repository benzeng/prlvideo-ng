
/* Function Stack Size: 0x20 bytes */

void CWindowRestoration::window_willEncodeRestorableState_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  QArrayData *pQVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  char *pcVar9;
  QTextStream *pQVar10;
  int *piVar11;
  QArrayData *local_150;
  QTextStream *local_148;
  QDebug local_140 [8];
  QTextStream *local_138;
  QArrayData *local_130;
  QDataStream local_128 [32];
  QArrayData *local_108;
  QString local_100;
  undefined4 local_f8;
  _func_void_Node_ptr *local_f0;
  _func_void_Node_ptr *local_e8;
  QArrayData *local_e0;
  QVariant local_d8;
  int *local_c8;
  int *local_c0;
  int *local_b8;
  int *local_b0;
  int local_a8;
  _func_void_Node_ptr *local_a0;
  QArrayData *local_98;
  QVariant local_90;
  QVariant local_80;
  int *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int local_50;
  _func_void_Node_ptr *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[APP_RESUME]","prl_client_app",3,"Save state requested");
  }
  puVar7 = (undefined8 *)MacUtils::getQtWindow((NSWindow *)param_3);
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  local_48 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  QObject::property((char *)&local_80);
  ::QVariant::toStringList();
  local_68 = local_70;
  if (*local_70 != -1) {
    if (*local_70 == 0) {
      QListData::detach((int)&local_68);
      iVar2 = local_68[2];
      if (iVar2 != local_68[3]) {
        local_70 = local_70 + (long)local_70[2] * 2 + 4;
        piVar11 = local_68 + (long)iVar2 * 2 + 4;
        lVar8 = (long)local_68[3] * 8 + (long)iVar2 * -8;
        do {
          piVar3 = *(int **)local_70;
          *(int **)piVar11 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          local_70 = local_70 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *local_70 = *local_70 + 1;
      local_31 = *local_70 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)local_68[2] * 2 + 4;
  local_58 = local_68 + (long)local_68[3] * 2 + 4;
  local_50 = 1;
  FUN_100039a80(&local_70);
  ::QVariant::~QVariant(&local_80);
  if ((local_50 != 0) && (local_60 != local_58)) {
    do {
      piVar11 = local_60;
      QString::toLatin1();
      QObject::property((char *)&local_90);
      FUN_10007af00(&local_48,piVar11,&local_90);
      ::QVariant::~QVariant(&local_90);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100078b2d;
        }
        QArrayData::deallocate(local_98,1,8);
      }
LAB_100078b2d:
      local_60 = local_60 + 2;
      local_50 = 1;
    } while (local_60 != local_58);
  }
  FUN_100039a80(&local_68);
  puVar4 = PTR_shared_null_1021e15d0;
  FUN_100060bb0();
  uVar6 = FUN_100060df0(puVar7);
  local_a0 = (_func_void_Node_ptr *)puVar4;
  FUN_100060bb0();
  FUN_100061150(&local_c8,uVar6);
  local_c0 = local_c8;
  if (*local_c8 != -1) {
    if (*local_c8 == 0) {
      QListData::detach((int)&local_c0);
      iVar2 = local_c0[2];
      if (iVar2 != local_c0[3]) {
        local_c8 = local_c8 + (long)local_c8[2] * 2 + 4;
        piVar11 = local_c0 + (long)iVar2 * 2 + 4;
        lVar8 = (long)local_c0[3] * 8 + (long)iVar2 * -8;
        do {
          piVar3 = *(int **)local_c8;
          *(int **)piVar11 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          local_c8 = local_c8 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *local_c8 = *local_c8 + 1;
      local_31 = *local_c8 != 0;
      UNLOCK();
    }
  }
  local_b8 = local_c0 + (long)local_c0[2] * 2 + 4;
  local_b0 = local_c0 + (long)local_c0[3] * 2 + 4;
  local_a8 = 1;
  FUN_100039a80(&local_c8);
  if ((local_a8 != 0) && (local_b8 != local_b0)) {
    do {
      piVar11 = local_b8;
      QString::toLatin1();
      QObject::property((char *)&local_d8);
      FUN_10007af00(&local_a0,piVar11,&local_d8);
      ::QVariant::~QVariant(&local_d8);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100078cfd;
        }
        QArrayData::deallocate(local_e0,1,8);
      }
LAB_100078cfd:
      local_b8 = local_b8 + 2;
      local_a8 = 1;
    } while (local_b8 != local_b0);
  }
  FUN_100039a80(&local_c0);
  FUN_100074140(&local_100);
  (**(code **)*puVar7)(puVar7);
  pcVar9 = (char *)QMetaObject::className();
  if (pcVar9 != (char *)0x0) {
    _strlen(pcVar9);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)pcVar9);
  QString::operator=(&local_100,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100078dbd;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100078dbd:
  local_f8 = uVar6;
  FUN_100076af0(&local_f0,&local_a0);
  FUN_100076af0(&local_e8,&local_48);
  puVar4 = PTR_shared_null_1021e1288;
  local_108 = (QArrayData *)PTR_shared_null_1021e1288;
  QDataStream::QDataStream(local_128,&local_108,2);
  FUN_100074220(local_128,&local_100);
  if ((1 < *(uint *)local_108) || (*(long *)(local_108 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_108,*(uint *)(local_108 + 4) + 1,*(uint *)(local_108 + 8) >> 0x1f);
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (param_4,PTR_s_encodeBytes_length_forKey__102269ea8,
             local_108 + *(long *)(local_108 + 0x10),(long)(int)*(uint *)(local_108 + 4),
             &cf_resumeData);
  local_130 = (QArrayData *)puVar4;
  pQVar10 = operator_new(0x50);
  QTextStream::QTextStream(pQVar10,&local_130,2);
  *(undefined **)(pQVar10 + 0x10) = puVar4;
  *(undefined4 *)(pQVar10 + 0x1c) = 0;
  pQVar10[0x20] = (QTextStream)0x1;
  pQVar10[0x21] = (QTextStream)0x0;
  *(undefined4 *)(pQVar10 + 0x28) = 2;
  *(undefined8 *)(pQVar10 + 0x44) = 0;
  *(undefined8 *)(pQVar10 + 0x3c) = 0;
  *(undefined8 *)(pQVar10 + 0x34) = 0;
  *(undefined8 *)(pQVar10 + 0x2c) = 0;
  *(undefined4 *)(pQVar10 + 0x18) = 2;
  local_148 = pQVar10;
  local_138 = pQVar10;
  FUN_1000742b0(local_140,&local_148,&local_100);
  QDebug::~QDebug(local_140);
  QDebug::~QDebug((QDebug *)&local_148);
  pQVar5 = local_130;
  if (2 < DAT_10230ffd0) {
    if (1 < *(int *)local_130 + 1U) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + 1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("[APP_RESUME]","prl_client_app",3,"Encoded data: %s",
                  local_150 + *(long *)(local_150 + 0x10));
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100078fc4;
      }
      QArrayData::deallocate(local_150,1,8);
    }
LAB_100078fc4:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100078ffa;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
LAB_100078ffa:
  QDebug::~QDebug((QDebug *)&local_138);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007903c;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10007903c:
  QDataStream::~QDataStream(local_128);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007907e;
    }
    QArrayData::deallocate(local_108,1,8);
  }
LAB_10007907e:
  if (*(int *)(local_e8 + 0x10) != -1) {
    if (*(int *)(local_e8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_e8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000790b3;
    }
    QHashData::free_helper(local_e8);
  }
LAB_1000790b3:
  if (*(int *)(local_f0 + 0x10) != -1) {
    if (*(int *)(local_f0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_f0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000790e8;
    }
    QHashData::free_helper(local_f0);
  }
LAB_1000790e8:
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_31 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007911e;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_10007911e:
  if (*(int *)(local_a0 + 0x10) != -1) {
    if (*(int *)(local_a0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_a0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007914c;
    }
    QHashData::free_helper(local_a0);
  }
LAB_10007914c:
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QHashData::free_helper(local_48);
  }
  return;
}

