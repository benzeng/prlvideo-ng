
void FUN_1000c0520(long *param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  long *plVar1;
  QString *this;
  QObject *this_00;
  QTimer *this_01;
  QTimer *this_02;
  QTimer *this_03;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  Data *pDVar6;
  byte bVar7;
  undefined1 uVar8;
  char cVar9;
  undefined2 uVar10;
  int iVar11;
  void *pvVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  QArrayData *pQVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  Data *pDVar22;
  char *pcVar23;
  QString *this_04;
  QArrayData *local_318;
  QArrayData *local_310;
  QArrayData *local_308;
  QArrayData *local_300;
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  Connection local_2e8 [8];
  Connection local_2e0 [8];
  Connection local_2d8 [8];
  QArrayData *local_2d0;
  Connection local_2c8 [8];
  Connection local_2c0 [8];
  Data *local_2b8;
  Data *local_2b0;
  Data *local_2a8;
  undefined4 local_2a0;
  QArrayData *local_298;
  undefined *local_290;
  undefined4 local_288;
  undefined4 local_284;
  Data *local_280;
  Data_conflict local_278;
  undefined4 local_270;
  QArrayData *local_268;
  int *local_260 [4];
  QVariant local_240 [2];
  long *local_228;
  QArrayData *local_220;
  long local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  long local_200;
  long local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  CTaskGenericId local_1c0 [24];
  Data_conflict local_1a8;
  undefined4 local_1a0;
  QArrayData *local_198;
  int *local_190 [4];
  QVariant local_170 [2];
  QArrayData *local_158;
  long local_150;
  QArrayData *local_148;
  long local_140;
  QArrayData *local_138;
  long local_130;
  QArrayData *local_128;
  long local_120;
  QArrayData *local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  QArrayData *local_e0;
  long local_d8;
  QString local_d0;
  QFileInfo local_c8 [8];
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  long local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  long local_60;
  QArrayData *local_58;
  long local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  FUN_1000b7e00();
  *param_1 = (long)&PTR_FUN_1021f8e70;
  param_1[0x1c] = param_3;
  pvVar12 = operator_new(0x18);
  FUN_1000eaca0(pvVar12,param_1);
  param_1[0x1d] = (long)pvVar12;
  pvVar12 = operator_new(0x78);
  FUN_10003fc80(pvVar12);
  param_1[0x1e] = (long)pvVar12;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((long)param_1 + 0x101) = 1;
  *(undefined1 *)((long)param_1 + 0x102) = 1;
  *(undefined1 *)((long)param_1 + 0x105) = 1;
  *(undefined1 *)((long)param_1 + 0x106) = 1;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x10c) = 0;
  *(undefined1 *)((long)param_1 + 0x10d) = 0;
  puVar5 = PTR_shared_null_1021e15e8;
  param_1[0x22] = (long)PTR_shared_null_1021e15e8;
  this_00 = (QObject *)(param_1 + 0x23);
  QObject::QObject(this_00,(QObject *)0x0);
  param_1[0x23] = (long)&PTR_FUN_1021f9150;
  puVar3 = PTR_shared_null_1021e1288;
  param_1[0x25] = (long)PTR_shared_null_1021e1288;
  puVar4 = PTR_shared_null_1021e12f0;
  param_1[0x26] = (long)PTR_shared_null_1021e12f0;
  param_1[0x27] = (long)puVar4;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = (long)puVar4;
  plVar18 = param_1 + 0x2b;
  FUN_1000e5b70();
  param_1[0x34] = (long)puVar5;
  param_1[0x35] = (long)puVar3;
  this_01 = (QTimer *)(param_1 + 0x36);
  QTimer::QTimer(this_01,(QObject *)0x0);
  this_02 = (QTimer *)(param_1 + 0x3a);
  QTimer::QTimer(this_02,(QObject *)0x0);
  this_03 = (QTimer *)(param_1 + 0x3e);
  QTimer::QTimer(this_03,(QObject *)0x0);
  param_1[0x44] = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x45),0);
  param_1[0x47] = (long)puVar5;
  param_1[0x49] = (long)puVar5;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((long)param_1 + 0x251) = 0;
  *(undefined4 *)((long)param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)((long)param_1 + 0x269) = 0;
  param_1[0x4e] = 0;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (DAT_10226ca68 == 0) {
    DAT_10226ca68 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
  }
  FUN_10009bee0("unsigned",0,0);
  FUN_1000bd540("DocsList_t",0,0);
  QTimer::setInterval((int)this_01);
  QObject::connect(&local_40,this_01,"2timeout()",param_1,"1onRelaunchHelper()",0);
  bVar7 = 1;
  if (local_40 != 0) {
    bVar7 = QMetaObject::Connection::isConnected_helper();
    bVar7 = bVar7 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  if (bVar7 != 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Error: failed to connect timer signals and slots for client with vmUuid=\"%s\"",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
    return;
  }
  QTimer::setInterval((int)this_02);
  QObject::connect(&local_50,this_02,"2timeout()",param_1,"1onStopHelper()",0);
  bVar7 = 1;
  if (local_50 != 0) {
    bVar7 = QMetaObject::Connection::isConnected_helper();
    bVar7 = bVar7 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  if (bVar7 != 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Error: failed to connect stop timer signals and slots for client with vmUuid=\"%s\""
                  ,local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 == -1) {
      return;
    }
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_58,1,8);
    return;
  }
  *(byte *)((long)param_1 + 0x20c) = *(byte *)((long)param_1 + 0x20c) | 1;
  QTimer::setInterval((int)this_03);
  QObject::connect(&local_60,this_03,"2timeout()",param_1,"1onUpdateMenu()",0);
  bVar7 = 1;
  if (local_60 != 0) {
    bVar7 = QMetaObject::Connection::isConnected_helper();
    bVar7 = bVar7 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  if (bVar7 != 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Error: failed to connect timer signals and slots for client with vmUuid=\"%s\"",
                  local_68 + *(long *)(local_68 + 0x10));
    if (*(int *)local_68 == -1) {
      return;
    }
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,1,8);
    return;
  }
  uVar13 = FUN_100152280();
  plVar1 = param_1 + 2;
  lVar14 = FUN_1001548f0(uVar13);
  if (lVar14 == 0) {
    return;
  }
  *(undefined2 *)((long)param_1 + 0x103) = 0;
  FUN_10018c2b0(lVar14);
  CVmConfiguration::getVmIdentification();
  uVar13 = FUN_10018c280(lVar14);
  uVar13 = FUN_100319c50(uVar13);
  uVar8 = FUN_100330a50(uVar13);
  *(undefined1 *)(param_1 + 0x46) = uVar8;
  FUN_10004eb00(&local_70,plVar1);
  QString::operator=((QString *)(param_1 + 4),&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c0aec;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1000c0aec:
  FUN_100051ab0(&local_78,plVar1);
  QString::operator=((QString *)(param_1 + 0x35),&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c0b3c;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1000c0b3c:
  if (*(int *)(((QString *)(param_1 + 4))->field0_0x0 + 4) == 0) {
    return;
  }
  FUN_1000f6620(&local_80,plVar1,param_1 + 7);
  this = (QString *)(param_1 + 6);
  QString::operator=(this,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c0b9f;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1000c0b9f:
  if (*(int *)(this->field0_0x0 + 4) == 0) {
    return;
  }
  QDir::tempPath();
  uVar10 = QDir::separator();
  local_90 = local_98;
  if (1 < *(uint *)local_98 + 1) {
    LOCK();
    *(uint *)local_98 = *(uint *)local_98 + 1;
    local_31 = *(uint *)local_98 != 0;
    UNLOCK();
  }
  uVar20 = *(uint *)(local_98 + 4);
  if ((1 < *(uint *)local_98) || ((*(uint *)(local_98 + 8) & 0x7fffffff) < uVar20 + 2)) {
    QString::reallocData((uint)&local_90,SUB41(uVar20 + 2,0));
    uVar20 = *(uint *)(local_90 + 4);
  }
  *(uint *)(local_90 + 4) = uVar20 + 1;
  *(undefined2 *)(local_90 + (long)(int)uVar20 * 2 + *(long *)(local_90 + 0x10)) = uVar10;
  *(undefined2 *)(local_90 + (long)(int)*(uint *)(local_90 + 4) * 2 + *(long *)(local_90 + 0x10)) =
       0;
  FUN_1000c35a0(&local_a0,plVar1);
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_90;
  if (1 < *(uint *)local_90 + 1) {
    LOCK();
    *(uint *)local_90 = *(uint *)local_90 + 1;
    local_31 = *(uint *)local_90 != 0;
    UNLOCK();
  }
  QString::append(&local_88);
  this_04 = (QString *)(param_1 + 5);
  QString::operator=(this_04,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c0cc3;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1000c0cc3:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c0cf9;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1000c0cf9:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c0d2f;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1000c0d2f:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c0d73;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1000c0d73:
  FUN_1000f9b30(this_00,plVar1);
  QObject::connect(&local_a8,this_00,"2sigOnActionChanged(Actions::ActionType)",param_1,
                   "1onMenuActionChanged(Actions::ActionType)",2,this_04);
  bVar7 = 1;
  if (local_a8 != 0) {
    bVar7 = QMetaObject::Connection::isConnected_helper();
    bVar7 = bVar7 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a8);
  if (bVar7 != 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Error: failed to connect action changed signals and slots for client with vmUuid=\"%s\""
                  ,local_b0 + *(long *)(local_b0 + 0x10));
    if (*(int *)local_b0 == -1) {
      return;
    }
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      UNLOCK();
      if (*(int *)local_b0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_b0,1,8);
    return;
  }
  FUN_1000f1ca0(plVar18);
  FUN_1000f2a40(plVar18,this);
  FUN_10018d830(&local_b8,lVar14);
  CVmIdentification::getHomePath();
  QFileInfo::QFileInfo(local_c8,&local_d0);
  QFileInfo::absolutePath();
  FUN_1000f2b50(plVar18,plVar1,&local_b8,&local_c0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c0f1a;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1000c0f1a:
  QFileInfo::~QFileInfo(local_c8);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c0f5c;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1000c0f5c:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c0f92;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1000c0f92:
  QObject::connect(&local_d8,param_1[0x1c],"2sigDataReceived(const SmartCharPtr_t, unsigned)",
                   param_1,"1dataReceived(const SmartCharPtr_t, unsigned)",2);
  bVar7 = 1;
  if (local_d8 != 0) {
    bVar7 = QMetaObject::Connection::isConnected_helper();
    bVar7 = bVar7 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_d8);
  if (bVar7 != 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Error: failed to connect data exchange signals and slots for client with vmUuid=\"%s\""
                  ,local_e0 + *(long *)(local_e0 + 0x10));
    if (*(int *)local_e0 == -1) {
      return;
    }
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      UNLOCK();
      if (*(int *)local_e0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_e0,1,8);
    return;
  }
  QObject::connect(&local_e8,lVar14,"2vmConfigurationChanged(const CVmConfiguration &)",param_1,
                   "1configurationChanged(const CVmConfiguration &)",0);
  bVar7 = 1;
  if ((local_e8 != 0) && (cVar9 = QMetaObject::Connection::isConnected_helper(), cVar9 != '\0')) {
    QObject::connect(&local_f0,lVar14,"2vmConfigurationChanged(const CVmConfiguration &)",param_1,
                     "1onDeviceChanged()",0);
    bVar7 = 1;
    if ((local_f0 != 0) && (cVar9 = QMetaObject::Connection::isConnected_helper(), cVar9 != '\0')) {
      QObject::connect(&local_f8,lVar14,"2vmConfigurationChanged(const CVmConfiguration &)",param_1,
                       "1onVmColorChanged()",0);
      bVar7 = 1;
      if ((local_f8 != 0) && (cVar9 = QMetaObject::Connection::isConnected_helper(), cVar9 != '\0'))
      {
        QObject::connect(&local_100,lVar14,"2osInstallingChanged(bool)",param_1,
                         "1onOsInstallingChanged(bool)",0);
        bVar7 = 1;
        if ((local_100 != 0) &&
           (cVar9 = QMetaObject::Connection::isConnected_helper(), cVar9 != '\0')) {
          QObject::connect(&local_108,lVar14,
                           "2vmConfigurationChanged(const CVmConfiguration &, const CVmConfiguration &)"
                           ,param_1,"1onTravelEnabledChanged()",0);
          bVar7 = 1;
          if ((local_108 != 0) &&
             (cVar9 = QMetaObject::Connection::isConnected_helper(), cVar9 != '\0')) {
            QObject::connect(&local_110,lVar14,
                             "2vmToolsStateChanged(PRL_VM_TOOLS_STATE, PRL_VM_TOOLS_STATE)",param_1,
                             "1onVmToolsStateChanged(PRL_VM_TOOLS_STATE, PRL_VM_TOOLS_STATE)",0);
            bVar7 = 1;
            if (local_110 != 0) {
              bVar7 = QMetaObject::Connection::isConnected_helper();
              bVar7 = bVar7 ^ 1;
            }
            QMetaObject::Connection::~Connection((Connection *)&local_110);
          }
          QMetaObject::Connection::~Connection((Connection *)&local_108);
        }
        QMetaObject::Connection::~Connection((Connection *)&local_100);
      }
      QMetaObject::Connection::~Connection((Connection *)&local_f8);
    }
    QMetaObject::Connection::~Connection((Connection *)&local_f0);
  }
  QMetaObject::Connection::~Connection((Connection *)&local_e8);
  if (bVar7 != 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Error: failed to connect configuration changes signals and slots for client with vmUuid=\"%s\""
                  ,local_118 + *(long *)(local_118 + 0x10));
    if (*(int *)local_118 == -1) {
      return;
    }
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      UNLOCK();
      if (*(int *)local_118 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_118,1,8);
    return;
  }
  QObject::connect(&local_120,param_1[0x16],"2sigGuestOpenDocs(const DocsList_t)",param_1,
                   "1sendGuestOpenDocs(const DocsList_t)",2);
  bVar7 = 1;
  if (local_120 != 0) {
    bVar7 = QMetaObject::Connection::isConnected_helper();
    bVar7 = bVar7 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_120);
  if (bVar7 != 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Error: failed to connect guest open docs signals and slots for client with vmUuid=\"%s\""
                  ,local_128 + *(long *)(local_128 + 0x10));
    if (*(int *)local_128 == -1) {
      return;
    }
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      UNLOCK();
      if (*(int *)local_128 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_128,1,8);
    return;
  }
  QObject::connect(&local_130,param_1,"2sigSettingsApplied()",param_1,"1onSettingsApplied()",2);
  bVar7 = 1;
  if (local_130 != 0) {
    bVar7 = QMetaObject::Connection::isConnected_helper();
    bVar7 = bVar7 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_130);
  if (bVar7 != 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Failed to connect delayed actions signals and slots for client with vmUuid=\"%s\""
                  ,local_138 + *(long *)(local_138 + 0x10));
    if (*(int *)local_138 == -1) {
      return;
    }
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      UNLOCK();
      if (*(int *)local_138 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_138,1,8);
    return;
  }
  QObject::connect(&local_140,param_1,
                   "2sigAppsMenuFolderDockIconApply(const QString, const bool, const PRL_RESULT)",
                   param_1,
                   "1onAppsMenuFolderDockIconApply(const QString, const bool, const PRL_RESULT)",2);
  bVar7 = 1;
  if (local_140 != 0) {
    bVar7 = QMetaObject::Connection::isConnected_helper();
    bVar7 = bVar7 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_140);
  if (bVar7 != 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Failed to connect delayed actions signals and slots for client with vmUuid=\"%s\""
                  ,local_148 + *(long *)(local_148 + 0x10));
    if (*(int *)local_148 == -1) {
      return;
    }
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      UNLOCK();
      if (*(int *)local_148 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_148,1,8);
    return;
  }
  QObject::connect(&local_150,param_1,"2sigNewApplicationInstall(const QStringList)",param_1,
                   "1onNewApplicationInstall(const QStringList)",2);
  bVar7 = 1;
  if (local_150 != 0) {
    bVar7 = QMetaObject::Connection::isConnected_helper();
    bVar7 = bVar7 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_150);
  if (bVar7 != 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Failed to connect delayed actions signals and slots for client with vmUuid=\"%s\""
                  ,local_158 + *(long *)(local_158 + 0x10));
    if (*(int *)local_158 == -1) {
      return;
    }
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      UNLOCK();
      if (*(int *)local_158 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_158,1,8);
    return;
  }
  local_198 = (QArrayData *)QString::fromAscii_helper("1onSwitchViewModeFinished()",0x1b);
  local_1a0 = 0x80000000;
  local_1a8.field7 = 0;
  FUN_100a1c600(local_190,param_1,&local_198,&local_1a8);
  QVariant::~QVariant((QVariant *)&local_1a8);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c16c9;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_1000c16c9:
  uVar13 = CTaskManager::instance();
  FUN_100033dd0(local_1c0,plVar1);
  CTaskManager::addTaskWatcher(uVar13,local_190,local_1c0,0x24);
  CTaskGenericId::~CTaskGenericId(local_1c0);
  uVar13 = FUN_10018c280(lVar14);
  uVar13 = FUN_100319c00(uVar13);
  uVar13 = FUN_100328b70(uVar13);
  QObject::connect(&local_1c8,uVar13,"2windowActivated(unsigned int, unsigned int, unsigned int)",
                   param_1,"1coherenceWindowActivated(unsigned int, unsigned int, unsigned int)",2);
  bVar7 = 1;
  if ((local_1c8 != 0) && (cVar9 = QMetaObject::Connection::isConnected_helper(), cVar9 != '\0')) {
    QObject::connect(&local_1d0,uVar13,"2onBeforeCoherenceModeStartedSignal()",param_1,
                     "1beforeCoherenceModeStarted()",2);
    bVar7 = 1;
    if ((local_1d0 != 0) && (cVar9 = QMetaObject::Connection::isConnected_helper(), cVar9 != '\0'))
    {
      QObject::connect(&local_1d8,uVar13,"2onCoherenceModeStartedSignal()",param_1,
                       "1coherenceModeStarted()",2);
      bVar7 = 1;
      if ((local_1d8 != 0) && (cVar9 = QMetaObject::Connection::isConnected_helper(), cVar9 != '\0')
         ) {
        QObject::connect(&local_1e0,uVar13,"2onCoherenceModeStoppedSignal(bool, unsigned int)",
                         param_1,"1coherenceModeStopped(bool, unsigned int)",2);
        bVar7 = 1;
        if (local_1e0 != 0) {
          bVar7 = QMetaObject::Connection::isConnected_helper();
          bVar7 = bVar7 ^ 1;
        }
        QMetaObject::Connection::~Connection((Connection *)&local_1e0);
      }
      QMetaObject::Connection::~Connection((Connection *)&local_1d8);
    }
    QMetaObject::Connection::~Connection((Connection *)&local_1d0);
  }
  QMetaObject::Connection::~Connection((Connection *)&local_1c8);
  if (bVar7 != 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Error: failed to connect coherence signals and slots for client with vmUuid=\"%s\""
                  ,local_1e8 + *(long *)(local_1e8 + 0x10));
    if (*(int *)local_1e8 != -1) {
      if (*(int *)local_1e8 != 0) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + -1;
        local_31 = *(int *)local_1e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000c250e;
      }
      QArrayData::deallocate(local_1e8,1,8);
    }
    goto LAB_1000c250e;
  }
  uVar13 = FUN_10018c280(lVar14);
  uVar13 = FUN_100319bf0(uVar13);
  local_1f0 = (QArrayData *)
              QString::fromAscii_helper("parallels.SharedGuestApps.guest.win.plugin.jumplists",0x34)
  ;
  lVar15 = FUN_10032d8b0(uVar13,&local_1f0);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_31 = *(int *)local_1f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c197c;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_1000c197c:
  if (lVar15 != 0) {
    QObject::connect(&local_1f8,lVar15,"2tisRecordChanged(SdkHandleWrap, PRL_UINT32)",param_1,
                     "1onJumpListsGuestSupportChanged()",0);
    bVar7 = 1;
    if ((local_1f8 != 0) && (cVar9 = QMetaObject::Connection::isConnected_helper(), cVar9 != '\0'))
    {
      QObject::connect(&local_200,lVar15,"2tisRecordRemoved(SdkHandleWrap)",param_1,
                       "1onJumpListsGuestSupportChanged()",0);
      bVar7 = 1;
      if (local_200 != 0) {
        bVar7 = QMetaObject::Connection::isConnected_helper();
        bVar7 = bVar7 ^ 1;
      }
      QMetaObject::Connection::~Connection((Connection *)&local_200);
    }
    QMetaObject::Connection::~Connection((Connection *)&local_1f8);
    if ((0 < DAT_10230ffd0) && (bVar7 == 1)) {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",1,
                    "Failed to connect TIS signals and slots for client with vmUuid=\"%s\"",
                    local_208 + *(long *)(local_208 + 0x10));
      if (*(int *)local_208 != -1) {
        if (*(int *)local_208 != 0) {
          LOCK();
          *(int *)local_208 = *(int *)local_208 + -1;
          local_31 = *(int *)local_208 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000c1ab2;
        }
        QArrayData::deallocate(local_208,1,8);
      }
    }
