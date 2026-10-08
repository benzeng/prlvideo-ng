
void FUN_100147a20(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5,char param_6,undefined4 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  QString QVar6;
  QString QVar7;
  QArrayData *pQVar8;
  QArrayData *local_90;
  QArrayData *local_88;
  long local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar4 = FUN_10018c2b0(uVar4);
  lVar5 = FUN_10010dec0(uVar4,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if ((lVar5 == 0) || ((*(uint *)(param_1 + 0x20) | 4) == 0xc)) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("","prl_client_app",1,"Wrong device type");
    return;
  }
  if (2 < DAT_10230ffd0) {
    local_48 = (QArrayData *)*param_2;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    pQVar8 = local_40 + *(long *)(local_40 + 0x10);
    local_58 = (QArrayData *)*param_3;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3,
                  "Connecting real device. \n System name: %s \n Friendly name: %s \n Is remote: %d"
                  ,pQVar8,local_50 + *(long *)(local_50 + 0x10),param_5);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100147baf;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_100147baf:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100147bdf;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100147bdf:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100147c0f;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100147c0f:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100147c3f;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100147c3f:
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar4 = FUN_10018c2b0(uVar4);
  cVar3 = FUN_10010dec0(uVar4,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  CBaseNode::toString(SUB81(&local_60,0),(bool)(cVar3 + '\x10'));
  QVar6.field0_0x0 = (QTypedArrayData<unsigned_short> *)FUN_10010e020(uVar1,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100147ccd;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100147ccd:
  if (QVar6.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    return;
  }
  CVmDevice::setEmulatedType((uint)QVar6.field0_0x0);
  local_68 = (QArrayData *)*param_2;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  CVmDevice::setSystemName(QVar6);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100147d3c;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100147d3c:
  CVmDevice::setRemote(SUB81(QVar6.field0_0x0,0));
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 < 0x10) {
    if ((0xc68U >> (uVar2 & 0x1f) & 1) != 0) {
      local_70 = (QArrayData *)*param_3;
      if (1 < *(int *)local_70 + 1U) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + 1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
      }
      CVmDevice::setUserFriendlyName(QVar6);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100147dc0;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100147dc0:
      FUN_100147770(param_1,QVar6.field0_0x0);
      goto LAB_100147f21;
    }
    if (uVar2 == 0xf) {
      QVar7.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)
           QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12e0);
      local_78 = (QArrayData *)*param_3;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      CVmDevice::setUserFriendlyName(QVar7);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100147e46;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100147e46:
      CVmUsbDevice::setUsbType(QVar7.field0_0x0,param_7);
      FUN_100146b90(&local_80,param_1);
      FUN_1001478b0(&local_80,QVar6.field0_0x0);
      if (local_80 != 0) {
        _PrlHandle_Free();
      }
      if (param_6 == '\0') {
        if (2 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("","prl_client_app",3,"Connect RealUsbDevice <%s>",
                        local_90 + *(long *)(local_90 + 0x10));
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100147fb6;
            }
            QArrayData::deallocate(local_90,1,8);
          }
        }
LAB_100147fb6:
        FUN_100147630(param_1);
        goto LAB_100147f21;
      }
      if (2 < DAT_10230ffd0) {
        QString::toUtf8();
        FUN_100df99c0("","prl_client_app",3,"Disconnect RealUsbDevice <%s>",
                      local_88 + *(long *)(local_88 + 0x10));
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100147ef9;
          }
          QArrayData::deallocate(local_88,1,8);
        }
      }
LAB_100147ef9:
      FUN_1001476d0(param_1);
      goto LAB_100147f21;
    }
  }
  FUN_100df99c0("","prl_client_app",0,"Error while connecting real device: wrong device type");
LAB_100147f21:
  (**(code **)(*(long *)QVar6.field0_0x0 + 0x20))(QVar6.field0_0x0);
  return;
}

