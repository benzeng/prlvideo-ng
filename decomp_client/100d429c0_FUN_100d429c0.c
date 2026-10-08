
/* WARNING: Type propagation algorithm not settling */

long * FUN_100d429c0(undefined8 *param_1,QString *param_2,long *param_3,undefined4 param_4,
                    char param_5)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  QArrayData *pQVar6;
  long *plVar7;
  long *plVar8;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  long local_60;
  long local_58;
  uint local_4c;
  long local_48;
  uint local_40 [3];
  undefined1 local_31;
  
  lVar5 = _PrlSrv_GetVmList(*param_1);
  local_40[0] = _PrlJob_Wait(lVar5,param_4);
  plVar8 = (long *)(ulong)local_40[0];
  if (-1 < (int)local_40[0]) {
    uVar3 = _PrlJob_GetRetCode(lVar5,local_40);
    plVar8 = (long *)(ulong)local_40[0];
    if ((-1 < (int)local_40[0]) && (plVar8 = (long *)(ulong)uVar3, -1 < (int)uVar3)) {
      local_48 = 0;
      uVar3 = _PrlJob_GetResult(lVar5,&local_48);
      plVar8 = (long *)(ulong)uVar3;
      if (-1 < (int)uVar3) {
        uVar3 = _PrlResult_GetParamsCount(local_48,&local_4c);
        plVar8 = (long *)(ulong)uVar3;
        if ((-1 < (int)uVar3) && (plVar8 = (long *)0x80000105, local_4c != 0)) {
          uVar3 = 0;
          plVar7 = param_3;
          do {
            local_58 = 0;
            uVar4 = _PrlResult_GetParamByIndex(local_48,uVar3,&local_58);
            if ((int)uVar4 < 0) {
              cVar2 = '\x01';
              plVar7 = (long *)(ulong)uVar4;
            }
            else {
              local_60 = 0;
              _PrlVm_GetConfig(local_58,&local_60);
              local_68 = (QArrayData *)PTR_shared_null_1021e1288;
              if (param_5 == '\0') {
                local_40[2] = 0;
                uVar4 = _PrlVmCfg_GetName(local_60,0,local_40 + 2);
                plVar8 = (long *)(ulong)uVar4;
                if ((uVar4 == 0x80000006) || (uVar4 == 0)) {
                  QByteArray::resize((int)&local_68);
                  lVar1 = local_60;
                  if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
                    QByteArray::reallocData
                              (&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f
                              );
                  }
                  uVar4 = _PrlVmCfg_GetName(lVar1,local_68 + *(long *)(local_68 + 0x10),local_40 + 2
                                           );
                  plVar8 = (long *)(ulong)uVar4;
                }
              }
              else {
                local_40[1] = 0;
                uVar4 = _PrlVmCfg_GetUuid(local_60,0,local_40 + 1);
                plVar8 = (long *)(ulong)uVar4;
                if ((uVar4 == 0x80000006) || (uVar4 == 0)) {
                  QByteArray::resize((int)&local_68);
                  lVar1 = local_60;
                  if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
                    QByteArray::reallocData
                              (&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f
                              );
                  }
                  uVar4 = _PrlVmCfg_GetUuid(lVar1,local_68 + *(long *)(local_68 + 0x10),local_40 + 1
                                           );
                  plVar8 = (long *)(ulong)uVar4;
                }
              }
              local_40[0] = (uint)plVar8;
              cVar2 = '\x01';
              if (-1 < (int)local_40[0]) {
                pQVar6 = local_68 + *(long *)(local_68 + 0x10);
                if (pQVar6 != (QArrayData *)0x0) {
                  _strlen((char *)pQVar6);
                }
                QString::fromUtf8_helper((char *)&local_78,(int)pQVar6);
                QString::normalized(&local_70,&local_78,1,0);
                cVar2 = operator==(param_2,&local_70);
                if (*(int *)local_70.field0_0x0 != -1) {
                  if (*(int *)local_70.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
                    local_31 = *(int *)local_70.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100d42c71;
                  }
                  QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
                }
LAB_100d42c71:
                if (*(int *)local_78 != -1) {
                  if (*(int *)local_78 != 0) {
                    LOCK();
                    *(int *)local_78 = *(int *)local_78 + -1;
                    local_31 = *(int *)local_78 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100d42ca1;
                  }
                  QArrayData::deallocate(local_78,2,8);
                }
LAB_100d42ca1:
                plVar8 = (long *)((ulong)plVar7 & 0xffffffff);
                if (cVar2 != '\0') {
                  plVar8 = (long *)0x0;
                }
                if ((&local_58 != param_3) && (cVar2 == '\x01')) {
                  if (*param_3 != 0) {
                    _PrlHandle_Free();
                  }
                  *param_3 = local_58;
                  cVar2 = '\x01';
                  plVar8 = (long *)0x0;
                  if (local_58 != 0) {
                    _PrlHandle_AddRef();
                    plVar8 = (long *)0x0;
                  }
                }
              }
              plVar7 = plVar8;
              if (*(int *)local_68 != -1) {
                if (*(int *)local_68 != 0) {
                  LOCK();
                  *(int *)local_68 = *(int *)local_68 + -1;
                  local_31 = *(int *)local_68 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d42d30;
                }
                QArrayData::deallocate(local_68,1,8);
              }
LAB_100d42d30:
              if (local_60 != 0) {
                _PrlHandle_Free();
              }
            }
            if (local_58 != 0) {
              _PrlHandle_Free();
            }
            plVar8 = plVar7;
          } while ((cVar2 == '\0') &&
                  (uVar3 = uVar3 + 1, plVar8 = (long *)0x80000105, uVar3 < local_4c));
        }
      }
      if (local_48 != 0) {
        _PrlHandle_Free();
      }
    }
  }
  if (lVar5 != 0) {
    _PrlHandle_Free(lVar5);
  }
  return plVar8;
}

