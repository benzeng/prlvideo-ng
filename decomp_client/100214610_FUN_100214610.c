
void FUN_100214610(long param_1)

{
  int iVar1;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48;
  QArrayData *local_40;
  char local_31;
  long local_30;
  long local_28;
  undefined1 local_19;
  
  local_28 = 0;
  iVar1 = _PrlJob_GetResult(*(undefined8 *)(param_1 + 0x10),&local_28);
  if (iVar1 < 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: couldn\'t get the result handle. Return code: [%.8X]",iVar1);
    goto LAB_1002147b9;
  }
  local_30 = 0;
  iVar1 = _PrlResult_GetParamByIndex(local_28,0,&local_30);
  if (iVar1 < 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: PrlResult_GetParamByIndex failed with RC = [%.8X]",iVar1);
  }
  else {
    local_31 = '\0';
    local_48 = local_30;
    if (local_30 != 0) {
      _PrlHandle_AddRef();
    }
    SdkUtils::getParamStringValue(&local_40,&local_48,0,&local_31);
    if (local_48 != 0) {
      _PrlHandle_Free();
    }
    if (local_31 != '\0') {
      QString::toLatin1();
      QByteArray::fromBase64((QByteArray *)&local_50);
      QImage::loadFromData
                ((uchar *)(param_1 + 0x18),(int)*(undefined8 *)(local_50 + 0x10) + (int)local_50,
                 (char *)(ulong)*(uint *)(local_50 + 4));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_19 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100214705;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_100214705:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_19 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100214735;
        }
        QArrayData::deallocate(local_58,1,8);
      }
    }
LAB_100214735:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_19 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1002147ab;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1002147ab:
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
LAB_1002147b9:
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  return;
}

