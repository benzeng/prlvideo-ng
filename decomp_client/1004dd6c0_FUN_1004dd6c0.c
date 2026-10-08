
void FUN_1004dd6c0(long *param_1)

{
  code *pcVar1;
  QVariant local_30;
  
  pcVar1 = *(code **)(*param_1 + 0x28);
  QColor::operator_cast_to_QVariant((QColor *)&local_30);
  (*pcVar1)(param_1,8,(QColor *)&local_30);
  QVariant::~QVariant(&local_30);
  return;
}

