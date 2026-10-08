
void FUN_1000825e0(long param_1,undefined8 param_2)

{
  undefined *self;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  CTaskGenericId *pCVar8;
  long *plVar9;
  void *pvVar10;
  Data *pDVar11;
  QArrayData *pQVar12;
  long lVar13;
  QArrayData *local_f0;
  QArrayData *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  uint uStack_cc;
  undefined1 local_c8 [40];
  QArrayData *local_a0;
  int *local_98 [4];
  QVariant local_78 [2];
  QArrayData *local_60;
  QArrayData *local_58;
  CTaskGenericId local_50 [24];
  QArrayData *local_38;
  undefined1 local_29;
  
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  lVar13 = *(long *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(lVar13 + 0x28);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_2,PTR_s_vmUuid_102269b10);
  if (self == (undefined *)0x0) {
    local_38 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_38,(ID)self,PTR_s_QStringWithString__1022696d0,uVar3);
  }
  lVar4 = FUN_10007f750(uVar6,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10008269a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10008269a:
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_10008b940(lVar4);
  if (lVar5 == 0) {
    lVar13 = FUN_10008b970(lVar4);
    if (lVar13 == 0) {
      return;
    }
    uVar6 = FUN_100794960();
    FUN_10008ba40(&local_e8,lVar4);
    uVar6 = FUN_100795f20(uVar6,&local_e8);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_29 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100082852;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_100082852:
    uVar3 = FUN_10079c3d0();
    FUN_10008ba40(&local_f0,lVar4);
    FUN_10079c520(uVar3,&local_f0,uVar6,0);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        UNLOCK();
        if (*(int *)local_f0 != 0) {
          return;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
    return;
  }
  uVar6 = FUN_10008b940();
  uVar7 = FUN_10018d470(uVar6);
  if ((uVar7 & 0x180) != 0) {
    return;
  }
  uVar6 = FUN_10008b940(lVar4);
  cVar1 = FUN_10018ed10(uVar6);
  if (cVar1 != '\0') {
    pCVar8 = (CTaskGenericId *)CTaskManager::instance();
    FUN_10008ba40(&local_58,lVar4);
    FUN_100086960(local_50,&local_58);
    plVar9 = (long *)CTaskManager::getTaskById(pCVar8);
    CTaskGenericId::~CTaskGenericId(local_50);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100082751;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100082751:
    if ((plVar9 != (long *)0x0) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
      (**(code **)(*plVar9 + 0x80))(plVar9);
      return;
    }
    pvVar10 = operator_new(0x40);
    FUN_10008ba40(&local_60,lVar4);
    FUN_1002e9320(pvVar10,&local_60,1,0);
    CAbstractTask::execute();
    if (*(int *)local_60 == -1) {
      return;
    }
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
    return;
  }
  uVar6 = FUN_10008b940(lVar4);
  cVar1 = FUN_10018c770(uVar6);
  if (cVar1 == '\0') {
    uVar6 = FUN_10008b940(lVar4);
    uVar6 = FUN_10018c280(uVar6);
    cVar1 = FUN_10031b640(uVar6,0);
    if (cVar1 != '\0') {
      return;
    }
    uVar6 = FUN_10008b940(lVar4);
    uVar6 = FUN_10018c280(uVar6);
    local_e0 = 3;
    local_d8 = local_d8 & 0xffffff00;
    uStack_dc = 0;
    uStack_d4 = 0xffff;
    local_d0 = 0;
    uStack_cc = uStack_cc & 0xffffff00;
    FUN_10031a440(uVar6,0);
    return;
  }
  local_a0 = (QArrayData *)QString::fromAscii_helper("onTemplateQuestionAnswered",0x1a);
  FUN_10008ba40(local_c8 + 0x10,lVar4);
  QVariant::QVariant((QVariant *)(local_c8 + 0x18),(QString *)(local_c8 + 0x10));
  FUN_100a1c6b0(local_98,&local_a0,lVar13,local_c8 + 0x18);
  QVariant::~QVariant((QVariant *)(local_c8 + 0x18));
  if (*(int *)local_c8._16_8_ != -1) {
    if (*(int *)local_c8._16_8_ != 0) {
      LOCK();
      *(int *)local_c8._16_8_ = *(int *)local_c8._16_8_ + -1;
      local_29 = *(int *)local_c8._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100082970;
    }
    QArrayData::deallocate((QArrayData *)local_c8._16_8_,2,8);
  }
LAB_100082970:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000829a6;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1000829a6:
  iVar2 = CMessageManager::instance();
  local_c8._8_8_ = PTR_shared_null_1021e15e8;
  local_c8._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x3b6b,*(QStringList **)(lVar13 + 0x30),(QStringList *)(local_c8 + 8),
             (CSlotInfo *)local_c8,SUB81(local_98,0));
  uVar6 = local_c8._0_8_;
  if (*(int *)local_c8._0_8_ != -1) {
    if (*(int *)local_c8._0_8_ != 0) {
      LOCK();
      *(int *)local_c8._0_8_ = *(int *)local_c8._0_8_ + -1;
      local_29 = *(int *)local_c8._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100082a77;
    }
    iVar2 = *(int *)(local_c8._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_c8._0_8_ + 8)) {
      lVar13 = (long)*(int *)(local_c8._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar11 = (Data *)(local_c8._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar12 == 0) {
LAB_100082a56:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_29 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar12 = *(QArrayData **)pDVar11;
            goto LAB_100082a56;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose((Data *)uVar6);
  }
LAB_100082a77:
  uVar6 = local_c8._8_8_;
  if (*(int *)local_c8._8_8_ != -1) {
    if (*(int *)local_c8._8_8_ != 0) {
      LOCK();
      *(int *)local_c8._8_8_ = *(int *)local_c8._8_8_ + -1;
      local_29 = *(int *)local_c8._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100082b01;
    }
    iVar2 = *(int *)(local_c8._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_c8._8_8_ + 8)) {
      lVar13 = (long)*(int *)(local_c8._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar11 = (Data *)(local_c8._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar12 == 0) {
LAB_100082ae0:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_29 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar12 = *(QArrayData **)pDVar11;
            goto LAB_100082ae0;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose((Data *)uVar6);
  }
LAB_100082b01:
  QVariant::~QVariant(local_78);
  if (local_98[0] == (int *)0x0) {
    return;
  }
  LOCK();
  *local_98[0] = *local_98[0] + -1;
  local_29 = *local_98[0] != 0;
  UNLOCK();
  if ((bool)local_29) {
    return;
  }
  if (local_98[0] == (int *)0x0) {
    return;
  }
  operator_delete(local_98[0]);
  return;
}

