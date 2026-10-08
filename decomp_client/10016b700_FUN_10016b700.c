
void FUN_10016b700(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  QArrayData *local_580;
  QString local_578;
  QFileInfo local_570 [8];
  QArrayData *local_568;
  QString local_560;
  QString local_558;
  QString local_550;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 local_540;
  undefined4 uStack_53c;
  int local_534;
  int local_530;
  undefined4 local_52c;
  QArrayData *local_528;
  QArrayData *local_520;
  undefined4 local_514;
  QArrayData *local_510;
  QString local_508;
  QArrayData *local_500;
  QString local_4f8;
  long local_4f0;
  undefined4 local_4e4;
  long local_4e0;
  QString local_4d8;
  QString local_4d0;
  QString local_4c8;
  ulong local_4c0;
  undefined8 local_4b8;
  uint local_4b0;
  undefined1 local_4a9;
  char local_4a8 [1024];
  char local_a8 [112];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_4b0 = 0;
  local_38 = lVar6;
  iVar3 = _PrlEvent_GetParamsCount(*param_2,&local_4b0);
  puVar1 = PTR_shared_null_1021e1288;
  if (iVar3 < 0) {
    FUN_100df99c0("","prl_client_app",0,"Error: no or wrong number of event parameters");
    goto LAB_10016c058;
  }
  local_4d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar3 = *(int *)PTR_shared_null_1021e1288;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
    local_4a9 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar3 = *(int *)puVar1;
  }
  local_4d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_4a9 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar3 = *(int *)puVar1;
  }
  local_4c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_4a9 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar3 = *(int *)puVar1;
  }
  local_4c0 = local_4c0 & 0xffffff0000000000;
  local_4b8 = 0x271400000000;
  if (iVar3 != -1) {
    if (iVar3 == 0) {
LAB_10016b803:
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
    else {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_4a9 = *(int *)puVar1 != 0;
      UNLOCK();
      if (!(bool)local_4a9) goto LAB_10016b803;
    }
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 == 0) {
LAB_10016b83d:
        QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
      }
      else {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_4a9 = *(int *)puVar1 != 0;
        UNLOCK();
        if (!(bool)local_4a9) goto LAB_10016b83d;
      }
      if (*(int *)puVar1 != -1) {
        if (*(int *)puVar1 != 0) {
          LOCK();
          *(int *)puVar1 = *(int *)puVar1 + -1;
          local_4a9 = *(int *)puVar1 != 0;
          UNLOCK();
          if ((bool)local_4a9) goto LAB_10016b88a;
        }
        QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
      }
    }
  }
