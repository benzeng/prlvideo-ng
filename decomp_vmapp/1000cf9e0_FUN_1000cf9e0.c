
undefined1 FUN_1000cf9e0(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char cVar6;
  QArrayData *local_50;
  undefined1 local_41;
  undefined1 local_40 [16];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar3 = -0x7fffffe8;
  local_30 = lVar1;
  if ((*(long *)(param_1 + 0x450) != 0) && (*(long *)(*(long *)(param_1 + 0x450) + 0x10) != 0)) {
    iVar3 = CBiParams::getLevel();
    cVar2 = CBiParams::isChangeMonitoringEnabled();
    cVar6 = iVar3 == 2;
    if (cVar2 != '\0') {
      cVar6 = (iVar3 == 2) + '\x02';
    }
    CBiParams::getLocationUuid();
    FUN_1007d6920(local_40,&local_50);
    uVar4 = CBiParams::getLocationTimeout();
    iVar3 = FUN_1005a7510(param_1 + 0x370,local_40,uVar4,cVar6,FUN_1000ccbb0,0);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_41 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_41) goto LAB_1000cfae8;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1000cfae8:
    uVar5 = 1;
    if (-1 < iVar3) goto LAB_1000cfb19;
  }
  uVar5 = 0;
  FUN_1008e3970("","vm",0,"Disk.PrepareBackup returns [%d]",iVar3);
  *(int *)(param_1 + 500) = iVar3;
LAB_1000cfb19:
  if (lVar1 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

