
void FUN_1007c0ba0(long param_1)

{
  long lVar1;
  long *plVar2;
  CHwUsbDevice *pCVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  QIcon *pQVar9;
  undefined8 uVar10;
  CVmExternalDevices *pCVar11;
  QObject *pQVar12;
  int *piVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  int *local_108;
  QObject *local_100;
  QArrayData *local_f8;
  int *local_f0;
  QObject *local_e8;
  int *local_e0;
  QObject *local_d8;
  QArrayData *local_d0;
  int *local_c8;
  QObject *local_c0;
  int *local_b8;
  QIcon *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QIcon local_90 [8];
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QIcon *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar6 = FUN_100152280();
  lVar1 = param_1 + 0x30;
  lVar7 = FUN_1001547d0(uVar6,lVar1);
  if (lVar7 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance");
    return;
  }
  lVar8 = FUN_10015a340(lVar7);
  uVar6 = FUN_10015cb20(lVar7,lVar1);
  FUN_1001136f0(*(undefined8 *)(lVar8 + 0x180));
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  plVar2 = *(long **)(lVar8 + 0x180);
  local_68 = (Data *)*plVar2;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_68);
      lVar15 = (long)*(int *)(local_68 + 8);
      lVar8 = *plVar2;
      if (((Data *)(lVar8 + (long)*(int *)(lVar8 + 8) * 8) != local_68 + lVar15 * 8) &&
         (lVar16 = *(int *)(local_68 + 0xc) - lVar15,
         lVar16 != 0 && lVar15 <= *(int *)(local_68 + 0xc))) {
        _memcpy(local_68 + lVar15 * 8 + 0x10,(void *)(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8),
                lVar16 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  lVar8 = param_1 + 0x38;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      pCVar3 = *(CHwUsbDevice **)local_60;
      iVar5 = (**(code **)(*(long *)pCVar3 + 0xd8))(pCVar3);
      if (iVar5 != 2) {
        pQVar9 = operator_new(0x38);
        (**(code **)(*(long *)pCVar3 + 0xb8))(&local_78,pCVar3);
        (**(code **)(*(long *)pCVar3 + 0xa8))(&local_80,pCVar3);
        local_88 = (QArrayData *)PTR_shared_null_1021e1288;
        FUN_1007b5c60(pQVar9,1,&local_78,&local_80,&local_88,0,param_1);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c0da2;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1007c0da2:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c0dd4;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1007c0dd4:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c0e04;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_1007c0e04:
        local_70 = pQVar9;
        QAction::setCheckable(SUB81(pQVar9,0));
        uVar10 = FUN_10016f500(lVar7);
        cVar4 = FUN_10061b4d0(uVar10,0x80);
        if (cVar4 != '\0') {
          FUN_10018c2b0(uVar6);
          CVmConfiguration::getVmSettings();
          CVmSettings::getUsbController();
          pCVar11 = (CVmExternalDevices *)CVmUsbController::getExternalDevices();
          CXmlUsbHelper::IsUsbDeviceAllowed(pCVar3,pCVar11);
        }
        QAction::setEnabled(SUB81(pQVar9,0));
        cVar4 = FUN_1001b3b80(pCVar3,lVar1);
        if (cVar4 == '\0') {
          FUN_1001324d0(pQVar9,0);
        }
        else {
          FUN_1001324d0(pQVar9,1);
          iVar5 = (**(code **)(*(long *)pCVar3 + 0xd8))(pCVar3);
          if (iVar5 == 3) {
            local_98.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)
                 QString::fromAscii_helper(":/pixmaps/MenuIcons/vm_usb_connecting.png",0x29);
            QIcon::QIcon(local_90,&local_98);
            QAction::setIcon(pQVar9);
            QIcon::~QIcon(local_90);
            if (*(int *)local_98.field0_0x0 != -1) {
              if (*(int *)local_98.field0_0x0 != 0) {
                LOCK();
                *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
                local_31 = *(int *)local_98.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1007c0f2a;
              }
              QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
            }
          }
        }
LAB_1007c0f2a:
        (**(code **)(*(long *)pCVar3 + 0xb8))(&local_a0,pCVar3);
        cVar4 = FUN_1001b36b0(&local_a0);
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c0f84;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_1007c0f84:
        if (cVar4 == '\0') {
          (**(code **)(*(long *)pCVar3 + 0xb8))(&local_a8,pCVar3);
          cVar4 = FUN_1001b35f0(&local_a8);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007c0ffa;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_1007c0ffa:
          if (cVar4 == '\0') {
            piVar13 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pQVar9);
            local_b8 = piVar13;
            local_b0 = pQVar9;
            FUN_1007c57e0(lVar8,&local_b8);
            if (piVar13 != (int *)0x0) {
              LOCK();
              *piVar13 = *piVar13 + -1;
              local_31 = *piVar13 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                operator_delete(piVar13);
              }
            }
          }
          else {
            FUN_1007c5780(&local_40,&local_70);
          }
        }
        else {
          FUN_1007c5780(&local_48,&local_70);
        }
      }
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c10a3;
    }
    QListData::dispose(local_68);
  }
