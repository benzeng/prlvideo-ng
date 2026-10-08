
/* WARNING: Removing unreachable block (ram,0x0001002d287b) */

void FUN_1002d2410(long *param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar7;
  QArrayData *local_118;
  QString local_110;
  QHostAddress local_108 [8];
  QArrayData *local_100;
  QArrayData *local_f8;
  undefined4 local_f0;
  uint local_ec;
  long local_e8;
  long local_e0;
  uint local_d4;
  long local_d0;
  long local_c8;
  undefined1 local_b9;
  char local_b8 [128];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if ((int)param_2 < 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
LAB_1002d28b8:
                    /* WARNING: Could not recover jumptable at 0x0001002d28cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return;
  }
  QObject::sender();
  lVar6 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  if (lVar6 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get sender request");
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    if (lVar1 == local_38) {
      param_2 = 0x80000009;
      goto LAB_1002d28b8;
    }
  }
  else {
    CSdkRequest::getResultHandle();
    local_d0 = 0;
    iVar4 = _PrlResult_GetParam(local_c8,&local_d0);
    if (iVar4 < 0) {
      FUN_100df99c0("","prl_client_app",0,
                    "Failed to get SrvConfig parameter PrlResult_GetParam has failed with  RC = %.8X"
                    ,iVar4);
      (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    }
    else {
      iVar4 = _PrlSrvCfg_GetNetAdaptersCount(local_d0,&local_d4);
      if (iVar4 < 0) {
        FUN_100df99c0("","prl_client_app",0,
                      "Failed to get SrvConfig parameter PrlSrvCfg_GetNetAdaptersCount has failed with  RC = %.8X"
                      ,iVar4);
        (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
      }
      else {
        if (local_d4 != 0) {
          uVar5 = 0;
          do {
            local_e0 = 0;
            iVar4 = _PrlSrvCfg_GetNetAdapter(local_d0,uVar5,&local_e0);
            if (iVar4 < 0) {
              FUN_100df99c0("","prl_client_app",0,
                            "Failed to get adapter PrlSrvCfg_GetNetAdapter has failed with  RC = %.8X"
                            ,iVar4);
              bVar2 = true;
              (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
            }
            else {
              local_e8 = 0;
              iVar4 = _PrlSrvCfgNet_GetNetAddresses(local_e0,&local_e8);
              if (iVar4 < 0) {
                FUN_100df99c0("","prl_client_app",0,
                              "Failed to get net adresses PrlSrvCfgNet_GetNetAddresses has failed with  RC = %.8X"
                              ,iVar4);
                bVar2 = true;
                (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
              }
              else {
                _PrlStrList_GetItemsCount(local_e8,&local_ec);
                bVar2 = false;
                uVar7 = 0;
                if (local_ec != 0) {
                  do {
                    local_f0 = 0x80;
                    iVar4 = _PrlStrList_GetItem(local_e8,uVar7,local_b8,&local_f0);
                    if (iVar4 < 0) {
                      FUN_100df99c0("","prl_client_app",0,
                                    "Failed to get net address PrlStrList_GetItem has failed with  RC = %.8X"
                                    ,iVar4);
                    }
                    else {
                      _strlen(local_b8);
                      QString::fromUtf8_helper((char *)&local_100,(int)local_b8);
                      QString::normalized(&local_f8,&local_100,1,0);
                      if (*(int *)local_100 != -1) {
                        if (*(int *)local_100 != 0) {
                          LOCK();
                          *(int *)local_100 = *(int *)local_100 + -1;
                          local_b9 = *(int *)local_100 != 0;
                          UNLOCK();
                          if ((bool)local_b9) goto LAB_1002d260c;
                        }
                        QArrayData::deallocate(local_100,2,8);
                      }
LAB_1002d260c:
                      local_118 = (QArrayData *)QString::fromAscii_helper("/",1);
                      QString::section(&local_110,&local_f8,&local_118,0,0,0);
                      QHostAddress::QHostAddress(local_108,&local_110);
                      if (*(int *)local_110.field0_0x0 != -1) {
                        if (*(int *)local_110.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
                          local_b9 = *(int *)local_110.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_b9) goto LAB_1002d2689;
                        }
                        QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
                      }
LAB_1002d2689:
                      if (*(int *)local_118 != -1) {
                        if (*(int *)local_118 != 0) {
                          LOCK();
                          *(int *)local_118 = *(int *)local_118 + -1;
                          local_b9 = *(int *)local_118 != 0;
                          UNLOCK();
                          if ((bool)local_b9) goto LAB_1002d26c5;
                        }
                        QArrayData::deallocate(local_118,2,8);
                      }
LAB_1002d26c5:
                      cVar3 = QHostAddress::isNull();
                      if ((cVar3 == '\0') && (iVar4 = QHostAddress::protocol(), iVar4 == 0)) {
                        FUN_1002d2be0(param_1 + 7,local_108);
                      }
                      QHostAddress::~QHostAddress(local_108);
                      if (*(int *)local_f8 != -1) {
                        if (*(int *)local_f8 != 0) {
                          LOCK();
                          *(int *)local_f8 = *(int *)local_f8 + -1;
                          local_b9 = *(int *)local_f8 != 0;
                          UNLOCK();
                          if ((bool)local_b9) goto LAB_1002d2761;
                        }
                        QArrayData::deallocate(local_f8,2,8);
                      }
                    }
LAB_1002d2761:
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < local_ec);
                }
              }
              if (local_e8 != 0) {
                _PrlHandle_Free();
              }
            }
            if (local_e0 != 0) {
              _PrlHandle_Free();
            }
            if (bVar2) goto LAB_1002d293c;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_d4);
        }
        (**(code **)(*param_1 + 0xb0))(param_1,0);
      }
    }
LAB_1002d293c:
    if (local_d0 != 0) {
      _PrlHandle_Free();
    }
    lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (local_c8 != 0) {
      _PrlHandle_Free();
    }
    if (lVar1 == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