LAB_10016b88a:
  if (local_4b0 != 0) {
    uVar5 = 0;
    do {
      local_4e0 = 0;
      iVar3 = _PrlEvent_GetParam(*param_2,uVar5,&local_4e0);
      if (iVar3 < 0) {
        iVar3 = 1;
        FUN_100df99c0("","prl_client_app",0,"Error: failed to get event parameter");
      }
      else {
        local_4e4 = 100;
        iVar3 = _PrlEvtPrm_GetName(local_4e0,local_a8,&local_4e4);
        if (iVar3 < 0) {
          iVar3 = 1;
          FUN_100df99c0("","prl_client_app",0,"Error: failed to get event parameter name");
        }
        else {
          local_4f0 = 0;
          _strlen(local_a8);
          QString::fromUtf8_helper((char *)&local_500,(int)local_a8);
          QString::normalized(&local_4f8,&local_500,1,0);
          QString::fromUtf8_helper((char *)&local_510,0x1dc2f77);
          QString::normalized(&local_508,&local_510,1);
          cVar2 = operator==(&local_4f8,&local_508);
          if (*(int *)local_508.field0_0x0 != -1) {
            if (*(int *)local_508.field0_0x0 != 0) {
              LOCK();
              *(int *)local_508.field0_0x0 = *(int *)local_508.field0_0x0 + -1;
              local_4a9 = *(int *)local_508.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_4a9) goto LAB_10016b9c2;
            }
            QArrayData::deallocate((QArrayData *)local_508.field0_0x0,2,8);
          }
LAB_10016b9c2:
          if (*(int *)local_510 != -1) {
            if (*(int *)local_510 != 0) {
              LOCK();
              *(int *)local_510 = *(int *)local_510 + -1;
              local_4a9 = *(int *)local_510 != 0;
              UNLOCK();
              if ((bool)local_4a9) goto LAB_10016b9fe;
            }
            QArrayData::deallocate(local_510,2,8);
          }
LAB_10016b9fe:
          if (*(int *)local_4f8.field0_0x0 != -1) {
            if (*(int *)local_4f8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_4f8.field0_0x0 = *(int *)local_4f8.field0_0x0 + -1;
              local_4a9 = *(int *)local_4f8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_4a9) goto LAB_10016ba3a;
            }
            QArrayData::deallocate((QArrayData *)local_4f8.field0_0x0,2,8);
          }
LAB_10016ba3a:
          if (*(int *)local_500 != -1) {
            if (*(int *)local_500 != 0) {
              LOCK();
              *(int *)local_500 = *(int *)local_500 + -1;
              local_4a9 = *(int *)local_500 != 0;
              UNLOCK();
              if ((bool)local_4a9) goto LAB_10016ba76;
            }
            QArrayData::deallocate(local_500,2,8);
          }
LAB_10016ba76:
          lVar6 = local_4e0;
          iVar3 = 0;
          if (cVar2 != '\0') {
            if (local_4f0 != 0) {
              _PrlHandle_Free();
            }
            local_4f0 = 0;
            iVar4 = _PrlEvtPrm_ToHandle(lVar6,&local_4f0);
            if (-1 < iVar4) {
              local_514 = 0x400;
              iVar3 = _PrlFoundVmInfo_GetName(local_4f0,local_4a8,&local_514);
              if (iVar3 < 0) {
                iVar3 = 1;
                FUN_100df99c0("","prl_client_app",0);
              }
              else {
                _strlen(local_4a8);
                QString::fromUtf8_helper((char *)&local_528,(int)local_4a8);
                QString::normalized(&local_520,&local_528,1,0);
                if (*(int *)local_528 != -1) {
                  if (*(int *)local_528 != 0) {
                    LOCK();
                    *(int *)local_528 = *(int *)local_528 + -1;
                    local_4a9 = *(int *)local_528 != 0;
                    UNLOCK();
                    if ((bool)local_4a9) goto LAB_10016bb5e;
                  }
                  QArrayData::deallocate(local_528,2,8);
                }
LAB_10016bb5e:
                iVar3 = _PrlFoundVmInfo_GetOSVersion(local_4f0,&local_52c);
                if (iVar3 < 0) {
                  iVar3 = 1;
                  FUN_100df99c0("","prl_client_app",0);
                }
                else {
                  iVar3 = _PrlFoundVmInfo_IsOldConfig(local_4f0,&local_530);
                  if (iVar3 < 0) {
                    iVar3 = 1;
                    FUN_100df99c0("","prl_client_app",0);
                  }
                  else {
                    local_514 = 0x400;
                    iVar3 = _PrlFoundVmInfo_GetConfigPath(local_4f0,local_4a8,&local_514);
                    if (iVar3 < 0) {
                      iVar3 = 1;
                      FUN_100df99c0("","prl_client_app",0);
                    }
                    else {
                      iVar3 = _PrlFoundVmInfo_IsTemplate(local_4f0,&local_534);
                      if (iVar3 < 0) {
                        iVar3 = 1;
                        FUN_100df99c0("","prl_client_app",0);
                      }
                      else {
                        _strlen(local_4a8);
                        QString::fromUtf8_helper((char *)&local_580,(int)local_4a8);
                        QString::normalized(&local_578,&local_580,1,0);
                        puVar1 = PTR_shared_null_1021e1288;
                        QFileInfo::QFileInfo(local_570,&local_578);
                        QFileInfo::path();
                        local_548 = 2;
                        if (local_530 == 0) {
                          local_548 = 0;
                        }
                        local_560.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_520;
                        if (1 < *(int *)local_520 + 1U) {
                          LOCK();
                          *(int *)local_520 = *(int *)local_520 + 1;
                          local_4a9 = *(int *)local_520 != 0;
                          UNLOCK();
                        }
                        local_558.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_568;
                        if (1 < *(int *)local_568 + 1U) {
                          LOCK();
                          *(int *)local_568 = *(int *)local_568 + 1;
                          local_4a9 = *(int *)local_568 != 0;
                          UNLOCK();
                        }
                        local_550.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
                        if (1 < *(int *)puVar1 + 1U) {
                          LOCK();
                          *(int *)puVar1 = *(int *)puVar1 + 1;
                          local_4a9 = *(int *)puVar1 != 0;
                          UNLOCK();
                        }
                        uStack_544 = CONCAT31(uStack_544._1_3_,local_534 != 0);
                        local_540 = local_52c;
                        uStack_53c = 0x2714;
                        QString::operator=(&local_4d8,&local_560);
                        QString::operator=(&local_4d0,&local_558);
                        QString::operator=(&local_4c8,&local_550);
                        local_4c0 = CONCAT44(uStack_544,local_548);
                        local_4b8 = CONCAT44(uStack_53c,local_540);
                        FUN_100086a10(&local_560);
                        if (*(int *)puVar1 != -1) {
                          if (*(int *)puVar1 != 0) {
                            LOCK();
                            *(int *)puVar1 = *(int *)puVar1 + -1;
                            local_4a9 = *(int *)puVar1 != 0;
                            UNLOCK();
                            if ((bool)local_4a9) goto LAB_10016bd6e;
                          }
                          QArrayData::deallocate((QArrayData *)puVar1,2,8);
                        }
LAB_10016bd6e:
                        if (*(int *)local_568 != -1) {
                          if (*(int *)local_568 != 0) {
                            LOCK();
                            *(int *)local_568 = *(int *)local_568 + -1;
                            local_4a9 = *(int *)local_568 != 0;
                            UNLOCK();
                            if ((bool)local_4a9) goto LAB_10016bdaa;
                          }
                          QArrayData::deallocate(local_568,2,8);
                        }
LAB_10016bdaa:
                        QFileInfo::~QFileInfo(local_570);
                        if (*(int *)local_578.field0_0x0 != -1) {
                          if (*(int *)local_578.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_578.field0_0x0 = *(int *)local_578.field0_0x0 + -1;
                            local_4a9 = *(int *)local_578.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_4a9) goto LAB_10016bdee;
                          }
                          QArrayData::deallocate((QArrayData *)local_578.field0_0x0,2,8);
                        }
LAB_10016bdee:
                        iVar3 = 4;
                        if (*(int *)local_580 != -1) {
                          if (*(int *)local_580 != 0) {
                            LOCK();
                            *(int *)local_580 = *(int *)local_580 + -1;
                            local_4a9 = *(int *)local_580 != 0;
                            UNLOCK();
                            if ((bool)local_4a9) goto LAB_10016bf58;
                          }
                          QArrayData::deallocate(local_580,2,8);
                        }
                      }
                    }
                  }
                }
LAB_10016bf58:
                if (*(int *)local_520 != -1) {
                  if (*(int *)local_520 != 0) {
                    LOCK();
                    *(int *)local_520 = *(int *)local_520 + -1;
                    local_4a9 = *(int *)local_520 != 0;
                    UNLOCK();
                    if ((bool)local_4a9) goto LAB_10016bfa0;
                  }
                  QArrayData::deallocate(local_520,2,8);
                }
              }
            }
          }
LAB_10016bfa0:
          if (local_4f0 != 0) {
            _PrlHandle_Free();
          }
        }
      }
      if (local_4e0 != 0) {
        _PrlHandle_Free();
      }
      if (iVar3 == 4) break;
      if (iVar3 != 0) goto LAB_10016c01f;
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_4b0);
  }
  FUN_1008010c0(param_1,&local_4d8);
LAB_10016c01f:
  FUN_100086a10(&local_4d8);
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_10016c058:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

