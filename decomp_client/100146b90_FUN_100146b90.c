
long * FUN_100146b90(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  int local_80;
  int local_7c;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  uint local_60;
  long local_58;
  undefined *local_50;
  long local_48;
  long local_40;
  uint local_34;
  
  local_34 = 0;
  uVar6 = 0;
  if ((*(long *)(param_2 + 0x10) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_2 + 0x10) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
  }
  FUN_10018c250(&local_40,uVar6);
  iVar2 = _PrlVmCfg_GetDevsCount(local_40,&local_34);
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  if (iVar2 == 0) {
    pvVar5 = _malloc((ulong)local_34 << 3);
    if (pvVar5 == (void *)0x0) {
      FUN_100df99c0("","prl_client_app",0,"Can\'t allocate memory to store device list");
    }
    else {
      uVar6 = 0;
      if ((*(long *)(param_2 + 0x10) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_2 + 0x10) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_2 + 0x18);
      }
      FUN_10018c250(&local_48,uVar6);
      iVar2 = _PrlVmCfg_GetDevsList(local_48,pvVar5,&local_34);
      if (local_48 != 0) {
        _PrlHandle_Free();
      }
      if (iVar2 == 0) {
        local_50 = PTR_shared_null_1021e15e8;
        if (local_34 != 0) {
          lVar7 = 0;
          do {
            lVar1 = *(long *)((long)pvVar5 + lVar7 * 8);
            local_58 = lVar1;
            FUN_10014a450(&local_50,&local_58);
            if (lVar1 != 0) {
              _PrlHandle_Free(lVar1);
            }
            lVar7 = lVar7 + 1;
          } while ((uint)lVar7 < local_34);
        }
        _free(pvVar5);
        FUN_10014a970(&local_78,&local_50);
        local_70 = (undefined8 *)(local_78 + 0x10 + (long)*(int *)(local_78 + 8) * 8);
        local_68 = (undefined8 *)(local_78 + 0x10 + (long)*(int *)(local_78 + 0xc) * 8);
        local_60 = 1;
        if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
          iVar2 = 1;
          do {
            lVar7 = *(long *)*local_70;
            *param_1 = lVar7;
            if (lVar7 != 0) {
              _PrlHandle_AddRef(lVar7);
            }
            if (local_60 != 0) {
              iVar3 = _PrlHandle_GetType(lVar7,&local_7c);
              if (iVar3 == 0) {
                iVar3 = 0;
                if (local_7c + 0xeffffff7U < 8) {
                  iVar3 = *(int *)(&DAT_100e14d30 + (long)(int)(local_7c + 0xeffffff7U) * 4);
                }
                if (iVar3 == *(int *)(param_2 + 0x20)) {
                  if (local_7c + 0xeffffff1U < 2) goto LAB_100146ee8;
                  local_80 = 0;
                  iVar3 = _PrlVmDev_GetIndex(lVar7,&local_80);
                  if (iVar3 == 0) {
                    if (local_80 == *(int *)(param_2 + 0x24)) goto LAB_100146ee8;
                  }
                  else {
                    uVar6 = FUN_100dddcf0(iVar3);
                    FUN_100df99c0("","prl_client_app",0,
                                  "Couldn\'t to extract device index %.8X \'%s\'",iVar3,uVar6);
                  }
                }
              }
              else {
                uVar6 = FUN_100dddcf0(iVar3);
                FUN_100df99c0("","prl_client_app",0,"Couldn\'t to extract device type %.8X \'%s\'",
                              iVar3,uVar6);
              }
              local_60 = 0;
            }
            if (lVar7 == 0) {
              local_70 = local_70 + 1;
              local_60 = 1;
            }
            else {
              _PrlHandle_Free(lVar7);
              local_70 = local_70 + 1;
              uVar4 = local_60 ^ 1;
              bVar8 = local_60 == 1;
              local_60 = uVar4;
              if (bVar8) break;
            }
          } while (local_70 != local_68);
        }
        iVar2 = 0xd;
LAB_100146ee8:
        FUN_10014a540(&local_78);
        if (iVar2 == 0xd) {
          *param_1 = 0;
        }
        FUN_10014a540(&local_50);
        return param_1;
      }
      FUN_100df99c0("","prl_client_app",0,"Can\'t get the device list. Return code: [%.8X]",iVar2);
      _free(pvVar5);
    }
  }
  else {
    FUN_100df99c0("","prl_client_app",0,"Can\'t get device count. Return code: [%.8X]",iVar2);
  }
  *param_1 = 0;
  return param_1;
}

