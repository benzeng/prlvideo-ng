
long * FUN_100174c40(long *param_1,long param_2,QString *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  QString local_140;
  QArrayData *local_138;
  CVirtualNetwork local_130 [216];
  long local_58;
  QArrayData *local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  local_40 = *(long *)(param_2 + 0xc0);
  if (local_40 == 0) {
    *param_1 = 0;
  }
  else {
    _PrlHandle_AddRef();
    uVar2 = SdkUtils::getResultParamCount(&local_40);
    if (local_40 != 0) {
      _PrlHandle_Free();
    }
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",3,"Virtual Net Count %d ");
    }
    if (uVar2 != 0) {
      uVar4 = 0;
      do {
        local_48 = 0;
        iVar3 = _PrlResult_GetParamByIndex(*(undefined8 *)(param_2 + 0xc0),uVar4,&local_48);
        if (iVar3 < 0) {
          *param_1 = 0;
          iVar3 = 1;
        }
        else {
          local_58 = local_48;
          if (local_48 != 0) {
            _PrlHandle_AddRef();
          }
          SdkUtils::getParamAsString(&local_50,&local_58);
          if (local_58 != 0) {
            _PrlHandle_Free();
          }
          if (*(int *)(local_50 + 4) == 0) {
            iVar3 = 6;
            FUN_100df99c0("","prl_client_app",0,"Wrong Virtual Network configuration XML.");
          }
          else {
            CVirtualNetwork::CVirtualNetwork(local_130);
            local_138 = local_50;
            if (1 < *(int *)local_50 + 1U) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + 1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
            }
            CBaseNode::fromString
                      ((QTypedArrayData<unsigned_short> *)local_130,SUB81(&local_138,0),
                       (QString *)0x0,(int *)0x0,(int *)0x0);
            if (*(int *)local_138 != -1) {
              if (*(int *)local_138 != 0) {
                LOCK();
                *(int *)local_138 = *(int *)local_138 + -1;
                local_31 = *(int *)local_138 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100174dcf;
              }
              QArrayData::deallocate(local_138,2,8);
            }
LAB_100174dcf:
            CVirtualNetwork::getUuid();
            cVar1 = operator==(&local_140,param_3);
            if (*(int *)local_140.field0_0x0 != -1) {
              if (*(int *)local_140.field0_0x0 != 0) {
                LOCK();
                *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
                local_31 = *(int *)local_140.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100174e2e;
              }
              QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
            }
LAB_100174e2e:
            iVar3 = 0;
            if (cVar1 != '\0') {
              *param_1 = local_48;
              iVar3 = 1;
              if (local_48 != 0) {
                _PrlHandle_AddRef();
              }
            }
            CVirtualNetwork::~CVirtualNetwork(local_130);
          }
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100174ee4;
            }
            QArrayData::deallocate(local_50,2,8);
          }
        }
LAB_100174ee4:
        if (local_48 != 0) {
          _PrlHandle_Free();
        }
        if (iVar3 == 1) {
          return param_1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    *param_1 = 0;
  }
  return param_1;
}

