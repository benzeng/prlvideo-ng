
void FUN_100571d70(long param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  Data *pDVar9;
  undefined8 uVar10;
  Data *pDVar11;
  int local_274;
  QVariant local_270;
  QArrayData *local_260;
  QArrayData *local_258;
  Connection local_250 [8];
  Data_conflict local_248;
  undefined4 local_240;
  QArrayData *local_238;
  int *local_230;
  undefined8 local_228;
  QVariant local_210 [2];
  QHostAddress local_1f8 [8];
  QString local_1f0;
  QArrayData *local_1e8;
  CPortForwardEntry local_1e0 [88];
  int local_188;
  CPortForwarding local_120 [168];
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  undefined1 local_49;
  QUuid local_48 [16];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar5;
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selectedIndexes();
  if (*(uint *)(local_78 + 0xc) != *(uint *)(local_78 + 8)) {
    CPortForwarding::CPortForwarding
              (local_120,(CPortForwarding *)(*(long *)(param_1 + 0x58) + 0x20));
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    if (1 < *(uint *)local_78) {
      FUN_100534020(&local_78,*(uint *)(local_78 + 4));
    }
    FUN_10056f960(local_1e0,uVar10,
                  *(undefined8 *)(local_78 + (long)(int)*(uint *)(local_78 + 8) * 8 + 0x10));
    lVar5 = CPortForwarding::getTCP();
    local_70 = *(Data **)(lVar5 + 0x98);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 == 0) {
        QListData::detach((int)&local_70);
        lVar7 = (long)*(int *)(local_70 + 8);
        lVar5 = *(long *)(lVar5 + 0x98);
        if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_70 + lVar7 * 8) &&
           (lVar8 = *(int *)(local_70 + 0xc) - lVar7,
           lVar8 != 0 && lVar7 <= *(int *)(local_70 + 0xc))) {
          _memcpy(local_70 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8)
                  ,lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + 1;
        local_49 = *(int *)local_70 != 0;
        UNLOCK();
      }
    }
    lVar5 = (long)*(int *)(local_70 + 8);
    iVar1 = *(int *)(local_70 + 0xc);
    local_60 = local_70 + (long)iVar1 * 8 + 0x10;
    local_68 = local_70 + lVar5 * 8 + 0x10;
    if (*(int *)(local_70 + 8) != iVar1) {
      lVar7 = (long)iVar1 * 8 + lVar5 * -8;
      pDVar11 = local_70 + lVar5 * 8 + 0x18;
      do {
        pDVar9 = pDVar11;
        uVar10 = 0;
        if (*(int *)(*(long *)(pDVar9 + -8) + 0x58) == local_188) goto LAB_100571ef5;
        lVar7 = lVar7 + -8;
        pDVar11 = pDVar9 + 8;
        local_68 = pDVar9;
      } while (lVar7 != 0);
    }
    uVar10 = 1;
LAB_100571ef5:
    local_58 = 1;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_49 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100571f17;
      }
      QListData::dispose(local_70);
    }
LAB_100571f17:
    uVar3 = CPortForwardEntry::getIncomingPort();
    uVar4 = CPortForwardEntry::getRedirectPort();
    CPortForwardEntry::getRedirectVm();
    QUuid::QUuid(local_48,&local_1f0);
    cVar2 = QUuid::isNull();
    if (cVar2 == '\0') {
      CPortForwardEntry::getRedirectVm();
    }
    else {
      CPortForwardEntry::getRedirectIp();
      QHostAddress::toString();
      QHostAddress::~QHostAddress(local_1f8);
    }
    if (*(int *)local_1f0.field0_0x0 != -1) {
      if (*(int *)local_1f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
        local_49 = *(int *)local_1f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100571fe4;
      }
      QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
    }
LAB_100571fe4:
    local_238 = (QArrayData *)QString::fromAscii_helper("1onPortForwardDialogFinished(int)",0x21);
    local_240 = 0x80000000;
    local_248.field7 = 0;
    FUN_100a1c600(&local_230,param_1,&local_238,&local_248);
    QVariant::~QVariant((QVariant *)&local_248);
    if (*(int *)local_238 != -1) {
      if (*(int *)local_238 != 0) {
        LOCK();
        *(int *)local_238 = *(int *)local_238 + -1;
        local_49 = *(int *)local_238 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100572070;
      }
      QArrayData::deallocate(local_238,2,8);
    }
LAB_100572070:
    plVar6 = operator_new(0x118);
    FUN_10058abb0(plVar6,param_1,uVar10,uVar3,&local_1e8,uVar4);
    QWidget::setAttribute(plVar6,0x37,1);
    cVar2 = FUN_10019cd90(&local_230);
    if (cVar2 != '\0') {
      uVar10 = 0;
      if ((local_230 != (int *)0x0) && (uVar10 = 0, local_230[1] != 0)) {
        uVar10 = local_228;
      }
      FUN_100a1c770(&local_260,&local_230);
      QString::toLatin1();
      if ((1 < *(uint *)local_258) || (*(long *)(local_258 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_258,*(uint *)(local_258 + 4) + 1,*(uint *)(local_258 + 8) >> 0x1f);
      }
      QObject::connect(local_250,plVar6,"2finished(int)",uVar10,
                       local_258 + *(long *)(local_258 + 0x10),0);
      QMetaObject::Connection::~Connection(local_250);
      if (*(int *)local_258 != -1) {
        if (*(int *)local_258 != 0) {
          LOCK();
          *(int *)local_258 = *(int *)local_258 + -1;
          local_49 = *(int *)local_258 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100572198;
        }
        QArrayData::deallocate(local_258,1,8);
      }
LAB_100572198:
      if (*(int *)local_260 != -1) {
        if (*(int *)local_260 != 0) {
          LOCK();
          *(int *)local_260 = *(int *)local_260 + -1;
          local_49 = *(int *)local_260 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1005721ce;
        }
        QArrayData::deallocate(local_260,2,8);
      }
    }
LAB_1005721ce:
    (**(code **)(*plVar6 + 0x1a0))(plVar6);
    local_274 = local_188;
    QVariant::QVariant(&local_270,2,&local_274,0);
    QObject::setProperty((char *)plVar6,(QVariant *)"itemId");
    QVariant::~QVariant(&local_270);
    QVariant::~QVariant(local_210);
    if (local_230 != (int *)0x0) {
      LOCK();
      *local_230 = *local_230 + -1;
      local_49 = *local_230 != 0;
      UNLOCK();
      if ((!(bool)local_49) && (local_230 != (int *)0x0)) {
        operator_delete(local_230);
      }
    }
    if (*(int *)local_1e8 != -1) {
      if (*(int *)local_1e8 != 0) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + -1;
        local_49 = *(int *)local_1e8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100572292;
      }
      QArrayData::deallocate(local_1e8,2,8);
    }
LAB_100572292:
    CPortForwardEntry::~CPortForwardEntry(local_1e0);
    lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
    CPortForwarding::~CPortForwarding(local_120);
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_120[0] = (CPortForwarding)(*(int *)local_78 != 0);
      UNLOCK();
      if ((bool)local_120[0]) goto LAB_10057231f;
    }
    iVar1 = *(int *)(local_78 + 0xc);
    if (iVar1 != *(int *)(local_78 + 8)) {
      lVar7 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar1 * -8;
      pDVar11 = local_78 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_78);
  }
LAB_10057231f:
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

