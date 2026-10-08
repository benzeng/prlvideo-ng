
undefined8 FUN_10073b000(undefined8 param_1,undefined8 param_2,bool *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined4 local_30;
  undefined4 local_2c;
  QIcon local_28 [8];
  
  local_30 = QString::toInt(param_3,0);
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = CONCAT44(local_30,local_30);
  }
  plVar1 = (long *)QApplication::style();
  (**(code **)(*plVar1 + 0x100))(local_28,plVar1,0xf,0,0);
  local_2c = local_30;
  QIcon::pixmap(param_1,local_28,&local_30,0,1);
  QIcon::~QIcon(local_28);
  return param_1;
}

