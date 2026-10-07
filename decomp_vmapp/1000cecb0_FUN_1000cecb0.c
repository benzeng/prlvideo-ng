
undefined1 FUN_1000cecb0(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 local_40 [16];
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = param_1 + 0x370;
  local_30 = lVar2;
  FUN_1005a5960(lVar1);
  FUN_100097260(*(undefined8 *)(param_1 + 0x2b0),lVar1,0,0,0);
  if ((*(long *)(param_1 + 0x450) == 0) || (*(long *)(*(long *)(param_1 + 0x450) + 0x10) == 0)) {
    FUN_1007d6920(local_40,param_1 + 0x440);
    iVar4 = FUN_1005a7300(lVar1,local_40,FUN_1000ccbb0,0x188a3);
    if (iVar4 < 0) {
      uVar5 = 0;
      FUN_1008e3970("","vm",0,"Disk.CreateState returns [%d]",iVar4);
      *(int *)(param_1 + 500) = iVar4;
      goto LAB_1000cee03;
    }
LAB_1000ced4d:
    FUN_1008e3970("","vm",0,"Waiting for disk...");
    FUN_1005a7950(lVar1);
    if (*(int *)(param_1 + 500) == 0) {
      FUN_1008e3970("","vm",0,"Waiting for disk...Completed.");
      uVar5 = 1;
      goto LAB_1000cee03;
    }
    uVar5 = 0;
    FUN_1008e3970("","vm",0,"Waiting for disk...Failed.");
    if (*(int *)(param_1 + 500) != 0) goto LAB_1000cee03;
    *(undefined4 *)(param_1 + 500) = 0x80000053;
  }
  else {
    cVar3 = FUN_1000cf9e0(param_1);
    if (cVar3 != '\0') goto LAB_1000ced4d;
  }
  uVar5 = 0;
LAB_1000cee03:
  if (lVar2 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

