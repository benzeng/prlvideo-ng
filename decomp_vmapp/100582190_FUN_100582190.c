
int FUN_100582190(long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  *(undefined1 *)(param_1 + 100) = 0;
  local_38 = lVar1;
  iVar4 = FUN_100583090();
  if (iVar4 < 0) {
    FUN_1008e3970("","vdisk",0,"Finalize failed with code 0x%x",iVar4);
  }
  else {
    iVar4 = FUN_100582270(param_1);
    if (iVar4 < 0) {
      FUN_1008e3970("","vdisk",0,"Rebuild cache files failed, err = 0x%X");
    }
    plVar2 = *(long **)(param_1 + 0x58);
    pcVar3 = *(code **)(*plVar2 + 1000);
    iVar4 = *(int *)(param_1 + 0x60);
    FUN_1007d6870(local_48);
    iVar4 = (*pcVar3)(plVar2,iVar4 == 0,local_48);
  }
  if (lVar1 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

