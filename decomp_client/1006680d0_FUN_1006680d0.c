
void FUN_1006680d0(undefined8 param_1,QUrl *param_2)

{
  int iVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  QUrlQuery local_20 [15];
  undefined1 local_11;
  
  QUrlQuery::QUrlQuery(local_20,param_2);
  local_30 = (QArrayData *)QString::fromAscii_helper("goBuy",5);
  QUrlQuery::queryItemValue(&local_28,local_20,&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10066813d;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10066813d:
  iVar1 = QString::compare_helper
                    (local_28 + *(long *)(local_28 + 0x10),*(undefined4 *)(local_28 + 4),"1",
                     0xffffffff,1);
  if (iVar1 == 0) {
    FUN_1006085d0(3,0);
  }
  else {
    QDesktopServices::openUrl(param_2);
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006681ac;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1006681ac:
  QUrlQuery::~QUrlQuery(local_20);
  return;
}

