
int FUN_1005f6cd0(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  QArrayData *local_50;
  undefined1 local_41;
  undefined1 local_40 [16];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  uVar5 = (**(code **)(**(long **)(param_1 + 0x58) + 0x350))();
  FUN_1005ab5b0(uVar5);
  FUN_1005b1e80(uVar5);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x2b0))(local_40);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x178))(&local_50);
  iVar3 = FUN_1005b4450(&local_50,local_40,0xff);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_41 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_1005f6d7b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005f6d7b:
  if (iVar3 < 0) {
    FUN_1008e3970("","vdisk",0,"Rebuild current cache file failed, err = 0x%X",iVar3);
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x58) + 0x2f8))();
    cVar2 = FUN_1005b15b0(uVar5,local_40,uVar4);
    if (cVar2 == '\0') {
      FUN_1008e3970("","vdisk",0,"Reopen \'current\' cache file failed");
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                    "OfflineOperations.cpp",0x12a,"RebuildCurrentCache");
    }
    iVar3 = 0;
    FUN_1008e3970("","vdisk",0,">>>> Reopened \'current\' cache file");
  }
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

