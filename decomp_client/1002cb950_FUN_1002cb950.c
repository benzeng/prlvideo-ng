
void FUN_1002cb950(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  CTaskGenericId *pCVar5;
  undefined8 uVar6;
  QTimer *this;
  long lVar7;
  long *plVar8;
  QArrayData *pQVar9;
  long lVar10;
  Data *pDVar11;
  QString local_68;
  long local_60;
  long local_58;
  Data *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  pCVar5 = operator_new(0x18);
  FUN_1002cd950(pCVar5,param_3,param_4);
  CAbstractTask::CAbstractTask(param_1,pCVar5);
  *(undefined ***)param_1 = &PTR_FUN_102209900;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)*param_4;
  *(int **)(param_1 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e1288;
  uVar6 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  *(QObject **)(param_1 + 0x38) = param_2;
  this = operator_new(0x20);
  QTimer::QTimer(this,(QObject *)param_1);
  *(QTimer **)(param_1 + 0x40) = this;
  QTimer::setInterval((int)this);
  *(byte *)(*(long *)(param_1 + 0x40) + 0x1c) = *(byte *)(*(long *)(param_1 + 0x40) + 0x1c) | 1;
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
  }
  QObject::connect(&local_58,uVar6,"2serverHardwareChanged( const CHostHardwareInfo& )",param_1,
                   "1onHostHwInfoRecieved( const CHostHardwareInfo& )",0);
  bVar2 = 1;
  if (local_58 != 0) {
    bVar2 = QMetaObject::Connection::isConnected_helper();
    bVar2 = bVar2 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x40),"2timeout()",param_1,
                   "1onConnectionTimeout()",0);
  if ((bVar2 == 0) && (local_60 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
  }
  lVar7 = FUN_10015a340(uVar6);
  plVar8 = (long *)FUN_1002ccce0(*(undefined8 *)(lVar7 + 0x180),param_1 + 0x18);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 200))(&local_40,plVar8);
    cVar3 = QtPrivate::QStringList_contains(&local_40,param_1 + 0x20,1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002cbbc8;
      }
      iVar4 = *(int *)(local_40 + 0xc);
      if (iVar4 != *(int *)(local_40 + 8)) {
        lVar7 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar4 * -8;
        pDVar11 = local_40 + (long)iVar4 * 8 + 8;
        do {
          pQVar9 = *(QArrayData **)pDVar11;
          if (*(int *)pQVar9 == 0) {
LAB_1002cbba0:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar9 = *(QArrayData **)pDVar11;
              goto LAB_1002cbba0;
            }
          }
          pDVar11 = pDVar11 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose(local_40);
    }
LAB_1002cbbc8:
    if (cVar3 != '\0') {
      local_68.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x20);
      if (1 < *(int *)local_68.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
      }
      goto LAB_1002cbd81;
    }
    iVar4 = (**(code **)(*plVar8 + 0xd8))(plVar8);
    if ((iVar4 == 1) || (iVar4 = (**(code **)(*plVar8 + 0xd8))(plVar8), iVar4 == 3)) {
      uVar6 = FUN_100152280();
      (**(code **)(*plVar8 + 200))(&local_50,plVar8);
      if (*(int *)(local_50 + 8) < *(int *)(local_50 + 0xc)) {
        local_48 = *(QArrayData **)(local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10);
        if (1 < *(int *)local_48 + 1U) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + 1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
        }
      }
      else {
        local_48 = (QArrayData *)PTR_shared_null_1021e1288;
      }
      lVar7 = FUN_1001548f0(uVar6,&local_48);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002cbcab;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1002cbcab:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002cbd45;
        }
        iVar4 = *(int *)(local_50 + 0xc);
        if (iVar4 != *(int *)(local_50 + 8)) {
          lVar10 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar4 * -8;
          pDVar11 = local_50 + (long)iVar4 * 8 + 8;
          do {
            pQVar9 = *(QArrayData **)pDVar11;
            if (*(int *)pQVar9 == 0) {
LAB_1002cbd20:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar9 = *(QArrayData **)pDVar11;
                goto LAB_1002cbd20;
              }
            }
            pDVar11 = pDVar11 + -8;
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0);
        }
        QListData::dispose(local_50);
      }
LAB_1002cbd45:
      if ((lVar7 != 0) &&
         ((iVar4 = FUN_10018a9d0(lVar7), iVar4 == 0x30000004 ||
          (iVar4 = FUN_10018a9d0(lVar7), iVar4 == 0x30000005)))) {
        FUN_100188480(&local_68,lVar7);
        goto LAB_1002cbd81;
      }
    }
  }
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
LAB_1002cbd81:
  QString::operator=((QString *)(param_1 + 0x28),&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_68.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
  return;
}

