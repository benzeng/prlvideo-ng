
QMenu * FUN_1007c1750(QWidget *param_1,long *param_2,QString *param_3,bool *param_4,
                     undefined1 param_5)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  void *pvVar9;
  QMenu *pQVar10;
  long *plVar11;
  ulong uVar12;
  QString *pQVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  int *local_b8;
  QMenu *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar19 = 0;
  if (*(int *)(*param_2 + 0xc) == *(int *)(*param_2 + 8)) {
    return (QMenu *)0x0;
  }
  pvVar9 = (void *)0x0;
  bVar1 = false;
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 3:
    uVar19 = 8;
    break;
  default:
    goto switchD_1007c17c4_caseD_4;
  case 5:
    uVar19 = 4;
    break;
  case 8:
  case 0xc:
    break;
  case 10:
    uVar19 = 6;
    break;
  case 0xb:
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1e184ca);
    EnumUtils::enumToString(&local_50,*(undefined4 *)(param_1 + 0x40));
    puVar8 = (undefined8 *)QString::append(&local_48);
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar8;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c1869;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1007c1869:
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c18ab;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1007c18ab:
    bVar2 = operator==(param_3,&local_40);
    uVar19 = bVar2 + 5 + (uint)bVar2;
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  pvVar9 = operator_new(0x10);
  FUN_1007b5f00(pvVar9,param_1);
  QActionGroup::setExclusive(SUB81(pvVar9,0));
  bVar1 = true;
switchD_1007c17c4_caseD_4:
  pQVar10 = operator_new(0x30);
  QMenu::QMenu(pQVar10,param_1);
  FontUtils::setMacContextMenuFont((QWidget *)pQVar10,false);
  local_70 = (Data *)*param_2;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_70);
      lVar17 = (long)*(int *)(local_70 + 8);
      lVar15 = *param_2;
      if (((Data *)(lVar15 + (long)*(int *)(lVar15 + 8) * 8) != local_70 + lVar17 * 8) &&
         (lVar18 = *(int *)(local_70 + 0xc) - lVar17,
         lVar18 != 0 && lVar17 <= *(int *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar17 * 8 + 0x10,
                (void *)(lVar15 + 0x10 + (long)*(int *)(lVar15 + 8) * 8),lVar18 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      local_58 = 1;
      plVar11 = *(long **)local_68;
      if (*(int *)(param_1 + 0x40) == 0xc) {
        iVar4 = (**(code **)(*plVar11 + 0xc0))(plVar11);
        uVar19 = iVar4 == 0xd | 2;
LAB_1007c1b20:
        pQVar13 = operator_new(0x38);
        (**(code **)(*plVar11 + 0xb8))(&local_90,plVar11);
        (**(code **)(*plVar11 + 0xa8))(&local_a0,plVar11);
        EnumUtils::getLocalizedDeviceName(&local_98);
        local_a8 = (QArrayData *)PTR_shared_null_1021e1288;
        FUN_1007b5c60(pQVar13,uVar19,&local_90,&local_98,&local_a8,param_5,param_1);
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c1be0;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_1007c1be0:
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c1c19;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_1007c1c19:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c1c52;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_1007c1c52:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c1c88;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_1007c1c88:
        if (bVar1) {
          FUN_1007b5f30(pvVar9,pQVar13);
        }
LAB_1007c1ca1:
        FUN_1007be4f0(param_1,pQVar13,pQVar10);
      }
      else {
        if (*(int *)(param_1 + 0x40) != 8) goto LAB_1007c1b20;
        if ((plVar11 != (long *)0x0) &&
           (plVar11 = (long *)___dynamic_cast(plVar11,PTR_typeinfo_1021e16d8,PTR_typeinfo_1021e1680,
                                              0), plVar11 != (long *)0x0)) {
          cVar3 = CHwNetAdapter::isEnabled();
          if (cVar3 == '\0') goto LAB_1007c1cb5;
          iVar4 = CHwNetAdapter::getSysIndex();
          if ((iVar4 == -1) || (uVar12 = CHwNetAdapter::getSysIndex(), (uVar12 & 0x10000000) == 0))
          {
            pQVar13 = operator_new(0x28);
            (**(code **)(*plVar11 + 0xa8))(&local_88,plVar11);
            uVar5 = CHwNetAdapter::getSysIndex();
            FUN_1007b5e80(pQVar13,6,&local_88,uVar5,param_1);
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1007c1df2;
              }
              QArrayData::deallocate(local_88,2,8);
            }
          }
          else {
            pQVar13 = operator_new(0x28);
            (**(code **)(*plVar11 + 0xa8))(&local_78,plVar11);
            uVar5 = CHwNetAdapter::getSysIndex();
            FUN_1007b5e80(pQVar13,9,&local_78,uVar5,param_1);
            if (*(int *)local_78 != -1) {
              if (*(int *)local_78 != 0) {
                LOCK();
                *(int *)local_78 = *(int *)local_78 + -1;
                local_31 = *(int *)local_78 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1007c1d67;
              }
              QArrayData::deallocate(local_78,2,8);
            }
LAB_1007c1d67:
            uVar14 = FUN_100152280();
            uVar14 = FUN_1001547d0(uVar14,param_1 + 0x30);
            FUN_100175410(uVar14);
            uVar14 = CParallelsNetworkConfig::getVirtualNetworks();
            uVar6 = CHwNetAdapter::getSysIndex();
            lVar15 = FUN_100b3f210(uVar14,uVar6 & 0xfffffff);
            if (lVar15 != 0) {
              CVirtualNetwork::getNetworkID();
              QAction::setText(pQVar13);
              if (*(int *)local_80 != -1) {
                if (*(int *)local_80 != 0) {
                  LOCK();
                  *(int *)local_80 = *(int *)local_80 + -1;
                  local_31 = *(int *)local_80 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1007c1df2;
                }
                QArrayData::deallocate(local_80,2,8);
              }
            }
          }
LAB_1007c1df2:
          FUN_1007b5f30(pvVar9);
          iVar4 = CHwNetAdapter::getSysIndex();
          iVar7 = QString::toInt(param_4,0);
          if (iVar4 == iVar7) {
            FUN_1001324d0(pQVar13,1);
          }
          goto LAB_1007c1ca1;
        }
        FUN_100df99c0("","prl_client_app",0);
      }
LAB_1007c1cb5:
      local_68 = local_68 + 8;
    } while (local_68 != local_60);
  }
  local_58 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c1e66;
    }
    QListData::dispose(local_70);
  }
LAB_1007c1e66:
  pQVar10 = operator_new(0x18);
  FUN_1007b5750(pQVar10,1,param_1,param_3);
  QAction::setMenu(pQVar10);
  piVar16 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pQVar10);
  local_b8 = piVar16;
  local_b0 = pQVar10;
  FUN_1007c57e0(param_1 + 0x38,&local_b8);
  if (piVar16 != (int *)0x0) {
    LOCK();
    *piVar16 = *piVar16 + -1;
    local_31 = *piVar16 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar16);
    }
  }
  return pQVar10;
}

