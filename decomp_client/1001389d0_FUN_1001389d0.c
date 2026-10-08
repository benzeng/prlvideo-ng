
undefined8 * FUN_1001389d0(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  QVariant local_50;
  long *local_40 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  iVar2 = 0;
  while( true ) {
    iVar1 = QListWidget::count();
    if (iVar1 <= iVar2) break;
    local_40[0] = (long *)QListWidget::item(param_2);
    if (local_40[0] != (long *)0x0) {
      (**(code **)(*local_40[0] + 0x20))(&local_50,local_40[0],0x100);
      iVar1 = QVariant::toUInt((bool *)&local_50);
      QVariant::~QVariant(&local_50);
      if (iVar1 == param_3) {
        FUN_100139420(param_1,local_40);
      }
    }
    iVar2 = iVar2 + 1;
  }
  return param_1;
}

