
void _xmlXPathRoot(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = **(undefined8 **)(param_1 + 0x18);
    uVar1 = _xmlXPathNewNodeSet(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
    _valuePush(param_1,uVar1);
  }
  return;
}

