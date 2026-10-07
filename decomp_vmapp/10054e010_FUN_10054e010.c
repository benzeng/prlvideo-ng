
undefined8
FUN_10054e010(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,char param_5)

{
  long *plVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined1 uVar5;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar4 = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x38) = iVar4;
  if (*(code **)(param_1 + 0x68) != (code *)0x0) {
    cVar2 = (**(code **)(param_1 + 0x68))
                      (*(undefined8 *)(param_1 + 0x70),iVar4,
                       *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30));
    if (cVar2 == '\0') {
      uVar5 = 0;
      FUN_1008e3970("","TransMem",0,"CGuestMemoryCompressor::data_callback_impl() cancelled)");
      goto LAB_10054e104;
    }
  }
  plVar1 = *(long **)(param_1 + 0x60);
  uVar5 = 1;
  if (plVar1 != (long *)0x0) {
    local_48 = (ulong)*(uint *)(*(long *)(param_1 + 0x28) + 0x20);
    local_40 = param_4;
    if (param_5 == '\0') {
      iVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,&local_48);
      if (-1 < iVar4) goto LAB_10054e104;
      pcVar3 = "CGuestMemoryCompressor::data_callback_impl() failed to decrypt (%d)";
    }
    else {
      iVar4 = (**(code **)(*plVar1 + 0x38))();
      if (-1 < iVar4) goto LAB_10054e104;
      pcVar3 = "CGuestMemoryCompressor::data_callback_impl() failed to encrypt (%d)";
    }
    uVar5 = 0;
    FUN_1008e3970("","TransMem",0,pcVar3,iVar4);
  }
LAB_10054e104:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),uVar5);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

