
/* Function Stack Size: 0x10 bytes */

CAbstractProgressOperation * PDProgressOperation::operation(ID param_1,SEL param_2)

{
  CAbstractProgressOperation *pCVar1;
  
  pCVar1 = (CAbstractProgressOperation *)0x0;
  if ((*(long *)(param_1 + _operation) != 0) &&
     (pCVar1 = (CAbstractProgressOperation *)0x0, *(int *)(*(long *)(param_1 + _operation) + 4) != 0
     )) {
    pCVar1 = *(CAbstractProgressOperation **)(_operation + 8 + param_1);
  }
  return pCVar1;
}

