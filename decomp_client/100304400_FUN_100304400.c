
undefined8 * FUN_100304400(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  QVariant local_88;
  long local_78;
  undefined1 local_70 [8];
  QArrayData *local_68;
  int *local_58;
  QVariant local_48;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"Extracting slot from the job handle...");
  }
  uVar2 = CSdkCommunicator::requestStorage();
  local_78 = *param_3;
  if (local_78 != 0) {
    _PrlHandle_AddRef();
  }
  CRequestStorage::getRequestInfoByJob(local_70,uVar2,&local_78);
  if (local_78 != 0) {
    _PrlHandle_Free();
  }
  QVariant::QVariant(&local_88,&local_48);
  if (DAT_102271690 == 0) {
    DAT_102271690 = FUN_1002032b0("CSlotInfo",0xffffffffffffffff,1);
  }
  cVar1 = QVariant::canConvert((int)&local_88);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 5) = 0x80000000;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else {
    FUN_1003047c0(param_1,&local_88);
    if (2 < DAT_10230ffd0) {
      cVar1 = FUN_10019cd90(param_1);
      pcVar3 = "INVALID";
      if (cVar1 != '\0') {
        pcVar3 = "VALID";
      }
      FUN_100df99c0("","prl_client_app",3,"Extracted slot: %s",pcVar3);
    }
  }
  QVariant::~QVariant(&local_88);
  QVariant::~QVariant(&local_48);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    local_31 = *local_58 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_58 != (int *)0x0)) {
      operator_delete(local_58);
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return param_1;
}

