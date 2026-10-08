
long FUN_100304050(undefined8 param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int *local_88;
  long local_80;
  QVariant local_78;
  long local_68;
  undefined1 local_60 [8];
  QArrayData *local_58;
  int *local_48;
  long local_40;
  QVariant local_38;
  undefined1 local_21;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"Extracting hint from the job handle...");
  }
  uVar2 = CSdkCommunicator::requestStorage();
  local_68 = *param_2;
  if (local_68 != 0) {
    _PrlHandle_AddRef();
  }
  CRequestStorage::getRequestInfoByJob(local_60,uVar2,&local_68);
  if (local_68 != 0) {
    _PrlHandle_Free();
  }
  if (local_48 != (int *)0x0) {
    LOCK();
    *local_48 = *local_48 + 1;
    UNLOCK();
    lVar3 = 0;
    if (local_48[1] != 0) {
      lVar3 = local_40;
    }
    LOCK();
    *local_48 = *local_48 + -1;
    local_21 = *local_48 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(local_48);
    }
    if (lVar3 != 0) {
      lVar3 = 0;
      if (local_48 != (int *)0x0) {
        LOCK();
        *local_48 = *local_48 + 1;
        UNLOCK();
        lVar3 = 0;
        if (((local_40 != 0) && (local_48[1] != 0)) &&
           (lVar3 = 0, (*(byte *)(*(long *)(local_40 + 8) + 0x20) & 1) != 0)) {
          lVar3 = local_40;
        }
        LOCK();
        *local_48 = *local_48 + -1;
        local_21 = *local_48 != 0;
        UNLOCK();
        if (!(bool)local_21) {
          operator_delete(local_48);
        }
      }
      goto LAB_100304222;
    }
  }
  QVariant::QVariant(&local_78,&local_38);
  if (DAT_10226c7b8 == 0) {
    DAT_10226c7b8 = FUN_100086f00("QPointer<QObject>",0xffffffffffffffff,1);
  }
  cVar1 = QVariant::canConvert((int)&local_78);
  lVar3 = 0;
  if (cVar1 != '\0') {
    FUN_100086de0(&local_88,&local_78);
    lVar3 = 0;
    if (local_88 != (int *)0x0) {
      lVar3 = 0;
      if (((local_88[1] != 0) && (lVar3 = 0, local_80 != 0)) &&
         (lVar3 = 0, (*(byte *)(*(long *)(local_80 + 8) + 0x20) & 1) != 0)) {
        lVar3 = local_80;
      }
      LOCK();
      *local_88 = *local_88 + -1;
      local_21 = *local_88 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(local_88);
      }
    }
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",3,"Extracted widget: %p",lVar3);
    }
  }
  QVariant::~QVariant(&local_78);
LAB_100304222:
  QVariant::~QVariant(&local_38);
  if (local_48 != (int *)0x0) {
    LOCK();
    *local_48 = *local_48 + -1;
    local_21 = *local_48 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_48 != (int *)0x0)) {
      operator_delete(local_48);
    }
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return lVar3;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return lVar3;
}

