
undefined1 FUN_1000ad670(long param_1,undefined8 param_2,QString *param_3)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  QArrayData *local_528;
  QArrayData *local_520;
  QString local_518;
  QString local_510;
  undefined **local_508 [2];
  undefined **local_4f8 [2];
  QArrayData *local_4e8;
  QString local_4e0;
  QArrayData *local_4d8;
  QString local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  char *local_4b8;
  undefined **local_4b0 [2];
  int local_49c;
  QArrayData *local_498;
  QString local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  char *local_478;
  undefined **local_468 [2];
  int local_454;
  undefined **local_450 [2];
  int local_440;
  undefined1 local_439;
  char local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  FUN_100d72f10(local_4f8);
  local_4f8[0] = &PTR_FUN_10226cb40;
  FUN_100d72f10(local_508);
  local_508[0] = &PTR_FUN_10226cb78;
  local_510.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_518.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar4 = FUN_100d74d60(local_4f8,param_2,0);
  if (iVar4 == 0) {
    iVar4 = FUN_100d74ec0(local_4f8,local_508);
    if (iVar4 == 0) {
      FUN_100d72f10(local_4b0);
      local_4b0[0] = &PTR_FUN_10226cda0;
      iVar4 = FUN_100d742a0(local_508,&local_49c);
      if (iVar4 == 0) {
        if (local_49c == 2) {
          iVar4 = FUN_100d74420(local_508,local_4b0);
          if (iVar4 == 0) {
            local_4c8 = 0;
            uStack_4c0 = 0;
            local_4b8 = (char *)0x0;
            iVar4 = FUN_100d73d40(local_4b0,&local_4c8);
            if (iVar4 == 0) {
              if ((local_4c8 & 1) == 0) {
                uVar5 = (uint)((byte)local_4c8._0_1_ >> 1);
                pcVar6 = (char *)((long)&local_4c8 + 1);
              }
              else {
                uVar5 = (uint)uStack_4c0;
                pcVar6 = local_4b8;
              }
              if ((pcVar6 != (char *)0x0) && (uVar5 == 0xffffffff)) {
                _strlen(pcVar6);
              }
              QString::fromUtf8_helper((char *)&local_4d8,(int)pcVar6);
              QString::normalized(&local_4d0,&local_4d8,1,0);
              QString::operator=(param_3,&local_4d0);
              if (*(int *)local_4d0.field0_0x0 != -1) {
                if (*(int *)local_4d0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_4d0.field0_0x0 = *(int *)local_4d0.field0_0x0 + -1;
                  local_439 = *(int *)local_4d0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_439) goto LAB_1000ad941;
                }
                QArrayData::deallocate((QArrayData *)local_4d0.field0_0x0,2,8);
              }
LAB_1000ad941:
              if (*(int *)local_4d8 != -1) {
                if (*(int *)local_4d8 != 0) {
                  LOCK();
                  *(int *)local_4d8 = *(int *)local_4d8 + -1;
                  local_439 = *(int *)local_4d8 != 0;
                  UNLOCK();
                  if ((bool)local_439) goto LAB_1000ad97d;
                }
                QArrayData::deallocate(local_4d8,2,8);
              }
LAB_1000ad97d:
              iVar4 = FUN_100d73cc0(local_4b0,&local_4c8);
              if (iVar4 == 0) {
                if ((local_4c8 & 1) == 0) {
                  uVar5 = (uint)((byte)local_4c8._0_1_ >> 1);
                  pcVar6 = (char *)((long)&local_4c8 + 1);
                }
                else {
                  uVar5 = (uint)uStack_4c0;
                  pcVar6 = local_4b8;
                }
                if ((pcVar6 != (char *)0x0) && (uVar5 == 0xffffffff)) {
                  _strlen(pcVar6);
                }
                QString::fromUtf8_helper((char *)&local_4e8,(int)pcVar6);
                QString::normalized(&local_4e0,&local_4e8,1,0);
                QString::operator=(&local_510,&local_4e0);
                if (*(int *)local_4e0.field0_0x0 != -1) {
                  if (*(int *)local_4e0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_4e0.field0_0x0 = *(int *)local_4e0.field0_0x0 + -1;
                    local_439 = *(int *)local_4e0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_439) goto LAB_1000ada75;
                  }
                  QArrayData::deallocate((QArrayData *)local_4e0.field0_0x0,2,8);
                }
LAB_1000ada75:
                bVar2 = false;
                if (*(int *)local_4e8 != -1) {
                  if (*(int *)local_4e8 != 0) {
                    LOCK();
                    *(int *)local_4e8 = *(int *)local_4e8 + -1;
                    local_439 = *(int *)local_4e8 != 0;
                    UNLOCK();
                    if ((bool)local_439) goto LAB_1000adab4;
                  }
                  QArrayData::deallocate(local_4e8,2,8);
                }
              }
              else {
                bVar2 = true;
                FUN_100df99c0("SGAC","prl_client_app",0,"LinkPrlVmSource::getVmUuid() err %i",iVar4)
                ;
              }
            }
            else {
              bVar2 = true;
              FUN_100df99c0("SGAC","prl_client_app",0,"LinkPrlVmSource::getVmPath() err %i",iVar4);
            }
LAB_1000adab4:
            std::string::~string((string *)&local_4c8);
            bVar2 = !bVar2;
          }
          else {
            bVar2 = false;
            FUN_100df99c0("SGAC","prl_client_app",0,"LinkTarget::getSource() err %i",iVar4);
          }
        }
        else {
          bVar2 = false;
          FUN_100df99c0("SGAC","prl_client_app",0,"Invalid sourceKind %i");
        }
      }
      else {
        bVar2 = false;
        FUN_100df99c0("SGAC","prl_client_app",0,"LinkTarget::getSourceKind() err %i",iVar4);
      }
      FUN_100d72f50(local_4b0);
      if (bVar2) {
        FUN_100d72f10(local_450);
        local_450[0] = &PTR_FUN_10226cbf8;
        FUN_100d72f10(local_468);
        local_468[0] = &PTR_FUN_10226cc58;
        iVar4 = FUN_100d74360(local_508,&local_440);
        if (iVar4 == 0) {
          if (local_440 == 1) {
            iVar4 = FUN_100d74510(local_508,local_450);
            if (iVar4 == 0) {
              iVar4 = FUN_100d73ed0(local_450,&local_454);
              if (iVar4 == 0) {
                if (local_454 == 1) {
                  iVar4 = FUN_100d73fd0(local_450,local_468);
                  if (iVar4 == 0) {
                    local_488 = 0;
                    uStack_480 = 0;
                    local_478 = (char *)0x0;
                    iVar4 = FUN_100d73d80(local_468,&local_488);
                    if (iVar4 == 0) {
                      if ((local_488 & 1) == 0) {
                        uVar5 = (uint)((byte)local_488._0_1_ >> 1);
                        pcVar6 = (char *)((long)&local_488 + 1);
                      }
                      else {
                        uVar5 = (uint)uStack_480;
                        pcVar6 = local_478;
                      }
                      if ((pcVar6 != (char *)0x0) && (uVar5 == 0xffffffff)) {
                        _strlen(pcVar6);
                      }
                      QString::fromUtf8_helper((char *)&local_498,(int)pcVar6);
                      QString::normalized(&local_490,&local_498,1,0);
                      QString::operator=(&local_518,&local_490);
                      if (*(int *)local_490.field0_0x0 != -1) {
                        if (*(int *)local_490.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_490.field0_0x0 = *(int *)local_490.field0_0x0 + -1;
                          local_439 = *(int *)local_490.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_439) goto LAB_1000add8f;
                        }
                        QArrayData::deallocate((QArrayData *)local_490.field0_0x0,2,8);
                      }
LAB_1000add8f:
                      bVar2 = false;
                      if (*(int *)local_498 != -1) {
                        if (*(int *)local_498 != 0) {
                          LOCK();
                          *(int *)local_498 = *(int *)local_498 + -1;
                          local_439 = *(int *)local_498 != 0;
                          UNLOCK();
                          bVar2 = false;
                          if ((bool)local_439) goto LAB_1000addce;
                        }
                        QArrayData::deallocate(local_498,2,8);
                        bVar2 = false;
                      }
                    }
                    else {
                      FUN_100df99c0("SGAC","prl_client_app",0,
                                    "LinkCommandLineAction::getCommandLine() err %i",iVar4);
                      bVar2 = true;
                    }
LAB_1000addce:
                    std::string::~string((string *)&local_488);
                    bVar2 = !bVar2;
                  }
                  else {
                    bVar2 = false;
                    FUN_100df99c0("SGAC","prl_client_app",0,"LinkCommandObject::getAction() err %i",
                                  iVar4);
                  }
                }
                else {
                  bVar2 = false;
                  FUN_100df99c0("SGAC","prl_client_app",0,"Invalid actionKind %i");
                }
              }
              else {
                bVar2 = false;
                FUN_100df99c0("SGAC","prl_client_app",0,"LinkCommandObject::getActionKind() err %i",
                              iVar4);
              }
            }
            else {
              bVar2 = false;
              FUN_100df99c0("SGAC","prl_client_app",0,"LinkTarget::getObject() err %i",iVar4);
            }
          }
          else {
            bVar2 = false;
            FUN_100df99c0("SGAC","prl_client_app",0,"Invalid objectKind %i");
          }
        }
        else {
          bVar2 = false;
          FUN_100df99c0("SGAC","prl_client_app",0,"LinkTarget::getObjectKind() err %i",iVar4);
        }
        FUN_100d72f50(local_468);
        FUN_100d72f50(local_450);
        if (bVar2) {
          if (*(int *)(local_518.field0_0x0 + 4) == 0) {
            ___bzero(local_438,0x400);
            iVar4 = _FSRefMakePath(param_2,local_438,0x400);
            if (iVar4 == 0) {
              _strlen(local_438);
              QString::fromUtf8_helper((char *)&local_528,(int)local_438);
              QString::normalized(&local_520,&local_528,1,0);
              uVar3 = FUN_1000ad1d0(param_1,&local_510,&local_520,param_1 + 0x78,FUN_1000b7d80,0);
              if (*(int *)local_520 != -1) {
                if (*(int *)local_520 != 0) {
                  LOCK();
                  *(int *)local_520 = *(int *)local_520 + -1;
                  local_439 = *(int *)local_520 != 0;
                  UNLOCK();
                  if ((bool)local_439) goto LAB_1000adf0c;
                }
                QArrayData::deallocate(local_520,2,8);
              }
LAB_1000adf0c:
              if (*(int *)local_528 != -1) {
                if (*(int *)local_528 != 0) {
                  LOCK();
                  *(int *)local_528 = *(int *)local_528 + -1;
                  local_439 = *(int *)local_528 != 0;
                  UNLOCK();
                  if ((bool)local_439) goto LAB_1000adf48;
                }
                QArrayData::deallocate(local_528,2,8);
              }
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = FUN_1000ad1d0(param_1,&local_510,&local_518,param_1 + 0x70,FUN_1000b7d60,0);
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
      FUN_100df99c0("SGAC","prl_client_app",0,"LinkPlist::getTarget() err %i",iVar4);
    }
  }
  else {
    uVar3 = 0;
    FUN_100df99c0("SGAC","prl_client_app",0,"LinkPlist::read() err %i",iVar4);
  }
LAB_1000adf48:
  if (*(int *)local_518.field0_0x0 != -1) {
    if (*(int *)local_518.field0_0x0 != 0) {
      LOCK();
      *(int *)local_518.field0_0x0 = *(int *)local_518.field0_0x0 + -1;
      local_439 = *(int *)local_518.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_1000adf84;
    }
    QArrayData::deallocate((QArrayData *)local_518.field0_0x0,2,8);
  }
LAB_1000adf84:
  if (*(int *)local_510.field0_0x0 != -1) {
    if (*(int *)local_510.field0_0x0 != 0) {
      LOCK();
      *(int *)local_510.field0_0x0 = *(int *)local_510.field0_0x0 + -1;
      local_439 = *(int *)local_510.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_1000adfc0;
    }
    QArrayData::deallocate((QArrayData *)local_510.field0_0x0,2,8);
  }
LAB_1000adfc0:
  FUN_100d72f50(local_508);
  FUN_100d72f50(local_4f8);
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

