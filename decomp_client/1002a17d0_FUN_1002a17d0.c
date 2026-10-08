
void FUN_1002a17d0(long param_1,uint param_2,QStringList *param_3,CSlotInfo *param_4)

{
  int iVar1;
  QStringList *pQVar2;
  Data_conflict local_88;
  undefined4 local_80;
  QArrayData *local_78;
  int *local_70 [4];
  QVariant local_50 [2];
  undefined1 local_31;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar1 = CMessageManager::instance();
  pQVar2 = (QStringList *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pQVar2 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pQVar2 = *(QStringList **)(param_1 + 0x30);
  }
  local_78 = (QArrayData *)QString::fromAscii_helper("1onFatalMessageClosed( PRL_RESULT )",0x23);
  local_80 = 0x80000000;
  local_88.field7 = 0;
  FUN_100a1c600(local_70,param_1,&local_78,&local_88);
  CMessageManager::showMessageBox
            (iVar1,(QWidget *)(ulong)param_2,pQVar2,param_3,param_4,SUB81(local_70,0));
  QVariant::~QVariant(local_50);
  if (local_70[0] != (int *)0x0) {
    LOCK();
    *local_70[0] = *local_70[0] + -1;
    local_31 = *local_70[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_70[0] != (int *)0x0)) {
      operator_delete(local_70[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return;
}

