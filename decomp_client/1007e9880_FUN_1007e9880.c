
void FUN_1007e9880(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  CTaskGenericId *pCVar5;
  long *plVar6;
  void *pvVar7;
  QString local_88;
  CTaskGenericId local_80 [24];
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  undefined4 local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FileUtils::tempPath();
  iVar2 = QString::indexOf(param_2,&local_38,0,1);
  if (iVar2 != -1) goto LAB_1007e9b6f;
  local_40 = (QArrayData *)QString::fromAscii_helper("/tmp/",5);
  cVar1 = QString::startsWith(param_2,&local_40,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e9915;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007e9915:
  if (cVar1 != '\0') goto LAB_1007e9b6f;
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) goto LAB_1007e9b6f;
  uVar3 = FUN_100152280();
  cVar1 = FUN_100155010(uVar3,lVar4,0);
  if (cVar1 == '\0') goto LAB_1007e9b6f;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_48 = 0;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::toUtf8();
  iVar2 = FUN_100d50540(local_60 + *(long *)(local_60 + 0x10),&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e99b6;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1007e99b6:
  if (iVar2 == 0) {
    local_68 = (QArrayData *)QString::fromAscii_helper("com.apple.recovery.boot",0x17);
    iVar2 = QString::indexOf(&local_58,&local_68,0,1);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007e9a19;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1007e9a19:
    if (iVar2 == -1) {
      pCVar5 = (CTaskGenericId *)CTaskManager::instance();
      FUN_1002c0730(local_80,(QString *)(param_1 + 0x10),(QString *)(param_1 + 0x18));
      plVar6 = (long *)CTaskManager::getTaskById(pCVar5);
      CTaskGenericId::~CTaskGenericId(local_80);
      if ((plVar6 != (long *)0x0) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
        (**(code **)(*plVar6 + 0x78))(plVar6,0x80000275);
      }
      QString::operator=(&local_50,&local_58);
      local_48 = 2;
      pvVar7 = operator_new(200);
      FUN_1002bfe30(pvVar7,&local_50,lVar4,0,1);
      QString::operator=((QString *)(param_1 + 0x10),&local_58);
      FUN_10015aab0(&local_88,lVar4);
      QString::operator=((QString *)(param_1 + 0x18),&local_88);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_29 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1007e9b07;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_1007e9b07:
      CAbstractTask::execute();
    }
  }
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e9b3f;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007e9b3f:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e9b6f;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1007e9b6f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

