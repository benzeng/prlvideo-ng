
void FUN_1004db490(undefined8 *param_1)

{
  char cVar1;
  QArrayData *pQVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  *param_1 = &PTR_FUN_100bc3280;
  if (*(char *)(param_1 + 9) != '\0') {
    local_28 = (QArrayData *)PTR_shared_null_100ba20d0;
    local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
    cVar1 = FUN_1004f8260(param_1[2] + 0x10,param_1[2] + 0x18,param_1 + 3,&local_28,&local_30);
    if (cVar1 != '\0') {
      FUN_1004c7970(*(undefined8 *)(param_1[2] + 0x50),&local_28,&local_30);
    }
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1004db527;
      }
      QArrayData::deallocate(local_30,1,8);
    }
LAB_1004db527:
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1004db557;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
LAB_1004db557:
  pQVar2 = (QArrayData *)param_1[8];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_19 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004db587;
      pQVar2 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar2,1,8);
  }
LAB_1004db587:
  FUN_1004e5d70(param_1);
  return;
}

