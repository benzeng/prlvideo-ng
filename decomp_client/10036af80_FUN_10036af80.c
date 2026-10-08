
void FUN_10036af80(long param_1)

{
  char *pcVar1;
  QVariant *pQVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QWidget *pQVar5;
  void *pvVar6;
  QVariant local_40;
  int local_30;
  int local_2c;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_10036b510(param_1,uVar4);
  uVar4 = FUN_100152280();
  uVar3 = FUN_100154d40(uVar4);
  FUN_10036b5e0(param_1,uVar3);
  pQVar5 = (QWidget *)QApplication::desktop();
  QDesktopWidget::screenNumber(pQVar5);
  uVar4 = QDesktopWidget::availableGeometry((int)pQVar5);
  local_30 = DAT_100e15204;
  local_2c = DAT_100e15208;
  QWidget::resize(*(QSize **)(param_1 + 0x10));
  local_30 = (int)uVar4 + 100;
  local_2c = (int)((ulong)uVar4 >> 0x20) + 100;
  QWidget::move(*(QPoint **)(param_1 + 0x10));
  MacUtils::setWidgetToBeDisplayedInWindowMenu(*(QWidget **)(param_1 + 0x10),false);
  MacUtils::setRoundCornersForWindow(*(QWidget **)(param_1 + 0x10),0,0);
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_ResizeCalculator_1021e1468;
  QVariant::QVariant(&local_40,"getSuitableResizeFrame");
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_40);
  FUN_10006bb90(param_1);
  FUN_10006bc40(param_1);
  if (DAT_102310a08 == (void *)0x0) {
    pvVar6 = operator_new(0x220);
    FUN_1007cc3f0(pvVar6);
    DAT_102273890 = 1;
    DAT_102310a08 = pvVar6;
  }
  FUN_1007d0b60(DAT_102310a08);
  return;
}

