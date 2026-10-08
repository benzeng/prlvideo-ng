
undefined8 FUN_100288fd0(long param_1)

{
  QString *this;
  int iVar1;
  undefined8 uVar2;
  CVmConfiguration *pCVar3;
  undefined8 uVar4;
  QString QVar5;
  QObject *pQVar6;
  long lVar7;
  Data *pDVar8;
  long lVar9;
  long local_210;
  QVariant local_208;
  QArrayData *local_1f8;
  long local_1f0;
  Data *local_1e8;
  QArrayData *local_1e0;
  Data *local_1d8;
  CVmConfiguration local_1d0 [252];
  int local_d4;
  Data *local_d0;
  Data *local_c8;
  Data *local_c0;
  undefined4 local_b8;
  int local_ac;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  undefined4 local_90;
  Data *local_88;
  QArrayData *local_80;
  QString local_78;
  QVariant local_70;
  QArrayData *local_60;
  QString local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar7;
  QObject::property((char *)&local_70);
  QVariant::toString();
  iVar1 = *(int *)(local_60 + 4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100289061;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100289061:
  QVariant::~QVariant(&local_70);
  if (iVar1 == 0) {
    QObject::property((char *)&local_208);
    QVariant::toString();
    iVar1 = *(int *)(local_1f8 + 4);
    if (*(int *)local_1f8 != -1) {
      if (*(int *)local_1f8 != 0) {
        LOCK();
        *(int *)local_1f8 = *(int *)local_1f8 + -1;
        local_49 = *(int *)local_1f8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10028917a;
      }
      QArrayData::deallocate(local_1f8,2,8);
    }
LAB_10028917a:
    QVariant::~QVariant(&local_208);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
      CAbstractTask::setWaitForSubTaskCompletion();
      uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
      uVar2 = FUN_100177b60(uVar2,param_1 + 0x50);
      QObject::connect(&local_210,uVar2,"2jobCompleted(PRL_RESULT)",param_1,
                       "1onPasswordSetComplete(PRL_RESULT)",0);
      if (local_210 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_210);
    }
    goto LAB_1002898ff;
  }
  uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  this = (QString *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x18) == 1) {
    QString::fromUtf8_helper((char *)&local_58,0x1e41978);
    QString::operator=(this,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_49 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1002892b2;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
  else {
    FUN_100dda3c0(local_48);
    FUN_100dda260(&local_80,local_48);
    FUN_1009dfc00(&local_78,this,&local_80);
    QString::operator=(this,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_49 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100289282;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_100289282:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_49 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1002892b2;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_1002892b2:
  FUN_10018c2b0(uVar2);
  CVmConfiguration::getVmSecurity();
  CVmSecurity::getPasswordProtectedOperations();
  CVmPasswordProtectedOperations::getLockedOperations();
  if (*(int *)(*(long *)(param_1 + 0x58) + 0xc) != *(int *)(*(long *)(param_1 + 0x58) + 8)) {
    if (*(int *)(this->field0_0x0 + 4) == 0) {
      FUN_10012b980(&local_d0,param_1 + 0x58);
      local_c8 = local_d0 + (long)*(int *)(local_d0 + 8) * 8 + 0x10;
      local_c0 = local_d0 + (long)*(int *)(local_d0 + 0xc) * 8 + 0x10;
      if (*(int *)(local_d0 + 8) != *(int *)(local_d0 + 0xc)) {
        do {
          local_b8 = 1;
          local_d4 = **(int **)local_c8;
          iVar1 = *(int *)(local_88 + 8);
          if (iVar1 != *(int *)(local_88 + 0xc)) {
            pDVar8 = local_88 + (long)iVar1 * 8 + 0x10;
            lVar7 = (long)*(int *)(local_88 + 0xc) * 8 + (long)iVar1 * -8;
            do {
              if (**(int **)pDVar8 == local_d4) {
                FUN_10028a360(&local_88,&local_d4);
                break;
              }
              pDVar8 = pDVar8 + 8;
              lVar7 = lVar7 + -8;
            } while (lVar7 != 0);
          }
          local_c8 = local_c8 + 8;
        } while (local_c8 != local_c0);
      }
      local_b8 = 1;
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_49 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100289646;
        }
        iVar1 = *(int *)(local_d0 + 0xc);
        if (iVar1 != *(int *)(local_d0 + 8)) {
          lVar7 = (long)*(int *)(local_d0 + 8) * 8 + (long)iVar1 * -8;
          pDVar8 = local_d0 + (long)iVar1 * 8 + 8;
          do {
            if (*(void **)pDVar8 != (void *)0x0) {
              operator_delete(*(void **)pDVar8);
            }
            pDVar8 = pDVar8 + -8;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        QListData::dispose(local_d0);
      }
    }
    else {
      FUN_10012b980(&local_a8,param_1 + 0x58);
      local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
      local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
      if (*(int *)(local_a8 + 8) != *(int *)(local_a8 + 0xc)) {
        do {
          local_90 = 1;
          local_ac = **(int **)local_a0;
          iVar1 = *(int *)(local_88 + 8);
          if (iVar1 != *(int *)(local_88 + 0xc)) {
            pDVar8 = local_88 + (long)iVar1 * 8 + 0x10;
            lVar7 = (long)*(int *)(local_88 + 0xc) * 8 + (long)iVar1 * -8;
            do {
              if (**(int **)pDVar8 == local_ac) goto LAB_1002893a3;
              pDVar8 = pDVar8 + 8;
              lVar7 = lVar7 + -8;
            } while (lVar7 != 0);
          }
          FUN_10012b680(&local_88,&local_ac);
LAB_1002893a3:
          local_a0 = local_a0 + 8;
        } while (local_a0 != local_98);
      }
      local_90 = 1;
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_49 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100289646;
        }
        iVar1 = *(int *)(local_a8 + 0xc);
        if (iVar1 != *(int *)(local_a8 + 8)) {
          lVar7 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar1 * -8;
          pDVar8 = local_a8 + (long)iVar1 * 8 + 8;
          do {
            if (*(void **)pDVar8 != (void *)0x0) {
              operator_delete(*(void **)pDVar8);
            }
            pDVar8 = pDVar8 + -8;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        QListData::dispose(local_a8);
      }
    }
  }
LAB_100289646:
  pCVar3 = (CVmConfiguration *)FUN_10018c2b0(uVar2);
  CVmConfiguration::CVmConfiguration(local_1d0,pCVar3);
  CVmConfiguration::getVmSecurity();
  uVar4 = CVmSecurity::getPasswordProtectedOperations();
  FUN_10012b980(&local_1d8,&local_88);
  CVmPasswordProtectedOperations::setLockedOperations(uVar4,&local_1d8);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_49 = *(int *)local_1d8 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100289729;
    }
    iVar1 = *(int *)(local_1d8 + 0xc);
    if (iVar1 != *(int *)(local_1d8 + 8)) {
      lVar7 = (long)*(int *)(local_1d8 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_1d8 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_1d8);
  }
LAB_100289729:
  CVmConfiguration::getVmSettings();
  QVar5.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmSettings::getLockDown();
  local_1e0 = (QArrayData *)this->field0_0x0;
  if (1 < *(int *)local_1e0 + 1U) {
    LOCK();
    *(int *)local_1e0 = *(int *)local_1e0 + 1;
    local_49 = *(int *)local_1e0 != 0;
    UNLOCK();
  }
  CVmLockDown::setHash(QVar5);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_49 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10028979d;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_10028979d:
  pQVar6 = operator_new(600);
  local_1e8 = (Data *)PTR_shared_null_1021e15e8;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
  }
  FUN_100210650(pQVar6,local_1d0,uVar2,&local_1e8,uVar4);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_49 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100289818;
    }
    QListData::dispose(local_1e8);
  }
LAB_100289818:
  QObject::connect(&local_1f0,pQVar6,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_1f0 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_1f0);
  CAbstractTask::setWaitForSubTaskCompletion();
  QTimer::singleShot(0,pQVar6,"1execute()");
  CVmConfiguration::~CVmConfiguration(local_1d0);
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_49 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1002898ff;
    }
    iVar1 = *(int *)(local_88 + 0xc);
    if (iVar1 != *(int *)(local_88 + 8)) {
      lVar9 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_88 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_88);
  }
LAB_1002898ff:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

