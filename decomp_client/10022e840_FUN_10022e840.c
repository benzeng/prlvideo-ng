
int FUN_10022e840(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  QString this;
  size_t sVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  QString local_20d8;
  QHostAddress local_20d0 [8];
  QString local_20c8;
  QHostAddress local_20c0 [8];
  QString local_20b8;
  QHostAddress local_20b0 [8];
  QString local_20a8;
  QHostAddress local_20a0 [8];
  QString local_2098;
  QHostAddress local_2090 [8];
  QString local_2088;
  QHostAddress local_2080 [8];
  QArrayData *local_2078;
  QArrayData *local_2070;
  undefined4 local_2068;
  undefined4 local_2064;
  undefined4 local_2060;
  undefined1 local_205c [4];
  undefined4 local_2058;
  undefined4 local_2054;
  long local_2050;
  long local_2048;
  undefined1 local_2039;
  char local_2038 [1024];
  char local_1c38 [1024];
  char local_1838 [1024];
  char local_1438 [1024];
  char local_1038 [1024];
  char local_c38 [1024];
  char local_838 [1024];
  char local_438 [1024];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar6;
  if (-1 < param_2) {
    if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
       (*(long *)(param_1 + 0x20) == 0)) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: server instance is invalid.");
      param_2 = -0x7ffffff7;
    }
    else {
      FUN_10015aa80(&local_2048);
      iVar5 = 0;
      do {
        local_2054 = 2;
        local_2058 = 0x400;
        local_2060 = 1;
        local_2064 = 1;
        local_2068 = 1;
        local_2050 = 0;
        iVar2 = _PrlDispCfg_GetDispNet(local_2048,iVar5,&local_2050);
        if (iVar2 < 0) {
          uVar4 = FUN_100dddcf0(iVar2);
          bVar1 = true;
          FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,uVar4);
        }
        else {
          iVar2 = _PrlDispNet_GetNetworkType(local_2050,&local_2054);
          if (iVar2 < 0) {
            uVar4 = FUN_100dddcf0(iVar2);
            bVar1 = true;
            FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,uVar4);
          }
          else {
            iVar2 = _PrlDispNet_GetSysName(local_2050,local_838,&local_2058);
            if (iVar2 < 0) {
              uVar4 = FUN_100dddcf0(iVar2);
              bVar1 = true;
              FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,uVar4);
            }
            else {
              local_2058 = 0x400;
              iVar2 = _PrlDispNet_GetName(local_2050,local_438,&local_2058);
              if (iVar2 < 0) {
                uVar4 = FUN_100dddcf0(iVar2);
                bVar1 = true;
                FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,uVar4);
              }
              else {
                iVar2 = _PrlDispNet_IsEnabled(local_2050,local_205c);
                if (iVar2 < 0) {
                  uVar4 = FUN_100dddcf0(iVar2);
                  bVar1 = true;
                  FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,uVar4);
                }
                else {
                  iVar2 = _PrlDispNet_IsHidden(local_2050,&local_2068);
                  if (iVar2 < 0) {
                    uVar4 = FUN_100dddcf0(iVar2);
                    bVar1 = true;
                    FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,uVar4);
                  }
                  else {
                    this.field0_0x0 =
                         (QTypedArrayData<unsigned_short> *)
                         CDispNetworkPreferences::getAdapterByIndex
                                   ((int)*(undefined8 *)(param_1 + 0x28));
                    if (this.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
                      this.field0_0x0 = operator_new(0xd8);
                      CDispNetAdapter::CDispNetAdapter((CDispNetAdapter *)this.field0_0x0);
                      CDispNetAdapter::setIndex((int)this.field0_0x0);
                      CDispNetworkPreferences::addNetAdapter(*(CDispNetAdapter **)(param_1 + 0x28));
                    }
                    CDispNetAdapter::setNetworkType(this.field0_0x0,local_2054);
                    sVar3 = _strlen(local_838);
                    local_2070 = (QArrayData *)QString::fromAscii_helper(local_838,(int)sVar3);
                    CDispNetAdapter::setSysName(this);
                    if (*(int *)local_2070 != -1) {
                      if (*(int *)local_2070 != 0) {
                        LOCK();
                        *(int *)local_2070 = *(int *)local_2070 + -1;
                        local_2039 = *(int *)local_2070 != 0;
                        UNLOCK();
                        if ((bool)local_2039) goto LAB_10022ea6f;
                      }
                      QArrayData::deallocate(local_2070,2,8);
                    }
LAB_10022ea6f:
                    sVar3 = _strlen(local_438);
                    local_2078 = (QArrayData *)QString::fromAscii_helper(local_438,(int)sVar3);
                    CDispNetAdapter::setName(this);
                    if (*(int *)local_2078 != -1) {
                      if (*(int *)local_2078 != 0) {
                        LOCK();
                        *(int *)local_2078 = *(int *)local_2078 + -1;
                        local_2039 = *(int *)local_2078 != 0;
                        UNLOCK();
                        if ((bool)local_2039) goto LAB_10022eada;
                      }
                      QArrayData::deallocate(local_2078,2,8);
                    }
LAB_10022eada:
                    CDispNetAdapter::setEnabled(SUB81(this.field0_0x0,0));
                    CDispNetAdapter::setHiddenAdapter(SUB81(this.field0_0x0,0));
                    iVar2 = _PrlDispNet_IsDhcpEnabled(local_2050,&local_2060);
                    if (iVar2 < 0) {
                      uVar4 = FUN_100dddcf0(iVar2);
                      bVar1 = true;
                      FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,uVar4);
                    }
                    else {
                      local_2058 = 0x400;
                      iVar2 = _PrlDispNet_GetDhcpScopeStartIp(local_2050,local_c38,&local_2058);
                      if (iVar2 < 0) {
                        uVar4 = FUN_100dddcf0(iVar2);
                        bVar1 = true;
                        FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,uVar4);
                      }
                      else {
                        local_2058 = 0x400;
                        iVar2 = _PrlDispNet_GetDhcpScopeEndIp(local_2050,local_1038,&local_2058);
                        if (iVar2 < 0) {
                          uVar4 = FUN_100dddcf0(iVar2);
                          bVar1 = true;
                          FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,uVar4);
                        }
                        else {
                          local_2058 = 0x400;
                          iVar2 = _PrlDispNet_GetDhcpScopeMask(local_2050,local_1438,&local_2058);
                          if (iVar2 < 0) {
                            uVar4 = FUN_100dddcf0(iVar2);
                            bVar1 = true;
                            FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,uVar4);
                          }
                          else {
                            uVar4 = CDispNetAdapter::getDhcpPreferences();
                            sVar3 = _strlen(local_c38);
                            local_2088.field0_0x0 =
                                 (QTypedArrayData<unsigned_short> *)
                                 QString::fromAscii_helper(local_c38,(int)sVar3);
                            QHostAddress::QHostAddress(local_2080,&local_2088);
                            CDispDhcpPreferences::setDhcpScopeStartIp(uVar4,local_2080);
                            QHostAddress::~QHostAddress(local_2080);
                            if (*(int *)local_2088.field0_0x0 != -1) {
                              if (*(int *)local_2088.field0_0x0 != 0) {
                                LOCK();
                                *(int *)local_2088.field0_0x0 = *(int *)local_2088.field0_0x0 + -1;
                                local_2039 = *(int *)local_2088.field0_0x0 != 0;
                                UNLOCK();
                                if ((bool)local_2039) goto LAB_10022ec43;
                              }
                              QArrayData::deallocate((QArrayData *)local_2088.field0_0x0,2,8);
                            }
LAB_10022ec43:
                            sVar3 = _strlen(local_1038);
                            local_2098.field0_0x0 =
                                 (QTypedArrayData<unsigned_short> *)
                                 QString::fromAscii_helper(local_1038,(int)sVar3);
                            QHostAddress::QHostAddress(local_2090,&local_2098);
                            CDispDhcpPreferences::setDhcpScopeEndIp(uVar4,local_2090);
                            QHostAddress::~QHostAddress(local_2090);
                            if (*(int *)local_2098.field0_0x0 != -1) {
                              if (*(int *)local_2098.field0_0x0 != 0) {
                                LOCK();
                                *(int *)local_2098.field0_0x0 = *(int *)local_2098.field0_0x0 + -1;
                                local_2039 = *(int *)local_2098.field0_0x0 != 0;
                                UNLOCK();
                                if ((bool)local_2039) goto LAB_10022eccc;
                              }
                              QArrayData::deallocate((QArrayData *)local_2098.field0_0x0,2,8);
                            }
LAB_10022eccc:
                            sVar3 = _strlen(local_1438);
                            local_20a8.field0_0x0 =
                                 (QTypedArrayData<unsigned_short> *)
                                 QString::fromAscii_helper(local_1438,(int)sVar3);
                            QHostAddress::QHostAddress(local_20a0,&local_20a8);
                            CDispDhcpPreferences::setDhcpScopeMask(uVar4,local_20a0);
                            QHostAddress::~QHostAddress(local_20a0);
                            if (*(int *)local_20a8.field0_0x0 != -1) {
                              if (*(int *)local_20a8.field0_0x0 != 0) {
                                LOCK();
                                *(int *)local_20a8.field0_0x0 = *(int *)local_20a8.field0_0x0 + -1;
                                local_2039 = *(int *)local_20a8.field0_0x0 != 0;
                                UNLOCK();
                                if ((bool)local_2039) goto LAB_10022ed55;
                              }
                              QArrayData::deallocate((QArrayData *)local_20a8.field0_0x0,2,8);
                            }
LAB_10022ed55:
                            CDispDhcpPreferences::setEnabled(SUB81(uVar4,0));
                            iVar2 = _PrlDispNet_IsDhcp6Enabled(local_2050,&local_2064);
                            if (iVar2 < 0) {
                              uVar4 = FUN_100dddcf0(iVar2);
                              bVar1 = true;
                              FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,uVar4);
                            }
                            else {
                              local_2058 = 0x400;
                              iVar2 = _PrlDispNet_GetDhcp6ScopeStartIp
                                                (local_2050,local_1838,&local_2058);
                              if (iVar2 < 0) {
                                uVar4 = FUN_100dddcf0(iVar2);
                                bVar1 = true;
                                FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,uVar4);
                              }
                              else {
                                local_2058 = 0x400;
                                iVar2 = _PrlDispNet_GetDhcp6ScopeEndIp
                                                  (local_2050,local_1c38,&local_2058);
                                if (iVar2 < 0) {
                                  uVar4 = FUN_100dddcf0(iVar2);
                                  bVar1 = true;
                                  FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,uVar4
                                               );
                                }
                                else {
                                  local_2058 = 0x400;
                                  iVar2 = _PrlDispNet_GetDhcp6ScopeMask
                                                    (local_2050,local_2038,&local_2058);
                                  if (iVar2 < 0) {
                                    uVar4 = FUN_100dddcf0(iVar2);
                                    bVar1 = true;
                                    FUN_100df99c0("","prl_client_app",0,"RC = %.8X \'%s\'",iVar2,
                                                  uVar4);
                                  }
                                  else {
                                    uVar4 = CDispNetAdapter::getDhcpV6PreferencesOrig();
                                    sVar3 = _strlen(local_1838);
                                    local_20b8.field0_0x0 =
                                         (QTypedArrayData<unsigned_short> *)
                                         QString::fromAscii_helper(local_1838,(int)sVar3);
                                    QHostAddress::QHostAddress(local_20b0,&local_20b8);
                                    CDispDhcpPreferences::setDhcpScopeStartIp(uVar4,local_20b0);
                                    QHostAddress::~QHostAddress(local_20b0);
                                    if (*(int *)local_20b8.field0_0x0 != -1) {
                                      if (*(int *)local_20b8.field0_0x0 != 0) {
                                        LOCK();
                                        *(int *)local_20b8.field0_0x0 =
                                             *(int *)local_20b8.field0_0x0 + -1;
                                        local_2039 = *(int *)local_20b8.field0_0x0 != 0;
                                        UNLOCK();
                                        if ((bool)local_2039) goto LAB_10022eead;
                                      }
                                      QArrayData::deallocate
                                                ((QArrayData *)local_20b8.field0_0x0,2,8);
                                    }
LAB_10022eead:
                                    sVar3 = _strlen(local_1c38);
                                    local_20c8.field0_0x0 =
                                         (QTypedArrayData<unsigned_short> *)
                                         QString::fromAscii_helper(local_1c38,(int)sVar3);
                                    QHostAddress::QHostAddress(local_20c0,&local_20c8);
                                    CDispDhcpPreferences::setDhcpScopeEndIp(uVar4,local_20c0);
                                    QHostAddress::~QHostAddress(local_20c0);
                                    if (*(int *)local_20c8.field0_0x0 != -1) {
                                      if (*(int *)local_20c8.field0_0x0 != 0) {
                                        LOCK();
                                        *(int *)local_20c8.field0_0x0 =
                                             *(int *)local_20c8.field0_0x0 + -1;
                                        local_2039 = *(int *)local_20c8.field0_0x0 != 0;
                                        UNLOCK();
                                        if ((bool)local_2039) goto LAB_10022ef36;
                                      }
                                      QArrayData::deallocate
                                                ((QArrayData *)local_20c8.field0_0x0,2,8);
                                    }
LAB_10022ef36:
                                    sVar3 = _strlen(local_2038);
                                    local_20d8.field0_0x0 =
                                         (QTypedArrayData<unsigned_short> *)
                                         QString::fromAscii_helper(local_2038,(int)sVar3);
                                    QHostAddress::QHostAddress(local_20d0,&local_20d8);
                                    CDispDhcpPreferences::setDhcpScopeMask(uVar4,local_20d0);
                                    QHostAddress::~QHostAddress(local_20d0);
                                    if (*(int *)local_20d8.field0_0x0 != -1) {
                                      if (*(int *)local_20d8.field0_0x0 != 0) {
                                        LOCK();
                                        *(int *)local_20d8.field0_0x0 =
                                             *(int *)local_20d8.field0_0x0 + -1;
                                        local_2039 = *(int *)local_20d8.field0_0x0 != 0;
                                        UNLOCK();
                                        if ((bool)local_2039) goto LAB_10022efbf;
                                      }
                                      QArrayData::deallocate
                                                ((QArrayData *)local_20d8.field0_0x0,2,8);
                                    }
LAB_10022efbf:
                                    bVar1 = false;
                                    CDispDhcpPreferences::setEnabled(SUB81(uVar4,0));
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (local_2050 != 0) {
          _PrlHandle_Free();
        }
        iVar2 = -0x7ffffff7;
      } while ((!bVar1) && (iVar5 = iVar5 + 1, iVar2 = param_2, iVar5 < 2));
      if (local_2048 != 0) {
        _PrlHandle_Free();
      }
      lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
      param_2 = iVar2;
    }
  }
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_2;
}

