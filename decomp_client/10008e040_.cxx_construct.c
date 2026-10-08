
/* Function Stack Size: 0x10 bytes */

ID PDProgressOperation::_cxx_construct(ID param_1,SEL param_2)

{
  long lVar1;
  
  lVar1 = _operation;
  *(undefined8 *)(param_1 + 8 + _operation) = 0;
  *(undefined8 *)(param_1 + lVar1) = 0;
  return param_1;
}

