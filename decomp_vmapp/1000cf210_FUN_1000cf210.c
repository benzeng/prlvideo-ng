
undefined1 FUN_1000cf210(long param_1)

{
  int iVar1;
  long lVar2;
  Data *pDVar3;
  undefined4 uVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  undefined1 uVar8;
  Data *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_58 = (Data *)PTR_shared_null_100ba2188;
  local_38 = lVar2;
  FUN_10000c490(&local_58,param_1 + 0x358);
  lVar7 = param_1 + 0x370;
  FUN_1005a5960(lVar7);
  FUN_100097260(*(undefined8 *)(param_1 + 0x2b0),lVar7,*(undefined8 *)(param_1 + 0x318),&local_58,0)
  ;
  FUN_1007d6920(local_48,param_1 + 0x440);
  uVar4 = FUN_1005a7360(lVar7,local_48,1,FUN_1000ccbb0,0x188a5);
  *(undefined4 *)(param_1 + 500) = uVar4;
  FUN_10008fdb0(*(undefined8 *)(param_1 + 0x2b0),0x4e45,0);
  if (*(int *)(param_1 + 500) < 0) {
    uVar8 = 0;
    FUN_1008e3970("","vm",0,"Disk.CommitUnfinished returned error 0x%x");
  }
  else {
    FUN_1008e3970("","vm",0,"Waiting for disk...");
    FUN_1005a7950(lVar7);
    if (*(int *)(param_1 + 500) == 0) {
      uVar8 = 1;
      FUN_1008e3970("","vm",0,"Waiting for disk...Completed.");
    }
    else {
      uVar8 = 0;
      FUN_1008e3970("","vm",0,"Waiting for disk...Failed.");
    }
  }
  pDVar3 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1000cf3f1;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar7 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_58 + (long)iVar1 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1000cf3d0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_49 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_49) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1000cf3d0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1000cf3f1:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

