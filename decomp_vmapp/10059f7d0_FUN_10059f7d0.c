
int FUN_10059f7d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined1 local_c8 [16];
  QArrayData *local_b8;
  int local_a8;
  undefined1 local_a1;
  undefined1 local_a0 [40];
  undefined1 local_78 [48];
  QArrayData *local_48;
  QArrayData *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_a8 = 0;
  local_b8 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_28 = lVar1;
  FUN_100098d30(local_a0);
  FUN_10059f090(local_a0);
  plVar2 = (long *)FUN_100684400(param_2,3,4,&local_a8,0);
  if (plVar2 == (long *)0x0) {
    FUN_1008e3970("","vdisk",0,"Error opening image 0x%x",local_a8);
    iVar3 = local_a8;
  }
  else {
    local_a8 = (**(code **)(*plVar2 + 0x38))(plVar2,local_c8);
    (**(code **)(*plVar2 + 0x20))(plVar2);
    if (local_a8 < 0) {
      FUN_1008e3970("","vdisk",0,"Error getting parameters from image 0x%x");
      iVar3 = local_a8;
    }
    else {
      local_a8 = FUN_10059c050(local_c8,local_a0);
      if (local_a8 < 0) {
        FUN_1008e3970("","vdisk",0,"Error converting parameters from image 0x%x",local_a8);
        iVar3 = local_a8;
      }
      else {
        plVar2 = (long *)FUN_10059a920(param_1,local_a0,3,0,0,&local_a8);
        if (plVar2 == (long *)0x0) {
          FUN_1008e3970("","vdisk",0,"Error creating disk 0x%x",local_a8);
          iVar3 = local_a8;
        }
        else {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          iVar3 = 0;
        }
      }
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_a1 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_a1) goto LAB_10059f9bd;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10059f9bd:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_a1 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_a1) goto LAB_10059f9f3;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10059f9f3:
  FUN_100098f20(local_78);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_a0[0] = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_a0[0]) goto LAB_10059fa38;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10059fa38:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

