
int FUN_100d42450(undefined8 *param_1,QString *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  QArrayData *pQVar5;
  uint uVar6;
  int iVar7;
  int unaff_R15D;
  QArrayData *local_78;
  QArrayData *local_70;
  int local_64;
  long local_60;
  uint local_54;
  long local_50;
  undefined4 local_48;
  undefined4 local_44;
  QString local_40;
  undefined1 local_31;
  
  lVar3 = _PrlSrv_GetVirtualNetworkList(*param_1,0);
  iVar1 = FUN_100d431e0(lVar3,"get virtual networks",100000);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to get list of virtual networks PrlSrv_GetVirtualNetworkList has failed with  RC = %.8X"
                  ,iVar1);
  }
  else {
    local_50 = 0;
    iVar1 = _PrlJob_GetResult(lVar3,&local_50);
    if (iVar1 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Failed to get result PrlJob_GetResult has failed with  RC = %.8X",iVar1);
    }
    else {
      iVar1 = _PrlResult_GetParamsCount(local_50,&local_54);
      if (iVar1 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Failed to get count of virtual networks PrlResult_GetParamsCount has failed with  RC = %.8X"
                      ,iVar1);
      }
      else {
        iVar1 = 0;
        if (local_54 != 0) {
          uVar6 = 0;
          do {
            local_60 = 0;
            iVar2 = _PrlResult_GetParamByIndex(local_50,uVar6,&local_60);
            if (iVar2 < 0) {
              iVar7 = 1;
              FUN_100df99c0("","PrlSdkUtils",0,
                            "Failed to get virtual network PrlResult_GetParamByIndex has failed with  RC = %.8X"
                            ,iVar2);
            }
            else {
              iVar2 = _PrlVirtNet_GetNetworkType(local_60,&local_64);
              if (iVar2 < 0) {
                iVar7 = 1;
                FUN_100df99c0("","PrlSdkUtils",0,
                              "Failed to set virtual network type PrlVirtNet_GetNetworkType has failed with  RC = %.8X"
                              ,iVar2);
              }
              else {
                iVar7 = 10;
                iVar2 = unaff_R15D;
                if (local_64 == 0) {
                  local_70 = (QArrayData *)PTR_shared_null_1021e1288;
                  local_48 = 0;
                  iVar1 = _PrlVirtNet_GetBoundCardMac(local_60,0,&local_48);
                  if ((iVar1 == -0x7ffffffa) || (iVar1 == 0)) {
                    QByteArray::resize((int)&local_70);
                    lVar4 = local_60;
                    if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
                      QByteArray::reallocData
                                (&local_70,*(uint *)(local_70 + 4) + 1,
                                 *(uint *)(local_70 + 8) >> 0x1f);
                    }
                    iVar1 = _PrlVirtNet_GetBoundCardMac
                                      (lVar4,local_70 + *(long *)(local_70 + 0x10),&local_48);
                  }
                  if (iVar1 < 0) {
                    iVar7 = 10;
                    FUN_100df99c0("","PrlSdkUtils",0,
                                  "Failed to get bound mac address PrlVirtNet_GetBoundCardMac has failed with  RC = %.8X"
                                  ,iVar1);
                  }
                  else {
                    iVar7 = 10;
                    if (*(uint *)(local_70 + 4) != 0) {
                      local_78 = (QArrayData *)PTR_shared_null_1021e1288;
                      local_44 = 0;
                      iVar1 = _PrlVirtNet_GetNetworkId(local_60,0,&local_44);
                      if ((iVar1 == -0x7ffffffa) || (iVar1 == 0)) {
                        QByteArray::resize((int)&local_78);
                        lVar4 = local_60;
                        if ((1 < *(uint *)local_78) || (*(long *)(local_78 + 0x10) != 0x18)) {
                          QByteArray::reallocData
                                    (&local_78,*(uint *)(local_78 + 4) + 1,
                                     *(uint *)(local_78 + 8) >> 0x1f);
                        }
                        iVar1 = _PrlVirtNet_GetNetworkId
                                          (lVar4,local_78 + *(long *)(local_78 + 0x10),&local_44);
                      }
                      if (iVar1 < 0) {
                        iVar7 = 10;
                        FUN_100df99c0("","PrlSdkUtils",0,
                                      "Failed to get virtual network name PrlVirtNet_GetNetworkId has failed with  RC = %.8X"
                                      ,iVar1);
                      }
                      else {
                        pQVar5 = local_78 + *(long *)(local_78 + 0x10);
                        if ((pQVar5 != (QArrayData *)0x0) && (*(uint *)(local_78 + 4) != 0)) {
                          lVar4 = 0;
                          do {
                            if (pQVar5[lVar4] == (QArrayData)0x0) break;
                            lVar4 = lVar4 + 1;
                          } while ((uint)lVar4 < *(uint *)(local_78 + 4));
                          if ((int)lVar4 == -1) {
                            _strlen((char *)pQVar5);
                          }
                        }
                        QString::fromUtf8_helper((char *)&local_40,(int)pQVar5);
                        QString::operator=(param_2,&local_40);
                        if (*(int *)local_40.field0_0x0 != -1) {
                          if (*(int *)local_40.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
                            local_31 = *(int *)local_40.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_100d426c6;
                          }
                          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
                        }
LAB_100d426c6:
                        iVar7 = 0;
                      }
                      if (*(int *)local_78 != -1) {
                        if (*(int *)local_78 != 0) {
                          LOCK();
                          *(int *)local_78 = *(int *)local_78 + -1;
                          local_31 = *(int *)local_78 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100d427af;
                        }
                        QArrayData::deallocate(local_78,1,8);
                      }
                    }
                  }
LAB_100d427af:
                  if (*(int *)local_70 != -1) {
                    if (*(int *)local_70 != 0) {
                      LOCK();
                      *(int *)local_70 = *(int *)local_70 + -1;
                      local_31 = *(int *)local_70 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100d427e0;
                    }
                    QArrayData::deallocate(local_70,1,8);
                  }
                }
              }
            }
LAB_100d427e0:
            if (local_60 != 0) {
              _PrlHandle_Free();
            }
            if ((iVar7 != 0) && (iVar1 = iVar2, iVar7 != 10)) break;
            uVar6 = uVar6 + 1;
            iVar1 = 0;
            unaff_R15D = iVar2;
          } while (uVar6 < local_54);
        }
      }
    }
    if (local_50 != 0) {
      _PrlHandle_Free();
    }
  }
  if (lVar3 != 0) {
    _PrlHandle_Free(lVar3);
  }
  return iVar1;
}

