
void FUN_10069a370(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CTaskGenericId *pCVar6;
  void *pvVar7;
  undefined8 uVar8;
  QArrayData *local_88;
  QArrayData *local_80;
  CTaskGenericId local_78 [24];
  QVariant local_60;
  long local_50;
  QVariant local_48;
  undefined1 local_31;
  
  FUN_100695b90();
  QObject::property((char *)&local_48);
  QVariant::~QVariant(&local_48);
  uVar5 = 0;
  uVar4 = 0;
  if ((local_48.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    FUN_100695b90(param_1);
    QObject::property((char *)&local_60);
    QVariant::toList();
    QVariant::~QVariant(&local_60);
    iVar1 = *(int *)(local_50 + 8);
    uVar5 = 0;
    if (*(int *)(local_50 + 0xc) == iVar1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      if (1 < *(int *)(local_50 + 0xc) - iVar1) {
        uVar4 = QVariant::toUInt(*(bool **)(local_50 + 0x10 + (long)iVar1 * 8));
        uVar5 = QVariant::toUInt(*(bool **)(local_50 + 0x18 + (long)*(int *)(local_50 + 8) * 8));
      }
    }
    FUN_100035ea0(&local_50);
  }
  pCVar6 = (CTaskGenericId *)CTaskManager::instance();
  FUN_1001884b0(&local_80,*(undefined8 *)(param_1 + 0x28));
  FUN_100188480(&local_88,*(undefined8 *)(param_1 + 0x28));
  FUN_10017cde0(local_78,&local_80,&local_88);
  cVar3 = CTaskManager::isTaskRunning(pCVar6);
  CTaskGenericId::~CTaskGenericId(local_78);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10069a4d1;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10069a4d1:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10069a501;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10069a501:
  if (cVar3 == '\0') {
    pvVar7 = operator_new(0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = FUN_100695ba0(param_1);
    FUN_100227250(pvVar7,uVar2,uVar8,uVar4,uVar5);
    CAbstractTask::execute();
  }
  return;
}

