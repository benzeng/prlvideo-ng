
long * FUN_100110c60(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  Data *pDVar9;
  long lVar10;
  Data *pDVar11;
  QArrayData *pQVar12;
  bool bVar13;
  undefined1 local_1c8 [16];
  Data *local_1b8;
  Data *local_1b0;
  Data *local_1a8;
  undefined4 local_1a0;
  _func_void_Node_ptr *local_198;
  QArrayData *local_190;
  Data *local_188;
  Data *local_180;
  Data *local_178;
  uint local_170;
  Data *local_168;
  long local_160;
  QArrayData *local_158;
  CVmConfiguration local_150 [16];
  undefined1 local_140 [236];
  int local_54;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  *param_1 = 0;
  param_1[1] = (long)PTR_shared_null_1021e15d0;
  if (param_2 == 0) {
    return param_1;
  }
  FUN_10015af30(&local_40,param_2,param_3);
  lVar6 = local_40;
  local_48 = 0;
  if (local_40 == 0) {
    return param_1;
  }
  FUN_10015a350(&local_50,param_2);
  lVar8 = local_50;
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  local_48 = 0;
  iVar5 = _PrlVmCfg_AddDefaultDeviceEx(lVar6,lVar8,param_4,&local_48);
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  if (iVar5 < 0) {
    FUN_100df99c0("","prl_client_app",0,"Failed to add default device to VM.");
    goto LAB_10011132d;
  }
  iVar5 = _PrlVmDev_GetIndex(local_48,&local_54);
  if (iVar5 < 0) {
    FUN_100df99c0("","prl_client_app",0,"Failed to get default device index.");
    goto LAB_10011132d;
  }
  local_160 = local_40;
  if (local_40 != 0) {
    _PrlHandle_AddRef();
  }
  FUN_10018d690(&local_158,&local_160);
  FUN_100129dd0(local_150,&local_158);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100110d95;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100110d95:
  if (local_160 != 0) {
    _PrlHandle_Free();
  }
  local_168 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1001294a0(local_140,param_3,&local_168);
  lVar6 = CVmConfiguration::getVmHardwareList();
  plVar2 = *(long **)(lVar6 + 0xa8 + (ulong)param_4 * 8);
  local_188 = (Data *)*plVar2;
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 == 0) {
      QListData::detach((int)&local_188);
      lVar8 = (long)*(int *)(local_188 + 8);
      lVar6 = *plVar2;
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_188 + lVar8 * 8) &&
         (lVar10 = *(int *)(local_188 + 0xc) - lVar8,
         lVar10 != 0 && lVar8 <= *(int *)(local_188 + 0xc))) {
        _memcpy(local_188 + lVar8 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + 1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
    }
  }
  local_180 = local_188 + (long)*(int *)(local_188 + 8) * 8 + 0x10;
  local_178 = local_188 + (long)*(int *)(local_188 + 0xc) * 8 + 0x10;
  local_170 = 1;
  lVar6 = 0;
  if (*(int *)(local_188 + 8) != *(int *)(local_188 + 0xc)) {
    lVar6 = 0;
    do {
      if (local_170 != 0) {
        uVar3 = *(undefined8 *)local_180;
        iVar5 = CVmDevice::getIndex();
        if (iVar5 == local_54) {
          CBaseNode::toString(SUB81(&local_190,0),(bool)((char)uVar3 + '\x10'));
          lVar6 = FUN_10010e020(param_4,&local_190);
          if (*(int *)local_190 != -1) {
            if (*(int *)local_190 != 0) {
              LOCK();
              *(int *)local_190 = *(int *)local_190 + -1;
              local_31 = *(int *)local_190 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100110f6a;
            }
            QArrayData::deallocate(local_190,2,8);
          }
        }
        else {
          local_170 = 0;
        }
      }
LAB_100110f6a:
      local_180 = local_180 + 8;
      uVar7 = local_170 ^ 1;
      bVar13 = local_170 != 1;
      local_170 = uVar7;
    } while ((bVar13) && (local_180 != local_178));
  }
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100110fcb;
    }
    QListData::dispose(local_188);
  }
