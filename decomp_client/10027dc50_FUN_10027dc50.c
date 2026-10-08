
undefined8 FUN_10027dc50(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  QArrayData *local_b0;
  CTaskGenericId local_a8 [24];
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  iVar2 = FUN_100154d30(uVar4);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      uVar4 = FUN_100152280();
      lVar5 = FUN_100154790(uVar4,iVar2);
      if ((lVar5 != 0) && (iVar3 = FUN_10015a6e0(lVar5), iVar3 == 0)) {
        uVar4 = FUN_100794960();
        iVar3 = FUN_100796670(uVar4,lVar5);
        iVar7 = 0;
        if (0 < iVar3) {
          do {
            uVar4 = FUN_100794960();
            lVar6 = FUN_1007964d0(uVar4,lVar5,iVar7);
            if ((lVar6 != 0) && (*(int *)(lVar6 + 0x160) == 3)) {
              uVar4 = FUN_100794960();
              CAppliance::getApplianceId();
              lVar6 = FUN_100796290(uVar4,&local_40);
              if (*(int *)local_40 != -1) {
                if (*(int *)local_40 != 0) {
                  LOCK();
                  *(int *)local_40 = *(int *)local_40 + -1;
                  local_31 = *(int *)local_40 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10027dd66;
                }
                QArrayData::deallocate(local_40,2,8);
              }
LAB_10027dd66:
              if ((lVar6 != 0) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
                local_80 = (QArrayData *)
                           QString::fromAscii_helper("1onStopApplianceDownloadingFinished()",0x25);
                local_88 = 0x80000000;
                local_90.field7 = 0;
                FUN_100a1c600(local_78,param_1,&local_80,&local_90);
                QVariant::~QVariant((QVariant *)&local_90);
                if (*(int *)local_80 != -1) {
                  if (*(int *)local_80 != 0) {
                    LOCK();
                    *(int *)local_80 = *(int *)local_80 + -1;
                    local_31 = *(int *)local_80 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10027ddfc;
                  }
                  QArrayData::deallocate(local_80,2,8);
                }
LAB_10027ddfc:
                uVar4 = CTaskManager::instance();
                CAppliance::getApplianceId();
                FUN_10023fc80(local_a8,&local_b0);
                CTaskManager::addTaskWatcher(uVar4,local_78,local_a8,4);
                CTaskGenericId::~CTaskGenericId(local_a8);
                if (*(int *)local_b0 != -1) {
                  if (*(int *)local_b0 != 0) {
                    LOCK();
                    *(int *)local_b0 = *(int *)local_b0 + -1;
                    local_31 = *(int *)local_b0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10027de7b;
                  }
                  QArrayData::deallocate(local_b0,2,8);
                }
LAB_10027de7b:
                CAbstractTask::setWaitForSubTaskCompletion();
                QVariant::~QVariant(local_58);
                if (local_78[0] != (int *)0x0) {
                  LOCK();
                  *local_78[0] = *local_78[0] + -1;
                  local_31 = *local_78[0] != 0;
                  UNLOCK();
                  if ((!(bool)local_31) && (local_78[0] != (int *)0x0)) {
                    operator_delete(local_78[0]);
                  }
                }
              }
            }
            iVar7 = iVar7 + 1;
            uVar4 = FUN_100794960();
            iVar3 = FUN_100796670(uVar4,lVar5);
          } while (iVar7 < iVar3);
        }
      }
      iVar2 = iVar2 + 1;
      uVar4 = FUN_100152280();
      iVar3 = FUN_100154d30(uVar4);
    } while (iVar2 < iVar3);
  }
  return 0;
}

