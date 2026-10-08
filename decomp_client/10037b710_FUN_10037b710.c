
void FUN_10037b710(undefined8 param_1,undefined8 param_2,QWidget *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QCursor local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  if (((*(long *)(param_3 + 0x30) != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 4) != 0)) &&
     (*(long *)(param_3 + 0x38) != 0)) {
    lVar3 = FUN_100323e00();
    if (lVar3 != 0) {
      uVar4 = 0;
      if ((*(long *)(param_3 + 0x30) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_3 + 0x30) + 4) != 0)) {
        uVar4 = 0;
        if (*(long *)(param_3 + 0x38) != 0) {
          uVar4 = FUN_100323e00(*(long *)(param_3 + 0x38));
        }
      }
      uVar4 = FUN_100319d40(uVar4);
      iVar2 = FUN_10035b400(uVar4);
      if (iVar2 != 1) {
        cVar1 = FUN_10035c0c0(uVar4,param_3);
        if (cVar1 != '\0') goto LAB_10037b84c;
      }
      uVar4 = 0;
      if ((*(long *)(param_3 + 0x30) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_3 + 0x30) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_3 + 0x38);
      }
      lVar3 = FUN_100323dd0(uVar4);
      if (lVar3 != 0) {
        uVar4 = 0;
        if ((*(long *)(param_3 + 0x30) != 0) &&
           (uVar4 = 0, *(int *)(*(long *)(param_3 + 0x30) + 4) != 0)) {
          uVar4 = *(undefined8 *)(param_3 + 0x38);
        }
        uVar4 = FUN_100323dd0(uVar4);
        iVar2 = FUN_10018a9d0(uVar4);
        if (iVar2 != 0x30000005) {
          local_30 = WidgetUtils::mapToGlobal(param_3,(QPointF *)(param_4 + 0x20));
          local_28 = param_2;
          cVar1 = FUN_10037b880(param_3,&local_30);
          if (cVar1 == '\0') {
            QWidget::cursor();
            uVar4 = QCursor::pos();
            FUN_10037b670(param_3,uVar4);
            QCursor::~QCursor(local_38);
            *(byte *)(param_4 + 0x12) = *(byte *)(param_4 + 0x12) & 0xfb;
          }
          else {
            param_3[0x40] = (QWidget)0x0;
          }
        }
      }
    }
  }
LAB_10037b84c:
  QWidget::mouseMoveEvent((QMouseEvent *)param_3);
  return;
}

