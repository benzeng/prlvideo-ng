
undefined8
FUN_1006fdd80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 local_8c8 [4];
  ushort local_8c4;
  undefined1 local_838 [1024];
  undefined1 local_438 [1024];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  iVar1 = FUN_100700800();
  uVar6 = 0xffffffff;
  if (iVar1 == 0) {
    lVar2 = _opendir_INODE64(param_2);
    if (lVar2 == 0) {
      piVar5 = ___error();
      uVar6 = 0xffffffff;
      if (*piVar5 == 0x14) {
        uVar6 = 0;
      }
      lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    else {
      lVar3 = _readdir_INODE64();
      if (lVar3 != 0) {
        puVar4 = local_838;
        if (param_3 == 0) {
          puVar4 = (undefined1 *)0x0;
        }
        do {
          pcVar7 = (char *)(lVar3 + 0x15);
          iVar1 = _strcmp(pcVar7,".");
          if ((iVar1 != 0) && (iVar1 = _strcmp(pcVar7,".."), iVar1 != 0)) {
            ___snprintf_chk(local_438,0x400,0,0x400,"%s/%s",param_2,pcVar7);
            if (param_3 != 0) {
              ___snprintf_chk(local_838,0x400,0,0x400,"%s/%s",param_3,pcVar7);
            }
            iVar1 = _lstat_INODE64(local_438,local_8c8);
            if (iVar1 == 0) {
              if ((local_8c4 & 0xf000) == 0x4000) {
                iVar1 = FUN_1006fdd80(param_1,local_438,puVar4,param_4,param_5);
              }
              else {
                iVar1 = FUN_100700800(param_1,local_438,puVar4,param_4,param_5);
              }
              if (iVar1 == 0) goto LAB_1006fdf23;
            }
            lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
            uVar6 = 0xffffffff;
            goto LAB_1006fdf82;
          }
LAB_1006fdf23:
          lVar3 = _readdir_INODE64(lVar2);
        } while (lVar3 != 0);
      }
      _closedir(lVar2);
      uVar6 = 0;
      lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
LAB_1006fdf82:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

