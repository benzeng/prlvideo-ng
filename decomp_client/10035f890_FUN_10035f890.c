
void FUN_10035f890(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  QCursor *this;
  QCursor local_40 [8];
  QCursor local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar3 + 0x38) != '\0') {
    QCursor::QCursor(local_40,10);
    FUN_10035f400(lVar3,local_40);
    this = local_40;
    goto LAB_10035f96d;
  }
  cVar2 = FUN_10035ddf0(*(undefined8 *)(lVar3 + 0x18),0);
  if (cVar2 != '\0') {
    FUN_10035da60(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18));
    lVar3 = FUN_100360b40(&local_30);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10035f92d;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_10035f92d:
    if (lVar3 != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      FUN_1003277b0(lVar3);
      FUN_10035ecb0(lVar1 + 0x20);
    }
  }
  lVar3 = *(long *)(param_1 + 0x10);
  QCursor::QCursor(local_38,(QCursor *)(lVar3 + 0x20));
  FUN_10035f400(lVar3,local_38);
  this = local_38;
LAB_10035f96d:
  QCursor::~QCursor(this);
  return;
}

