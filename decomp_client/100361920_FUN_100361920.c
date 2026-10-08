
void FUN_100361920(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  QCursor local_48 [24];
  char local_30;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x48);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x50), lVar1 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))(*(long **)(param_1 + 0x28),0xd,0);
    FUN_1003613b0(param_1,1);
    FUN_10035fbe0(local_48,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30));
    QCursor::~QCursor(local_48);
    if (local_30 == '\0') {
      FUN_10035f840(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),lVar1,1);
      lVar2 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(lVar2 + 0xa0) = 0;
      *(undefined8 *)(lVar2 + 0x98) = 0;
      uVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))
                        (*(long **)(param_1 + 0x28),lVar1,0xd,0);
    }
    else {
      uVar4 = FUN_100363c20(*(undefined8 *)(param_1 + 0x28),lVar1,0xd,0);
      cVar3 = QWidget::hasFocus();
      if (cVar3 != '\0') {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x20))(*(long **)(param_1 + 0x28),lVar1,0xd);
      }
    }
    if (1 < uVar4) {
      FUN_10035fc20(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30));
    }
    return;
  }
  FUN_1003613b0(param_1,1);
  return;
}

