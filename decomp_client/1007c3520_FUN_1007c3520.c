
void FUN_1007c3520(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  QObject *pQVar4;
  int *piVar5;
  CVirtualNetworks *pCVar6;
  long lVar7;
  int *local_148;
  QObject *local_140;
  QArrayData *local_138;
  Data *local_130;
  Data *local_128;
  Data *local_120;
  undefined4 local_118;
  CVirtualNetworks local_110 [152];
  Data *local_78;
  QArrayData *local_70;
  int *local_68;
  QObject *local_60;
  int *local_58;
  QObject *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_1007bf8a0(param_1,1);
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001547d0(uVar2,param_1 + 0x30);
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance");
    return;
  }
  cVar1 = FUN_1001754c0(lVar3,9);
  if (cVar1 != '\0') {
    pQVar4 = operator_new(0x28);
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,(int)PTR_s_Routed_10226e7b0);
    FUN_1007b5e80(pQVar4,0xe,&local_40,0xffffffff,param_1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c35f6;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1007c35f6:
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,(int)PTR_s_Routed_10226e7b0);
    QAction::setText((QString *)pQVar4);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c364f;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1007c364f:
    QAction::setCheckable(SUB81(pQVar4,0));
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    local_58 = piVar5;
    local_50 = pQVar4;
    FUN_1007c57e0(param_1 + 0x38,&local_58);
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar5);
      }
    }
    pQVar4 = operator_new(0x18);
    local_70 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_1007b5750(pQVar4,0,param_1,&local_70);
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    local_68 = piVar5;
    local_60 = pQVar4;
    FUN_1007c57e0(param_1 + 0x38,&local_68);
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar5);
      }
    }
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c373e;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_1007c373e:
  FUN_100175410(lVar3);
  pCVar6 = (CVirtualNetworks *)CParallelsNetworkConfig::getVirtualNetworks();
  CVirtualNetworks::CVirtualNetworks(local_110,pCVar6);
  local_130 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_130);
      lVar3 = (long)*(int *)(local_130 + 8);
      if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_130 + lVar3 * 8) &&
         (lVar7 = *(int *)(local_130 + 0xc) - lVar3,
         lVar7 != 0 && lVar3 <= *(int *)(local_130 + 0xc))) {
        _memcpy(local_130 + lVar3 * 8 + 0x10,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_128 = local_130 + (long)*(int *)(local_130 + 8) * 8 + 0x10;
  local_120 = local_130 + (long)*(int *)(local_130 + 0xc) * 8 + 0x10;
  if (*(int *)(local_130 + 8) != *(int *)(local_130 + 0xc)) {
    do {
      local_118 = 1;
      cVar1 = CVirtualNetwork::isEnabled();
      if (cVar1 != '\0') {
        pQVar4 = operator_new(0x28);
        CVirtualNetwork::getNetworkID();
        FUN_1007b5e80(pQVar4,10,&local_138,0,param_1);
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c38ca;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_1007c38ca:
        piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
        local_148 = piVar5;
        local_140 = pQVar4;
        FUN_1007c57e0(param_1 + 0x38,&local_148);
        if (piVar5 != (int *)0x0) {
          LOCK();
          *piVar5 = *piVar5 + -1;
          local_31 = *piVar5 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            operator_delete(piVar5);
          }
        }
      }
      local_128 = local_128 + 8;
    } while (local_128 != local_120);
  }
  local_118 = 1;
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c3965;
    }
    QListData::dispose(local_130);
  }
LAB_1007c3965:
  CVirtualNetworks::~CVirtualNetworks(local_110);
  return;
}

