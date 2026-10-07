
undefined8 FUN_100285a60(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_124 [4];
  long local_120;
  undefined1 local_118 [224];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  iVar2 = FUN_1000ec3b0(&local_120,*(undefined4 *)(param_2 + 8),local_124,0);
  uVar7 = 1;
  if (iVar2 != 0) {
    lVar6 = *(long *)(param_1 + 0x3a108);
    while (lVar6 != 0) {
      if (local_120 == *(long *)(lVar6 + -0xa8)) {
        lVar6 = lVar6 + -0xa8;
        FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                      "../Scsi/Lsi/dev.cpp",0x181,"resume_queue");
        goto LAB_100285b4e;
      }
      plVar5 = (long *)(lVar6 + 8);
      if (local_120 - *(long *)(lVar6 + -0xa8) < 0) {
        plVar5 = (long *)(lVar6 + 0x10);
      }
      lVar6 = *plVar5;
    }
    lVar6 = FUN_100285ba0(param_1);
    if (lVar6 != 0) {
LAB_100285b4e:
      uVar3 = *(int *)(param_2 + 8) - 8;
      sVar4 = 0x80;
      if (uVar3 < 0x81) {
        sVar4 = (ulong)uVar3;
      }
      _memcpy((void *)(lVar6 + 8),local_118,sVar4);
      uVar7 = 0;
    }
  }
  if (lVar1 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

