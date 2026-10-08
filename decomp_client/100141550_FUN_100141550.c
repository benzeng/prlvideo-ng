
void FUN_100141550(QLinearGradient *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_68;
  undefined8 local_64;
  undefined2 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  local_38 = (double)(int)param_3;
  local_30 = (double)(int)((ulong)param_3 >> 0x20);
  local_48 = (double)(int)param_4;
  local_40 = (double)(int)((ulong)param_4 >> 0x20);
  QLinearGradient::QLinearGradient(param_1,(QPointF *)&local_38,(QPointF *)&local_48);
  *(uint *)(param_1 + 0x40) = param_2;
  QColor::QColor((QColor *)&local_58,param_2 | 0xff000000);
  local_68 = local_58;
  local_5c = local_4c;
  local_64 = local_54;
  QColor::setAlpha((int)&local_58);
  QColor::setAlpha((int)&local_68);
  QGradient::setColorAt(0.0,(QColor *)param_1);
  QGradient::setColorAt(DAT_100e11050,(QColor *)param_1);
  return;
}

