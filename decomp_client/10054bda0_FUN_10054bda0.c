
void FUN_10054bda0(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 != 0xc) {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      FUN_10054a7d0(param_1);
      return;
    case 1:
      FUN_10054b1b0(param_1);
      return;
    case 2:
      FUN_10054a4f0(param_1,param_4[1]);
      return;
    case 3:
      goto switchD_10054be07_caseD_3;
    case 4:
      FUN_10054aed0(param_1);
      return;
    default:
      return;
    }
  }
  if (param_3 == 2) {
    if (1 < *(uint *)param_4[1]) {
LAB_10054be52:
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    iVar3 = DAT_102274240;
    if (DAT_102274240 == 0) {
      iVar3 = FUN_10054d2a0("QItemSelection",0xffffffffffffffff,1);
      DAT_102274240 = iVar3;
    }
  }
  else {
    if ((param_3 != 3) || (*(int *)param_4[1] != 1)) goto LAB_10054be52;
    iVar3 = DAT_10226db58;
    if (DAT_10226db58 == 0) {
      iVar3 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      DAT_10226db58 = iVar3;
    }
  }
  *(int *)*param_4 = iVar3;
  return;
switchD_10054be07_caseD_3:
  if (*(int *)param_4[2] != 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  uVar4 = 0;
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),0));
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  lVar2 = *(long *)(lVar1 + 0x38);
  if ((lVar2 != 0) && (uVar4 = 0, *(int *)(lVar2 + 4) != 0)) {
    uVar4 = *(undefined8 *)(lVar1 + 0x40);
  }
  FUN_1001609d0(uVar4);
  return;
}

