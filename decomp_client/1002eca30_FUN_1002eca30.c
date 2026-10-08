
undefined8 FUN_1002eca30(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  QObject *pQVar6;
  int *piVar7;
  void *pvVar8;
  int *piVar9;
  QArrayData *local_80;
  QVariant local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  long local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  if (lVar4 == 0) {
    FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != server","Tasks/CTaskResumeWindow.cpp",0x102,"createWindowForServerContext");
    FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"(!)Error: can\'t obtain server from context");
    return 0x80015342;
  }
  uVar5 = QMetaObject::className();
  lVar1 = *(long *)(param_1 + 0x20);
  iVar3 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),uVar5,0xffffffff,1);
  if (iVar3 != 0) {
    uVar5 = QMetaObject::className();
    lVar1 = *(long *)(param_1 + 0x20);
    iVar3 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),uVar5,0xffffffff,1
                      );
    if (iVar3 != 0) {
      uVar5 = QMetaObject::className();
      lVar4 = *(long *)(param_1 + 0x20);
      iVar3 = QString::compare_helper
                        (*(long *)(lVar4 + 0x10) + lVar4,*(undefined4 *)(lVar4 + 4),uVar5,0xffffffff
                         ,1);
      if (iVar3 != 0) {
        return 0x80000001;
      }
      uVar5 = FUN_1001d50a0();
      uVar5 = FUN_1001d50d0(uVar5);
      pQVar6 = (QObject *)FUN_1001e0340(uVar5);
      piVar7 = (int *)0x0;
      if (pQVar6 != (QObject *)0x0) {
        piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
      }
      piVar9 = *(int **)(param_1 + 0x40);
      if (piVar9 != piVar7) {
        if (piVar7 != (int *)0x0) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
          piVar9 = *(int **)(param_1 + 0x40);
        }
        if (piVar9 != (int *)0x0) {
          LOCK();
          *piVar9 = *piVar9 + -1;
          local_29 = *piVar9 != 0;
          UNLOCK();
          if ((!(bool)local_29) && (pvVar8 = *(void **)(param_1 + 0x40), pvVar8 != (void *)0x0)) {
            operator_delete(pvVar8);
          }
        }
        *(int **)(param_1 + 0x40) = piVar7;
        *(QObject **)(param_1 + 0x48) = pQVar6;
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_29 = *piVar7 != 0;
        UNLOCK();
        if (!(bool)local_29) {
          operator_delete(piVar7);
        }
      }
      goto LAB_1002ecf30;
    }
    local_60 = (QArrayData *)QString::fromAscii_helper("contentProviderClass",0x14);
    FUN_100036660(&local_58,param_1 + 0x38,&local_60);
    QVariant::toString();
    uVar5 = QMetaObject::className();
    iVar3 = QString::compare_helper
                      (local_48 + *(long *)(local_48 + 0x10),*(undefined4 *)(local_48 + 4),uVar5,
                       0xffffffff,1);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002ecd5e;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1002ecd5e:
    QVariant::~QVariant(&local_58);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002ecd97;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1002ecd97:
    if (iVar3 != 0) goto LAB_1002ecf30;
    uVar5 = FUN_10079c3d0();
    local_80 = (QArrayData *)QString::fromAscii_helper("applianceUuid",0xd);
    FUN_100036660(&local_78,param_1 + 0x38,&local_80);
    QVariant::toString();
    pQVar6 = (QObject *)FUN_10079c520(uVar5,&local_68,lVar4,0);
    piVar7 = (int *)0x0;
    if (pQVar6 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
    }
    piVar9 = *(int **)(param_1 + 0x40);
    if (piVar9 != piVar7) {
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        local_29 = *piVar7 != 0;
        UNLOCK();
        piVar9 = *(int **)(param_1 + 0x40);
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_29 = *piVar9 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (pvVar8 = *(void **)(param_1 + 0x40), pvVar8 != (void *)0x0)) {
          operator_delete(pvVar8);
        }
      }
      *(int **)(param_1 + 0x40) = piVar7;
      *(QObject **)(param_1 + 0x48) = pQVar6;
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar7);
      }
    }
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002ecef7;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1002ecef7:
    QVariant::~QVariant(&local_78);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        UNLOCK();
        if (*(int *)local_80 != 0) goto LAB_1002ecf30;
        local_29 = 0;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1002ecf30:
    if (*(long *)(param_1 + 0x40) == 0) {
      return 0x80015344;
    }
    if (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0) {
      if (*(long *)(param_1 + 0x48) != 0) {
        return 0;
      }
      return 0x80015344;
    }
    return 0x80015344;
  }
  pvVar8 = operator_new(0x58);
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100291eb0(pvVar8,lVar4,0,9,5,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ecc7c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002ecc7c:
  QObject::connect(&local_40,pvVar8,"2taskFinished(PRL_RESULT)",param_1,
                   "1onPreferencesOpened(PRL_RESULT)",0);
  if (local_40 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    if (cVar2 != '\0') goto LAB_1002ecdf0;
  }
  FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                "Tasks/CTaskResumeWindow.cpp",0x10d,"createWindowForServerContext");
LAB_1002ecdf0:
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}

