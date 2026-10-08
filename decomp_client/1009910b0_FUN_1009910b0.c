
int FUN_1009910b0(long param_1)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  long local_68;
  long local_60;
  long local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar8 = DAT_102310a28;
  piVar7 = DAT_102310a20;
  piVar9 = piVar7;
  if (DAT_102310a20 != (int *)0x0) {
    do {
      iVar5 = piVar7[1];
      piVar9 = (int *)0x0;
      if (iVar5 < 1) goto LAB_10099113e;
      LOCK();
      local_31 = iVar5 == piVar7[1];
      if ((bool)local_31) {
        piVar7[1] = iVar5 + 1;
      }
      UNLOCK();
    } while (!(bool)local_31);
    LOCK();
    *piVar7 = *piVar7 + 1;
    local_31 = *piVar7 != 0;
    UNLOCK();
    piVar9 = piVar7;
    if ((piVar7[1] != 0) && (lVar8 != 0)) {
      iVar5 = -0x7fffffea;
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error : One PT API instance already loaded/initialized!");
      goto LAB_1009914eb;
    }
  }
LAB_10099113e:
  pcVar6 = operator_new(3);
  FUN_1009936e0(&local_50);
  QString::normalized(&local_40,&local_50,0,0);
  QString::toUtf8();
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009911a5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009911a5:
  FUN_100995970(pcVar6,local_48 + *(long *)(local_48 + 0x10));
  piVar7 = operator_new(0x18);
  *(char **)(piVar7 + 4) = pcVar6;
  *(code **)(piVar7 + 2) = FUN_100995a00;
  piVar7[0] = 1;
  piVar7[1] = 1;
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
    LOCK();
    piVar2 = piVar7 + 1;
    *piVar2 = *piVar2 + 1;
    local_31 = *piVar2 != 0;
    UNLOCK();
  }
  if (piVar9 != (int *)0x0) {
    LOCK();
    piVar2 = piVar9 + 1;
    *piVar2 = *piVar2 + -1;
    local_31 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      (**(code **)(piVar9 + 2))(piVar9);
    }
    LOCK();
    *piVar9 = *piVar9 + -1;
    local_31 = *piVar9 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar9);
    }
  }
  if (piVar7 != (int *)0x0) {
    LOCK();
    piVar9 = piVar7 + 1;
    *piVar9 = *piVar9 + -1;
    local_31 = *piVar9 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      (**(code **)(piVar7 + 2))(piVar7);
    }
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_31 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar7);
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009912a1;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1009912a1:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009912d1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009912d1:
  if (*pcVar6 == '\0') {
    iVar5 = -0x7ffffff0;
    FUN_100df99c0("","TransporterWizardModel",0,"Error : PT API lib load failed!");
  }
  else {
    if (pcVar6[2] == '\0') {
      iVar5 = (*DAT_102310a30)(0,0,0);
      if (-1 < iVar5) {
        pcVar6[2] = '\x01';
        local_58 = 0;
        iVar5 = _PrlSrv_Create(&local_58);
        if (iVar5 < 0) {
          FUN_100df99c0("","TransporterWizardModel",0,
                        "Error : Failed to create SDK server handle, 0x%x",iVar5);
        }
        else {
          cVar4 = FUN_100990a60(*(undefined8 *)(param_1 + 0x10));
          local_60 = 0;
          iVar5 = (*DAT_102310a60)(&local_60);
          if (iVar5 < 0) {
            iVar5 = -0x7ffffffe;
            FUN_100df99c0("","TransporterWizardModel",0,
                          "Error : Failed to create agent handle. error 0x%X");
          }
          else {
            local_68 = 0;
            iVar5 = (*DAT_102310bd8)(local_60,local_58,(cVar4 == '\0') + '\x01',&local_68);
            if (iVar5 < 0) {
              iVar5 = -0x7ffffffe;
              FUN_100df99c0("","TransporterWizardModel",0,
                            "Error : Failed to create migration handle. error 0x%X");
              piVar9 = DAT_102310a20;
              lVar8 = DAT_102310a28;
            }
            else {
              iVar5 = (*DAT_102310bf8)(local_68,1);
              if (iVar5 < 0) {
                FUN_100df99c0("","TransporterWizardModel",0,
                              "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                              "PrlPTAMigration_SetType","(hMigration, MT_P2V_WITHIN_NET)",
                              "TransporterWizardLogic.cpp",0x86,"Initialize");
              }
              lVar8 = FUN_100990b00(*(undefined8 *)(param_1 + 0x10));
              if (*(int *)(lVar8 + 0x24) < 0) {
                iVar5 = (*DAT_102310ca8)(local_68,0);
                if (iVar5 < 0) {
                  FUN_100df99c0("","TransporterWizardModel",0,
                                "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                                "PrlPTAMigration_SetVmProfileType","(hMigration, VMP_PRODUCTIVITY)",
                                "TransporterWizardLogic.cpp",0x8f,"Initialize");
                }
              }
              else {
                iVar5 = (*DAT_102310ca8)();
                if (iVar5 < 0) {
                  FUN_100df99c0("","TransporterWizardModel",0,
                                "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                                "PrlPTAMigration_SetVmProfileType","(hMigration, vmProfile)",
                                "TransporterWizardLogic.cpp",0x8b,"Initialize");
                }
              }
              iVar5 = (*DAT_102310cb8)(local_68,0);
              if (iVar5 < 0) {
                FUN_100df99c0("","TransporterWizardModel",0,
                              "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                              "PrlPTAMigration_SetDocsMigrationMode","(hMigration, DMM_NONE)",
                              "TransporterWizardLogic.cpp",0x92,"Initialize");
              }
              iVar5 = (*DAT_102310cd8)(local_68,0);
              if (iVar5 < 0) {
                FUN_100df99c0("","TransporterWizardModel",0,
                              "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                              "PrlPTAMigration_SetBrowserSettingsMigrationEnabled",
                              "(hMigration, PRL_FALSE)","TransporterWizardLogic.cpp",0x93,
                              "Initialize");
              }
              if (piVar7 != (int *)0x0) {
                LOCK();
                *piVar7 = *piVar7 + 1;
                UNLOCK();
                LOCK();
                piVar9 = piVar7 + 1;
                *piVar9 = *piVar9 + 1;
                local_31 = *piVar9 != 0;
                UNLOCK();
              }
              piVar9 = *(int **)(param_1 + 0x20);
              *(int **)(param_1 + 0x20) = piVar7;
              *(char **)(param_1 + 0x18) = pcVar6;
              if (piVar9 != (int *)0x0) {
                LOCK();
                piVar2 = piVar9 + 1;
                *piVar2 = *piVar2 + -1;
                local_31 = *piVar2 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  (**(code **)(piVar9 + 2))(piVar9);
                }
                LOCK();
                *piVar9 = *piVar9 + -1;
                local_31 = *piVar9 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  operator_delete(piVar9);
                }
              }
              lVar8 = local_60;
              if (*(long *)(param_1 + 0x28) != local_60) {
                if (*(long *)(param_1 + 0x28) != 0) {
                  (*DAT_102310a50)();
                }
                *(long *)(param_1 + 0x28) = lVar8;
                if (lVar8 != 0) {
                  (*DAT_102310a48)(lVar8);
                }
              }
              lVar8 = local_68;
              if (*(long *)(param_1 + 0x30) != local_68) {
                if (*(long *)(param_1 + 0x30) != 0) {
                  (*DAT_102310a50)();
                }
                *(long *)(param_1 + 0x30) = lVar8;
                if (lVar8 != 0) {
                  (*DAT_102310a48)(lVar8);
                }
              }
              plVar1 = (long *)(param_1 + 0x38);
              if (plVar1 != &local_58) {
                if (*plVar1 != 0) {
                  _PrlHandle_Free();
                }
                *plVar1 = local_58;
                if (local_58 != 0) {
                  _PrlHandle_AddRef();
                }
              }
              piVar2 = *(int **)(param_1 + 0x20);
              iVar5 = 0;
              piVar9 = DAT_102310a20;
              lVar8 = DAT_102310a28;
              if (DAT_102310a20 != piVar2) {
                lVar8 = *(long *)(param_1 + 0x18);
                if (piVar2 != (int *)0x0) {
                  LOCK();
                  *piVar2 = *piVar2 + 1;
                  local_31 = *piVar2 != 0;
                  UNLOCK();
                }
                piVar3 = DAT_102310a20;
                piVar9 = piVar2;
                if (DAT_102310a20 != (int *)0x0) {
                  LOCK();
                  *DAT_102310a20 = *DAT_102310a20 + -1;
                  local_31 = *piVar3 != 0;
                  UNLOCK();
                  if ((!(bool)local_31) && (DAT_102310a20 != (int *)0x0)) {
                    operator_delete(DAT_102310a20);
                  }
                }
              }
            }
            DAT_102310a28 = lVar8;
            DAT_102310a20 = piVar9;
            if (local_68 != 0) {
              (*DAT_102310a50)();
            }
            local_68 = 0;
          }
          if (local_60 != 0) {
            (*DAT_102310a50)();
          }
          local_60 = 0;
        }
        if (local_58 != 0) {
          _PrlHandle_Free();
        }
        goto LAB_1009914eb;
      }
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error : PTA API init failed with error code : %.8X");
    }
    iVar5 = -0x7fffffea;
    FUN_100df99c0("","TransporterWizardModel",0,"Error : PT API init failed!");
  }
LAB_1009914eb:
  if (piVar7 != (int *)0x0) {
    LOCK();
    piVar9 = piVar7 + 1;
    *piVar9 = *piVar9 + -1;
    local_31 = *piVar9 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      (**(code **)(piVar7 + 2))(piVar7);
    }
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_31 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar7);
    }
  }
  return iVar5;
}

