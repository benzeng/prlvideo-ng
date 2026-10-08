
long FUN_10012c340(int param_1,undefined4 *param_2,undefined8 param_3,bool param_4)

{
  long lVar1;
  
  lVar1 = QMapDataBase::createNode(param_1,0x28,(QMapNodeBase *)0x8,param_4);
  *(undefined4 *)(lVar1 + 0x18) = *param_2;
  FUN_10012c3d0(lVar1 + 0x20,param_3);
  return lVar1;
}

