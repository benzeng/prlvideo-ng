
int FUN_100d45370(long *param_1,long *param_2,undefined8 param_3,QString *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  undefined4 local_a4;
  QArrayData *local_a0;
  QFileInfo local_98 [12];
  undefined4 local_8c;
  QArrayData *local_88;
  long local_80;
  long *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  iVar6 = _PrlVmCfg_GetOsVersion(*(undefined8 *)(*param_1 + 8),&local_6c);
  if (iVar6 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the guest OS version, 0x%x",iVar6);
    return iVar6;
  }
  lVar1 = *param_2;
  local_80 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  FUN_100d45ae0(&local_78,&local_80,param_3,local_6c,1);
  plVar7 = local_78;
  local_78 = (long *)0x0;
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  puVar3 = PTR_shared_null_1021e1288;
  if (plVar7 == (long *)0x0) {
    return -0x7fffffff;
  }
  local_88 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar6 = FUN_100d45cb0(*param_1,&local_88);
  if ((-1 < iVar6) && (iVar6 = FUN_100d45ea0(plVar7,&local_88), -1 < iVar6)) {
    iVar6 = FUN_100d45f90(plVar7);
    if (iVar6 < 0) {
      _PrlDbg_PrlResultToString(iVar6,&local_68);
      FUN_100df99c0("","PrlSdkUtils",0,"vmConfig->ClearBootOrder error 0x%X \'%s\'",iVar6,local_68);
    }
    else {
      iVar6 = FUN_100d46110(plVar7);
      if ((-1 < iVar6) && (iVar6 = FUN_100d46260(plVar7,param_1), -1 < iVar6)) {
        local_8c = 6;
        iVar6 = FUN_100d466a0(plVar7,param_1,&local_8c);
        if (iVar6 < 0) {
          _PrlDbg_PrlResultToString(iVar6,&local_60);
          FUN_100df99c0("","PrlSdkUtils",0,"vmConfig->ImportBootDevices error 0x%X \'%s\'",iVar6,
                        local_60);
        }
        else {
          iVar6 = FUN_100d46c90(plVar7);
          if (-1 < iVar6) {
            if (*(int *)(param_4->field0_0x0 + 4) == 0) {
LAB_100d45684:
              iVar6 = FUN_100d47260(plVar7,param_3,5,0);
            }
            else {
              QFileInfo::QFileInfo(local_98,param_4);
              cVar5 = QFileInfo::exists();
              QFileInfo::~QFileInfo(local_98);
              if (cVar5 == '\0') goto LAB_100d45684;
              local_a0 = (QArrayData *)puVar3;
              iVar6 = FUN_100d46de0(plVar7,1,param_4,&local_a0,0,0xffffffff,0);
              if (*(int *)local_a0 != -1) {
                if (*(int *)local_a0 != 0) {
                  LOCK();
                  *(int *)local_a0 = *(int *)local_a0 + -1;
                  local_31 = *(int *)local_a0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto joined_r0x000100d456a0;
                }
                QArrayData::deallocate(local_a0,2,8);
              }
            }
joined_r0x000100d456a0:
            if (-1 < iVar6) {
              local_a4 = 5;
              iVar6 = FUN_100d466a0(plVar7,param_1,&local_a4);
              if (iVar6 < 0) {
                _PrlDbg_PrlResultToString(iVar6,&local_58);
                FUN_100df99c0("","PrlSdkUtils",0,"vmConfig->ImportBootDevices error 0x%X \'%s\'",
                              iVar6,local_58);
              }
              else {
                iVar6 = _PrlVmCfg_SetSharedProfileEnabled(plVar7[1],0);
                if (iVar6 < 0) {
                  FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the shared profiles enabled, 0x%x"
                                ,iVar6);
                }
                else {
                  local_4c = 0;
                  iVar6 = _PrlVmCfg_IsEfiEnabled(*(undefined8 *)(*param_1 + 8),&local_4c);
                  iVar4 = local_4c;
                  if (iVar6 < 0) {
                    _PrlDbg_PrlResultToString(iVar6,&local_48);
                    FUN_100df99c0("","PrlSdkUtils",0,
                                  "Error : Failed to get efi enabled value error 0x%X \'%s\'",iVar6,
                                  local_48);
                  }
                  else {
                    iVar6 = _PrlVmCfg_SetEfiEnabled(plVar7[1],local_4c != 0);
                    if (iVar6 < 0) {
                      _PrlDbg_PrlResultToString(iVar6,&local_40);
                      pcVar8 = "OFF";
                      if (iVar4 != 0) {
                        pcVar8 = "ON";
                      }
                      FUN_100df99c0("","PrlSdkUtils",0,
                                    "Error : Failed to set efi %s. error 0x%X \'%s\'",pcVar8,iVar6,
                                    local_40);
                    }
                    else {
                      plVar2 = (long *)*param_5;
                      if ((plVar2 != plVar7) && (plVar2 != (long *)0x0)) {
                        if (plVar2[1] != 0) {
                          _PrlHandle_Free();
                        }
                        if (*plVar2 != 0) {
                          _PrlHandle_Free();
                        }
                        operator_delete(plVar2);
                      }
                      *param_5 = plVar7;
                      plVar7 = (long *)0x0;
                      iVar6 = 0;
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
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d458cf;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100d458cf:
  if (plVar7 != (long *)0x0) {
    if (plVar7[1] != 0) {
      _PrlHandle_Free();
    }
    if (*plVar7 != 0) {
      _PrlHandle_Free();
    }
    operator_delete(plVar7);
  }
  return iVar6;
}

