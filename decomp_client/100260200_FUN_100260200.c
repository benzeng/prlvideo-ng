
int FUN_100260200(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  char local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_19;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = FUN_1005c11d0(param_1);
  if (*(int *)(lVar1 + 0x50) == 3) {
    return 4;
  }
  lVar1 = FUN_1005c11d0(param_1);
  iVar3 = *(int *)(lVar1 + 0x60);
  lVar1 = FUN_1005c11d0(param_1);
  if (iVar3 == 0) {
    if (*(int *)(lVar1 + 0x158) - 1U < 3) {
      return *(int *)(lVar1 + 0x158);
    }
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x60);
    if (iVar3 == 3) {
      return 3;
    }
    if (iVar3 == 2) {
      return 5;
    }
    if (iVar3 == 1) {
      uVar2 = FUN_1005c11d0(param_1);
      FUN_1005b98c0(local_40,uVar2);
      iVar3 = 1;
      if (local_40[0] == '\0') {
        iVar3 = 2;
      }
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          local_19 = *(int *)local_30 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1002602ca;
        }
        QArrayData::deallocate(local_30,2,8);
      }
LAB_1002602ca:
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          UNLOCK();
          if (*(int *)local_38 != 0) {
            return iVar3;
          }
          local_19 = 0;
        }
        QArrayData::deallocate(local_38,2,8);
      }
      return iVar3;
    }
  }
  return 0;
}

