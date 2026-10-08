
int FUN_100d4f910(undefined8 *param_1,char param_2,undefined8 *param_3)

{
  uint *puVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  int unaff_R15D;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  char *local_48;
  long local_40;
  uint local_38;
  undefined1 local_31;
  
  local_38 = 0;
  iVar5 = _PrlVmCfg_GetNetAdaptersCount(*param_1,&local_38);
  if (iVar5 < 0) {
    uVar7 = FUN_100dddcf0(iVar5);
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to get network adapters count,  PrlVmCfg_GetNetAdaptersCount has failed with  RC = %.8X [%s]"
                  ,iVar5,uVar7);
  }
  else {
    iVar5 = 0;
    if (local_38 != 0) {
      uVar8 = 0;
      do {
        local_40 = 0;
        iVar6 = _PrlVmCfg_GetNetAdapter(*param_1,uVar8,&local_40);
        lVar4 = local_40;
        if (iVar6 < 0) {
          uVar7 = FUN_100dddcf0(iVar6);
          bVar2 = true;
          FUN_100df99c0("","PrlSdkUtils",0,
                        "Failed to get network adapter,  PrlVmCfg_GetNetAdapter has failed with  RC = %.8X [%s]"
                        ,iVar6,uVar7);
        }
        else if (param_2 == '\0') {
          local_48 = (char *)0x0;
          iVar6 = _PrlVmDev_ToString(local_40,&local_48);
          pcVar3 = local_48;
          if (iVar6 < 0) {
            uVar7 = FUN_100dddcf0(iVar6);
            bVar2 = true;
            FUN_100df99c0("","PrlSdkUtils",0,
                          "Failed to get XML config of network adapter, PrlVmDev_ToString has failed with  RC = %.8X [%s]"
                          ,iVar6,uVar7);
          }
          else {
            if (local_48 != (char *)0x0) {
              _strlen(local_48);
            }
            QString::fromUtf8_helper((char *)&local_58,(int)pcVar3);
            QString::normalized(&local_50,&local_58,1,0);
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                local_31 = *(int *)local_58 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d4fb38;
              }
              QArrayData::deallocate(local_58,2,8);
            }
LAB_100d4fb38:
            _PrlBuffer_Free(local_48);
            FUN_1000341d0(param_3,&local_50);
            iVar5 = _PrlVmDevNet_SetAutoApply(local_40,0);
            iVar6 = unaff_R15D;
            if (iVar5 < 0) {
              uVar7 = FUN_100dddcf0(iVar5);
              FUN_100df99c0("","PrlSdkUtils",0,
                            "Failed to set auto apply to network adapter, PrlVmDevNet_SetAutoApply has failed with  RC = %.8X [%s]"
                            ,iVar5,uVar7);
              iVar6 = iVar5;
            }
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_31 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d4fbc9;
              }
              QArrayData::deallocate(local_50,2,8);
            }
LAB_100d4fbc9:
            bVar2 = true;
            unaff_R15D = iVar6;
            if (iVar5 >= 0) goto LAB_100d4fbd4;
          }
        }
        else {
          puVar1 = (uint *)*param_3;
          bVar2 = true;
          if (uVar8 < puVar1[3] - puVar1[2]) {
            if (1 < *puVar1) {
              FUN_100036c40(param_3,puVar1[1]);
            }
            QString::toUtf8();
            iVar6 = _PrlVmDev_FromString(lVar4,local_60 + *(long *)(local_60 + 0x10));
            if (*(int *)local_60 != -1) {
              if (*(int *)local_60 != 0) {
                LOCK();
                *(int *)local_60 = *(int *)local_60 + -1;
                local_31 = *(int *)local_60 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d4fa27;
              }
              QArrayData::deallocate(local_60,1,8);
            }
LAB_100d4fa27:
            if (iVar6 < 0) {
              uVar7 = FUN_100dddcf0(iVar6);
              FUN_100df99c0("","PrlSdkUtils",0,
                            "Failed to set XML config of network adapter, PrlVmDev_FromString has failed with  RC = %.8X [%s]"
                            ,iVar6,uVar7);
            }
            else {
LAB_100d4fbd4:
              iVar6 = unaff_R15D;
              bVar2 = false;
            }
          }
          else {
            iVar6 = -0x7ffffffa;
          }
        }
        if (local_40 != 0) {
          _PrlHandle_Free();
        }
        if (bVar2) {
          return iVar6;
        }
        uVar8 = uVar8 + 1;
        iVar5 = 0;
        unaff_R15D = iVar6;
      } while (uVar8 < local_38);
    }
  }
  return iVar5;
}

