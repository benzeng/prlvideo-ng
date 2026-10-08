
void FUN_1001367e0(long param_1)

{
  QArrayData *local_60;
  QString local_58;
  QPixmap local_50 [32];
  QVariant local_30;
  undefined1 local_19;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  QComboBox::currentIndex();
  QComboBox::itemData((int)&local_30,(int)param_1);
  QVariant::toUInt((bool *)&local_30);
  QVariant::~QVariant(&local_30);
  FUN_100136b10(local_50);
  QFontMetrics::QFontMetrics((QFontMetrics *)&local_58,(QFont *)(*(long *)(param_1 + 0x28) + 0x38));
  EnumUtils::OsVerToString((uint)&local_60);
  QFontMetrics::width(&local_58,(int)&local_60);
  QPixmap::width();
  QWidget::setFixedWidth((int)param_1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001368ad;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001368ad:
  QFontMetrics::~QFontMetrics((QFontMetrics *)&local_58);
  QPixmap::~QPixmap(local_50);
  return;
}

