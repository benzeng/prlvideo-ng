
void FUN_10009aa00(QObject *param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  byte bVar3;
  int iVar4;
  QTimer *pQVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long local_78;
  QArrayData *local_70;
  long local_68;
  QArrayData *local_60;
  long local_58;
  QArrayData *local_50;
  Connection local_48 [8];
  Connection local_40 [15];
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_100a4a020();
  *(undefined ***)param_1 = &PTR_FUN_1021f8338;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f83b8;
  FUN_1003193e0(param_1 + 0x20,param_2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x30] = (QObject)0x0;
  param_1[0x31] = (QObject)0x0;
  auVar7._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar7._0_8_ = PTR_shared_null_1021e15e8;
  auVar7._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar7;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (DAT_10226ca68 == 0) {
    DAT_10226ca68 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
  }
  FUN_10009bee0("unsigned",0,0);
  pQVar5 = operator_new(0x20);
  QTimer::QTimer(pQVar5,param_1);
  *(QTimer **)(param_1 + 0x38) = pQVar5;
  QTimer::setInterval((int)pQVar5);
  *(byte *)(*(long *)(param_1 + 0x38) + 0x1c) = *(byte *)(*(long *)(param_1 + 0x38) + 0x1c) | 1;
  QObject::connect(local_40,*(undefined8 *)(param_1 + 0x38),"2timeout()",param_1,
                   "1onScreenSizeChangedTimeout()",0);
  QMetaObject::Connection::~Connection(local_40);
  pQVar5 = operator_new(0x20);
  QTimer::QTimer(pQVar5,param_1);
  *(QTimer **)(param_1 + 0x40) = pQVar5;
  QTimer::setInterval((int)pQVar5);
  *(byte *)(*(long *)(param_1 + 0x40) + 0x1c) = *(byte *)(*(long *)(param_1 + 0x40) + 0x1c) | 1;
  QObject::connect(local_48,*(undefined8 *)(param_1 + 0x40),"2timeout()",param_1,
                   "1onViewModeChangedTimeout()",0);
  QMetaObject::Connection::~Connection(local_48);
  lVar6 = FUN_100319390(param_2);
  if (lVar6 == 0) {
    QString::toUtf8();
    FUN_100df99c0("FSCRMONC","prl_client_app",0,"Error: failed to get Vm for vmUuid=\"%s\"",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
  else {
    QObject::connect(&local_58,param_1,"2sigDataReceived(const SmartCharPtr_t, const unsigned)",
                     param_1,"1onDataReceived(const SmartCharPtr_t, const unsigned)",2);
    bVar3 = 1;
    if (local_58 != 0) {
      bVar3 = QMetaObject::Connection::isConnected_helper();
      bVar3 = bVar3 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    if (bVar3 == 0) {
      FUN_10018c250(&local_68,lVar6);
      iVar4 = FUN_100a4a120(param_1 + 0x10,local_68,10);
      if (local_68 != 0) {
        _PrlHandle_Free();
      }
      if (iVar4 < 0) {
        QString::toUtf8();
        pQVar2 = local_70;
        lVar1 = *(long *)(local_70 + 0x10);
        FUN_10018c250(&local_78,lVar6);
        FUN_100df99c0("FSCRMONC","prl_client_app",0,
                      "Error: failed to register Fullscreen Monitor client tool: this=%p, vmUuid=\"%s\", hVm=0x%p"
                      ,param_1,pQVar2 + lVar1,local_78);
        if (local_78 != 0) {
          _PrlHandle_Free();
        }
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            UNLOCK();
            if (*(int *)local_70 != 0) {
              return;
            }
            local_31 = 0;
          }
          QArrayData::deallocate(local_70,1,8);
        }
      }
      else if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("FSCRMONC","prl_client_app",0,
                    "Error: failed to connect data exchange signals and slots for client with vmUuid=\"%s\""
                    ,local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          UNLOCK();
          if (*(int *)local_60 != 0) {
            return;
          }
          local_31 = 0;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
  }
  return;
}

