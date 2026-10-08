
int FUN_100233ad0(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  QArrayData *local_30;
  undefined1 local_22;
  
  cVar1 = FUN_100325f80(param_2);
  if (cVar1 == '\0') {
    if ((*(uint *)(param_1 + 0x30) & 2) == 0) {
      FUN_100325f80(param_2);
      return 0;
    }
  }
  else if ((*(uint *)(param_1 + 0x30) & 1) == 0) {
    iVar2 = FUN_100325aa0(param_2);
    goto LAB_100233b1a;
  }
  iVar2 = *(int *)(param_1 + 0x28);
LAB_100233b1a:
  cVar1 = FUN_100325f80(param_2);
  if ((cVar1 == '\0') && (iVar2 == 2)) {
    FUN_100323d90(&local_30,param_2);
    uVar3 = FUN_100323e20(param_2);
    iVar2 = FUN_100354f60(&local_30,uVar3,0);
    iVar2 = (uint)(iVar2 != -1) * 2;
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return iVar2;
        }
        local_22 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  return iVar2;
}

