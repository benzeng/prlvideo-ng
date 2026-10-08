
void FUN_1003756c0(QObject *param_1,QEvent *param_2,long param_3)

{
  int *piVar1;
  ulong uVar2;
  int *local_48;
  QObject *local_40;
  undefined1 local_31;
  
  if (*(short *)(param_3 + 0x10) == 0x69) {
    local_40 = (QObject *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220dfb0);
    if (local_40 == (QObject *)0x0) {
      local_48 = (int *)0x0;
    }
    else {
      piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_40);
      local_48 = piVar1;
      if (piVar1 != (int *)0x0) {
        if (piVar1[1] != 0) {
          uVar2 = CWindowInterface::customWindowFlags();
          if (((uVar2 & 0x40) == 0) && (uVar2 = QWidget::windowState(), (uVar2 & 1) != 0)) {
            FUN_100375b60(param_1 + 0x30,&local_48);
          }
          else if ((*(byte *)(param_3 + 0x14) & 1) != 0) {
            FUN_100375cf0(param_1 + 0x30,&local_48);
          }
        }
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_31 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar1);
        }
      }
    }
  }
  QObject::eventFilter(param_1,param_2);
  return;
}

