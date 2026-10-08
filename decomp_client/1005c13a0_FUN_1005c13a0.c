
int FUN_1005c13a0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Data *local_20;
  undefined1 local_11;
  
  uVar3 = FUN_1005b86c0(*(undefined8 *)(param_1 + 0x20));
  uVar3 = FUN_10015a340(uVar3);
  FUN_10011e480(&local_20,uVar3);
  iVar1 = *(int *)(local_20 + 0xc);
  iVar2 = *(int *)(local_20 + 8);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return iVar1 - iVar2;
      }
      local_11 = 0;
    }
    QListData::dispose(local_20);
  }
  return iVar1 - iVar2;
}

