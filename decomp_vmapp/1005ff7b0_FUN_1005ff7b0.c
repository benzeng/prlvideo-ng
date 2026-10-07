
int FUN_1005ff7b0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined4 local_70;
  char local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  iVar2 = FUN_1005fd1f0();
  if (iVar2 < 0) {
    FUN_1008e3970("Backup","vdisk",0,"init failed, err = 0x%X",iVar2);
  }
  else {
    iVar2 = (**(code **)(*(long *)*param_1 + 0x2f8))();
    if (iVar2 == 0x80401) {
      FUN_1007d6870();
      local_78 = 0;
      local_70 = 0;
      local_6c = '\0';
      local_68 = 0xffffffff;
      local_60 = 0xff;
      local_58._8_4_ = (int)PTR_shared_null_100ba2188;
      local_58._0_8_ = PTR_shared_null_100ba2188;
      local_58._12_4_ = (int)((ulong)PTR_shared_null_100ba2188 >> 0x20);
      plVar5 = (long *)0x0;
      if (param_1[1] != 0) {
        plVar5 = *(long **)(param_1[1] + 0x10);
      }
      local_48 = local_58;
      iVar2 = (**(code **)(*plVar5 + 0x1a8))(plVar5,local_88);
      if (iVar2 < 0) {
        if (iVar2 != -0x7ffdd000) {
          FUN_1008e3970("Backup","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "PRL_ERR_DISK_DATA_NOT_FOUND == err","BackupFileListBuilder.cpp",0xcf,
                        "process");
        }
        FUN_1008e3970("Backup","vdisk",0,"Failed to get session params, err = 0x%X",iVar2);
      }
      else {
        iVar2 = FUN_1005ffae0(param_1,param_2);
        if (iVar2 < 0) {
          FUN_1008e3970("Backup","vdisk",0,"Failed to process disk descriptor, err = 0x%X",iVar2);
        }
        else {
          iVar2 = FUN_1005ffd50();
          if (iVar2 < 0) {
            FUN_1008e3970("Backup","vdisk",0,"Failed to process unknown files, err = 0x%X",iVar2);
          }
          else {
            iVar2 = FUN_1005fff30(param_1,local_88,param_2);
            if (iVar2 < 0) {
              FUN_1008e3970("Backup","vdisk",0,"Failed to process cached snaps, err = 0x%X",iVar2);
            }
            else {
              if (local_6c != '\0') {
                uVar3 = (ulong)*(uint *)(local_58._8_8_ + 8);
                lVar4 = 0;
                if ((int)*(uint *)(local_58._8_8_ + 8) < *(int *)(local_58._8_8_ + 0xc)) {
                  do {
                    iVar2 = FUN_100600910(param_1,*(undefined8 *)
                                                   (local_58._8_8_ + 0x10 + ((int)uVar3 + lVar4) * 8
                                                   ),param_2);
                    if (iVar2 < 0) {
                      FUN_1008e3970("Backup","vdisk",0,"Failed to process cached snaps, err = 0x%X",
                                    iVar2);
                      goto LAB_1005ffa96;
                    }
                    lVar4 = lVar4 + 1;
                    uVar3 = (ulong)*(int *)(local_58._8_8_ + 8);
                  } while (lVar4 < (long)((long)*(int *)(local_58._8_8_ + 0xc) - uVar3));
                }
              }
              iVar2 = FUN_1005ffd50();
              if (iVar2 < 0) {
                FUN_1008e3970("Backup","vdisk",0,"Failed to process externals, err = 0x%X",iVar2);
              }
            }
          }
        }
      }
LAB_1005ffa96:
      FUN_10057e7b0(local_88);
    }
    else {
      FUN_1008e3970("Backup","vdisk",0,"Disk MUST be opened with BACKUP flag");
      iVar2 = -0x7ffdefec;
    }
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

