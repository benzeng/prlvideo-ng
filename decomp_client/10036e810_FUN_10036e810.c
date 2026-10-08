
void FUN_10036e810(QSize *param_1,undefined8 param_2)

{
  QSize QVar1;
  undefined1 local_1a;
  undefined1 local_19;
  int local_18;
  int local_14;
  
  local_18 = -1;
  local_14 = -1;
  local_19 = 0;
  local_1a = 0;
  FUN_10036e580(param_1,param_2,&local_19,&local_1a,&local_18,1);
  QVar1 = param_1[5];
  if ((local_18 != (*(int *)((long)QVar1 + 0x1c) + 1) - *(int *)((long)QVar1 + 0x14)) ||
     (local_14 != (*(int *)((long)QVar1 + 0x20) + 1) - *(int *)((long)QVar1 + 0x18))) {
    QWidget::resize(param_1);
  }
  return;
}

