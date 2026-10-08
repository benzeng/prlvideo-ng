
int FUN_100272140(QObject *param_1)

{
  code *pcVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  int iVar4;
  QObject *pQVar5;
  CQuitAppsDialog *this;
  void *pvVar6;
  long lVar7;
  QArrayData *pQVar8;
  Data *pDVar9;
  long local_88;
  long local_80;
  QArrayData *local_78;
  _func_void_Node_ptr *local_70;
  AnonymousUnion0 local_68;
  AnonymousUnion0 local_60;
  QArrayData *local_58;
  undefined1 local_50 [16];
  long local_40;
  undefined1 local_31;
  
  if (DAT_102310930 == (QObject *)0x0) {
    pQVar5 = operator_new(0x18);
    FUN_1001e5440(pQVar5);
    DAT_102273630 = 1;
    DAT_102310930 = pQVar5;
  }
  pQVar5 = DAT_102310930;
  cVar3 = FUN_1001e4c30(DAT_102310930);
  if ((cVar3 == '\0') && (iVar4 = FUN_1001e5550(pQVar5,9), iVar4 == -0x7fffffed)) {
    return -0x7fffffff;
  }
  QObject::connect(&local_40,pQVar5,"2stepFinished(int, PRL_RESULT)",param_1,
                   "1onInitThreadRunServicesFinished(int, PRL_RESULT)",2);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  iVar4 = FUN_1001e5550(pQVar5,9);
  if (iVar4 != -0x7fffffed) {
    QObject::disconnect(pQVar5,"2stepFinished(int, PRL_RESULT)",param_1,
                        "1onInitThreadRunServicesFinished(int, PRL_RESULT)");
    return iVar4;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar4 = FUN_1001e5550(pQVar5,8);
  if (iVar4 != -0x7fffffed) {
    return 0;
  }
  FUN_100d78ea0(local_50);
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100d793f0(local_50,&local_58);
  this = operator_new(0x98);
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_68.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_70 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  CQuitAppsDialog::CQuitAppsDialog
            (this,(QStringList *)&local_60.field0,(QStringList *)&local_68.field0,(QSet *)&local_70,
             (QWidget *)0x0);
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002722b4;
    }
    QHashData::free_helper(local_70);
  }
LAB_1002722b4:
  AVar2 = local_68;
  if (*(int *)local_68.field1 != -1) {
    if (*(int *)local_68.field1 != 0) {
      LOCK();
      *(int *)local_68.field1 = *(int *)local_68.field1 + -1;
      local_31 = *(int *)local_68.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100272378;
    }
    iVar4 = *(int *)(local_68.field1 + 0xc);
    if (iVar4 != *(int *)(local_68.field1 + 8)) {
      lVar7 = (long)*(int *)(local_68.field1 + 8) * 8 + (long)iVar4 * -8;
      pDVar9 = (Data *)(local_68.field1 + (long)iVar4 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar8 == 0) {
LAB_100272350:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar9;
            goto LAB_100272350;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_100272378:
  AVar2 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100272428;
    }
    iVar4 = *(int *)(local_60.field1 + 0xc);
    if (iVar4 != *(int *)(local_60.field1 + 8)) {
      lVar7 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar4 * -8;
      pDVar9 = (Data *)(local_60.field1 + (long)iVar4 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar8 == 0) {
LAB_100272400:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar9;
            goto LAB_100272400;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_100272428:
  pvVar6 = operator_new(0x20);
  FUN_1001c00f0(pvVar6,6,1);
  CQuitAppsDialog::setChecker((CAbstaractConflictsChecker *)this);
  QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,0x1de0ea9);
  CQuitAppsDialog::setInfoText((QString *)this);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002724ad;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1002724ad:
  QObject::connect(&local_80,this,"2finished(int)",param_1,"1onConflictingAppsDialogClosed(int)",0);
  if (local_80 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  QObject::connect(&local_88,pQVar5,"2stepFinished(int, PRL_RESULT)",this,"1deleteLater()",2);
  if ((cVar3 != '\0') && (local_88 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100272574;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100272574:
  FUN_100d79060(local_50);
  return 0;
}

