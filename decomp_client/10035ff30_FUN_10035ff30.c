
void FUN_10035ff30(undefined8 param_1,undefined8 param_2,QCursor *param_3,long param_4)

{
  QCursor *this;
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  QCursor *pQVar4;
  undefined8 uVar5;
  QCursor local_38 [8];
  QCursor local_30 [8];
  QCursor local_28 [8];
  
  QCursor::QCursor(param_3);
  param_3[8] = (QCursor)0x0;
  this = param_3 + 0x10;
  QCursor::QCursor(this);
  param_3[0x18] = (QCursor)0x0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined4 *)(param_3 + 0x30) = 0xf;
  param_3[0x34] = (QCursor)0x1;
  cVar1 = QWidget::testAttribute_helper(param_4,0x26);
  if (cVar1 == '\0') {
    param_3[8] = (QCursor)0x0;
    QCursor::QCursor(local_30);
    QCursor::operator=(param_3,local_30);
    QCursor::~QCursor(local_30);
  }
  else {
    param_3[8] = (QCursor)0x1;
    QWidget::cursor();
    QCursor::operator=(param_3,local_28);
    QCursor::~QCursor(local_28);
  }
  lVar3 = QGuiApplication::overrideCursor();
  if (lVar3 == 0) {
    param_3[0x18] = (QCursor)0x0;
    QCursor::QCursor(local_38);
    QCursor::operator=(this,local_38);
    QCursor::~QCursor(local_38);
  }
  else {
    param_3[0x18] = (QCursor)0x1;
    pQVar4 = (QCursor *)QGuiApplication::overrideCursor();
    QCursor::operator=(this,pQVar4);
  }
  uVar5 = WidgetUtils::cursorPos();
  *(undefined8 *)(param_3 + 0x20) = uVar5;
  *(undefined8 *)(param_3 + 0x28) = param_2;
  uVar2 = QWidget::focusPolicy();
  *(undefined4 *)(param_3 + 0x30) = uVar2;
  param_3[0x34] = (QCursor)(*(byte *)(*(long *)(param_4 + 0x28) + 8) >> 2 & 1);
  param_3[0x38] = (QCursor)0x1;
  return;
}