LAB_1007c10a3:
  if (*(int *)(local_40 + 0xc) != *(int *)(local_40 + 8)) {
    pQVar12 = operator_new(0x18);
    local_d0 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_1007b5750(pQVar12,0,param_1,&local_d0);
    piVar13 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar12);
    local_c8 = piVar13;
    local_c0 = pQVar12;
    FUN_1007c57e0(lVar8,&local_c8);
    if (piVar13 != (int *)0x0) {
      LOCK();
      *piVar13 = *piVar13 + -1;
      local_31 = *piVar13 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar13);
      }
    }
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c1169;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
  }
LAB_1007c1169:
  if (*(int *)(local_40 + 8) < *(int *)(local_40 + 0xc)) {
    iVar5 = 0;
    do {
      puVar14 = (undefined8 *)FUN_1007c5a30(&local_40,iVar5);
      pQVar12 = (QObject *)*puVar14;
      piVar13 = (int *)0x0;
      if (pQVar12 != (QObject *)0x0) {
        piVar13 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar12);
      }
      local_e0 = piVar13;
      local_d8 = pQVar12;
      FUN_1007c57e0(lVar8,&local_e0);
      if (piVar13 != (int *)0x0) {
        LOCK();
        *piVar13 = *piVar13 + -1;
        local_31 = *piVar13 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar13);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_40 + 0xc) - *(int *)(local_40 + 8));
  }
  if (*(int *)(local_48 + 0xc) != *(int *)(local_48 + 8)) {
    pQVar12 = operator_new(0x18);
    local_f8 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_1007b5750(pQVar12,0,param_1,&local_f8);
    piVar13 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar12);
    local_f0 = piVar13;
    local_e8 = pQVar12;
    FUN_1007c57e0(lVar8,&local_f0);
    if (piVar13 != (int *)0x0) {
      LOCK();
      *piVar13 = *piVar13 + -1;
      local_31 = *piVar13 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar13);
      }
    }
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c12c3;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
  }
LAB_1007c12c3:
  if (*(int *)(local_48 + 8) < *(int *)(local_48 + 0xc)) {
    iVar5 = 0;
    do {
      puVar14 = (undefined8 *)FUN_1007c5a30(&local_48,iVar5);
      pQVar12 = (QObject *)*puVar14;
      piVar13 = (int *)0x0;
      if (pQVar12 != (QObject *)0x0) {
        piVar13 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar12);
      }
      local_108 = piVar13;
      local_100 = pQVar12;
      FUN_1007c57e0(lVar8,&local_108);
      if (piVar13 != (int *)0x0) {
        LOCK();
        *piVar13 = *piVar13 + -1;
        local_31 = *piVar13 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar13);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_48 + 0xc) - *(int *)(local_48 + 8));
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c137f;
    }
    QListData::dispose(local_48);
  }
LAB_1007c137f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

