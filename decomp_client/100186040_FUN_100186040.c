
void FUN_100186040(long param_1)

{
  Data *pDVar1;
  
  FUN_100186100();
  pDVar1 = *(Data **)(param_1 + 0x30);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_100186079;
      pDVar1 = *(Data **)(param_1 + 0x30);
    }
    QListData::dispose(pDVar1);
  }
LAB_100186079:
  FUN_100186820(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  FUN_100186820(param_1,*(undefined8 *)(param_1 + 8));
  return;
}

