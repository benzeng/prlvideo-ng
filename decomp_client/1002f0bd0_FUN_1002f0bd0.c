
void FUN_1002f0bd0(long param_1,int param_2,int param_3)

{
  int iVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  CElevatedProcessLauncher *this;
  QArrayData *pQVar4;
  Data *pDVar5;
  long lVar6;
  long local_78;
  QString local_70;
  QArrayData *local_68;
  AnonymousUnion0 local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100df99c0("","prl_client_app",0,"The disk image mounted with %d, %d",param_2,param_3);
  if (param_3 != 0 || param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002f0c37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))(*(long **)(param_1 + 0x10),0x80000009);
    return;
  }
  local_48.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x58);
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1de6677);
  QString::append(&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f0ca5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002f0ca5:
  cVar3 = FUN_1001247f0(&local_48);
  if (cVar3 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Failed to start command [%s].",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002f0f0c;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1002f0f0c:
    *(undefined4 *)(param_1 + 0x60) = 0x80000009;
    FUN_1002f11f0(param_1);
    goto LAB_1002f0f1d;
  }
  this = operator_new(0x30);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/bin/sh",7);
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_60,&local_48);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("instance_install",0x10);
  local_68 = pQVar4;
  FUN_1000341d0(&local_60,&local_68);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  CElevatedProcessLauncher::CElevatedProcessLauncher
            (this,&local_58,(QStringList *)&local_60.field0,&local_70,
             *(AuthorizationOpaqueRef **)(*(long *)(param_1 + 0x10) + 0x20));
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f0d76;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1002f0d76:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f0da6;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1002f0da6:
  AVar2 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f0e31;
    }
    iVar1 = *(int *)(local_60.field1 + 0xc);
    if (iVar1 != *(int *)(local_60.field1 + 8)) {
      lVar6 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = (Data *)(local_60.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar4 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar4 == 0) {
LAB_1002f0e10:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar4 = *(QArrayData **)pDVar5;
            goto LAB_1002f0e10;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1002f0e31:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f0e61;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1002f0e61:
  QObject::connect(&local_78,this,"2processFinished(PRL_RESULT,int,QProcess::ExitStatus)",param_1,
                   "1handleInstallationResult(PRL_RESULT,int,QProcess::ExitStatus)",0);
  if (local_78 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  QThread::start(this,7);
LAB_1002f0f1d:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}

