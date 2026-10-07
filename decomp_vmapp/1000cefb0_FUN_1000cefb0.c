
undefined1 FUN_1000cefb0(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = param_1 + 0x370;
  local_38 = lVar2;
  FUN_1005a5960(lVar1);
  iVar3 = FUN_100097260(*(undefined8 *)(param_1 + 0x2b0),lVar1,*(undefined8 *)(param_1 + 0x318),0,1)
  ;
  if (iVar3 < 0) {
    FUN_1008e3970("","vm",0,"FillDiskList returned error 0x%x",iVar3);
    *(int *)(param_1 + 500) = iVar3;
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x48) + 0x14) == 7) {
      if (*(int *)(param_1 + 0x458) == 2) {
        uVar4 = 0;
LAB_1000cf0b2:
        iVar3 = FUN_1005a7550(lVar1,uVar4,FUN_1000ccbb0,0);
        goto LAB_1000cf0bc;
      }
      iVar3 = -0x7fffffe8;
      if (*(int *)(param_1 + 0x458) == 1) {
        uVar4 = 4;
        goto LAB_1000cf0b2;
      }
    }
    else {
      FUN_1007d6920(local_48,param_1 + 0x440);
      iVar3 = FUN_1005a7360(lVar1,local_48,*(undefined1 *)(param_1 + 0x448),FUN_1000ccbb0,0x188a5);
LAB_1000cf0bc:
      if (-1 < iVar3) {
        FUN_10008fdb0(*(undefined8 *)(param_1 + 0x2b0),0x4e45,0);
        FUN_1008e3970("","vm",0,"Waiting for disk...");
        FUN_1005a7950(lVar1);
        if (*(int *)(param_1 + 500) == 0) {
          FUN_1008e3970("","vm",0,"Waiting for disk...Completed.");
          QFile::remove((QString *)(param_1 + 0x1d0));
          QFile::remove((QString *)(param_1 + 0x1d8));
          QFile::remove((QString *)(param_1 + 0x1e0));
          uVar5 = 1;
          if (*(long *)(*(long *)(param_1 + 0x2b0) + 0x1940) != 0) {
            FUN_10008bf70();
          }
        }
        else {
          uVar5 = 0;
          FUN_1008e3970("","vm",0,"Waiting for disk...Failed.");
          if (*(int *)(param_1 + 500) == 0) {
            *(undefined4 *)(param_1 + 500) = 0x80000427;
            uVar5 = 0;
          }
        }
        goto LAB_1000cf18e;
      }
    }
    FUN_1008e3970("","vm",0,"Disk.DeleteState returned error 0x%x",iVar3);
    *(int *)(param_1 + 500) = iVar3;
  }
  uVar5 = 0;
  FUN_10008fdb0(*(undefined8 *)(param_1 + 0x2b0),0x4e45,0);
LAB_1000cf18e:
  if (lVar2 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

