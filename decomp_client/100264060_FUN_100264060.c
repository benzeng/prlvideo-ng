
void FUN_100264060(CAbstractTask *param_1,QObject *param_2,undefined8 param_3,QObject *param_4)

{
  long lVar1;
  Data *pDVar2;
  CTaskGenericId *pCVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  QArrayData *local_60;
  Data *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar3 = operator_new(0x18);
  FUN_10015a2b0(&local_48,param_2);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  FUN_100264890(pCVar3,&local_48,&local_50);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264111;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100264111:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264144;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100264144:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026416a;
    }
    QListData::dispose(local_40);
  }
LAB_10026416a:
  *(undefined ***)param_1 = &PTR_FUN_102205070;
  uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(QObject **)(param_1 + 0x20) = param_2;
  uVar4 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(QObject **)(param_1 + 0x38) = param_4;
  local_58 = (Data *)PTR_shared_null_1021e15e8;
  lVar5 = CVmConfiguration::getVmHardwareList();
  if (*(int *)(*(long *)(lVar5 + 0x1b0) + 8) < *(int *)(*(long *)(lVar5 + 0x1b0) + 0xc)) {
    iVar7 = 0;
    do {
      FUN_100129730((long *)(lVar5 + 0x1b0),iVar7);
      CVmDevice::getSystemName();
      FUN_1000341d0(&local_58,&local_60);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100264230;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100264230:
      iVar7 = iVar7 + 1;
      lVar1 = *(long *)(lVar5 + 0x1b0);
    } while (iVar7 < *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8));
  }
  pvVar6 = operator_new(0x30);
  FUN_10019de40(pvVar6,&local_58,1,param_4);
  pDVar2 = local_58;
  *(void **)(param_1 + 0x28) = pvVar6;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar7 = *(int *)(local_58 + 0xc);
    if (iVar7 != *(int *)(local_58 + 8)) {
      lVar5 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar7 * -8;
      pDVar8 = local_58 + (long)iVar7 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1002642d0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1002642d0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return;
}

