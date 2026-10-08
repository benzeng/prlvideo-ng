
undefined8 FUN_1002c4510(long param_1)

{
  int iVar1;
  AnonymousUnion0 AVar2;
  QArrayData *pQVar3;
  CElevatedProcessLauncher *this;
  Data *pDVar4;
  long lVar5;
  long local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  AnonymousUnion0 local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/bin/sh",7);
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("-c",2);
  local_50 = pQVar3;
  FUN_1000341d0(&local_48,&local_50);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c4592;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002c4592:
  pQVar3 = (QArrayData *)
           QString::fromAscii_helper("cp -R \"$0\" \"$1\" && echo \"$2\" > \"$3\"",0x23);
  local_58 = pQVar3;
  FUN_1000341d0(&local_48,&local_58);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c45e2;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002c45e2:
  local_60.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x68);
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_29 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1de4368);
  QString::append(&local_60);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c464d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002c464d:
  FUN_1000341d0(&local_48,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c468a;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1002c468a:
  pQVar3 = (QArrayData *)QString::fromAscii_helper("/Applications/",0xe);
  local_68 = pQVar3;
  FUN_1000341d0(&local_48,&local_68);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c46da;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002c46da:
  pQVar3 = (QArrayData *)QString::fromAscii_helper("Parallels Desktop",0x11);
  local_70 = pQVar3;
  FUN_1000341d0(&local_48,&local_70);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c472a;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002c472a:
  pQVar3 = (QArrayData *)
           QString::fromAscii_helper
                     ("/Applications/Acronis True Image.app/Contents/Resources/referral.txt",0x44);
  local_78 = pQVar3;
  FUN_1000341d0(&local_48,&local_78);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c477a;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002c477a:
  this = operator_new(0x30);
  FUN_1001c7700(&local_80,PTR_s___PRODUCT_NAME_requires_an_admin_102270a88);
  CElevatedProcessLauncher::CElevatedProcessLauncher
            (this,&local_40,(QStringList *)&local_48.field0,&local_80,(AuthorizationOpaqueRef *)0x0)
  ;
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c47e1;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1002c47e1:
  QObject::connect(&local_88,this,"2processFinished(PRL_RESULT,int, QProcess::ExitStatus)",param_1,
                   "1onInstallFinished(PRL_RESULT, int, QProcess::ExitStatus)",0);
  if (local_88 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  CAbstractTask::setWaitForSubTaskCompletion();
  QThread::start(this,7);
  AVar2 = local_48;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_29 = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c48c1;
    }
    iVar1 = *(int *)(local_48.field1 + 0xc);
    if (iVar1 != *(int *)(local_48.field1 + 8)) {
      lVar5 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = (Data *)(local_48.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar3 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar3 == 0) {
LAB_1002c48a0:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar3 = *(QArrayData **)pDVar4;
            goto LAB_1002c48a0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1002c48c1:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return 0;
}

