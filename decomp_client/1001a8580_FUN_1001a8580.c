
void FUN_1001a8580(CBaseDialog *param_1,undefined8 param_2)

{
  void *pvVar1;
  QArrayData *local_48;
  QPixmap local_40 [39];
  undefined1 local_19;
  
  CBaseDialog::CBaseDialog(param_1,param_2,0,0);
  *(undefined ***)param_1 = &PTR_FUN_1021fe690;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fe880;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1021fe8d0;
  pvVar1 = operator_new(0x50);
  *(void **)(param_1 + 0x60) = pvVar1;
  FUN_1001a8950(pvVar1,param_1);
  local_48 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/lock_64x64.png",0x18);
  QPixmap::QPixmap(local_40,&local_48,0,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001a8629;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001a8629:
  WidgetUtils::setBackgroundPixmap(*(QWidget **)(*(long *)(param_1 + 0x60) + 0x10),local_40);
  QPixmap::~QPixmap(local_40);
  return;
}

