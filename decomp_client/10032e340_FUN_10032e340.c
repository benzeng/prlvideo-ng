
void FUN_10032e340(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  byte bVar3;
  int iVar4;
  QArrayData *local_68;
  long local_60;
  QArrayData *local_58;
  long local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  FUN_100327cd0();
  FUN_100a4a020();
  *param_1 = &PTR_FUN_10220bdf0;
  param_1[9] = &PTR_FUN_10220be80;
  FUN_1003193e0(param_1 + 0xb,param_2);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (DAT_10226ca68 == 0) {
    DAT_10226ca68 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
  }
  FUN_10009bee0("unsigned",0,0);
  FUN_10032f140("UIEMU_CARET_INFO",0,0);
  QObject::connect(&local_40,param_1,"2sigDataReceived(const SmartCharPtr_t, const unsigned)",
                   param_1,"1onDataReceived(const SmartCharPtr_t, const unsigned)",2);
  bVar3 = 1;
  if (local_40 != 0) {
    bVar3 = QMetaObject::Connection::isConnected_helper();
    bVar3 = bVar3 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  if (bVar3 == 0) {
    FUN_1003193b0(&local_50,param_2);
    iVar4 = FUN_100a4a120(param_1 + 9,local_50,8);
    if (local_50 != 0) {
      _PrlHandle_Free();
    }
    if (iVar4 < 0) {
      QString::toUtf8();
      pQVar2 = local_58;
      lVar1 = *(long *)(local_58 + 0x10);
      FUN_1003193b0(&local_60,param_2);
      FUN_100df99c0("UIEMU","prl_client_app",0,
                    "Error: failed to register UIEMU client tool: this=%p, vmUuid=\"%s\", hVm=0x%p",
                    param_1,pQVar2 + lVar1,local_60);
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
      QUuid::createUuid();
      QUuid::toByteArray();
      param_1[0x10] = 0;
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      _memcpy(param_1 + 0xc,local_68 + *(long *)(local_68 + 0x10),(long)*(int *)(local_68 + 4));
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
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
  }
  else {
    QString::toUtf8();
    FUN_100df99c0("UIEMU","prl_client_app",0,
                  "Error: failed to connect data exchange signals and slots for client with vmUuid=\"%s\""
                  ,local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
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
    }
  }
  return;
}

