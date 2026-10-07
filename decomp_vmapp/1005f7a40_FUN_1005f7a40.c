
int FUN_1005f7a40(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  char local_39;
  undefined1 local_38 [16];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_39 = '\0';
  plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10);
  local_28 = lVar1;
  (**(code **)(*plVar2 + 0xa8))(local_38,plVar2,&local_39);
  iVar3 = 0;
  if (local_39 != '\0') {
    iVar3 = FUN_1005886b0(*param_2,local_38);
    if (iVar3 < 0) {
      FUN_1008e3970("","vdisk",0,"Rollback failed with code 0x%x!",iVar3);
    }
  }
  if (lVar1 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

