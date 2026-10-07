
int FUN_100562280(long *param_1,undefined1 *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_b0 [40];
  undefined1 local_88 [8];
  undefined1 *local_80;
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar3 = -0x7ffffffd;
  local_38 = lVar1;
  if (param_1 == (long *)0x0) goto LAB_1005623b1;
  FUN_100098d30(local_b0);
  iVar3 = (**(code **)(*param_1 + 0x90))(param_1,local_b0);
  if (iVar3 < 0) {
    FUN_1008e3970("","StatesUtils",0,"Error : Failed to get disk image params, error 0x%X",iVar3);
  }
  else {
    *param_2 = 0;
    iVar3 = 0;
    for (puVar4 = local_80; local_88 != puVar4; puVar4 = *(undefined1 **)(puVar4 + 8)) {
      cVar2 = FUN_100684c20(*(undefined4 *)(puVar4 + 0x10));
      if (cVar2 != '\0') {
        *param_2 = 1;
        break;
      }
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100562372;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100562372:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_1005623a8;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1005623a8:
  FUN_100098f20(local_88);
LAB_1005623b1:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

