
void FUN_100413e30(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  
  cVar1 = DAT_1011cc741;
  cVar3 = DAT_1011cc740;
  QString::toLatin1();
  cVar2 = FUN_100413650(local_38 + *(long *)(local_38 + 0x10));
  DAT_1011cc740 = cVar2;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100413ea8;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100413ea8:
  if (cVar3 != cVar2) {
    FUN_100414590(param_1,DAT_1011cc740);
  }
  QString::toLatin1();
  cVar3 = FUN_100413740(local_40 + *(long *)(local_40 + 0x10));
  DAT_1011cc741 = cVar3;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100413f12;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100413f12:
  if (cVar1 != cVar3) {
    FUN_1004145e0(param_1,DAT_1011cc741);
  }
  return;
}

