
void FUN_1009b9740(QSize *param_1)

{
  QLabel::setText(*(QString **)((long)param_1[6] + 0x20));
  QLabel::setText(*(QString **)((long)param_1[6] + 0x28));
  (**(code **)(**(long **)((long)param_1[6] + 0x20) + 0x80))
            (*(long **)((long)param_1[6] + 0x20),400);
  (**(code **)(**(long **)((long)param_1[6] + 0x28) + 0x80))
            (*(long **)((long)param_1[6] + 0x28),400);
  QWidget::setMinimumSize((int)*(undefined8 *)((long)param_1[6] + 0x20),400);
  QWidget::setMinimumSize((int)*(undefined8 *)((long)param_1[6] + 0x28),400);
  (**(code **)((long)*param_1 + 0x78))(param_1);
  QWidget::setFixedSize(param_1);
  return;
}

