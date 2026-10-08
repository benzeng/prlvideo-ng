
void FUN_1001884e0(long param_1)

{
  long lVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  QMapNodeBase *pQVar6;
  ulong *puVar7;
  undefined8 uVar8;
  QMapNodeBase *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar2 = operator_new(0x180);
  FUN_100317650(pQVar2,param_1);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(param_1 + 200);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 200);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 200) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 200));
      }
    }
    *(int **)(param_1 + 200) = piVar3;
    *(QObject **)(param_1 + 0xd0) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_21 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar3);
    }
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 200) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 200) + 4) != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0xd0);
  }
  FUN_100317c80(uVar8);
  pvVar5 = operator_new(0x18);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  FUN_1007b64c0(pvVar5,&local_30);
  *(void **)(param_1 + 0xe0) = pvVar5;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018860a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10018860a:
  if (*(int *)(param_1 + 0x48) == 0x30000004) {
    FUN_10018a9e0(param_1);
  }
  FUN_10018b760(param_1);
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
     (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) {
    local_38 = *(QMapNodeBase **)(lVar1 + 0x128);
    if (*(int *)local_38 == 0) {
      pQVar6 = (QMapNodeBase *)QMapDataBase::createData();
      lVar1 = *(long *)(*(long *)(lVar1 + 0x128) + 0x10);
      local_38 = pQVar6;
      if (lVar1 != 0) {
        puVar7 = (ulong *)FUN_100137920(lVar1,pQVar6);
        *(ulong **)(pQVar6 + 0x10) = puVar7;
        *puVar7 = *puVar7 & 3 | (ulong)(pQVar6 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*(int *)local_38 != -1) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      local_38 = *(QMapNodeBase **)(lVar1 + 0x128);
    }
    FUN_10010fb60(&local_38,*(undefined8 *)(param_1 + 0x80));
    pQVar6 = local_38;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100188711;
      }
      if (*(long *)(local_38 + 0x10) != 0) {
        FUN_100137f10();
        QMapDataBase::freeTree(pQVar6,(int)*(undefined8 *)(pQVar6 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar6);
    }
  }
LAB_100188711:
  FUN_10018b8f0(param_1);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar5 = operator_new(0x18);
    FUN_1001a61d0(pvVar5);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar5;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,
                "2vmConfigurationChanged(const QString&, const CVmConfiguration&)",
                "2vmConfigurationChanged(const QString&, const CVmConfiguration&)",0);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar5 = operator_new(0x18);
    FUN_1001a61d0(pvVar5);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar5;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,
                "2vmConfigurationChanged(const GUI::VmId&, const CVmConfiguration&)",
                "2vmConfigurationChanged(const GUI::VmId&, const CVmConfiguration&)",0);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar5 = operator_new(0x18);
    FUN_1001a61d0(pvVar5);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar5;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,
                "2vmStateChanged(const GUI::VmId&,VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                "2vmStateChanged(const GUI::VmId&,VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",0);
  pvVar5 = operator_new(0x18);
  FUN_1007c8b10(pvVar5,param_1);
  *(void **)(param_1 + 0x108) = pvVar5;
  pvVar5 = operator_new(0x18);
  FUN_1007c9200(pvVar5,param_1);
  *(void **)(param_1 + 0x110) = pvVar5;
  CSdkCommunicator::startCommunication();
  return;
}

