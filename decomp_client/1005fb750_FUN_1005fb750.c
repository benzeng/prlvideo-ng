
void FUN_1005fb750(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  Data *local_38;
  undefined1 local_2a;
  
  lVar3 = *(long *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar3 + 8);
  if (iVar1 != *(int *)(lVar3 + 0xc)) {
    plVar2 = (long *)(lVar3 + 0x10 + (long)iVar1 * 8);
    lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 0x20))();
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  FUN_1005e7870(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  (**(code **)(**(long **)(param_1 + 0x10) + 0xd0))(&local_38);
  FUN_1005e7a00(param_1 + 0x18,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_2a = 0;
    }
    QListData::dispose(local_38);
  }
  return;
}

