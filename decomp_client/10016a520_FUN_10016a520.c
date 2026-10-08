
void FUN_10016a520(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  QArrayData *pQVar10;
  QArrayData *pQVar11;
  QArrayData *pQVar12;
  undefined8 local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CVmEventBase::getEventIssuerId();
  lVar4 = FUN_10015cb20(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016a584;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10016a584:
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance to change device state.");
    return;
  }
  iVar1 = FUN_10018a9d0(lVar4);
  if (iVar1 == 0x30000007) {
    return;
  }
  iVar1 = FUN_10018a9d0(lVar4);
  if (iVar1 == 0x30000006) {
    return;
  }
  iVar1 = FUN_10018a9d0(lVar4);
  if (iVar1 == 0x30000003) {
    return;
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  plVar7 = *(long **)(param_2 + 0xf8);
  local_68 = (Data *)*plVar7;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_68);
      lVar8 = (long)*(int *)(local_68 + 8);
      lVar5 = *plVar7;
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_68 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_68 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar8 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar9 * 8);
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
  local_e0 = 0;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    local_e0 = 0;
    do {
      local_50 = 1;
      uVar6 = *(undefined8 *)local_60;
      CVmEventParameter::getParamName();
      iVar1 = QString::compare_helper
                        (local_70 + *(long *)(local_70 + 0x10),*(undefined4 *)(local_70 + 4),
                         "device_type",0xffffffff,1);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10016a722;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_10016a722:
      if (iVar1 == 0) {
        CVmEventParameter::getParamValue();
        local_e0 = QString::toInt((bool *)&local_78,0);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10016a850;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
      else {
        CVmEventParameter::getParamName();
        iVar1 = QString::compare_helper
                          (local_80 + *(long *)(local_80 + 0x10),*(undefined4 *)(local_80 + 4),
                           "vm_config_dev_state",0xffffffff,1);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10016a78d;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10016a78d:
        if (iVar1 == 0) {
          FUN_1000aa610(&local_88,uVar6);
          QString::operator=(&local_48,&local_88);
          if (*(int *)local_88.field0_0x0 != -1) {
            if (*(int *)local_88.field0_0x0 != 0) {
              LOCK();
              *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
              local_31 = *(int *)local_88.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10016a850;
            }
            QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
          }
        }
      }
LAB_10016a850:
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
      if ((bool)local_31) goto LAB_10016a893;
    }
    QListData::dispose(local_68);
  }
LAB_10016a893:
  lVar5 = FUN_10018f4e0(lVar4);
  if (lVar5 != 0) {
    uVar6 = FUN_10018f4e0(lVar4);
    plVar7 = (long *)FUN_1007c65a0(uVar6);
    if (*(int *)(*plVar7 + 0xc) == *(int *)(*plVar7 + 8)) {
      FUN_10018c5f0(lVar4);
    }
  }
  plVar7 = (long *)FUN_10010e020(local_e0,&local_48);
  if (plVar7 == (long *)0x0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get device from XML");
    goto LAB_10016ae4d;
  }
  uVar2 = CVmDevice::getIndex();
  lVar5 = FUN_10018f4e0(lVar4);
  if (lVar5 == 0) goto LAB_10016ae4d;
  uVar6 = FUN_10018f4e0(lVar4);
  lVar5 = FUN_1007c65b0(uVar6,local_e0,uVar2);
  if (lVar5 == 0) goto LAB_10016ae4d;
  iVar1 = (**(code **)(*plVar7 + 0x68))(plVar7);
  if (iVar1 == 0xc) {
    FUN_100190040(lVar4);
  }
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar1 = (**(code **)(*plVar7 + 0x68))(plVar7);
  if (iVar1 == 8) {
    lVar8 = ___dynamic_cast(plVar7,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e16f8,0);
    if (lVar8 != 0) {
      CVmGenericNetworkAdapter::getBoundAdapterName();
      QString::operator=(&local_90,&local_98);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10016aa62;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
      goto LAB_10016aa62;
    }
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get network adapter instance.");
  }
  else {
    CVmDevice::getUserFriendlyName();
    QString::operator=(&local_90,&local_a0);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10016aa62;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_10016aa62:
    lVar4 = FUN_10018f120(lVar4,local_e0,uVar2);
    if ((lVar4 != 0) && (lVar8 = FUN_100146b20(lVar4), lVar8 != 0)) {
      lVar8 = FUN_100146b20(lVar4);
      *(undefined4 *)(plVar7 + 0xd) = *(undefined4 *)(lVar8 + 0x68);
      FUN_10014a0c0(lVar4,plVar7);
    }
    QString::toUtf8();
    if ((1 < *(uint *)local_a8) || (*(long *)(local_a8 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_a8,*(uint *)(local_a8 + 4) + 1,*(uint *)(local_a8 + 8) >> 0x1f)
      ;
    }
    pQVar12 = local_a8 + *(long *)(local_a8 + 0x10);
    uVar6 = FUN_100de8410(0x186a3);
    EnumUtils::enumToString(&local_b8,local_e0);
    QString::toUtf8();
    if ((1 < *(uint *)local_b0) || (*(long *)(local_b0 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_b0,*(uint *)(local_b0 + 4) + 1,*(uint *)(local_b0 + 8) >> 0x1f)
      ;
    }
    pQVar10 = local_b0 + *(long *)(local_b0 + 0x10);
    uVar3 = CVmDevice::getConnected();
    EnumUtils::enumToString(&local_c8,uVar3);
    QString::toUtf8();
    if ((1 < *(uint *)local_c0) || (*(long *)(local_c0 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_c0,*(uint *)(local_c0 + 4) + 1,*(uint *)(local_c0 + 8) >> 0x1f)
      ;
    }
    pQVar11 = local_c0 + *(long *)(local_c0 + 0x10);
    uVar3 = CVmDevice::getEmulatedType();
    EnumUtils::enumToString(&local_d8,local_e0,uVar3);
    QString::toUtf8();
    if ((1 < *(uint *)local_d0) || (*(long *)(local_d0 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_d0,*(uint *)(local_d0 + 4) + 1,*(uint *)(local_d0 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("","prl_client_app",0,"%s: received %s. [%s %d: %s, %s]",pQVar12,uVar6,pQVar10,
                  uVar2,pQVar11,local_d0 + *(long *)(local_d0 + 0x10));
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10016ac98;
      }
      QArrayData::deallocate(local_d0,1,8);
    }
LAB_10016ac98:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10016acce;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_10016acce:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10016ad04;
      }
      QArrayData::deallocate(local_c0,1,8);
    }
LAB_10016ad04:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10016ad3a;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_10016ad3a:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10016ad70;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_10016ad70:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10016ada6;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_10016ada6:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10016addc;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_10016addc:
    FUN_1007bb7c0(lVar5,plVar7);
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016ae4d;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_10016ae4d:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}

