
undefined4 FUN_1000cca30(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = param_1 + 0x370;
  local_38 = lVar2;
  FUN_1005a5960(lVar1);
  iVar3 = FUN_100097260(*(long *)(param_1 + 0x2b0),lVar1,
                        *(undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x110),0,0);
  if (iVar3 < 0) {
    pcVar4 = "FillDiskList returned error 0x%x";
LAB_1000ccb3e:
    FUN_1008e3970("","vm",0,pcVar4,iVar3);
    *(undefined4 *)(param_1 + 500) = 0x80000503;
  }
  else {
    FUN_1007d6920(local_48,param_1 + 0x440);
    iVar3 = FUN_1005a7330(lVar1,local_48,FUN_1000ccbb0,0x188a4);
    if (iVar3 < 0) {
      pcVar4 = "Disk.SwitchToState returned error 0x%x";
      goto LAB_1000ccb3e;
    }
    uVar5 = 0;
    FUN_1008e3970("","vm",0,"Waiting for disk...");
    FUN_1005a7950(lVar1);
    if (*(int *)(param_1 + 500) == 0) {
      FUN_1008e3970("","vm",0,"Waiting for disk...Completed.");
      FUN_1005a5960(lVar1);
      goto LAB_1000ccb67;
    }
    FUN_1008e3970("","vm",0,"Waiting for disk...Failed.");
    if (*(int *)(param_1 + 500) == 0) {
      *(int *)(param_1 + 500) = -0x7ffffafd;
    }
  }
  FUN_1000c6990(param_1);
  uVar5 = *(undefined4 *)(param_1 + 500);
LAB_1000ccb67:
  if (lVar2 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

