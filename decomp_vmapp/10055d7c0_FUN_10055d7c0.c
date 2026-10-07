
undefined1 FUN_10055d7c0(long *param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined1 uVar7;
  ulong local_48;
  long local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = (ulong)*(uint *)(param_1 + 1);
  local_40 = param_4;
  local_30 = lVar1;
  if ((code *)param_1[2] != (code *)0x0) {
    lVar5 = *(long *)(*param_1 + 0x30);
    cVar3 = (*(code *)param_1[2])(param_1[3],param_4 + lVar5,lVar5 + *(long *)(*param_1 + 0x28));
    if (cVar3 == '\0') {
      uVar7 = 0;
      FUN_1008e3970("","TransMem",0,"CSnapshotCryptTransaction::main_callback cancelled");
      goto LAB_10055d8bf;
    }
  }
  lVar5 = *param_1;
  plVar2 = *(long **)(lVar5 + 0x88);
  if (plVar2 == (long *)0x0) {
LAB_10055d840:
    plVar2 = *(long **)(lVar5 + 0x90);
    uVar7 = 1;
    if (plVar2 == (long *)0x0) goto LAB_10055d8bf;
    iVar4 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2,param_3,&local_48);
    if (-1 < iVar4) goto LAB_10055d8bf;
    pcVar6 = "CGuestMemoryCompressor::io_callback_impl() failed to encrypt (%d)";
  }
  else {
    iVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,&local_48);
    if (-1 < iVar4) {
      lVar5 = *param_1;
      goto LAB_10055d840;
    }
    pcVar6 = "CGuestMemoryCompressor::io_callback_impl() failed to decrypt (%d)";
  }
  uVar7 = 0;
  FUN_1008e3970("","TransMem",0,pcVar6);
LAB_10055d8bf:
  if (lVar1 == local_30) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

