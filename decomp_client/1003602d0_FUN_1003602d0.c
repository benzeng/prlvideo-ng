
bool FUN_1003602d0(undefined8 param_1,QCursor *param_2)

{
  QCursor QVar1;
  ulong uVar2;
  QCursor local_50 [8];
  QCursor local_48;
  QCursor local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  QVar1 = param_2[0x38];
  if (QVar1 == (QCursor)0x0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: grabber widget data is invalid.");
  }
  else {
    QCursor::QCursor(local_50,param_2);
    local_48 = param_2[8];
    QCursor::QCursor(local_40,param_2 + 0x10);
    local_28 = *(undefined8 *)(param_2 + 0x28);
    local_38 = *(undefined8 *)(param_2 + 0x18);
    local_30 = *(undefined8 *)(param_2 + 0x20);
    FUN_100360240(param_1,local_50);
    QCursor::~QCursor(local_40);
    QCursor::~QCursor(local_50);
    uVar2 = *(ulong *)(param_2 + 0x30);
    QWidget::setFocusPolicy(param_1,uVar2 & 0xffffffff);
    QWidget::setAttribute(param_1,2,(uVar2 & 0xff00000000) != 0);
  }
  return QVar1 != (QCursor)0x0;
}

