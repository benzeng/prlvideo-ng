
undefined4 FUN_1000f3390(undefined8 param_1,int param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 local_498;
  uint local_490 [2];
  undefined8 local_488;
  uint local_480 [2];
  undefined1 local_478 [1024];
  undefined1 local_78 [80];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar3 = 0x50534135;
  local_28 = lVar1;
  if (param_2 != 1) {
    uVar4 = 2;
    if (param_2 != 0) goto LAB_1000f3519;
    uVar3 = 0x50534136;
  }
  iVar2 = _LSGetApplicationForInfo(uVar3,0x50534158,0,8,local_78,0);
  if (iVar2 == 0) {
    iVar2 = _FSRefMakePath(local_78,local_478,0x400);
    if (iVar2 != 0) {
      local_478[0] = 0;
    }
    if (2 < DAT_10230ffd0) {
      local_480[0] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
      ;
      local_480[1] = 0;
      local_488 = 0x58415350;
      FUN_100df99c0("SGAC","prl_client_app",3,
                    "Application \"%s\" already registered for type=\'%s\', creator=\'%s\'",
                    local_478,local_480,&local_488);
    }
    uVar4 = 0;
  }
  else {
    if (2 < DAT_10230ffd0) {
      local_490[0] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
      ;
      local_490[1] = 0;
      local_498 = 0x58415350;
      FUN_100df99c0("SGAC","prl_client_app",3,
                    "No application registered for type=\'%s\', creator=\'%s\'",local_490,&local_498
                   );
    }
    iVar2 = FUN_1000f3540();
    uVar4 = 0;
    if ((iVar2 != 0) && (uVar4 = 3, 0 < DAT_10230ffd0)) {
      FUN_100df99c0("SGAC","prl_client_app",1,"Failed to register \"%s\", err %i","Parallels Link");
    }
  }
LAB_1000f3519:
  if (lVar1 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

