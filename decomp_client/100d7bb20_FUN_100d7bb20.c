
ulong FUN_100d7bb20(QString *param_1)

{
  undefined *puVar1;
  char cVar2;
  ulong unaff_RBX;
  ulong uVar3;
  int iVar4;
  int *local_58;
  ulong *local_50;
  ulong *local_48;
  undefined4 local_40;
  undefined *local_38;
  int *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_38 = PTR_shared_null_1021e1288;
  FUN_100d79ef0(&local_30,&local_38);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d7bb79;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100d7bb79:
  FUN_100d7ce80(&local_58,&local_30);
  local_50 = (ulong *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (ulong *)(local_58 + (long)local_58[3] * 2 + 4);
  local_40 = 1;
  iVar4 = 2;
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      unaff_RBX = *local_50;
      cVar2 = operator==((QString *)(unaff_RBX + 8),param_1);
      if (cVar2 != '\0') {
        unaff_RBX = (ulong)*(uint *)(unaff_RBX + 4);
        iVar4 = 1;
        break;
      }
      local_50 = local_50 + 1;
      local_40 = 1;
    } while (local_50 != local_48);
  }
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_21 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d7bc21;
    }
    FUN_100d7c9e0(&local_58,local_58);
  }
LAB_100d7bc21:
  uVar3 = unaff_RBX & 0xffffffff;
  if (iVar4 == 2) {
    uVar3 = 0xffffffff;
  }
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 != 0) {
        return uVar3;
      }
      local_21 = 0;
    }
    FUN_100d7c9e0(&local_30,local_30);
  }
  return uVar3;
}

