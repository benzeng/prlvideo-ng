
void FUN_100361880(long param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x48);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x50), lVar1 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))(*(long **)(param_1 + 0x28),0xd,0);
    FUN_1003613b0(param_1,0);
    uVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x38))
                      (*(long **)(param_1 + 0x28),lVar1,lVar1,0xd,1);
    if (1 < uVar2) {
      FUN_10035fc20(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30));
      return;
    }
    QWidget::setFocus(lVar1,7);
    return;
  }
  FUN_1003613b0(param_1,0);
  return;
}