LAB_1000c1ab2:
    iVar11 = FUN_10032c830(lVar15);
    if (iVar11 == 1) {
      *(undefined1 *)((long)param_1 + 0x103) = 1;
    }
  }
  local_210 = (QArrayData *)QString::fromAscii_helper("parallels.ModernMix.guest.win",0x1d);
  lVar15 = FUN_10032d8b0(uVar13,&local_210);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c1b30;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_1000c1b30:
  if (lVar15 != 0) {
    QObject::connect(&local_218,lVar15,"2tisRecordChanged(SdkHandleWrap, PRL_UINT32)",param_1,
                     "1onModernMixTisRecordChanged()",0);
    bVar7 = 1;
    if (local_218 != 0) {
      bVar7 = QMetaObject::Connection::isConnected_helper();
      bVar7 = bVar7 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_218);
    if ((0 < DAT_10230ffd0) && (bVar7 == 1)) {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",1,
                    "Failed to connect TIS signals and slots for client with vmUuid=\"%s\"",
                    local_220 + *(long *)(local_220 + 0x10));
      if (*(int *)local_220 != -1) {
        if (*(int *)local_220 != 0) {
          LOCK();
          *(int *)local_220 = *(int *)local_220 + -1;
          local_31 = *(int *)local_220 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000c1c0f;
        }
        QArrayData::deallocate(local_220,1,8);
      }
    }
