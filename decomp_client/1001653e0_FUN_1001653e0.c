
void FUN_1001653e0(long param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  CVirtualNetworks *pCVar4;
  QString this;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
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
  QTypedArrayData<unsigned_short> *local_58;
  QArrayData *local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  plVar6 = (long *)(param_1 + 0xc0);
  CSdkRequest::getResultHandle();
  if (plVar6 != &local_48) {
    if (*plVar6 != 0) {
      _PrlHandle_Free();
    }
    *plVar6 = local_48;
    if (local_48 != 0) {
      _PrlHandle_AddRef();
    }
  }
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if (*plVar6 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: result handle is invalid.");
    return;
  }
  uVar2 = CSdkRequest::getResultParamCount();
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Virtual Net Count %d ");
  }
  pCVar4 = operator_new(0xa0);
  CVirtualNetworks::CVirtualNetworks(pCVar4);
  if (uVar2 != 0) {
    uVar9 = 0;
    do {
      CSdkRequest::getResultAsString((int)&local_50);
      if (*(int *)(local_50 + 4) == 0) {
        FUN_100df99c0("","prl_client_app",0,"Can\'t get Virtual Network configuration XML");
      }
      else {
        this.field0_0x0 = operator_new(0xd8);
        CVirtualNetwork::CVirtualNetwork((CVirtualNetwork *)this.field0_0x0);
        local_60 = local_50;
        if (1 < *(int *)local_50 + 1U) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + 1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
        }
        local_58 = this.field0_0x0;
        CBaseNode::fromString(this,SUB81(&local_60,0),(QString *)0x0,(int *)0x0,(int *)0x0);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100165555;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_100165555:
        FUN_1001798a0(pCVar4 + 0x98,&local_58);
      }
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001655be;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_1001655be:
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  pCVar4 = *(CVirtualNetworks **)(param_1 + 0x120);
  if (pCVar4 == (CVirtualNetworks *)0x0) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pNetworkConfig",
                  "CServerWrap.cpp",0x747,"handleGetVirtualNetworkListResponse");
    pCVar4 = *(CVirtualNetworks **)(param_1 + 0x120);
  }
  CParallelsNetworkConfig::setVirtualNetworks(pCVar4);
  plVar6 = *(long **)(param_1 + 0x120);
  pcVar1 = *(code **)(*plVar6 + 0x68);
  FUN_100d842d0(&local_78);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_70);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001656b4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001656b4:
  FUN_100137810(&local_68,&local_70,PTR_s_netConfigCache_102270fb8);
  iVar3 = (*pcVar1)(plVar6,&local_68,1,1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100165711;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100165711:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100165741;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100165741:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100165771;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100165771:
  if (iVar3 != 0) {
    FUN_100df99c0("","prl_client_app",0,"Failed to write net config XML");
  }
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
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
          }
        }
        local_b0 = local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10;
        local_a8 = local_b8 + (long)*(int *)(local_b8 + 0xc) * 8 + 0x10;
        if (*(int *)(local_b8 + 8) != *(int *)(local_b8 + 0xc)) {
          do {
            local_a0 = 1;
            lVar5 = *(long *)local_b0;
            if ((lVar5 != 0) && (iVar3 = FUN_1007bd980(lVar5), iVar3 == 8)) {
              FUN_1007be9b0(lVar5);
            }
            local_b0 = local_b0 + 8;
          } while (local_b0 != local_a8);
        }
        local_a0 = 1;
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100165930;
          }
          QListData::dispose(local_b8);
        }
      }
LAB_100165930:
      local_90 = local_90 + 1;
    } while (local_90 != local_88);
  }
  local_80 = 1;
  if (*local_98 != -1) {
    if (*local_98 != 0) {
      LOCK();
      *local_98 = *local_98 + -1;
      local_31 = *local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100165986;
    }
    FUN_100179430(&local_98,local_98);
  }
LAB_100165986:
  FUN_100800b90(param_1,*(undefined8 *)(param_1 + 0x120));
  return;
}

