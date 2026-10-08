
undefined8 * FUN_1006945a0(undefined8 *param_1)

{
  int iVar1;
  bool *pbVar2;
  int iVar3;
  int local_44;
  undefined1 local_40 [2] [12];
  
  *param_1 = PTR_shared_null_1021e15e8;
  QMetaObject::indexOfEnumerator("");
  local_40[0] = QMetaObject::enumerator(0x2224a58);
  iVar3 = 0;
  while( true ) {
    iVar1 = QMetaEnum::keyCount();
    if (iVar1 <= iVar3) break;
    pbVar2 = (bool *)QMetaEnum::key((int)local_40);
    iVar1 = QMetaEnum::keyToValue((char *)local_40,pbVar2);
    if (1 < iVar1 + 1U) {
      local_44 = iVar1;
      FUN_100071ff0(param_1,&local_44);
    }
    iVar3 = iVar3 + 1;
  }
  return param_1;
}

