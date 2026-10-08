
void FUN_1006f3720(long param_1)

{
  QUrl *pQVar1;
  QDeclarativeView *this;
  char *pcVar2;
  QArrayData *local_50;
  QUrl local_48 [8];
  QVariant local_40;
  int local_30;
  int local_2c;
  undefined1 local_21;
  
  local_30 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < *(int *)PTR_Width_1021e14f0) {
    local_30 = *(int *)PTR_Width_1021e14f0;
  }
  local_2c = *(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x24) < *(int *)PTR_Height_1021e14f8) {
    local_2c = *(int *)PTR_Height_1021e14f8;
  }
  this = operator_new(0x30);
  QDeclarativeView::QDeclarativeView(this,*(QWidget **)(param_1 + 0x10));
  *(QDeclarativeView **)(param_1 + 0x30) = this;
  pcVar2 = (char *)QAbstractScrollArea::viewport();
  QVariant::QVariant(&local_40,true);
  QObject::setProperty(pcVar2,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_40);
  QDeclarativeView::setResizeMode(*(undefined8 *)(param_1 + 0x30),1);
  QWidget::setFixedSize(*(QSize **)(param_1 + 0x30));
  pQVar1 = *(QUrl **)(param_1 + 0x30);
  local_50 = (QArrayData *)QString::fromAscii_helper("qrc:/qml/FreeUpgradePage.qml",0x1c);
  QUrl::QUrl(local_48,&local_50,0);
  QDeclarativeView::setSource(pQVar1);
  QUrl::~QUrl(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f3836;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006f3836:
  FUN_1003812a0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x30));
  return;
}

