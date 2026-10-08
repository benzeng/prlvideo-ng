
void FUN_1007cc540(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  CSbaInstallation *this;
  long lVar4;
  long lVar5;
  QArrayData *pQVar6;
  long *plVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  QString local_f0;
  QVariant local_e8;
  Data_conflict local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  undefined4 local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QString local_58 [2];
  CSbaInstallation *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CSbaInstallation::getType();
  iVar3 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"no data",
                     0xffffffff,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cc5c1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007cc5c1:
  if (iVar3 == 0) {
    return;
  }
  this = operator_new(0xd8);
  CSbaInstallation::CSbaInstallation(this,(CSbaInstallation *)(param_1 + 0x140));
  plVar7 = (long *)(param_1 + 0xa8);
  local_48 = this;
  FUN_1007d9500(plVar7,&local_48);
  FUN_100a04400(&local_60);
  FUN_1007caa20(&local_68);
  QSettings::QSettings((QSettings *)local_58,&local_60,&local_68,(QObject *)0x0);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cc64d;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1007cc64d:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cc67d;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1007cc67d:
  local_70 = (QArrayData *)QString::fromAscii_helper("Sba Installations",0x11);
  QSettings::beginGroup(local_58);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cc6cf;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007cc6cf:
  local_90 = (Data *)*plVar7;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 == 0) {
      QListData::detach((int)&local_90);
      lVar4 = (long)*(int *)(local_90 + 8);
      lVar1 = *plVar7;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_90 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_90 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_90 + 0xc))
         ) {
        _memcpy(local_90 + lVar4 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
    }
  }
  local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
  local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
  if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
    iVar3 = 0;
    do {
      local_78 = 1;
      uVar2 = *(undefined8 *)local_88;
      if (2 < DAT_10230ffd0) {
        CSbaInstallation::getType();
        QString::toUtf8();
        pQVar8 = local_98 + *(long *)(local_98 + 0x10);
        CSbaInstallation::getResult();
        QString::toUtf8();
        pQVar9 = local_a8 + *(long *)(local_a8 + 0x10);
        CSbaInstallation::getDstPath();
        QString::toUtf8();
        pQVar6 = local_b8 + *(long *)(local_b8 + 0x10);
        CSbaInstallation::getCreationDateTime();
        QString::toUtf8();
        FUN_100df99c0("","prl_client_app",3,"SBA INSTALL: store %d %s [%s] (%s) at %s",iVar3,pQVar8,
                      pQVar9,pQVar6,local_c8 + *(long *)(local_c8 + 0x10));
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cc8d4;
          }
          QArrayData::deallocate(local_c8,1,8);
        }
LAB_1007cc8d4:
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cc90a;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_1007cc90a:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cc940;
          }
          QArrayData::deallocate(local_b8,1,8);
        }
LAB_1007cc940:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cc980;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_1007cc980:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cc9c7;
          }
          QArrayData::deallocate(local_a8,1,8);
        }
LAB_1007cc9c7:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cc9fd;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_1007cc9fd:
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cca33;
          }
          QArrayData::deallocate(local_98,1,8);
        }
LAB_1007cca33:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cca70;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
      }
LAB_1007cca70:
      QString::number((int)&local_d8,iVar3);
      CBaseNode::toString(SUB81(&local_f0,0),SUB81(uVar2,0));
      QVariant::QVariant(&local_e8,&local_f0);
      QSettings::setValue(local_58,(QVariant *)&local_d8);
      QVariant::~QVariant(&local_e8);
      if (*(int *)local_f0.field0_0x0 != -1) {
        if (*(int *)local_f0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
          local_31 = *(int *)local_f0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007ccaeb;
        }
        QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
      }
LAB_1007ccaeb:
      if (*(int *)local_d8.field15 != -1) {
        if (*(int *)local_d8.field15 != 0) {
          LOCK();
          *(int *)local_d8.field15 = *(int *)local_d8.field15 + -1;
          local_31 = *(int *)local_d8.field15 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007ccb21;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field15,2,8);
      }
LAB_1007ccb21:
      iVar3 = iVar3 + 1;
      local_88 = local_88 + 8;
    } while (local_88 != local_80);
  }
  local_78 = 1;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ccb6d;
    }
    QListData::dispose(local_90);
  }
LAB_1007ccb6d:
  QSettings::~QSettings((QSettings *)local_58);
  return;
}

