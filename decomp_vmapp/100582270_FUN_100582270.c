
int FUN_100582270(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_40;
  undefined1 local_31;
  undefined1 local_30 [16];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  uVar4 = (**(code **)(**(long **)(param_1 + 0x58) + 0x350))();
  cVar2 = FUN_1005b17e0(uVar4);
  if (cVar2 == '\0') {
    FUN_1008e3970("","vdisk",0,"Failed to remove some cache files");
    iVar3 = -0x7ffdf000;
    goto LAB_10058235c;
  }
  (**(code **)(**(long **)(param_1 + 0x58) + 0x178))(&local_40);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x2b0))(local_30);
  iVar3 = FUN_1005b4450(&local_40,local_30,0xff);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100582312;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100582312:
  if (iVar3 < 0) {
    FUN_1008e3970("","vdisk",0,"Rebuild current cache file failed, err = 0x%X",iVar3);
  }
LAB_10058235c:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

