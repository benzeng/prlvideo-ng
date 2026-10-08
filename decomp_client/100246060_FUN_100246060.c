
void FUN_100246060(long param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  QString *pQVar4;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 3) {
    if (DAT_102310958 == (void *)0x0) {
      pvVar2 = operator_new(0x18);
      FUN_100612710(pvVar2);
      DAT_102271170 = 1;
      DAT_102310958 = pvVar2;
    }
    pvVar2 = DAT_102310958;
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar3 = FUN_10061b510(uVar3);
    FUN_10015a2b0(&local_38,uVar3);
    local_78 = (int *)0x0;
    uStack_70 = 0;
    local_60 = 0;
    local_68 = 0;
    local_50 = 0x80000000;
    local_58.field7 = 0;
    local_48 = 1;
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
    }
    FUN_10060b2b0(pvVar2,0,&local_38,&local_78,uVar3);
    QVariant::~QVariant((QVariant *)&local_58);
    if (local_78 != (int *)0x0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_21 = *local_78 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_78 != (int *)0x0)) {
        operator_delete(local_78);
      }
    }
    if (*(int *)local_38 == -1) {
      return;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
    return;
  }
  if (iVar1 != 2) {
    return;
  }
  pQVar4 = (QString *)CMessageManager::instance();
  local_30 = (QArrayData *)QString::fromAscii_helper("",0);
  CMessageManager::raiseSpecificMessageBox(pQVar4,(int)&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002461f6;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002461f6:
  if (((*(long *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) &&
     (*(long **)(param_1 + 0x50) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x80))();
  }
  return;
}