LAB_1000c1c0f:
    FUN_1000c3790(param_1);
  }
  FUN_1000c3920(param_1);
  pcVar2 = *(code **)(*param_1 + 0x98);
  uVar13 = FUN_1000bbb10(param_1);
  (*pcVar2)(param_1,uVar13,0);
  (**(code **)(*param_1 + 0x90))(param_1);
  if ((char)param_1[9] == '\0') {
    uVar13 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_1000e8f90(uVar13);
  }
  pvVar12 = operator_new(0x20);
  FUN_100105840(pvVar12,lVar14);
  param_1[0x1f] = (long)pvVar12;
  param_1[0x42] = 0;
  cVar9 = FUN_1000c3ff0(param_1);
  lVar15 = 0x100000001;
  if (cVar9 == '\0') {
    lVar15 = 0;
  }
  param_1[0x43] = lVar15;
  puVar16 = operator_new(0x10);
  *puVar16 = &PTR_FUN_1021ee320;
  puVar16[1] = param_1;
  local_228 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (local_228 == (long *)0x0) {
    operator_delete(puVar16);
    local_228 = (long *)0x0;
  }
  else {
    *(undefined4 *)(local_228 + 1) = 1;
    local_228[2] = (long)puVar16;
    *local_228 = (long)&PTR_FUN_10226ce10;
  }
  FUN_1000eef10(param_1 + 0x17,&local_228);
  if (local_228 != (long *)0x0) {
    LOCK();
    plVar18 = local_228 + 1;
    lVar15 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)(*local_228 + 0x10))();
    }
  }
  local_268 = (QArrayData *)QString::fromAscii_helper("onActionTextChanged",0x13);
  local_270 = 0x80000000;
  local_278.field7 = 0;
  FUN_100a1c6b0(local_260,&local_268,param_1,&local_278);
  QVariant::~QVariant((QVariant *)&local_278);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c1ddb;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_1000c1ddb:
  uVar13 = FUN_1006915d0();
  local_280 = (Data *)puVar5;
  local_284 = 0x45;
  FUN_100071ff0(&local_280,&local_284);
  local_288 = 0x62;
  FUN_100071ff0(&local_280,&local_288);
  local_290 = puVar5;
  pQVar17 = (QArrayData *)QString::fromAscii_helper("text",4);
  local_298 = pQVar17;
  FUN_1000341d0(&local_290,&local_298);
  FUN_100691840(uVar13,&local_280,&local_290,local_260);
  if (*(int *)pQVar17 != -1) {
    if (*(int *)pQVar17 != 0) {
      LOCK();
      *(int *)pQVar17 = *(int *)pQVar17 + -1;
      local_31 = *(int *)pQVar17 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c1eae;
    }
    QArrayData::deallocate(pQVar17,2,8);
  }
