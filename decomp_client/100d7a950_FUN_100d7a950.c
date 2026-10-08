
ulong FUN_100d7a950(int param_1)

{
  undefined *puVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  undefined *local_40;
  uint *local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_40 = PTR_shared_null_1021e1288;
  FUN_100d79ef0(&local_38,&local_40);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d7a9a9;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100d7a9a9:
  uVar4 = 0xffffffff;
  uVar2 = 0;
  puVar3 = local_38;
  if ((int)local_38[2] < (int)local_38[3]) {
    do {
      if (1 < *puVar3) {
        FUN_100d7c7a0(&local_38,puVar3[1]);
        puVar3 = local_38;
      }
      if (*(int *)(*(long *)(puVar3 + (uVar2 + (long)(int)puVar3[2]) * 2 + 4) + 4) == param_1) {
        uVar4 = uVar2 & 0xffffffff;
        break;
      }
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)puVar3[3] - (long)(int)puVar3[2]);
  }
  if (*puVar3 != 0xffffffff) {
    if (*puVar3 != 0) {
      LOCK();
      *puVar3 = *puVar3 - 1;
      UNLOCK();
      if (*puVar3 != 0) {
        return uVar4;
      }
      local_29 = 0;
      puVar3 = local_38;
    }
    FUN_100d7c9e0(&local_38,puVar3);
  }
  return uVar4;
}

