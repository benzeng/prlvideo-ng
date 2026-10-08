
void FUN_1007c30b0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  QObject *pQVar6;
  int *piVar7;
  int *local_80;
  QObject *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  int *local_48;
  QObject *local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,param_1 + 0x30);
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get vm instance");
    return;
  }
  FUN_10018c2b0(lVar5);
  lVar5 = CVmConfiguration::getVmHardwareList();
  FUN_10014a5f0(lVar5 + 0x1d0,*(undefined4 *)(param_1 + 0x44));
  CVmGenericNetworkAdapter::getLinkRateLimit();
  cVar3 = CNetLinkRateLimit::isEnable();
  pQVar6 = operator_new(0x18);
  puVar2 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1007b5750(pQVar6,0,param_1,&local_50);
  piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
  local_48 = piVar7;
  local_40 = pQVar6;
  FUN_1007c57e0(param_1 + 0x38,&local_48);
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_31 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar7);
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c31ae;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007c31ae:
  pQVar6 = operator_new(0x18);
  if (cVar3 == '\0') {
    local_68 = (QArrayData *)puVar2;
    FUN_1007b5750(pQVar6,0xf,param_1,&local_68);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c32e0;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1007c32e0:
    QMetaObject::tr((char *)&local_70,(char *)&PTR_staticMetaObject_10222dc30,0x1e18559);
    QAction::setText((QString *)pQVar6);
    if (*(int *)local_70 == -1) goto LAB_1007c333d;
    local_60 = local_70;
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      iVar1 = *(int *)local_70;
      UNLOCK();
      goto joined_r0x0001007c3328;
    }
  }
  else {
    local_58 = (QArrayData *)puVar2;
    FUN_1007b5750(pQVar6,0x10,param_1,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c320d;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1007c320d:
    QMetaObject::tr((char *)&local_60,(char *)&PTR_staticMetaObject_10222dc30,0x1e1853c);
    QAction::setText((QString *)pQVar6);
    if (*(int *)local_60 == -1) goto LAB_1007c333d;
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      iVar1 = *(int *)local_60;
      UNLOCK();
joined_r0x0001007c3328:
      local_31 = iVar1 != 0;
      if ((bool)local_31) goto LAB_1007c333d;
    }
  }
  QArrayData::deallocate(local_60,2,8);
LAB_1007c333d:
  piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
  local_80 = piVar7;
  local_78 = pQVar6;
  FUN_1007c57e0(param_1 + 0x38,&local_80);
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_31 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar7);
    }
  }
  return;
}

