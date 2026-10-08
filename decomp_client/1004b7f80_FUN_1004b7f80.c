
void FUN_1004b7f80(long param_1)

{
  QString *pQVar1;
  undefined8 uVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar2 = FUN_10044b340();
  uVar2 = FUN_1003b0a30(uVar2);
  FUN_10018f890(uVar2);
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x38) + 0xe8);
  FUN_1004b6cb0(&local_38);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004b8004;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004b8004:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x38) + 200);
  FUN_1004b6cb0(&local_40);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004b805e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004b805e:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x38) + 0xa8);
  FUN_1004b6cb0(&local_48);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004b80b8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004b80b8:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x38) + 0x108);
  FUN_1004b6cb0(&local_50);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

