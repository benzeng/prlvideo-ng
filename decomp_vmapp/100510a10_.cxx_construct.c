
/* Function Stack Size: 0x10 bytes */

ID MethodInfo::_cxx_construct(ID param_1,SEL param_2)

{
  long lVar1;
  
  lVar1 = _metaMethod;
  *(undefined8 *)(param_1 + _metaMethod) = 0;
  *(undefined4 *)(param_1 + 8 + lVar1) = 0;
  return param_1;
}

