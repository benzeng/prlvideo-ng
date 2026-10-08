
void FUN_10068a370(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  QVariant local_30;
  
  uVar2 = 0;
  if (-1 < param_2) {
    lVar1 = QObject::sender();
    uVar2 = 0xfffffff8;
    if (*(int *)(*(long *)(lVar1 + 0x28) + 0x28) == 0) {
      QVariant::QVariant(&local_30,(QVariant *)(*(long *)(lVar1 + 0x28) + 0x18));
      uVar2 = QVariant::toInt((bool *)&local_30);
      QVariant::~QVariant(&local_30);
    }
  }
  FUN_10084c4c0(param_1,param_2,uVar2);
  return;
}

