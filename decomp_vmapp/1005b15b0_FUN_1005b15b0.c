
undefined1 FUN_1005b15b0(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  uint uVar7;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  (**(code **)(*(long *)*param_1 + 0x178))(&local_58);
  iVar3 = *(int *)(local_58 + 4);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1005b161d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005b161d:
  if (iVar3 == 0) {
    if (DAT_1011b55f8 < 3) {
      uVar6 = 0;
      goto LAB_1005b1773;
    }
    pcVar4 = "Disk isn\'t opened yet";
LAB_1005b1765:
    uVar5 = 3;
  }
  else {
    cVar2 = (**(code **)(*(long *)*param_1 + 0xd8))();
    if (cVar2 == '\0') {
      if (DAT_1011b55f8 < 3) {
        uVar6 = 0;
        goto LAB_1005b1773;
      }
      pcVar4 = "Disk isn\'t compactable";
      goto LAB_1005b1765;
    }
    cVar2 = FUN_10057d550(*param_1);
    if (cVar2 != '\0') {
      FUN_1005b17e0(param_1);
      uVar6 = 0;
      goto LAB_1005b1773;
    }
    (**(code **)(*(long *)*param_1 + 0x2b0))(local_48);
    iVar3 = FUN_1007ea6f0(local_48,param_2);
    if ((((param_3 & 2) != 0) && (iVar3 == 0)) &&
       (cVar2 = FUN_10057db20(*param_1,0x32326470), cVar2 == '\0')) {
      uVar6 = 0;
      FUN_1008e3970("","vdisk",0,"Disk was touched by previous versions of PD");
      FUN_1005b17e0(param_1);
      goto LAB_1005b1773;
    }
    uVar7 = param_3 & 3;
    if ((param_3 & 3) == 0) {
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","fileFlags != 0",
                    "BlockGroup.cpp",0x6f0,"OpenCacheFile");
    }
    cVar2 = FUN_1005af650(param_1 + 9,param_2,uVar7);
    uVar6 = 1;
    if (cVar2 != '\0') goto LAB_1005b1773;
    if (uVar7 != 1) {
      uVar6 = 0;
      FUN_1008e3970("","vdisk",0,"Open(0x%X) failed, reset cache file",uVar7);
      FUN_1005b1b60(*param_1,param_2);
      goto LAB_1005b1773;
    }
    pcVar4 = "Open(RO) failed";
    uVar5 = 0;
  }
  uVar6 = 0;
  FUN_1008e3970("","vdisk",uVar5,pcVar4);
LAB_1005b1773:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

