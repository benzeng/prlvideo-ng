
void FUN_10054a7d0(long param_1)

{
  long lVar1;
  int iVar2;
  CVirtualNetworks *pCVar3;
  CVirtualNetwork *this;
  void *pvVar4;
  QStringList *pQVar5;
  Data *pDVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  long lVar9;
  CVirtualNetwork local_210 [216];
  Data *local_138;
  long local_130;
  long local_128;
  QString local_120;
  int *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  Data_conflict local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined1 local_e0 [183];
  undefined1 local_29;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  lVar1 = *(long *)(lVar9 + 0x38);
  uVar7 = 0;
  if ((lVar1 != 0) && (uVar7 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar7 = *(undefined8 *)(lVar9 + 0x40);
  }
  FUN_100175410(uVar7);
  pCVar3 = (CVirtualNetworks *)CParallelsNetworkConfig::getVirtualNetworks();
  CVirtualNetworks::CVirtualNetworks((CVirtualNetworks *)(local_e0 + 0x10),pCVar3);
  iVar2 = FUN_100131370((CVirtualNetworks *)(local_e0 + 0x10));
  CVirtualNetworks::~CVirtualNetworks((CVirtualNetworks *)(local_e0 + 0x10));
  if (iVar2 < 0) {
    iVar2 = CMessageManager::instance();
    pQVar5 = (QStringList *)QWidget::window();
    local_e0._8_8_ = PTR_shared_null_1021e15e8;
    local_e0._0_8_ = PTR_shared_null_1021e15e8;
    local_118 = (int *)0x0;
    uStack_110 = 0;
    local_100 = 0;
    local_108 = 0;
    local_f0 = 0x80000000;
    local_f8.field7 = 0;
    local_e8 = 1;
    CMessageManager::showMessageBox
              (iVar2,(QWidget *)0x3c86,pQVar5,(QStringList *)(local_e0 + 8),(CSlotInfo *)local_e0,
               SUB81(&local_118,0));
    QVariant::~QVariant((QVariant *)&local_f8);
    if (local_118 != (int *)0x0) {
      LOCK();
      *local_118 = *local_118 + -1;
      local_29 = *local_118 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_118 != (int *)0x0)) {
        operator_delete(local_118);
      }
    }
    uVar7 = local_e0._0_8_;
    if (*(int *)local_e0._0_8_ != -1) {
      if (*(int *)local_e0._0_8_ != 0) {
        LOCK();
        *(int *)local_e0._0_8_ = *(int *)local_e0._0_8_ + -1;
        local_29 = *(int *)local_e0._0_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10054ab31;
      }
      iVar2 = *(int *)(local_e0._0_8_ + 0xc);
      if (iVar2 != *(int *)(local_e0._0_8_ + 8)) {
        lVar9 = (long)*(int *)(local_e0._0_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar6 = (Data *)(local_e0._0_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar6;
          if (*(int *)pQVar8 == 0) {
LAB_10054ab10:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_29 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar8 = *(QArrayData **)pDVar6;
              goto LAB_10054ab10;
            }
          }
          pDVar6 = pDVar6 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose((Data *)uVar7);
    }
LAB_10054ab31:
    uVar7 = local_e0._8_8_;
    if (*(int *)local_e0._8_8_ == -1) {
      return;
    }
    if (*(int *)local_e0._8_8_ != 0) {
      LOCK();
      *(int *)local_e0._8_8_ = *(int *)local_e0._8_8_ + -1;
      UNLOCK();
      if (*(int *)local_e0._8_8_ != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar2 = *(int *)(local_e0._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_e0._8_8_ + 8)) {
      lVar9 = (long)*(int *)(local_e0._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar6 = (Data *)(local_e0._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_10054aba0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_10054aba0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar7);
    return;
  }
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),0));
  this = operator_new(0xd8);
  CVirtualNetwork::CVirtualNetwork(this);
  FUN_100b3dea0(this,iVar2,0);
  CVirtualNetwork::getUuid();
  QString::operator=((QString *)(param_1 + 0x30),&local_120);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_29 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054a8d7;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_10054a8d7:
  pvVar4 = operator_new(0x50);
  local_128 = 0;
  local_130 = 0;
  local_138 = (Data *)PTR_shared_null_1021e15e8;
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  lVar1 = *(long *)(lVar9 + 0x38);
  uVar7 = 0;
  if ((lVar1 != 0) && (uVar7 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar7 = *(undefined8 *)(lVar9 + 0x40);
  }
  FUN_1001f41a0(pvVar4,&local_128,&local_130,&local_138,uVar7,0);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054a975;
    }
    QListData::dispose(local_138);
  }
LAB_10054a975:
  if (local_130 != 0) {
    _PrlHandle_Free();
  }
  if (local_128 != 0) {
    _PrlHandle_Free();
  }
  CVirtualNetwork::CVirtualNetwork(local_210,this);
  FUN_1001f42d0(pvVar4,local_210,5);
  CVirtualNetwork::~CVirtualNetwork(local_210);
  CAbstractTask::execute();
  return;
}

