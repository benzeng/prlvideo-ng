
void FUN_100259f20(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3)

{
  QString QVar1;
  QArrayData *pQVar2;
  CTaskGenericId *pCVar3;
  undefined8 uVar4;
  CVmSharedFolder *this;
  CVmSharing *this_00;
  CVmSharing *pCVar5;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar3 = operator_new(0x18);
  FUN_100188480(&local_48,param_2);
  FUN_100190f50(pCVar3,&local_48,param_3);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100259fb0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100259fb0:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100259fd6;
    }
    QListData::dispose(local_40);
  }
LAB_100259fd6:
  *(undefined ***)param_1 = &PTR_FUN_102204bf0;
  uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(QObject **)(param_1 + 0x20) = param_2;
  this = operator_new(200);
  CVmSharedFolder::CVmSharedFolder(this);
  *(CVmSharedFolder **)(param_1 + 0x28) = this;
  this_00 = operator_new(0xb8);
  FUN_10018c2b0(param_2);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  pCVar5 = (CVmSharing *)CVmTools::getVmSharing();
  CVmSharing::CVmSharing(this_00,pCVar5);
  *(CVmSharing **)(param_1 + 0x30) = this_00;
  QVar1.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x28);
  pQVar2 = (QArrayData *)*param_3;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  CVmSharedFolder::setPath(QVar1);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

