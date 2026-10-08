
void FUN_100107630(QObject *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int *piVar1;
  long lVar2;
  QArrayData *pQVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long local_68;
  QArrayData *local_60;
  long local_58;
  QArrayData *local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_100a4a020();
  *(undefined ***)param_1 = &PTR_FUN_1021f95d0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f9650;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (DAT_10226ca68 == 0) {
    DAT_10226ca68 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
  }
  FUN_10009bee0("unsigned",0,0);
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001548f0(uVar6,param_1 + 0x20);
  if (lVar7 == 0) {
    QString::toUtf8();
    FUN_100df99c0("GSHEXT","prl_client_app",0,"Error: failed to get Vm for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
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
      QArrayData::deallocate(local_40,1,8);
    }
  }
  else {
    QObject::connect(&local_48,param_1,"2sigDataReceived(const SmartCharPtr_t, const unsigned)",
                     param_1,"1onDataReceived(const SmartCharPtr_t, const unsigned)",2);
    bVar4 = 1;
    if (local_48 != 0) {
      bVar4 = QMetaObject::Connection::isConnected_helper();
      bVar4 = bVar4 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    if (bVar4 == 0) {
      FUN_10018c250(&local_58,lVar7);
      iVar5 = FUN_100a4a120(param_1 + 0x10,local_58,7);
      if (local_58 != 0) {
        _PrlHandle_Free();
      }
      if (iVar5 < 0) {
        QString::toUtf8();
        pQVar3 = local_60;
        lVar2 = *(long *)(local_60 + 0x10);
        FUN_10018c250(&local_68,lVar7);
        FUN_100df99c0("GSHEXT","prl_client_app",0,
                      "Error: failed to register SHAShellExt client tool: this=%p, vmUuid=\"%s\", hVm=0x%p"
                      ,param_1,pQVar3 + lVar2,local_68);
        if (local_68 != 0) {
          _PrlHandle_Free();
        }
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
      else if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("GSHEXT","prl_client_app",0,
                    "Error: failed to connect data exchange signals and slots for client with vmUuid=\"%s\""
                    ,local_50 + *(long *)(local_50 + 0x10));
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
  }
  return;
}

