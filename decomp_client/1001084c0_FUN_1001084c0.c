
void FUN_1001084c0(QObject *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int *piVar1;
  long lVar2;
  QArrayData *pQVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long local_68;
  long local_60;
  QArrayData *local_58;
  long local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_100a4a020();
  *(undefined ***)param_1 = &PTR_FUN_1021f9700;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f9780;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  param_1[0x28] = (QObject)0x0;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (DAT_10226ca68 == 0) {
    DAT_10226ca68 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
  }
  FUN_10009bee0("unsigned",0,0);
  uVar5 = FUN_100152280();
  lVar6 = FUN_1001548f0(uVar5,param_1 + 0x20);
  if (lVar6 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SHAC","prl_client_app",0,"Error: failed to get Vm for vmUuid=\"%s\"",
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
    if (local_48 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    FUN_10018c250(&local_50,lVar6);
    iVar4 = FUN_100a4a120(param_1 + 0x10,local_50,0xf);
    if (local_50 != 0) {
      _PrlHandle_Free();
    }
    if (iVar4 < 0) {
      QString::toUtf8();
      pQVar3 = local_58;
      lVar2 = *(long *)(local_58 + 0x10);
      FUN_10018c250(&local_60,lVar6);
      FUN_100df99c0("SHAC","prl_client_app",0,
                    "Error: failed to register SharedHostApps client tool: this=%p, vmUuid=\"%s\", hVm=0x%p"
                    ,param_1,pQVar3 + lVar2,local_60);
      if (local_60 != 0) {
        _PrlHandle_Free();
      }
      if (*(int *)local_58 != -1) {
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
      }
    }
    else {
      QObject::connect(&local_68,lVar6,"2vmConfigurationChanged(const CVmConfiguration &)",param_1,
                       "1onConfigurationChanged(const CVmConfiguration &)",0);
      if (local_68 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_68);
      uVar5 = FUN_10018c2b0(lVar6);
      FUN_100108890(param_1,uVar5,param_1 + 0x28);
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
    }
  }
  return;
}

