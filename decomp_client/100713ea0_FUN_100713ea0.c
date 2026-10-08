
void FUN_100713ea0(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *local_38;
  undefined1 local_2a;
  
  puVar2 = PTR_shared_null_1021e15e8;
  local_38 = PTR_shared_null_1021e15e8;
  FUN_100714120(param_1,&local_38);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_2a = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_2a) {
        return;
      }
    }
    iVar1 = *(int *)(puVar2 + 0xc);
    if (iVar1 != *(int *)(puVar2 + 8)) {
      lVar4 = (long)*(int *)(puVar2 + 8) * 8 + (long)iVar1 * -8;
      puVar3 = (undefined8 *)(puVar2 + (long)iVar1 * 8 + 8);
      do {
        if ((void *)*puVar3 != (void *)0x0) {
          operator_delete((void *)*puVar3);
        }
        puVar3 = puVar3 + -1;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
  return;
}

