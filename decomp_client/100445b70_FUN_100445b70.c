
void FUN_100445b70(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  QVariant local_30;
  
  QDeclarativeView::rootObject();
  QObject::property((char *)&local_30);
  iVar2 = QVariant::toInt((bool *)&local_30);
  QVariant::~QVariant(&local_30);
  bVar1 = (bool)QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),0x400);
  if ((((*(long *)(param_1 + 0x80) != 0) && (*(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) &&
      (*(long *)(param_1 + 0x88) != 0)) &&
     ((iVar3 = FUN_10018a9d0(), -1 < iVar2 && (iVar3 == 0x30000001)))) {
    CVmProfileDataObject::vmProfileByType(iVar2);
  }
  QWidget::setEnabled(bVar1);
  return;
}

