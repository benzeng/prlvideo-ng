
void FUN_100164be0(long param_1,long *param_2)

{
  QString QVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  undefined4 local_a0;
  int *local_98;
  long *local_90;
  long *local_88;
  undefined4 local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  long local_50;
  QString local_48;
  long local_40;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_40 = *param_2;
  if (local_40 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getResultHandle(&local_38,&local_40);
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  lVar5 = local_38;
  if (local_38 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: result handle is invalid.");
    goto LAB_100165116;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    _PrlHandle_Free();
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  iVar4 = _PrlResult_GetParamByIndex(lVar5,0);
  if (iVar4 != 0) {
    FUN_100df99c0("","prl_client_app",0,"Can\'t get server config handle from result handle.");
    goto LAB_100165116;
  }
  local_50 = local_38;
  if (local_38 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getParamXML(&local_48,&local_50,0);
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  CBaseNode::toString(SUB81(&local_58,0),SUB81(*(undefined8 *)(param_1 + 0xe0),0));
  cVar3 = operator==(&local_48,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100164d1d;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100164d1d:
  if (cVar3 == '\0') {
    QVar1.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0xe0);
    local_60 = (QArrayData *)local_48.field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    CBaseNode::fromString(QVar1,SUB81(&local_60,0),(QString *)0x0,(int *)0x0,(int *)0x0);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100164d88;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100164d88:
    plVar6 = *(long **)(param_1 + 0xe0);
    pcVar2 = *(code **)(*plVar6 + 0x68);
    FUN_100d842d0(&local_78);
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_30,0x1e2468c);
    QString::append(&local_70);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100164e0a;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_100164e0a:
    FUN_100137810(&local_68,&local_70,PTR_s_hwInfoCache_102270fa8);
    iVar4 = (*pcVar2)(plVar6,&local_68,1,1);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100164e67;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100164e67:
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_21 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100164e97;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100164e97:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_21 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100164ec7;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100164ec7:
    if (iVar4 != 0) {
      FUN_100df99c0("","prl_client_app",0,"Failed to write hw cache XML");
    }
    FUN_1008004a0(param_1,*(undefined8 *)(param_1 + 0xe0));
    FUN_100179800(&local_98,param_1 + 200);
    local_90 = (long *)(local_98 + (long)local_98[2] * 2 + 4);
    local_88 = (long *)(local_98 + (long)local_98[3] * 2 + 4);
    if (local_98[2] != local_98[3]) {
      do {
        local_80 = 1;
        lVar5 = *(long *)*local_90;
        if ((((lVar5 != 0) && (*(int *)(lVar5 + 4) != 0)) && (((long *)*local_90)[1] != 0)) &&
           (lVar5 = FUN_10018f4e0(), lVar5 != 0)) {
          plVar6 = (long *)FUN_1007c65a0(lVar5);
          local_b8 = (Data *)*plVar6;
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 == 0) {
              QListData::detach((int)&local_b8);
              lVar7 = (long)*(int *)(local_b8 + 8);
              lVar5 = *plVar6;
              if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_b8 + lVar7 * 8) &&
                 (lVar8 = *(int *)(local_b8 + 0xc) - lVar7,
                 lVar8 != 0 && lVar7 <= *(int *)(local_b8 + 0xc))) {
                _memcpy(local_b8 + lVar7 * 8 + 0x10,
                        (void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),lVar8 * 8);
              }
            }
            else {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + 1;
              local_21 = *(int *)local_b8 != 0;
              UNLOCK();
            }
          }
          local_b0 = local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10;
          local_a8 = local_b8 + (long)*(int *)(local_b8 + 0xc) * 8 + 0x10;
          if (*(int *)(local_b8 + 8) != *(int *)(local_b8 + 0xc)) {
            do {
              local_a0 = 1;
              if (*(long *)local_b0 != 0) {
                FUN_1007be9b0();
              }
              local_b0 = local_b0 + 8;
            } while (local_b0 != local_a8);
          }
          local_a0 = 1;
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_21 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_21) goto LAB_100165090;
            }
            QListData::dispose(local_b8);
          }
        }
LAB_100165090:
        local_90 = local_90 + 1;
      } while (local_90 != local_88);
    }
    local_80 = 1;
    if (*local_98 != -1) {
      if (*local_98 != 0) {
        LOCK();
        *local_98 = *local_98 + -1;
        local_21 = *local_98 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001650e6;
      }
      FUN_100179430(&local_98,local_98);
    }
  }
LAB_1001650e6:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100165116;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100165116:
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return;
}

