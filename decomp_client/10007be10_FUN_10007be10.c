
void FUN_10007be10(long param_1)

{
  char *pcVar1;
  QVariant *pQVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  QVariant local_48;
  QVariant local_38;
  
  QtPrivate::setContentBorderEnabled(*(QWidget **)(param_1 + 0x10),true);
  QWidget::setAttribute(*(undefined8 *)(param_1 + 0x10),0x37,1);
  QWidget::setAttribute(*(undefined8 *)(param_1 + 0x10),0x78,1);
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_ZoomCalculator_1021e1460;
  QVariant::QVariant(&local_38,"getSuitableZoomRect");
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_38);
  uVar4 = QWidget::winId();
  puVar3 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_window_102268c08);
  uVar5 = QWidget::winId();
  uVar5 = (*(code *)puVar3)(uVar5,PTR_s_window_102268c08);
  uVar6 = (*(code *)puVar3)(uVar5,PTR_s_styleMask_102269d38);
  (*(code *)puVar3)(uVar4,PTR_s_setStyleMask__102269ec8,uVar6 | 0x100);
  uVar4 = QWidget::winId();
  uVar4 = (*(code *)puVar3)(uVar4,PTR_s_window_102268c08);
  (*(code *)puVar3)(uVar4,PTR_s_setAutorecalculatesContentBorder_102269ed0,0,3);
  uVar4 = QWidget::winId();
  uVar4 = (*(code *)puVar3)(uVar4,PTR_s_window_102268c08);
  (*(code *)puVar3)(DAT_100e11050,uVar4,PTR_s_setContentBorderThickness_forEdg_102269df8,3);
  pcVar1 = *(char **)(param_1 + 0x10);
  QVariant::QVariant(&local_48,true);
  QObject::setProperty(pcVar1,(QVariant *)"doNotHookWindowMoveEvents");
  QVariant::~QVariant(&local_48);
  QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0x10),0));
  QObject::installEventFilter(*(QObject **)(param_1 + 0x10));
  FUN_10007bfd0(param_1);
  return;
}