LAB_1000c1eae:
  FUN_100039a80(&local_290);
  pDVar6 = local_280;
  if (*(int *)local_280 != -1) {
    if (*(int *)local_280 != 0) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + -1;
      local_31 = *(int *)local_280 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c1f23;
    }
    iVar11 = *(int *)(local_280 + 0xc);
    if (iVar11 != *(int *)(local_280 + 8)) {
      lVar15 = (long)*(int *)(local_280 + 8) * 8 + (long)iVar11 * -8;
      pDVar22 = local_280 + (long)iVar11 * 8 + 8;
      do {
        if (*(void **)pDVar22 != (void *)0x0) {
          operator_delete(*(void **)pDVar22);
        }
        pDVar22 = pDVar22 + -8;
        lVar15 = lVar15 + 8;
      } while (lVar15 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1000c1f23:
  uVar13 = FUN_10018f4e0(lVar14);
  plVar18 = (long *)FUN_1007c65a0(uVar13);
  local_2b8 = (Data *)*plVar18;
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 == 0) {
      QListData::detach((int)&local_2b8);
      lVar19 = (long)*(int *)(local_2b8 + 8);
      lVar15 = *plVar18;
      if (((Data *)(lVar15 + (long)*(int *)(lVar15 + 8) * 8) != local_2b8 + lVar19 * 8) &&
         (lVar21 = *(int *)(local_2b8 + 0xc) - lVar19,
         lVar21 != 0 && lVar19 <= *(int *)(local_2b8 + 0xc))) {
        _memcpy(local_2b8 + lVar19 * 8 + 0x10,
                (void *)(lVar15 + 0x10 + (long)*(int *)(lVar15 + 8) * 8),lVar21 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + 1;
      local_31 = *(int *)local_2b8 != 0;
      UNLOCK();
    }
  }
  local_2b0 = local_2b8 + (long)*(int *)(local_2b8 + 8) * 8 + 0x10;
  local_2a8 = local_2b8 + (long)*(int *)(local_2b8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_2b8 + 8) != *(int *)(local_2b8 + 0xc)) {
    do {
      local_2a0 = 1;
      QObject::connect(local_2c0,*(undefined8 *)local_2b0,"2deviceActionsChanged()",param_1,
                       "1onDeviceChanged()",0);
      QMetaObject::Connection::~Connection(local_2c0);
      local_2b0 = local_2b0 + 8;
    } while (local_2b0 != local_2a8);
  }
  local_2a0 = 1;
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_31 = *(int *)local_2b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c205d;
    }
    QListData::dispose(local_2b8);
  }
