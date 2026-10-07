
int FUN_1005f9520(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *plVar8;
  undefined1 local_88 [8];
  long *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  uVar6 = (**(code **)(**(long **)(param_1 + 0x58) + 0x350))();
  FUN_1005ab5b0(uVar6);
  FUN_1005b1ea0(uVar6);
  FUN_1005b1e80(uVar6);
  FUN_1005b2160(uVar6,param_1 + 0x62);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x2b0))(local_48);
  FUN_1005b2bb0(uVar6,local_48);
  iVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x80) + 0x10) + 0x18))();
  if (iVar4 < 0) {
    pcVar7 = "Failed to save descriptor, err = 0x%X";
LAB_1005f9778:
    FUN_1008e3970("Backup","vdisk",0,pcVar7,iVar4);
    goto LAB_1005f9784;
  }
  plVar8 = *(long **)(param_1 + 0x58);
  (**(code **)(*plVar8 + 0x130))(local_58,plVar8);
  cVar3 = FUN_1005b2f90(plVar8,local_58);
  if (cVar3 == '\0') {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x178))(&local_70);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x130))(local_68);
    iVar4 = FUN_1005b4450(&local_70,local_68,0xff);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_48[0] = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_48[0]) goto LAB_1005f964a;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1005f964a:
    if (iVar4 < 0) {
      pcVar7 = "Build backup cache file failed, err = 0x%X";
      goto LAB_1005f9778;
    }
  }
  FUN_1005fd1d0(local_88,*(undefined8 *)(param_1 + 0x58));
  iVar4 = FUN_1005fd460(local_88,param_1 + 0x88);
  if (iVar4 < 0) {
    FUN_1008e3970("Backup","vdisk",0,"Unable to prepare session, err = 0x%X",iVar4);
    FUN_1005f98c0((long *)(param_1 + 0x80));
  }
  else {
    lVar2 = *(long *)(param_1 + 0x80);
    plVar8 = (long *)0x0;
    if (lVar2 != 0) {
      plVar8 = *(long **)(lVar2 + 0x10);
    }
    iVar5 = (**(code **)(*plVar8 + 0x1b0))(plVar8,param_1 + 0x88);
    iVar4 = 0;
    if (iVar5 < 0) {
      iVar4 = 0;
      FUN_1008e3970("Backup","vdisk",0,"Failed to save session for native disk, err = 0x%X",iVar5);
    }
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_48[0] = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_48[0]) goto LAB_1005f9743;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005f9743:
  if (local_80 != (long *)0x0) {
    LOCK();
    plVar8 = local_80 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
LAB_1005f9784:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

