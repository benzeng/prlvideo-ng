
undefined8 FUN_1001f2190(long param_1)

{
  Data *pDVar1;
  char cVar2;
  int iVar3;
  QString *pQVar4;
  QWidget *pQVar5;
  undefined **ppuVar6;
  MessageParams *pMVar7;
  Data *pDVar8;
  undefined8 uVar9;
  QArrayData *pQVar10;
  long lVar11;
  Data_conflict local_288;
  undefined4 local_280;
  QArrayData *local_278;
  int *local_270 [4];
  QVariant local_250 [2];
  QArrayData *local_238;
  undefined4 local_230 [2];
  QArrayData *local_228;
  undefined4 local_220;
  undefined4 local_218 [2];
  QArrayData *local_210;
  undefined4 local_208;
  Data_conflict local_200;
  undefined4 local_1f8;
  QArrayData *local_1f0;
  int *local_1e8 [4];
  QVariant local_1c8 [2];
  QArrayData *local_1b0;
  Data *local_1a8;
  Data_conflict local_1a0;
  undefined4 local_198;
  QArrayData *local_190;
  int *local_188 [4];
  QVariant local_168 [2];
  QArrayData *local_150;
  undefined4 local_148 [2];
  QArrayData *local_140;
  undefined4 local_138;
  undefined4 local_130 [2];
  QArrayData *local_128;
  undefined4 local_120;
  QArrayData *local_118;
  undefined4 local_110 [2];
  QArrayData *local_108;
  undefined4 local_100;
  CSlotInfo local_f8 [4];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  cVar2 = WidgetUtils::isApplicationModalWidgetPresent(false);
  if (cVar2 != '\0') {
    return 0x80000009;
  }
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018c2b0(uVar9);
  iVar3 = CVmConfiguration::getValidRc();
  if (iVar3 == -0x7ffbbdfd) {
    return 0x80000009;
  }
  if (iVar3 == -0x7ffbbdef) {
    return 0x80000009;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (pQVar5 = *(QWidget **)(param_1 + 0x30), pQVar5 == (QWidget *)0x0)) {
    pQVar4 = (QString *)CSearchParentHelper::instance();
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(&local_40,uVar9);
    pQVar5 = (QWidget *)
             CSearchParentHelper::getParentForMessage(pQVar4,SUB81(&local_40,0),(QWidget *)0x0);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f2289;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1001f2289:
  if (iVar3 == -0x7ffffbac) {
    ppuVar6 = &PTR_s_Restore_10226dde0;
  }
  else {
    ppuVar6 = &PTR_s_Remove_10226ddd8;
  }
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,(int)*ppuVar6);
  MessageParams::MessageParams((MessageParams *)local_f8,-0x7ffffff9,pQVar5);
  if (iVar3 + 0x7ffffc8cU < 2) {
    local_1a8 = (Data *)PTR_shared_null_1021e15e8;
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018d830(&local_1b0,uVar9);
    FUN_1000341d0(&local_1a8,&local_1b0);
    MessageParams::setShortMsgParams((QStringList *)local_f8);
    if (*(int *)local_1b0 != -1) {
      if (*(int *)local_1b0 != 0) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + -1;
        local_31 = *(int *)local_1b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f236f;
      }
      QArrayData::deallocate(local_1b0,2,8);
    }
LAB_1001f236f:
    pDVar1 = local_1a8;
    if (*(int *)local_1a8 != -1) {
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        local_31 = *(int *)local_1a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f2410;
      }
      iVar3 = *(int *)(local_1a8 + 0xc);
      if (iVar3 != *(int *)(local_1a8 + 8)) {
        lVar11 = (long)*(int *)(local_1a8 + 8) * 8 + (long)iVar3 * -8;
        pDVar8 = local_1a8 + (long)iVar3 * 8 + 8;
        do {
          pQVar10 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar10 == 0) {
LAB_1001f23e0:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_31 = *(int *)pQVar10 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar10 = *(QArrayData **)pDVar8;
              goto LAB_1001f23e0;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose(pDVar1);
    }
  }
  else if (iVar3 != -0x7ffffdc7) {
    if (iVar3 != -0x7ffffd7d) {
      MessageParams::setErrCode((int)local_f8);
      local_218[0] = 1;
      local_210 = local_48;
      if (1 < *(int *)local_48 + 1U) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + 1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
      }
      local_208 = 0;
      MessageParams::addButton(local_f8,1,local_218);
      if (*(int *)local_210 != -1) {
        if (*(int *)local_210 != 0) {
          LOCK();
          *(int *)local_210 = *(int *)local_210 + -1;
          local_31 = *(int *)local_210 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001f28c8;
        }
        QArrayData::deallocate(local_210,2,8);
      }
LAB_1001f28c8:
      QMetaObject::tr((char *)&local_238,PTR_staticMetaObject_1021e1520,(int)PTR_s_Cancel_10226ddc0)
      ;
      local_230[0] = 2;
      local_228 = local_238;
      if (1 < *(int *)local_238 + 1U) {
        LOCK();
        *(int *)local_238 = *(int *)local_238 + 1;
        local_31 = *(int *)local_238 != 0;
        UNLOCK();
      }
      local_220 = 1;
      MessageParams::addButton(local_f8,2,local_230);
      if (*(int *)local_228 != -1) {
        if (*(int *)local_228 != 0) {
          LOCK();
          *(int *)local_228 = *(int *)local_228 + -1;
          local_31 = *(int *)local_228 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001f296e;
        }
        QArrayData::deallocate(local_228,2,8);
      }
LAB_1001f296e:
      if (*(int *)local_238 != -1) {
        if (*(int *)local_238 != 0) {
          LOCK();
          *(int *)local_238 = *(int *)local_238 + -1;
          local_31 = *(int *)local_238 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001f29a4;
        }
        QArrayData::deallocate(local_238,2,8);
      }
LAB_1001f29a4:
      local_278 = (QArrayData *)
                  QString::fromAscii_helper
                            ("1onInvalidVmCorruptedMsgClosed( PRL_RESULT, Messaging::ButtonID )",
                             0x41);
      local_280 = 0x80000000;
      local_288.field7 = 0;
      FUN_100a1c600(local_270,param_1,&local_278,&local_288);
      MessageParams::setCloseMsgSlot(local_f8);
      QVariant::~QVariant(local_250);
      if (local_270[0] != (int *)0x0) {
        LOCK();
        *local_270[0] = *local_270[0] + -1;
        local_31 = *local_270[0] != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_270[0] != (int *)0x0)) {
          operator_delete(local_270[0]);
        }
      }
      QVariant::~QVariant((QVariant *)&local_288);
      if (*(int *)local_278 != -1) {
        if (*(int *)local_278 != 0) {
          LOCK();
          *(int *)local_278 = *(int *)local_278 + -1;
          local_31 = *(int *)local_278 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001f2a7a;
        }
        QArrayData::deallocate(local_278,2,8);
      }
      goto LAB_1001f2a7a;
    }
    MessageParams::setErrCode((int)local_f8);
    QMetaObject::tr((char *)&local_118,PTR_staticMetaObject_1021e1520,(int)PTR_s_Locate____10226ddf8
                   );
    local_110[0] = 1;
    local_108 = local_118;
    if (1 < *(int *)local_118 + 1U) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + 1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
    }
    local_100 = 0;
    MessageParams::addButton(local_f8,1,local_110);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f25c6;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_1001f25c6:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f25fc;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_1001f25fc:
    local_130[0] = 2;
    local_128 = local_48;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    local_120 = 0;
    MessageParams::addButton(local_f8,2,local_130);
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f267a;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_1001f267a:
    QMetaObject::tr((char *)&local_150,PTR_staticMetaObject_1021e1520,(int)PTR_s_Cancel_10226ddc0);
    local_148[0] = 3;
    local_140 = local_150;
    if (1 < *(int *)local_150 + 1U) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + 1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
    }
    local_138 = 1;
    MessageParams::addButton(local_f8,3,local_148);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f2720;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_1001f2720:
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f2756;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_1001f2756:
    local_190 = (QArrayData *)
                QString::fromAscii_helper
                          ("1onInvalidVmNotAvailableMsgClosed( PRL_RESULT, Messaging::ButtonID )",
                           0x44);
    local_198 = 0x80000000;
    local_1a0.field7 = 0;
    FUN_100a1c600(local_188,param_1,&local_190,&local_1a0);
    MessageParams::setCloseMsgSlot(local_f8);
    QVariant::~QVariant(local_168);
    if (local_188[0] != (int *)0x0) {
      LOCK();
      *local_188[0] = *local_188[0] + -1;
      local_31 = *local_188[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_188[0] != (int *)0x0)) {
        operator_delete(local_188[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_1a0);
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_31 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f2a7a;
      }
      QArrayData::deallocate(local_190,2,8);
    }
    goto LAB_1001f2a7a;
  }
LAB_1001f2410:
  MessageParams::setErrCode((int)local_f8);
  local_1f0 = (QArrayData *)
              QString::fromAscii_helper("1onInvalidVmGenericMsgClosed( PRL_RESULT )",0x2a);
  local_1f8 = 0x80000000;
  local_200.field7 = 0;
  FUN_100a1c600(local_1e8,param_1,&local_1f0,&local_200);
  MessageParams::setCloseMsgSlot(local_f8);
  QVariant::~QVariant(local_1c8);
  if (local_1e8[0] != (int *)0x0) {
    LOCK();
    *local_1e8[0] = *local_1e8[0] + -1;
    local_31 = *local_1e8[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_1e8[0] != (int *)0x0)) {
      operator_delete(local_1e8[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_200);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_31 = *(int *)local_1f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001f2a7a;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_1001f2a7a:
  pMVar7 = (MessageParams *)CMessageManager::instance();
  CMessageManager::showMessageBox(pMVar7);
  FUN_1001f39d0(local_f8);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return 0;
}

