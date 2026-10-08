
void FUN_1005375f0(long param_1)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  _func_void_Node_ptr *local_28;
  undefined1 local_19;
  
  cVar3 = FUN_1005a5f40(*(undefined8 *)(param_1 + 0x30));
  if (cVar3 == '\0') {
    QTreeWidget::currentItem();
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x98),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0xa8),0));
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
    uVar4 = 0;
    if ((lVar2 != 0) && (uVar4 = 0, *(int *)(lVar2 + 4) != 0)) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
    }
    FUN_1005341c0(&local_28,uVar4,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78));
    QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x90),0));
    if (*(int *)(local_28 + 0x10) != -1) {
      if (*(int *)(local_28 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_28 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_19 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_19) {
          return;
        }
      }
      QHashData::free_helper(local_28);
    }
  }
  return;
}

