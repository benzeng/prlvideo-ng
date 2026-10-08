
/* Function Stack Size: 0x18 bytes */

void MethodInfo::setImp_(ID param_1,SEL param_2,undefined4 *param_3)

{
  *(undefined4 **)(param_1 + _imp) = param_3;
  return;
}

