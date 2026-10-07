
undefined1 FUN_1004df4e0(long param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((ulong)((long)*(int *)(*(long *)(param_1 + 8) + 0xc) -
             (long)*(int *)(*(long *)(param_1 + 8) + 8)) <= *(ulong *)(param_1 + 0x10)) {
    return 0;
  }
  QFileInfo::absoluteFilePath();
  pQVar1 = (QArrayData *)*param_2;
  *param_2 = local_28;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1004df55b;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1004df55b:
  QFileInfo::fileName();
  pQVar1 = (QArrayData *)param_2[1];
  param_2[1] = local_30;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return 1;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return 1;
}

