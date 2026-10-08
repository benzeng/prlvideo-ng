
undefined1 FUN_10059d370(long param_1,undefined8 param_2,undefined8 param_3,QVariant *param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  QVariant local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  QVariant::QVariant(&local_38,param_4);
  uVar2 = FUN_100599f20(uVar1,param_2,param_3,&local_38);
  QVariant::~QVariant(&local_38);
  return uVar2;
}

