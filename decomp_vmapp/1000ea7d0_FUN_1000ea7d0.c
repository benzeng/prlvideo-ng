
QFile * FUN_1000ea7d0(long param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  QFile *this;
  QFile *pQVar5;
  QString local_58;
  QArrayData *local_50;
  QDir local_48 [8];
  QString local_40;
  QArrayData *local_38;
  QDir local_30 [8];
  QString local_28;
  undefined1 local_19;
  
  if ((DAT_1011b6d38 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_1011b6d38), iVar3 != 0)) {
    QCoreApplication::applicationDirPath();
    ___cxa_atexit(FUN_10002f530,&DAT_1011b6d30,0x100000000);
    ___cxa_guard_release(&DAT_1011b6d38);
  }
  QDir::QDir(local_48,(QString *)&DAT_1011b6d30);
  local_50 = (QArrayData *)QString::fromAscii_helper("../Resources/",0xd);
  QDir::absoluteFilePath(&local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000ea890;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000ea890:
  QDir::~QDir(local_48);
  local_58.field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_19 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  pcVar1 = *(char **)(param_1 + 0x18);
  QDir::QDir(local_30,&local_58);
  iVar3 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar4 = _strlen(pcVar1);
    iVar3 = (int)sVar4;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar3);
  QDir::absoluteFilePath(&local_28);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000ea925;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000ea925:
  QDir::~QDir(local_30);
  this = operator_new(0x10,(nothrow_t *)PTR_nothrow_100ba21c8);
  pQVar5 = (QFile *)0x0;
  if (this != (QFile *)0x0) {
    QFile::QFile(this,&local_28);
    cVar2 = (**(code **)(*(long *)this + 0x68))(this,1);
    pQVar5 = this;
    if (cVar2 == '\0') {
      (**(code **)(*(long *)this + 0x20))(this);
      pQVar5 = (QFile *)0x0;
    }
  }
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000ea9b1;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1000ea9b1:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_19 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000ea9e1;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1000ea9e1:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return pQVar5;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return pQVar5;
}

