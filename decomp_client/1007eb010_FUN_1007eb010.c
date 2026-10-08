
void FUN_1007eb010(long param_1)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  long local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  long local_a0;
  QArrayData *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  int local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar5 = FUN_100152280();
  plVar1 = (long *)(param_1 + 0x18);
  lVar6 = FUN_1001548f0(uVar5);
  if (lVar6 == 0) {
    return;
  }
  uVar5 = FUN_10018c280(lVar6);
  uVar5 = FUN_100319bf0(uVar5);
  CAntivirusInfo::availableAntiviruses(&local_90,1);
  local_88 = local_90;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 == 0) {
      QListData::detach((int)&local_88);
      lVar9 = (long)*(int *)(local_88 + 8);
      if ((local_90 + (long)*(int *)(local_90 + 8) * 8 != local_88 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_88 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_88 + 0xc))) {
        _memcpy(local_88 + lVar9 * 8 + 0x10,local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10,
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
    }
  }
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  local_70 = 1;
  if (*(int *)local_90 == -1) {
LAB_1007eb139:
    lVar9 = 0;
    bVar3 = false;
    if (local_80 == local_78) {
      bVar2 = true;
      lVar9 = 0;
    }
    else {
      do {
        lVar10 = *(long *)local_80;
        CAntivirusInfo::tisUuid();
        uVar7 = FUN_10032d8b0(uVar5,&local_98);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007eb1ce;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_1007eb1ce:
        if ((uVar7 == 0) || (FUN_10032ca00(&local_a0,uVar7), local_a0 == 0)) {
          bVar3 = true;
        }
        else {
          _PrlHandle_Free();
          iVar4 = FUN_10032c830(uVar7);
          if (iVar4 == 1) {
            CAntivirusInfo::tisUuid();
            iVar4 = QString::compare_helper
                              (local_a8 + *(long *)(local_a8 + 0x10),*(undefined4 *)(local_a8 + 4),
                               "parallels.Antivirus.guest.win.kaspersky",0xffffffff,1);
            if (*(int *)local_a8 != -1) {
              if (*(int *)local_a8 != 0) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + -1;
                local_31 = *(int *)local_a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1007eb284;
              }
              QArrayData::deallocate(local_a8,2,8);
            }
LAB_1007eb284:
            if ((iVar4 == 0) && (iVar4 = FUN_10032c830(uVar7), iVar4 == 1)) {
              FUN_10032d120(&local_50,uVar7,0);
              if ((*(int *)(*plVar1 + 4) != 0) && (*(int *)(local_50 + 4) != 0)) {
                if (DAT_102310a08 == (void *)0x0) {
                  pvVar8 = operator_new(0x220);
                  FUN_1007cc3f0(pvVar8);
                  DAT_102273890 = 1;
                  DAT_102310a08 = pvVar8;
                }
                pvVar8 = DAT_102310a08;
                QString::fromUtf8_helper((char *)&local_68,0x1e19c02);
                QString::append(&local_68);
                local_60.field0_0x0 = local_68.field0_0x0;
                if (1 < *(int *)local_68.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
                  local_31 = *(int *)local_68.field0_0x0 != 0;
                  UNLOCK();
                }
                QString::fromUtf8_helper((char *)&local_48,0x1dc0962);
                QString::append(&local_60);
                if (*(int *)local_48 != -1) {
                  if (*(int *)local_48 != 0) {
                    LOCK();
                    *(int *)local_48 = *(int *)local_48 + -1;
                    local_31 = *(int *)local_48 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1007eb395;
                  }
                  QArrayData::deallocate(local_48,2,8);
                }
LAB_1007eb395:
                local_58.field0_0x0 = local_60.field0_0x0;
                if (1 < *(int *)local_60.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
                  local_31 = *(int *)local_60.field0_0x0 != 0;
                  UNLOCK();
                }
                QString::append(&local_58);
                FUN_1007d5730(pvVar8,&local_58);
                if (*(int *)local_58.field0_0x0 != -1) {
                  if (*(int *)local_58.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
                    local_31 = *(int *)local_58.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1007eb3f9;
                  }
                  QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
                }
LAB_1007eb3f9:
                if (*(int *)local_60.field0_0x0 != -1) {
                  if (*(int *)local_60.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
                    local_31 = *(int *)local_60.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1007eb429;
                  }
                  QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
                }
LAB_1007eb429:
                if (*(int *)local_68.field0_0x0 != -1) {
                  if (*(int *)local_68.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
                    local_31 = *(int *)local_68.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1007eb459;
                  }
                  QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
                }
              }
LAB_1007eb459:
              if (*(int *)local_50 != -1) {
                if (*(int *)local_50 != 0) {
                  LOCK();
                  *(int *)local_50 = *(int *)local_50 + -1;
                  local_31 = *(int *)local_50 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1007eb489;
                }
                QArrayData::deallocate(local_50,2,8);
              }
            }
LAB_1007eb489:
            CAntivirusInfo::tisUuid();
            iVar4 = QString::compare_helper
                              (local_b0 + *(long *)(local_b0 + 0x10),*(undefined4 *)(local_b0 + 4),
                               "parallels.Antivirus.guest.win.thirdparty",0xffffffff,1);
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1007eb4f8;
              }
              QArrayData::deallocate(local_b0,2,8);
            }
LAB_1007eb4f8:
            if (iVar4 != 0) {
              bVar2 = false;
              FUN_1007ec650(param_1,lVar10,0);
              break;
            }
            iVar4 = FUN_10032c830(uVar7);
            if (iVar4 == 1) {
              FUN_10032cd60(&local_40,uVar7,0);
              bVar2 = true;
              if (0xf < (int)*(uint *)(local_40 + 4)) {
                if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
                  QByteArray::reallocData
                            (&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
                }
                uVar7 = 0;
                if (*(int *)(local_40 + *(long *)(local_40 + 0x10)) != 1) {
                  uVar7 = 3;
                }
                bVar2 = false;
              }
              if (*(int *)local_40 != -1) {
                if (*(int *)local_40 != 0) {
                  LOCK();
                  *(int *)local_40 = *(int *)local_40 + -1;
                  local_31 = *(int *)local_40 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1007eb5b7;
                }
                QArrayData::deallocate(local_40,1,8);
              }
LAB_1007eb5b7:
              if (bVar2) goto LAB_1007eb5bb;
            }
            else {
LAB_1007eb5bb:
              uVar7 = 3;
            }
            CAntivirusInfo::setDeveloper(lVar10,uVar7 & 0xffffffff,plVar1);
            lVar9 = lVar10;
          }
        }
        bVar2 = true;
        local_80 = local_80 + 8;
        local_70 = 1;
      } while (local_80 != local_78);
    }
  }
  else {
    if (*(int *)local_90 == 0) {
LAB_1007eb127:
      QListData::dispose(local_90);
    }
    else {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1007eb127;
    }
    lVar9 = 0;
    if (local_70 != 0) goto LAB_1007eb139;
    bVar2 = true;
    bVar3 = false;
  }
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007eb682;
    }
    QListData::dispose(local_88);
  }
LAB_1007eb682:
  if (bVar2) {
    if (lVar9 == 0) {
      if (bVar3) {
        lVar6 = FUN_1001998a0(lVar6);
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 0x60) = 1;
          QObject::connect(&local_b8,lVar6,"2jobCompleted(PRL_RESULT)",param_1,
                           "1guestOsInformationRequestCompleted(PRL_RESULT)",0);
          if (local_b8 != 0) {
            QMetaObject::Connection::isConnected_helper();
          }
          QMetaObject::Connection::~Connection((Connection *)&local_b8);
        }
      }
      else if (*(long *)(param_1 + 0x40) != 0) {
        *(undefined8 *)(param_1 + 0x40) = 0;
        FUN_100867f10(*(undefined8 *)(param_1 + 0x10),0);
        FUN_100867f70(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40));
      }
    }
    else {
      FUN_1007ec820(plVar1);
      FUN_1007ec650(param_1,lVar9,1);
    }
  }
  return;
}

