
void FUN_100d756e0(QObject *param_1)

{
  char *pcVar1;
  QString *pQVar2;
  byte bVar3;
  uid_t uVar4;
  QFileSystemWatcher *this;
  long *plVar5;
  size_t sVar6;
  QArrayData *pQVar7;
  int *piVar8;
  int iVar9;
  QString local_38;
  long local_30;
  undefined1 local_21;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10225bb30;
  this = operator_new(0x10,(nothrow_t *)PTR_nothrow_1021e1620);
  if (this == (QFileSystemWatcher *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_100df99c0("[FCWatcher]","ParentalControlWatcher",0,"Failed to allocate path watcher");
    return;
  }
  QFileSystemWatcher::QFileSystemWatcher(this,(QObject *)0x0);
  *(QFileSystemWatcher **)(param_1 + 0x10) = this;
  QObject::connect(&local_30,this,"2directoryChanged(const QString&)",param_1,
                   "1folderChanged(const QString&)",2);
  bVar3 = 1;
  if (local_30 != 0) {
    bVar3 = QMetaObject::Connection::isConnected_helper();
    bVar3 = bVar3 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  if (bVar3 != 0) {
    FUN_100df99c0("[FCWatcher]","ParentalControlWatcher",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "bConnected","../FCWatcher.cpp",0xbd,"CFCWatcher");
  }
  uVar4 = _geteuid();
  plVar5 = (long *)_getpwuid(uVar4);
  if (plVar5 == (long *)0x0) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    piVar8 = ___error();
    FUN_100df99c0("[FCWatcher]","ParentalControlWatcher",1,
                  "Getting user name (uid=%d) failed with err=%d",uVar4,*piVar8);
    return;
  }
  pcVar1 = (char *)*plVar5;
  iVar9 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar6 = _strlen(pcVar1);
    iVar9 = (int)sVar6;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar1,iVar9);
  QString::operator=((QString *)&DAT_102311958,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d75837;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100d75837:
  pQVar2 = *(QString **)(param_1 + 0x10);
  pQVar7 = (QArrayData *)QString::fromAscii_helper("/Library/Managed Preferences",0x1c);
  QFileSystemWatcher::addPath(pQVar2);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_21 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d7588c;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100d7588c:
  if (*plVar5 == 0) {
    DAT_102311960 = 0;
    DAT_102311961 = 0;
  }
  else {
    DAT_102311961 = FUN_100d75430();
    DAT_102311960 = FUN_100d75340(*plVar5);
  }
  return;
}

