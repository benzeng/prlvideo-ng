
undefined8 FUN_1001e0cd0(QObject *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  QTimer *this;
  undefined8 uVar7;
  QArrayData *pQVar8;
  undefined8 local_108;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  long local_d8;
  long local_d0;
  QVariant local_c8;
  QString local_b8;
  QVariant local_b0;
  QString local_a0;
  QVariant local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  uint uStack_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    local_108 = 0;
  }
  else {
    iVar2 = FUN_10015a6e0(param_2);
    if (iVar2 == 0) {
      iVar2 = FUN_10015d3a0(param_2);
      local_108 = 0;
      if (0 < iVar2) {
        local_108 = 0;
        iVar2 = 0;
        do {
          lVar6 = FUN_10015d330(param_2,iVar2);
          uVar7 = local_108;
          if (((lVar6 != 0) && (iVar3 = FUN_10018bce0(lVar6), iVar3 != 2)) &&
             (iVar3 = FUN_10018bce0(lVar6), iVar3 != 3)) {
            iVar3 = FUN_10018a9d0(lVar6);
            if ((iVar3 == 0x30000005) || (iVar3 = FUN_10018a9d0(lVar6), iVar3 == 0x30000004)) {
              FUN_10018d830(&local_48,lVar6);
              QString::toUtf8();
              pQVar8 = local_40 + *(long *)(local_40 + 0x10);
              FUN_100188480(&local_58,lVar6);
              QString::toUtf8();
              FUN_100df99c0("[AppController]","prl_client_app",0,"VM already started %s %s",pQVar8);
              if (*(int *)local_50 != -1) {
                if (*(int *)local_50 != 0) {
                  LOCK();
                  *(int *)local_50 = *(int *)local_50 + -1;
                  local_31 = *(int *)local_50 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001e0e33;
                }
                QArrayData::deallocate(local_50,1,8);
              }
LAB_1001e0e33:
              if (*(int *)local_58 != -1) {
                if (*(int *)local_58 != 0) {
                  LOCK();
                  *(int *)local_58 = *(int *)local_58 + -1;
                  local_31 = *(int *)local_58 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001e0e63;
                }
                QArrayData::deallocate(local_58,2,8);
              }
LAB_1001e0e63:
              if (*(int *)local_40 != -1) {
                if (*(int *)local_40 != 0) {
                  LOCK();
                  *(int *)local_40 = *(int *)local_40 + -1;
                  local_31 = *(int *)local_40 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001e0e93;
                }
                QArrayData::deallocate(local_40,1,8);
              }
LAB_1001e0e93:
              if (*(int *)local_48 != -1) {
                if (*(int *)local_48 != 0) {
                  LOCK();
                  *(int *)local_48 = *(int *)local_48 + -1;
                  local_31 = *(int *)local_48 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001e0ec3;
                }
                QArrayData::deallocate(local_48,2,8);
              }
LAB_1001e0ec3:
              FUN_10018c2b0(lVar6);
              CVmConfiguration::getVmSettings();
              CVmSettings::getShutdown();
              iVar3 = Shutdown::getOnVmWindowClose();
              if (iVar3 == 5) {
                iVar3 = FUN_100358ab0();
                iVar4 = FUN_10018a9d0(lVar6);
                if (iVar4 == 0x30000005) {
                  FUN_100192d10(lVar6,0x27f,0,0);
                  uVar7 = 1;
                }
                else if (iVar3 != 0) {
                  uVar7 = FUN_10018c280(lVar6);
                  local_88 = 3;
                  local_80 = 0;
                  local_84 = 0;
                  local_7c = 0xffff;
                  local_78 = 0;
                  local_74 = 0;
                  FUN_10031bef0(uVar7,iVar3,&local_88);
                  uVar7 = 1;
                }
              }
              else {
                uVar7 = FUN_10018c280(lVar6);
                iVar3 = FUN_10018a9d0(lVar6);
                local_70 = 3;
                local_68 = local_68 & 0xffffff00;
                uStack_6c = 0;
                uStack_64 = 0xffff;
                local_60 = 0;
                uStack_5c = uStack_5c & 0xffffff00;
                FUN_10031a440(uVar7,iVar3 != 0x30000004);
                uVar7 = 1;
              }
            }
            else {
              FUN_10018c2b0(lVar6);
              CVmConfiguration::getVmSettings();
              CVmSettings::getVmStartupOptions();
              iVar3 = CVmStartupOptionsBase::getAutoStart();
              if (iVar3 == 3) {
                cVar1 = FUN_1001754c0(param_2,0x1b);
                uVar5 = 0;
                if (cVar1 != '\0') {
                  FUN_10018c2b0(lVar6);
                  CVmConfiguration::getVmSettings();
                  CVmSettings::getVmStartupOptions();
                  uVar5 = CVmStartupOptionsBase::getAutoStartDelay();
                }
                this = operator_new(0x20);
                QTimer::QTimer(this,param_1);
                (this->field5_0x1c).bitField0_1 = (this->field5_0x1c).bitField0_1 | 1;
                QTimer::setInterval((int)this);
                FUN_10015aab0(&local_a0,param_2);
                QVariant::QVariant(&local_98,&local_a0);
                QObject::setProperty((char *)this,(QVariant *)"serverUuid");
                QVariant::~QVariant(&local_98);
                if (*(int *)local_a0.field0_0x0 != -1) {
                  if (*(int *)local_a0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                    local_31 = *(int *)local_a0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001e1096;
                  }
                  QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
                }
LAB_1001e1096:
                FUN_100188480(&local_b8,lVar6);
                QVariant::QVariant(&local_b0,&local_b8);
                QObject::setProperty((char *)this,(QVariant *)"vmUuid");
                QVariant::~QVariant(&local_b0);
                if (*(int *)local_b8.field0_0x0 != -1) {
                  if (*(int *)local_b8.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
                    local_31 = *(int *)local_b8.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001e1178;
                  }
                  QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
                }
LAB_1001e1178:
                QVariant::QVariant(&local_c8,uVar5);
                QObject::setProperty((char *)this,(QVariant *)"autoStartDelay");
                QVariant::~QVariant(&local_c8);
                QObject::connect((Connection *)&local_d0,this,"2timeout()",
                                 *(undefined8 *)(param_1 + 0x10),"1onAutostartVmTimeout()",0);
                if (local_d0 == 0) {
                  QMetaObject::Connection::~Connection((Connection *)&local_d0);
                  QObject::connect(&local_d8,this,"2timeout()",this,"1deleteLater()",0);
                }
                else {
                  cVar1 = QMetaObject::Connection::isConnected_helper();
                  QMetaObject::Connection::~Connection((Connection *)&local_d0);
                  QObject::connect(&local_d8,this,"2timeout()",this,"1deleteLater()",0);
                  if ((local_d8 != 0) && (cVar1 == '\x01')) {
                    QMetaObject::Connection::isConnected_helper();
                  }
                }
                QMetaObject::Connection::~Connection((Connection *)&local_d8);
                FUN_10018d830(&local_e8,lVar6);
                QString::toUtf8();
                pQVar8 = local_e0 + *(long *)(local_e0 + 0x10);
                FUN_100188480(&local_f8,lVar6);
                QString::toUtf8();
                FUN_100df99c0("[AppController]","prl_client_app",0,
                              "Autostart VM with delay %u %s %s",uVar5,pQVar8,
                              local_f0 + *(long *)(local_f0 + 0x10));
                if (*(int *)local_f0 != -1) {
                  if (*(int *)local_f0 != 0) {
                    LOCK();
                    *(int *)local_f0 = *(int *)local_f0 + -1;
                    local_31 = *(int *)local_f0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001e1332;
                  }
                  QArrayData::deallocate(local_f0,1,8);
                }
LAB_1001e1332:
                if (*(int *)local_f8 != -1) {
                  if (*(int *)local_f8 != 0) {
                    LOCK();
                    *(int *)local_f8 = *(int *)local_f8 + -1;
                    local_31 = *(int *)local_f8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001e1368;
                  }
                  QArrayData::deallocate(local_f8,2,8);
                }
LAB_1001e1368:
                if (*(int *)local_e0 != -1) {
                  if (*(int *)local_e0 != 0) {
                    LOCK();
                    *(int *)local_e0 = *(int *)local_e0 + -1;
                    local_31 = *(int *)local_e0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001e139e;
                  }
                  QArrayData::deallocate(local_e0,1,8);
                }
LAB_1001e139e:
                if (*(int *)local_e8 != -1) {
                  if (*(int *)local_e8 != 0) {
                    LOCK();
                    *(int *)local_e8 = *(int *)local_e8 + -1;
                    local_31 = *(int *)local_e8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001e13de;
                  }
                  QArrayData::deallocate(local_e8,2,8);
                }
LAB_1001e13de:
                QTimer::start();
                uVar7 = 1;
                if (uVar5 != 0) {
                  uVar7 = local_108;
                }
              }
            }
          }
          local_108 = uVar7;
          iVar2 = iVar2 + 1;
          iVar3 = FUN_10015d3a0(param_2);
        } while (iVar2 < iVar3);
      }
    }
    else {
      local_108 = 0;
    }
  }
  return local_108;
}

