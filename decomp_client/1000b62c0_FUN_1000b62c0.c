
void FUN_1000b62c0(QObject *param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  int *piVar1;
  long lVar2;
  QArrayData *pQVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long local_70;
  QArrayData *local_68;
  long local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_100a4a020();
  *(undefined ***)param_1 = &PTR_FUN_1021f8be0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f8c80;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  param_1[0x2c] = (QObject)0x0;
  param_1[0x2d] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("SGAL","prl_client_app",2,"Initializing: Shared Guest Applications client");
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (DAT_10226ca68 == 0) {
    DAT_10226ca68 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
  }
  FUN_10009bee0("unsigned",0,0);
  QObject::connect(&local_40,param_1,"2sigUp()",param_1,"1up()",2);
  bVar5 = 1;
  if ((local_40 != 0) && (cVar4 = QMetaObject::Connection::isConnected_helper(), cVar4 != '\0')) {
    QObject::connect(&local_48,param_1,"2sigDown()",param_1,"1down()",2);
    bVar5 = 1;
    if (local_48 != 0) {
      bVar5 = QMetaObject::Connection::isConnected_helper();
      bVar5 = bVar5 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  if (bVar5 == 0) {
    uVar7 = FUN_100152280();
    lVar8 = FUN_1001548f0(uVar7,param_1 + 0x20);
    if (lVar8 == 0) {
      QString::toUtf8();
      FUN_100df99c0("SGAL","prl_client_app",0,"Error: failed to get Vm for vmUuid=\"%s\"",
                    local_58 + *(long *)(local_58 + 0x10));
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
      FUN_10018c250(&local_60,lVar8);
      iVar6 = FUN_100a4a120(param_1 + 0x10,local_60,3);
      if (local_60 != 0) {
        _PrlHandle_Free();
      }
      if (iVar6 < 0) {
        QString::toUtf8();
        pQVar3 = local_68;
        lVar2 = *(long *)(local_68 + 0x10);
        FUN_10018c250(&local_70,lVar8);
        FUN_100df99c0("SGAL","prl_client_app",0,
                      "Error: failed to register Shared Guest Applications client tool: this=%p, vmUuid=\"%s\", hVm=%p"
                      ,param_1,pQVar3 + lVar2,local_70);
        if (local_70 != 0) {
          _PrlHandle_Free();
        }
        if (*(int *)local_68 != -1) {
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
        }
      }
      else {
        if (1 < DAT_10230ffd0) {
          FUN_100df99c0("SGAL","prl_client_app",2,"Initialized: Shared Guest Applications client");
        }
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 1;
        }
      }
    }
  }
  else {
    QString::toUtf8();
    FUN_100df99c0("SGAL","prl_client_app",0,
                  "Error: failed to connect signals and slots for client with vmUuid=\"%s\"",
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
  return;
}

