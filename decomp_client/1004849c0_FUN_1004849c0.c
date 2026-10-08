
void FUN_1004849c0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_10044e580();
  if (lVar2 != 0) {
    uVar3 = FUN_10044e660(param_1);
    cVar1 = FUN_1003c0570(uVar3);
    if (cVar1 == '\0') {
      QWidget::hide();
      QWidget::hide();
    }
    QWidget::setFixedWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x40));
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
  return;
}

