
void FUN_100132b60(QStyleOptionComboBox *param_1)

{
  undefined8 uVar1;
  QStyleOptionComboBox local_a8 [8];
  byte local_a0;
  QArrayData *local_48;
  QIcon local_40 [16];
  QPainter local_30 [8];
  QStyleOptionComboBox *local_28;
  long *local_20;
  undefined1 local_11;
  
  if (((*(long *)(param_1 + 0x38) == 0) || (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0)) ||
     (*(long *)(param_1 + 0x40) == 0)) {
    QComboBox::paintEvent((QPaintEvent *)param_1);
    return;
  }
  QPainter::QPainter(local_30);
  local_28 = param_1;
  local_20 = (long *)QWidget::style();
  QPainter::begin((QPaintDevice *)local_30);
  uVar1 = QWidget::palette();
  QPalette::brush(uVar1,4,6);
  QPainter::setPen((QColor *)local_30);
  QStyleOptionComboBox::QStyleOptionComboBox(local_a8);
  QComboBox::initStyleOption(param_1);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x40) + 0x28) + 9) & 0x80) != 0) {
    local_a0 = local_a0 | 0x20;
  }
  (**(code **)(*local_20 + 200))(local_20,1,local_a8,local_30,local_28);
  (**(code **)(*local_20 + 0xb8))(local_20,0x27,local_a8,local_30,local_28);
  QIcon::~QIcon(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100132c92;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100132c92:
  QStyleOption::~QStyleOption((QStyleOption *)local_a8);
  QPainter::~QPainter(local_30);
  return;
}

