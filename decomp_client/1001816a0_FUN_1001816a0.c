
bool FUN_1001816a0(void)

{
  int iVar1;
  QVariant local_30;
  QArrayData *local_20;
  undefined1 local_11;
  
  QGraphicsItem::data((int)&local_30);
  QVariant::toString();
  iVar1 = *(int *)(local_20 + 4);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001816fc;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1001816fc:
  QVariant::~QVariant(&local_30);
  return iVar1 == 0;
}

