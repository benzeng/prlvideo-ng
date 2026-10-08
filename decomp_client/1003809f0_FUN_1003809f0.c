
void FUN_1003809f0(long param_1)

{
  char *pcVar1;
  QString *pQVar2;
  undefined *puVar3;
  void *pvVar4;
  QHBoxLayout *this;
  QVBoxLayout *this_00;
  size_t sVar5;
  QArrayData *pQVar6;
  int iVar7;
  QVariant local_40;
  undefined1 local_29;
  
  pvVar4 = operator_new(0x50);
  *(void **)(param_1 + 0x18) = pvVar4;
  FUN_100381430(pvVar4,*(undefined8 *)(param_1 + 0x10));
  this = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this,*(QWidget **)(*(long *)(param_1 + 0x18) + 0x48));
  *(QHBoxLayout **)(param_1 + 0x28) = this;
  QLayout::setContentsMargins((int)this,0,0,0);
  this_00 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this_00,*(QWidget **)(*(long *)(param_1 + 0x18) + 0x40));
  QLayout::setContentsMargins((int)this_00,0,0,0);
  puVar3 = PTR_s_DynProp_CanShowSheet_102270de0;
  pcVar1 = *(char **)(param_1 + 0x10);
  QVariant::QVariant(&local_40,false);
  QObject::setProperty(pcVar1,(QVariant *)puVar3);
  QVariant::~QVariant(&local_40);
  QWidget::setFixedHeight((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30));
  QWidget::setContentsMargins((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48),8,4,8);
  QWidget::setFixedHeight((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48));
  puVar3 = PTR_s_QFrame_m_widgetBottom___border_i_102273b50;
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x48);
  iVar7 = -1;
  if (PTR_s_QFrame_m_widgetBottom___border_i_102273b50 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_QFrame_m_widgetBottom___border_i_102273b50);
    iVar7 = (int)sVar5;
  }
  pQVar6 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar7);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_29 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100380b61;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100380b61:
  QWidget::hide();
  return;
}

