
void FUN_1002e4b70(long param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x18) + 0x58) != 0)) {
    local_38 = QWidget::pos();
  }
  if (DAT_102310990 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1006ea620(pvVar2);
    DAT_102273501 = 1;
    DAT_102310990 = pvVar2;
  }
  FUN_1006ea720(DAT_102310990,param_2,&local_38);
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x18) + 0x58) != 0)) {
    QWidget::close();
  }
  return;
}