LAB_1000c205d:
  uVar13 = FUN_100152280();
  FUN_1001884b0(&local_2d0,lVar14);
  uVar13 = FUN_100152a20(uVar13,&local_2d0);
  QObject::connect(local_2c8,uVar13,"2serverHardwareChanged(const CHostHardwareInfo&)",param_1,
                   "1onDeviceChanged()",0);
  QMetaObject::Connection::~Connection(local_2c8);
  if (*(int *)local_2d0 != -1) {
    if (*(int *)local_2d0 != 0) {
      LOCK();
      *(int *)local_2d0 = *(int *)local_2d0 + -1;
      local_31 = *(int *)local_2d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c20ec;
    }
    QArrayData::deallocate(local_2d0,2,8);
  }
LAB_1000c20ec:
  lVar15 = FUN_100190780(lVar14);
  if (lVar15 != 0) {
    uVar13 = FUN_100190780(lVar14);
    QObject::connect(local_2d8,uVar13,"2networkAddressesChanged(QList<QHostAddress>)",param_1,
                     "1updateDevelopMenu()",0);
    QMetaObject::Connection::~Connection(local_2d8);
  }
  uVar13 = FUN_10018f5c0(lVar14);
  QObject::connect(local_2e0,uVar13,"2execToolStateChanged(CVmToolsWatcher::ToolState)",param_1,
                   "1updateDevelopMenu()",0);
  QMetaObject::Connection::~Connection(local_2e0);
  if (DAT_102310998 == (void *)0x0) {
    pvVar12 = operator_new(0x18);
    FUN_1006faf60(pvVar12);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar12;
  }
  QObject::connect(local_2e8,DAT_102310998,"2remapsChanged(const QString&)",param_1,
                   "1onRemapsChanged()",2);
  QMetaObject::Connection::~Connection(local_2e8);
  iVar11 = FUN_10018a9d0(lVar14);
  *(bool *)(param_1 + 0x4a) = iVar11 == 0x30000003;
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",2,"Vm uuid: \"%s\"",
                  local_2f0 + *(long *)(local_2f0 + 0x10));
    if (*(int *)local_2f0 != -1) {
      if (*(int *)local_2f0 != 0) {
        LOCK();
        *(int *)local_2f0 = *(int *)local_2f0 + -1;
        local_31 = *(int *)local_2f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000c2272;
      }
      QArrayData::deallocate(local_2f0,1,8);
    }