LAB_100110fcb:
  if (lVar6 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Failed to get device at index %d.",local_54);
  }
  else {
    if ((param_4 == 5) && (iVar5 = CVmDevice::getEmulatedType(), iVar5 == 1)) {
      CVmDevice::setConnected((uint)lVar6);
    }
    local_198 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    local_1b8 = local_168;
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 == 0) {
        QListData::detach((int)&local_1b8);
        iVar5 = *(int *)(local_1b8 + 8);
        if (iVar5 != *(int *)(local_1b8 + 0xc)) {
          pDVar9 = local_168 + (long)*(int *)(local_168 + 8) * 8 + 0x10;
          pDVar11 = local_1b8 + (long)iVar5 * 8 + 0x10;
          lVar8 = (long)*(int *)(local_1b8 + 0xc) * 8 + (long)iVar5 * -8;
          do {
            piVar4 = *(int **)pDVar9;
            *(int **)pDVar11 = piVar4;
            if (1 < *piVar4 + 1U) {
              LOCK();
              *piVar4 = *piVar4 + 1;
              local_31 = *piVar4 != 0;
              UNLOCK();
            }
            pDVar11 = pDVar11 + 8;
            pDVar9 = pDVar9 + 8;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + 1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
      }
    }
    pDVar9 = local_1b8 + (long)*(int *)(local_1b8 + 8) * 8 + 0x10;
    local_1a8 = local_1b8 + (long)*(int *)(local_1b8 + 0xc) * 8 + 0x10;
    local_1b0 = pDVar9;
    if (*(int *)(local_1b8 + 8) != *(int *)(local_1b8 + 0xc)) {
      do {
        local_1a0 = 1;
        pQVar12 = *(QArrayData **)pDVar9;
        if (1 < *(int *)pQVar12 + 1U) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + 1;
          local_31 = *(int *)pQVar12 != 0;
          UNLOCK();
        }
        local_1b0 = pDVar9;
        CVmConfiguration::getPropertyValue((QTypedArrayData<unsigned_short> *)local_1c8);
        FUN_10007af00(&local_198,pDVar9,(QTypedArrayData<unsigned_short> *)local_1c8);
        QVariant::~QVariant((QVariant *)local_1c8);
        if (*(int *)pQVar12 != -1) {
          if (*(int *)pQVar12 != 0) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_31 = *(int *)pQVar12 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10011118e;
          }
          QArrayData::deallocate(pQVar12,2,8);
        }
LAB_10011118e:
        pDVar9 = local_1b0 + 8;
        local_1b0 = pDVar9;
      } while (pDVar9 != local_1a8);
    }
    pDVar9 = local_1b8;
    local_1a0 = 1;
    if (*(int *)local_1b8 != -1) {
      if (*(int *)local_1b8 != 0) {
        LOCK();
        *(int *)local_1b8 = *(int *)local_1b8 + -1;
        local_31 = *(int *)local_1b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100111245;
      }
      iVar5 = *(int *)(local_1b8 + 0xc);
      if (iVar5 != *(int *)(local_1b8 + 8)) {
        lVar8 = (long)*(int *)(local_1b8 + 8) * 8 + (long)iVar5 * -8;
        pDVar11 = local_1b8 + (long)iVar5 * 8 + 8;
        do {
          pQVar12 = *(QArrayData **)pDVar11;
          if (*(int *)pQVar12 == 0) {
LAB_100111224:
            QArrayData::deallocate(pQVar12,2,8);
          }
          else if (*(int *)pQVar12 != -1) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_31 = *(int *)pQVar12 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar12 = *(QArrayData **)pDVar11;
              goto LAB_100111224;
            }
          }
          pDVar11 = pDVar11 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(pDVar9);
    }
LAB_100111245:
    *param_1 = lVar6;
    FUN_100076af0(param_1 + 1,&local_198);
    if (*(int *)(local_198 + 0x10) != -1) {
      if (*(int *)(local_198 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_198 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100111286;
      }
      QHashData::free_helper(local_198);
    }
  }
LAB_100111286:
  pDVar9 = local_168;
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100111321;
    }
    iVar5 = *(int *)(local_168 + 0xc);
    if (iVar5 != *(int *)(local_168 + 8)) {
      lVar6 = (long)*(int *)(local_168 + 8) * 8 + (long)iVar5 * -8;
      pDVar11 = local_168 + (long)iVar5 * 8 + 8;
      do {
        pQVar12 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar12 == 0) {
LAB_100111300:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_31 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar12 = *(QArrayData **)pDVar11;
            goto LAB_100111300;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar9);
  }
LAB_100111321:
  CVmConfiguration::~CVmConfiguration(local_150);
LAB_10011132d:
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return param_1;
}

