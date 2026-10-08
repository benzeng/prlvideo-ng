
undefined ** FUN_100818f80(long param_1)

{
  undefined **ppuVar1;
  
  if (*(long *)(*(long *)(param_1 + 8) + 0x28) != 0) {
    ppuVar1 = (undefined **)QObjectData::dynamicMetaObject();
    return ppuVar1;
  }
  return &PTR_staticMetaObject_102204df0;
}

