
/* WARNING: Type propagation algorithm not settling */

ulong FUN_100d42180(undefined8 *param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  QArrayData *local_68;
  long local_60;
  long local_58;
  uint local_4c;
  long local_48;
  uint local_3c [2];
  undefined1 local_31;
  
  lVar4 = _PrlSrv_GetVmList(*param_1);
  local_3c[0] = _PrlJob_Wait(lVar4,param_3);
  uVar6 = (ulong)local_3c[0];
  if (-1 < (int)local_3c[0]) {
    uVar2 = _PrlJob_GetRetCode(lVar4,local_3c);
    uVar6 = (ulong)local_3c[0];
    if ((-1 < (int)local_3c[0]) && (uVar6 = (ulong)uVar2, -1 < (int)uVar2)) {
      local_48 = 0;
      uVar2 = _PrlJob_GetResult(lVar4,&local_48);
      uVar6 = (ulong)uVar2;
      if (-1 < (int)uVar2) {
        uVar2 = _PrlResult_GetParamsCount(local_48,&local_4c);
        uVar6 = (ulong)uVar2;
        if ((-1 < (int)uVar2) && (uVar6 = 0, local_4c != 0)) {
          uVar2 = 0;
          uVar7 = param_2;
          do {
            local_58 = 0;
            uVar3 = _PrlResult_GetParamByIndex(local_48,uVar2,&local_58);
            if ((int)uVar3 < 0) {
              bVar8 = true;
              uVar5 = (ulong)uVar3;
            }
            else {
              local_60 = 0;
              _PrlVm_GetConfig(local_58,&local_60);
              local_68 = (QArrayData *)PTR_shared_null_1021e1288;
              local_3c[1] = 0;
              uVar3 = _PrlVmCfg_GetName(local_60,0,local_3c + 1);
              if ((uVar3 == 0x80000006) || (uVar3 == 0)) {
                QByteArray::resize((int)&local_68);
                lVar1 = local_60;
                if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
                  QByteArray::reallocData
                            (&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
                }
                uVar3 = _PrlVmCfg_GetName(lVar1,local_68 + *(long *)(local_68 + 0x10),local_3c + 1);
              }
              uVar5 = (ulong)uVar3;
              bVar8 = (int)uVar3 < 0;
              local_3c[0] = uVar3;
              if (!bVar8) {
                FUN_1000ee480(param_2,&local_68);
                uVar5 = uVar7 & 0xffffffff;
              }
              if (*(int *)local_68 != -1) {
                if (*(int *)local_68 != 0) {
                  LOCK();
                  *(int *)local_68 = *(int *)local_68 + -1;
                  local_31 = *(int *)local_68 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d42332;
                }
                QArrayData::deallocate(local_68,1,8);
              }
LAB_100d42332:
              if (local_60 != 0) {
                _PrlHandle_Free();
              }
            }
            if (local_58 != 0) {
              _PrlHandle_Free();
            }
            uVar6 = uVar5;
            if (bVar8) break;
            uVar2 = uVar2 + 1;
            uVar6 = 0;
            uVar7 = uVar5;
          } while (uVar2 < local_4c);
        }
      }
      if (local_48 != 0) {
        _PrlHandle_Free();
      }
    }
  }
  if (lVar4 != 0) {
    _PrlHandle_Free(lVar4);
  }
  return uVar6;
}

