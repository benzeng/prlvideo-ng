
undefined8 FUN_1002823f0(long param_1)

{
  char cVar1;
  undefined2 uVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long local_88;
  QArrayData *local_80;
  QUrl local_78 [8];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    if (DAT_10230ffd0 < 2) {
      return 0;
    }
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"[%s] purchase is not permitted. Skip catalog download.",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return 0;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    uVar7 = 1;
    goto LAB_1002827f3;
  }
  FileUtils::tempPath();
  uVar2 = QDir::separator();
  local_58 = local_60;
  if (1 < *(uint *)local_60 + 1) {
    LOCK();
    *(uint *)local_60 = *(uint *)local_60 + 1;
    local_31 = *(uint *)local_60 != 0;
    UNLOCK();
  }
  uVar6 = *(uint *)(local_60 + 4);
  if ((1 < *(uint *)local_60) || ((*(uint *)(local_60 + 8) & 0x7fffffff) < uVar6 + 2)) {
    QString::reallocData((uint)&local_58,SUB41(uVar6 + 2,0));
    uVar6 = *(uint *)(local_58 + 4);
  }
  *(uint *)(local_58 + 4) = uVar6 + 1;
  *(undefined2 *)(local_58 + (long)(int)uVar6 * 2 + *(long *)(local_58 + 0x10)) = uVar2;
  *(undefined2 *)(local_58 + (long)(int)*(uint *)(local_58 + 4) * 2 + *(long *)(local_58 + 0x10)) =
       0;
  QUrl::QUrl(local_78,param_1 + 0x38,0);
  QUrl::path(&local_70,local_78,0x7f00000);
  QString::QString(&local_40,0x2f);
  QString::section(&local_68,&local_70,&local_40,0xffffffff,0xffffffff,0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100282588;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100282588:
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(uint *)local_58 + 1) {
    LOCK();
    *(uint *)local_58 = *(uint *)local_58 + 1;
    local_31 = *(uint *)local_58 != 0;
    UNLOCK();
  }
  QString::append(&local_50);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002825de;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002825de:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028260e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10028260e:
  QUrl::~QUrl(local_78);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100282647;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100282647:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100282677;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100282677:
  cVar1 = QFile::exists(&local_50);
  if (cVar1 != '\0') {
    QFile::remove(&local_50);
  }
  pQVar3 = operator_new(0x58);
  FileUtils::tempPath();
  CTaskDownloadFile::CTaskDownloadFile((CTaskDownloadFile *)pQVar3,param_1 + 0x38,&local_80,0);
  piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  piVar5 = *(int **)(param_1 + 0x18);
  if (piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      piVar5 = *(int **)(param_1 + 0x18);
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar4;
    *(QObject **)(param_1 + 0x20) = pQVar3;
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_31 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar4);
    }
  }
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100282758;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100282758:
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(&local_88,uVar8,"2downloadFinished(const QString&, int, int)",param_1,
                   "1onCatalogDownloadFinished(const QString&, int, int)",0);
  if (local_88 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  if (*(uint *)local_50.field0_0x0 == 0xffffffff) {
    return 0;
  }
  if (*(uint *)local_50.field0_0x0 != 0) {
    LOCK();
    *(uint *)local_50.field0_0x0 = *(uint *)local_50.field0_0x0 - 1;
    UNLOCK();
    if (*(uint *)local_50.field0_0x0 != 0) {
      return 0;
    }
    local_31 = 0;
  }
  uVar7 = 2;
  local_48 = (QArrayData *)local_50.field0_0x0;
LAB_1002827f3:
  QArrayData::deallocate(local_48,uVar7,8);
  return 0;
}

