
void FUN_10055b6b0(long param_1)

{
  int iVar1;
  void *pvVar2;
  Data *pDVar3;
  long lVar4;
  Data *local_38;
  undefined1 local_2a;
  
  if (DAT_102310998 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1006faf60(pvVar2);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar2;
  }
  FUN_1006fb680(&local_38,DAT_102310998,1);
  FUN_10055b220(param_1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10055b77f;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar4 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_38);
  }
LAB_10055b77f:
  FUN_10083d420(*(undefined8 *)(param_1 + 0x10));
  return;
}

