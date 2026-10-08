
void FUN_1002481c0(long *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_70;
  undefined4 local_6c;
  long local_68;
  char local_59;
  QArrayData *local_58;
  long local_50;
  long local_48;
  long local_40;
  int local_38;
  undefined1 local_31;
  
  FUN_100248c70();
  local_38 = 0;
  uVar3 = CSdkRequest::getResultParamCount();
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      CSdkRequest::getResultParam((uint)&local_40);
      if (local_40 != 0) {
        iVar4 = _PrlEvent_GetErrCode(local_40,&local_38);
        iVar1 = local_38;
        if (iVar4 < 0) {
          FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlEvent_GetErrCode failed with RC: [%.8X]"
                        ,iVar4);
          local_38 = iVar4;
        }
        else if (local_38 < -0x7ffd89ff) {
          if ((local_38 != -0x7ffd8afd) && (local_38 != -0x7ffd8af9)) {
LAB_1002482b3:
            cVar2 = MessageUtils::isMessageCanBeHidden(local_38);
            if ((cVar2 == '\0') || (cVar2 = MessageUtils::isMessageHidden(iVar1), cVar2 == '\0')) {
              local_50 = local_40;
              if (local_40 != 0) {
                _PrlHandle_AddRef();
              }
              local_58 = (QArrayData *)QString::fromAscii_helper("vm_config_dev_item_id",0x15);
              SdkUtils::getParamByName(&local_48,&local_50,&local_58);
              if (*(int *)local_58 != -1) {
                if (*(int *)local_58 != 0) {
                  LOCK();
                  *(int *)local_58 = *(int *)local_58 + -1;
                  local_31 = *(int *)local_58 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100248337;
                }
                QArrayData::deallocate(local_58,2,8);
              }
LAB_100248337:
              if (local_50 != 0) {
                _PrlHandle_Free();
              }
              local_59 = '\0';
              local_68 = local_48;
              if (local_48 != 0) {
                _PrlHandle_AddRef();
              }
              uVar5 = SdkUtils::getParamUIntValue(&local_68,&local_59);
              if (local_68 != 0) {
                _PrlHandle_Free();
              }
              if (local_59 == '\0') {
                uVar5 = 0;
              }
              local_70 = local_38;
              local_6c = uVar5;
              FUN_100248df0(param_1 + 0x27,&local_70,&local_40);
              if (local_48 != 0) {
                _PrlHandle_Free();
              }
            }
          }
        }
        else if ((local_38 != -0x7ffd89ff) && (local_38 != -0x7ffd89af)) goto LAB_1002482b3;
        if (local_40 != 0) {
          _PrlHandle_Free();
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  if (*(int *)(param_1[0x27] + 4) != 0) {
    CAbstractTask::prependSubTask((int)param_1);
  }
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

