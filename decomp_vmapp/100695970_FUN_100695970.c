
int FUN_100695970(long *param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  QArrayData *local_58;
  undefined1 local_50 [31];
  undefined1 local_31;
  
  (**(code **)(*param_1 + 0x28))();
  if (*(int *)(*param_2 + 4) == 0) {
    return -0x7ffdefef;
  }
  local_58 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar1 = 0;
  FUN_1006a8ba0(local_50,&local_58,0);
  iVar2 = 2;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100695a00;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100695a00:
  do {
    if (iVar2 == -1) break;
    iVar1 = FUN_100695ac0(param_1,param_2,param_3,local_50);
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","dimg",3,"Try open disk #%d result 0x%X",iVar2,iVar1);
    }
    iVar2 = iVar2 + -1;
  } while (iVar1 < 0);
  FUN_1006a8c20(local_50);
  return iVar1;
}

