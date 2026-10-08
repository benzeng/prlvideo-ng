
undefined8 FUN_100b43e50(CVirtualNetworks *param_1,char *param_2)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  CVirtualNetworks *this;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QDateTime local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  *param_2 = '\0';
  iVar4 = FUN_100d7e9e0();
  FUN_100d83e90(&local_40);
  iVar5 = FUN_100b437b0(param_1,0xffff);
  if (iVar5 == -0x7ffffff0) {
    iVar5 = FUN_100b437b0(param_1,0xffff);
    if (iVar5 < 0) {
      if (iVar5 != -0x7ffffff0) goto LAB_100b43f6e;
      iVar6 = FUN_100d7e9e0();
      iVar5 = -0x7ffffff0;
      if ((iVar6 == 1) && (iVar6 = FUN_100b437b0(param_1,0), -1 < iVar6)) {
        FUN_100df99c0("","prl_net",0,
                      "Network config file does not exist. Try to load config from previous location to provide compatibility."
                     );
        iVar6 = FUN_100b43cd0(param_1);
        goto joined_r0x000100b43f6a;
      }
    }
    else {
      FUN_100df99c0("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]","PRL_FAILED( prlResult )",
                    "netconfig.cpp",0x4ca,"tryToRecoverNetworkConfig");
LAB_100b43f6e:
      FUN_100df99c0("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "PRL_ERR_FILE_NOT_FOUND == prlResult","netconfig.cpp",0x4cb,
                    "tryToRecoverNetworkConfig");
      iVar6 = iVar5;
joined_r0x000100b43f6a:
      if (-1 < iVar6) {
        *param_2 = '\x01';
        uVar7 = 0;
        goto LAB_100b444ba;
      }
    }
    uVar7 = FUN_100dddcf0(iVar5);
    FUN_100df99c0("","prl_net",0,"Unable to restore network config by error %s %#x",uVar7,iVar5);
LAB_100b43ff2:
    if (iVar5 == -0x7ffffff0) {
      QString::toUtf8();
      FUN_100df99c0("","prl_net",0,
                    "Network config file does not exist. Trying to create file ... [%s]",
                    local_a0 + *(long *)(local_a0 + 0x10));
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b443e6;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
    }
    else {
      local_58 = (QArrayData *)QString::fromAscii_helper(".BACKUP.",8);
      local_50.field0_0x0 = local_40.field0_0x0;
      if (1 < *(int *)local_40.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_50);
      QDateTime::currentDateTime();
      local_70 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd_hh-mm-ss",0x13);
      QDateTime::toString(&local_60);
      local_48.field0_0x0 = local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_48);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b44137;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_100b44137:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b44167;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100b44167:
      QDateTime::~QDateTime(&local_68);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b441a0;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_100b441a0:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b441d0;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100b441d0:
      local_80 = (QArrayData *)
                 QString::fromAscii_helper
                           ("Current configuration will be stored to %1. Network will start with default configuration."
                            ,0x5a);
      QString::arg(&local_78,&local_80,&local_48,0,0x20);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b4422e;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100b4422e:
      QString::toUtf8();
      FUN_100df99c0("","prl_net",0,"%s",local_88 + *(long *)(local_88 + 0x10));
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b44291;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_100b44291:
      cVar3 = QFile::rename(&local_40,&local_48);
      bVar2 = false;
      if (cVar3 == '\0') {
        QString::toUtf8();
        lVar1 = *(long *)(local_90 + 0x10);
        QString::toUtf8();
        FUN_100df99c0("","prl_net",0,
                      "ERROR in NetworkConfig recovering: Can\'t rename \'%s\' ==> \'%s\'",
                      local_90 + lVar1,local_98 + *(long *)(local_98 + 0x10));
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b4433c;
          }
          QArrayData::deallocate(local_98,1,8);
        }
LAB_100b4433c:
        bVar2 = true;
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b44378;
          }
          QArrayData::deallocate(local_90,1,8);
        }
      }
LAB_100b44378:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b443a8;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100b443a8:
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b443d8;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_100b443d8:
      uVar7 = 0x80000009;
      if (bVar2) goto LAB_100b444ba;
    }
LAB_100b443e6:
    this = operator_new(0xa0);
    CVirtualNetworks::CVirtualNetworks(this);
    CParallelsNetworkConfig::setVirtualNetworks(param_1);
    FUN_100b3ea80(this);
    if (((iVar4 == 1) && (iVar5 == -0x7ffffff0)) && (cVar3 = FUN_100b53ae0(param_1), cVar3 == '\0'))
    {
      QString::toUtf8();
      FUN_100df99c0("","prl_net",0,
                    "No PD3 configuration exists or conversion failed. Creating new %s",
                    local_a8 + *(long *)(local_a8 + 0x10));
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b4449f;
        }
        QArrayData::deallocate(local_a8,1,8);
      }
    }
LAB_100b4449f:
    *param_2 = '\x01';
  }
  else {
    if (iVar5 < 0) goto LAB_100b43ff2;
    cVar3 = FUN_100b40270(param_1);
    *param_2 = cVar3;
    uVar7 = 0;
    if (cVar3 == '\0') goto LAB_100b444ba;
  }
  iVar5 = FUN_100b43cd0(param_1);
  uVar7 = 0;
  if (iVar5 < 0) {
    *param_2 = '\0';
    uVar7 = 0x80000009;
  }
LAB_100b444ba:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar7;
}

