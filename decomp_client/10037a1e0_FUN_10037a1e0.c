
void FUN_10037a1e0(QCloseEvent *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x20) != 0)) {
    iVar2 = FUN_100325aa0();
    if (iVar2 == 2) {
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) & 0xfb;
      lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
      uVar3 = 0;
      if ((lVar1 != 0) && (uVar3 = 0, *(int *)(lVar1 + 4) != 0)) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
      }
      FUN_100325d40(uVar3);
      return;
    }
    QWidget::closeEvent(param_1);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: invalid VM display instance.");
  return;
}

