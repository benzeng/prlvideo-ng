
long FUN_100023a50(int param_1,undefined4 *param_2,undefined8 param_3,bool param_4)

{
  long lVar1;
  
  lVar1 = QMapDataBase::createNode(param_1,0x28,(QMapNodeBase *)&DAT_00000008,param_4);
  *(undefined4 *)(lVar1 + 0x18) = *param_2;
  FUN_100023c30(lVar1 + 0x20,param_3);
  return lVar1;
}

