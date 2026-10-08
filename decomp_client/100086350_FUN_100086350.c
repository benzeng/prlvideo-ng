
void FUN_100086350(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *local_28;
  undefined1 local_1a;
  
  if (param_3 != 1) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  QVariant::toString();
  lVar1 = FUN_10007f750(uVar3,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_1000863b5;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1000863b5:
  if ((lVar1 != 0) && (lVar2 = FUN_10008b940(lVar1), lVar2 != 0)) {
    uVar3 = FUN_1006915d0();
    uVar4 = FUN_10008b940(lVar1);
    lVar1 = FUN_100691620(uVar3,0x21,uVar4);
    if (lVar1 != 0) {
      QAction::activate(lVar1,0);
    }
  }
  return;
}

