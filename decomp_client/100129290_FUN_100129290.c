
undefined8 * FUN_100129290(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint local_30 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  lVar1 = *param_2;
  if ((*(long *)(lVar1 + 0x10) != 0) && (lVar2 = *(long *)(lVar1 + 0x20), lVar2 != lVar1 + 8)) {
    do {
      local_30[0] = (uint)*(byte *)(lVar2 + 0x18);
      FUN_1000bf010(param_1,local_30);
      lVar2 = QMapNodeBase::nextNode();
    } while (lVar2 != *param_2 + 8);
  }
  return param_1;
}

