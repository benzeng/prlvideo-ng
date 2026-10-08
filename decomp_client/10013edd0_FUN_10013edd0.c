
long FUN_10013edd0(int param_1,undefined8 *param_2,undefined4 *param_3,bool param_4)

{
  long lVar1;
  
  lVar1 = QMapDataBase::createNode(param_1,0x38,(QMapNodeBase *)0x8,param_4);
  *(undefined8 *)(lVar1 + 0x18) = *param_2;
  *(undefined4 *)(lVar1 + 0x20) = *param_3;
  QVariant::QVariant((QVariant *)(lVar1 + 0x28),(QVariant *)(param_3 + 2));
  *(undefined4 *)(lVar1 + 0x20) = *param_3;
  return lVar1;
}

