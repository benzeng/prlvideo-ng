
void FUN_100dd8cb0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_10225c420;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    _IOObjectRelease();
    *(undefined4 *)((long)param_1 + 0x14) = 0;
  }
  pQVar1 = (QArrayData *)param_1[1];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
  return;
}

