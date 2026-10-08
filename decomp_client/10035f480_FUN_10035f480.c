
void FUN_10035f480(undefined8 param_1,double param_2,long param_3,QWidget *param_4,int *param_5,
                  char param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  QWidget local_70 [48];
  double local_40;
  double local_38;
  
  iVar1 = *param_5;
  iVar2 = param_5[1];
  local_40 = (double)iVar1;
  local_38 = (double)iVar2;
  lVar3 = FUN_100360500(param_4);
  if (lVar3 != 0) {
    uVar4 = FUN_100325fd0(lVar3);
    param_2 = (double)(int)((ulong)uVar4 >> 0x20);
    local_40 = (double)iVar1 - (double)(int)uVar4;
    local_38 = (double)iVar2 - param_2;
  }
  WidgetUtils::getWidgetTransformMatrix(local_70);
  local_40 = (double)QMatrix::map((QPointF *)local_70);
  local_38 = param_2;
  local_40 = (double)WidgetUtils::mapToGlobal(param_4,(QPointF *)&local_40);
  local_38 = param_2;
  if (param_6 == '\0') {
    WidgetUtils::setCursorPos((QPointF *)&local_40);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_3 + 0x10) + 0x10);
    bVar5 = *(char *)(lVar3 + 0x4c) != '\0';
    if (bVar5) {
      *(undefined1 *)(lVar3 + 0x4c) = 0;
      _CGAssociateMouseAndMouseCursorPosition(0);
    }
    uVar4 = MacUtils::currentCGEvent();
    uVar4 = _CGEventGetLocation(uVar4);
    _CGWarpMouseCursorPosition(local_40,local_38);
    lVar3 = *(long *)(param_3 + 0x18);
    *(undefined8 *)(lVar3 + 0x98) = uVar4;
    *(double *)(lVar3 + 0xa0) = param_2;
    lVar3 = *(long *)(*(long *)(param_3 + 0x10) + 0x10);
    if ((bool)*(char *)(lVar3 + 0x4c) != bVar5) {
      *(bool *)(lVar3 + 0x4c) = bVar5;
      _CGAssociateMouseAndMouseCursorPosition();
    }
  }
  return;
}

