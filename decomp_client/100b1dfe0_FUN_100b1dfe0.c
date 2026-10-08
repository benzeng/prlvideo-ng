
int FUN_100b1dfe0(long *param_1,long *param_2,undefined4 param_3)

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
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar1 = 0;
  FUN_100b31070(local_50,&local_58,0);
  iVar2 = 2;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b1e070;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100b1e070:
  do {
    if (iVar2 == -1) break;
    iVar1 = FUN_100b1e130(param_1,param_2,param_3,local_50);
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","dimg",3,"Try open disk #%d result 0x%X",iVar2,iVar1);
    }
    iVar2 = iVar2 + -1;
  } while (iVar1 < 0);
  FUN_100b310f0(local_50);
  return iVar1;
}

