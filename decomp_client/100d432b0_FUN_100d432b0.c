
int FUN_100d432b0(undefined8 *param_1,long *param_2,undefined8 param_3,QString *param_4,
                 QString *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  QArrayData *pQVar9;
  char *pcVar10;
  long lVar11;
  long local_88;
  long local_80;
  QArrayData *local_78;
  long local_70;
  long local_68;
  long local_60;
  QArrayData *local_58;
  long local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QString::fromUtf8_helper((char *)&local_48,0x1e41978);
  QString::operator=(param_4,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d43327;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100d43327:
  QString::fromUtf8_helper((char *)&local_40,0x1e41978);
  QString::operator=(param_5,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d43377;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d43377:
  local_50 = 0;
  iVar2 = _PrlApi_CreateStringsList(&local_50);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to create list of strings to command argument PrlApi_CreateStringsList has failed with  RC = %.8X"
                  ,iVar2);
    goto LAB_100d438fa;
  }
  if (1 < *(int *)(*param_2 + 0xc) - *(int *)(*param_2 + 8)) {
    lVar11 = 1;
    do {
      lVar6 = local_50;
      QString::toUtf8();
      iVar2 = _PrlStrList_AddItem(lVar6,local_58 + *(long *)(local_58 + 0x10));
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d43409;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_100d43409:
      if (iVar2 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Failed to add string to command argument PrlStrList_AddItem has failed with  RC = %.8X"
                      ,iVar2);
        goto LAB_100d438fa;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (long)*(int *)(*param_2 + 0xc) - (long)*(int *)(*param_2 + 8));
  }
  local_60 = 0;
  iVar2 = _PrlApi_CreateStringsList(&local_60);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to create list of strings for env PrlApi_CreateStringsList has failed with  RC = %.8X"
                  ,iVar2);
  }
  else {
    lVar11 = _PrlVm_LoginInGuest(*param_1,"531582ac-3dce-446f-8c26-dd7e3384dcf4",0,0);
    iVar2 = FUN_100d431e0(lVar11,"login in Guest",100000);
    if (-1 < iVar2) {
      local_68 = 0;
      iVar2 = _PrlJob_GetResult(lVar11,&local_68);
      if (iVar2 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Failed to get result from login job PrlJob_GetResult has failed with  RC = %.8X"
                      ,iVar2);
      }
      else {
        local_70 = 0;
        iVar2 = _PrlResult_GetParam(local_68,&local_70);
        if (iVar2 < 0) {
          FUN_100df99c0("","PrlSdkUtils",0,
                        "Failed to get vmGuest parameter PrlResult_GetParam has failed with  RC = %.8X"
                        ,iVar2);
        }
        else {
          lVar6 = _PrlDevDisplay_ConnectToVm(*param_1,0x40004);
          iVar2 = FUN_100d431e0(lVar6,"connect to VM",100000);
          if ((-1 < iVar2) || (iVar2 == -0x7ffffc6f)) {
            if (2 < DAT_10230ffd0) {
              pcVar10 = "YES";
              if (iVar2 != -0x7ffffc6f) {
                pcVar10 = "NO";
              }
              FUN_100df99c0("","PrlSdkUtils",3,"Display is now connected to VM (was connected %s)",
                            pcVar10);
            }
            lVar7 = local_70;
            QString::toUtf8();
            lVar1 = local_50;
            lVar8 = local_60;
            pQVar9 = local_78 + *(long *)(local_78 + 0x10);
            iVar3 = _fileno(*(FILE **)PTR____stdinp_1021e1850);
            iVar4 = _fileno(*(FILE **)PTR____stdoutp_1021e1858);
            iVar5 = _fileno(*(FILE **)PTR____stderrp_1021e1848);
            lVar7 = _PrlVmGuest_RunProgram(lVar7,pQVar9,lVar1,lVar8,0x3800,iVar3,iVar4,iVar5);
            if (*(int *)local_78 != -1) {
              if (*(int *)local_78 != 0) {
                LOCK();
                *(int *)local_78 = *(int *)local_78 + -1;
                local_31 = *(int *)local_78 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d43624;
              }
              QArrayData::deallocate(local_78,1,8);
            }
LAB_100d43624:
            iVar3 = FUN_100d431e0(lVar7,"run program",3600000);
            if (-1 < iVar3) {
              if (local_68 != 0) {
                _PrlHandle_Free();
              }
              local_68 = 0;
              iVar3 = _PrlJob_GetResult(lVar7,&local_68);
              if (iVar3 < 0) {
                FUN_100df99c0("","PrlSdkUtils",0,
                              "Failed to get result from job PrlJob_GetResult has failed with  RC = %.8X"
                              ,iVar3);
              }
              else {
                local_80 = 0;
                iVar3 = _PrlResult_GetParamByIndex(local_68,0,&local_80);
                if (iVar3 < 0) {
                  FUN_100df99c0("","PrlSdkUtils",0,
                                "Failed to get result parameter PrlResult_GetParamByIndex has failed with  RC = %.8X"
                                ,iVar3);
                }
                else {
                  local_88 = 0;
                  iVar3 = _PrlEvent_GetParamByName(local_80,"vm_exec_app_ret_code",&local_88);
                  if (iVar3 < 0) {
                    FUN_100df99c0("","PrlSdkUtils",0,
                                  "Failed to get exit code PrlEvent_GetParamByName has failed with  RC = %.8X"
                                  ,iVar3);
                  }
                  else {
                    iVar3 = _PrlEvtPrm_ToUint32(local_88,param_3);
                    if (iVar3 < 0) {
                      FUN_100df99c0("","PrlSdkUtils",0,
                                    "Failed to convert to uint32 PrlEvtPrm_ToUint32 has failed with  RC = %.8X"
                                    ,iVar3);
                    }
                    else {
                      if (iVar2 != -0x7ffffc6f) {
                        _PrlDevDisplay_DisconnectFromVm(*param_1);
                      }
                      lVar8 = _PrlVmGuest_Logout(local_70,0);
                      FUN_100d431e0(lVar8,"logout from Guest",100000);
                      if (lVar8 != 0) {
                        _PrlHandle_Free(lVar8);
                      }
                    }
                  }
                  if (local_88 != 0) {
                    _PrlHandle_Free();
                  }
                }
                if (local_80 != 0) {
                  _PrlHandle_Free();
                }
              }
            }
            iVar2 = iVar3;
            if (lVar7 != 0) {
              _PrlHandle_Free(lVar7);
            }
          }
          if (lVar6 != 0) {
            _PrlHandle_Free(lVar6);
          }
        }
        if (local_70 != 0) {
          _PrlHandle_Free();
        }
      }
      if (local_68 != 0) {
        _PrlHandle_Free();
      }
    }
    if (lVar11 != 0) {
      _PrlHandle_Free(lVar11);
    }
  }
  if (local_60 != 0) {
    _PrlHandle_Free();
  }
LAB_100d438fa:
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  return iVar2;
}

