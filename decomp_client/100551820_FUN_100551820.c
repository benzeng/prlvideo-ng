
bool FUN_100551820(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  QKeySequence local_40 [8];
  QArrayData *local_38;
  QKeySequence local_30 [8];
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar2 = FUN_100714bb0();
  if ((uVar2 & 4) != 0) {
    return false;
  }
  FUN_100714b50(local_30,param_1);
  FUN_1007170a0(&local_28,local_30,0);
  if (*(int *)(local_28 + 4) == 0) {
    bVar3 = false;
  }
  else {
    FUN_100714b80(local_40,param_1);
    FUN_1007170a0(&local_38,local_40,0);
    iVar1 = *(int *)(local_38 + 4);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005518b0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1005518b0:
    QKeySequence::~QKeySequence(local_40);
    bVar3 = iVar1 != 0;
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005518f6;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005518f6:
  QKeySequence::~QKeySequence(local_30);
  return bVar3;
}

