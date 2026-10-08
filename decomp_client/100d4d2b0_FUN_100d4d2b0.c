
long FUN_100d4d2b0(int param_1,undefined4 *param_2,long *param_3,bool param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = QMapDataBase::createNode(param_1,0x28,(QMapNodeBase *)0x8,param_4);
  *(undefined4 *)(lVar2 + 0x18) = *param_2;
  lVar1 = *param_3;
  *(long *)(lVar2 + 0x20) = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  return lVar2;
}

