
void FUN_10016b2a0(long param_1,long *param_2,QString *param_3,long param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long local_48;
  QArrayData *local_40;
  long local_38;
  QString local_30;
  undefined1 local_21;
  
  if ((param_4 != 0) && (*(char *)(param_4 + 0x60) != '\0')) {
    return;
  }
  local_38 = *param_2;
  if (local_38 != 0) {
    _PrlHandle_AddRef();
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("vm_uuid",7);
  SdkUtils::getParamStringValue(&local_30,&local_38,&local_40,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10016b32e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10016b32e:
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  if ((*(int *)(local_30.field0_0x0 + 4) == 0) ||
     (lVar2 = FUN_10015cb20(param_1,&local_30), lVar2 == 0)) {
    QString::operator=(&local_30,param_3);
    cVar1 = operator==(&local_30,(QString *)(param_1 + 0x70));
    if (cVar1 != '\0') {
      QString::operator=(&local_30,(QString *)(param_1 + 0x68));
    }
  }
  uVar3 = CMessageManager::instance();
  local_48 = *param_2;
  if (local_48 != 0) {
    _PrlHandle_AddRef();
  }
  CMessageManager::showMessageFromServer(uVar3,&local_48,&local_30,0);
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

