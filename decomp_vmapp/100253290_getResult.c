
/* Function Stack Size: 0x10 bytes */

int BTController::getResult(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + _result);
}

