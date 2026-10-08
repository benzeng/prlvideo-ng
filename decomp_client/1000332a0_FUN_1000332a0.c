
void FUN_1000332a0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  iVar1 = _CGWindowLevelForKey(4);
  if ((param_2 == 2) || (param_2 == 5)) {
    iVar1 = _CGWindowLevelForKey(7);
    iVar1 = iVar1 + 2;
  }
  FUN_1001d50a0();
  lVar3 = QApplication::activeWindow();
  if (lVar3 != 0) {
    QObject::property((char *)&local_38);
    QVariant::toString();
    QVariant::~QVariant(&local_38);
    uVar4 = FUN_100152280();
    lVar3 = FUN_1001548f0(uVar4,&local_28);
    if (lVar3 != 0) {
      uVar4 = FUN_10018c280(lVar3);
      iVar2 = FUN_100319ae0(uVar4);
      if (iVar2 == 2) {
        FUN_100358df0(&local_28,iVar1);
      }
    }
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  return;
}

