
void FUN_10072a390(long param_1)

{
  QLabel::setText(*(QString **)(*(long *)(param_1 + 0x60) + 0x48));
  QWidget::layout();
  QLayout::contentsMargins();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x60) + 0x48) + 0x70))();
  QWidget::setMinimumWidth((int)param_1);
  return;
}

