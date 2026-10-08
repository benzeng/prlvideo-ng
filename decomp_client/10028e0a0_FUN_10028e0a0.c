
void FUN_10028e0a0(long param_1)

{
  char cVar1;
  int iVar2;
  CTaskGenericId *pCVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  QArrayData *local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  iVar2 = CAbstractTask::getCurrentSubTask();
  uVar6 = 7;
  if (iVar2 != 7) {
    if (iVar2 == 5) {
      pCVar3 = (CTaskGenericId *)CTaskManager::instance();
      FUN_10028e4d0(local_48,0x65);
      cVar1 = CTaskManager::isTaskRunning(pCVar3);
      CTaskGenericId::~CTaskGenericId(local_48);
      if (cVar1 != '\0') {
        return;
      }
      uVar6 = 5;
      if (((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) &&
         (*(long *)(param_1 + 0x58) != 0)) {
        QWidget::raise();
        QWidget::activateWindow();
        return;
      }
    }
    else {
      uVar6 = 2;
    }
  }
  if (DAT_102310958 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_100612710(pvVar4);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar4;
  }
  pvVar4 = DAT_102310958;
  uVar5 = FUN_10061b510(*(undefined8 *)(param_1 + 0x18));
  FUN_10015a2b0(&local_50,uVar5);
  local_88 = (int *)0x0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0x80000000;
  local_68.field7 = 0;
  local_58 = 1;
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_10060b2b0(pvVar4,uVar6,&local_50,&local_88,uVar5);
  QVariant::~QVariant((QVariant *)&local_68);
  if (local_88 != (int *)0x0) {
    LOCK();
    *local_88 = *local_88 + -1;
    local_29 = *local_88 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_88 != (int *)0x0)) {
      operator_delete(local_88);
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