LAB_1000c2272:
    if (1 < DAT_10230ffd0) {
      local_300 = *(QArrayData **)(param_1[0x1e] + 0x58);
      if (1 < *(int *)local_300 + 1U) {
        LOCK();
        *(int *)local_300 = *(int *)local_300 + 1;
        local_31 = *(int *)local_300 != 0;
        UNLOCK();
      }
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",2,"Helpers folder: \"%s\"",
                    local_2f8 + *(long *)(local_2f8 + 0x10));
      if (*(int *)local_2f8 != -1) {
        if (*(int *)local_2f8 != 0) {
          LOCK();
          *(int *)local_2f8 = *(int *)local_2f8 + -1;
          local_31 = *(int *)local_2f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000c2314;
        }
        QArrayData::deallocate(local_2f8,1,8);
      }
LAB_1000c2314:
      if (*(int *)local_300 != -1) {
        if (*(int *)local_300 != 0) {
          LOCK();
          *(int *)local_300 = *(int *)local_300 + -1;
          local_31 = *(int *)local_300 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000c234a;
        }
        QArrayData::deallocate(local_300,2,8);
      }
LAB_1000c234a:
      if (1 < DAT_10230ffd0) {
        QString::toUtf8();
        FUN_100df99c0("SGAC","prl_client_app",2,"Temp helpers folder: \"%s\"",
                      local_308 + *(long *)(local_308 + 0x10));
        if (*(int *)local_308 != -1) {
          if (*(int *)local_308 != 0) {
            LOCK();
            *(int *)local_308 = *(int *)local_308 + -1;
            local_31 = *(int *)local_308 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000c23c8;
          }
          QArrayData::deallocate(local_308,1,8);
        }
LAB_1000c23c8:
        if (1 < DAT_10230ffd0) {
          FUN_1000a65d0(&local_318);
          QString::toUtf8();
          FUN_100df99c0("SGAC","prl_client_app",2,"User home dir: \"%s\"",
                        local_310 + *(long *)(local_310 + 0x10));
          if (*(int *)local_310 != -1) {
            if (*(int *)local_310 != 0) {
              LOCK();
              *(int *)local_310 = *(int *)local_310 + -1;
              local_31 = *(int *)local_310 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000c2452;
            }
            QArrayData::deallocate(local_310,1,8);
          }
LAB_1000c2452:
          if (*(int *)local_318 != -1) {
            if (*(int *)local_318 != 0) {
              LOCK();
              *(int *)local_318 = *(int *)local_318 + -1;
              local_31 = *(int *)local_318 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000c2488;
            }
            QArrayData::deallocate(local_318,2,8);
          }
LAB_1000c2488:
          if (1 < DAT_10230ffd0) {
            cVar9 = FUN_1000a6280(plVar1);
            pcVar23 = "no";
            if (cVar9 != '\0') {
              pcVar23 = "yes";
            }
            FUN_100df99c0("SGAC","prl_client_app",2,"Guest tools installed: %s",pcVar23);
          }
        }
      }
    }
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 1;
  }
  QVariant::~QVariant(local_240);
  if (local_260[0] != (int *)0x0) {
    LOCK();
    *local_260[0] = *local_260[0] + -1;
    local_31 = *local_260[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_260[0] != (int *)0x0)) {
      operator_delete(local_260[0]);
    }
  }
LAB_1000c250e:
  QVariant::~QVariant(local_170);
  if (local_190[0] != (int *)0x0) {
    LOCK();
    *local_190[0] = *local_190[0] + -1;
    local_31 = *local_190[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_190[0] != (int *)0x0)) {
      operator_delete(local_190[0]);
    }
  }
  return;
}

