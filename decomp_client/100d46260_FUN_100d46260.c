
uint FUN_100d46260(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_R14D;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  QArrayData *local_460;
  QArrayData *local_458;
  undefined4 local_44c;
  long local_448;
  uint local_440;
  undefined1 local_439;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar1 = *(undefined8 *)(*param_2 + 8);
  local_440 = 0;
  uVar2 = _PrlVmCfg_GetHardDisksCount(uVar1,&local_440);
  if ((int)uVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to get imported machine hard disks count, 0x%x",uVar2);
  }
  else {
    uVar2 = 0;
    if (local_440 != 0) {
      uVar5 = 0;
      do {
        local_448 = 0;
        uVar3 = _PrlVmCfg_GetHardDisk(uVar1,uVar5,&local_448);
        if ((int)uVar3 < 0) {
          uVar4 = 1;
          FUN_100df99c0("","PrlSdkUtils",0,"Failed to get imported machine hard disks device, 0x%x",
                        uVar3);
        }
        else {
          local_44c = 0x400;
          uVar3 = _PrlVmDev_GetSysName(local_448,local_438,&local_44c);
          if ((int)uVar3 < 0) {
            uVar4 = 1;
            FUN_100df99c0("","PrlSdkUtils",0,
                          "Failed to get imported machine hard disk system name, 0x%x",uVar3);
          }
          else {
            _strlen(local_438);
            QString::fromUtf8_helper((char *)&local_460,(int)local_438);
            QString::normalized(&local_458,&local_460,1,0);
            if (*(int *)local_460 != -1) {
              if (*(int *)local_460 != 0) {
                LOCK();
                *(int *)local_460 = *(int *)local_460 + -1;
                local_439 = *(int *)local_460 != 0;
                UNLOCK();
                if ((bool)local_439) goto LAB_100d46394;
              }
              QArrayData::deallocate(local_460,2,8);
            }
LAB_100d46394:
            uVar3 = _PrlVmDev_GetIfaceType(local_448,&local_464);
            if ((int)uVar3 < 0) {
              uVar4 = 1;
              FUN_100df99c0("","PrlSdkUtils",0,
                            "Failed to get imported machine hard disk iface type, 0x%x",uVar3);
            }
            else {
              uVar3 = _PrlVmDev_GetStackIndex(local_448,&local_468);
              if ((int)uVar3 < 0) {
                uVar4 = 1;
                FUN_100df99c0("","PrlSdkUtils",0,
                              "Failed to get imported machine hard disk stack index, 0x%x",uVar3);
              }
              else {
                uVar3 = _PrlVmDevHd_GetDiskSize(local_448,&local_46c);
                if ((int)uVar3 < 0) {
                  uVar4 = 1;
                  FUN_100df99c0("","PrlSdkUtils",0,
                                "Failed to get imported machine hard disk size, 0x%x",uVar3);
                }
                else {
                  uVar4 = FUN_100d47c70(param_1,&local_458,local_464,local_468,local_46c,0xff,0);
                  uVar3 = unaff_R14D;
                  if ((int)uVar4 < 0) {
                    uVar3 = uVar4;
                  }
                  uVar4 = uVar4 >> 0x1f;
                }
              }
            }
            if (*(int *)local_458 != -1) {
              if (*(int *)local_458 != 0) {
                LOCK();
                *(int *)local_458 = *(int *)local_458 + -1;
                local_439 = *(int *)local_458 != 0;
                UNLOCK();
                if ((bool)local_439) goto LAB_100d46570;
              }
              QArrayData::deallocate(local_458,2,8);
            }
          }
        }
LAB_100d46570:
        if (local_448 != 0) {
          _PrlHandle_Free();
        }
        uVar2 = uVar3;
        if (uVar4 != 0) break;
        uVar5 = uVar5 + 1;
        uVar2 = 0;
        unaff_R14D = uVar3;
      } while (uVar5 < local_440);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

