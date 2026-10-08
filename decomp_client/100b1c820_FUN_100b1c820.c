
void FUN_100b1c820(long *param_1)

{
  long *plVar1;
  char cVar2;
  
  ___bzero(param_1 + 1,0x200);
  plVar1 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
  if (plVar1 != (long *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x98))();
    if (cVar2 != '\0') {
      (**(code **)(**(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1) + 0x28))();
      (**(code **)(**(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1) + 0x10))();
    }
    *(undefined8 *)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1) = 0;
  }
  return;
}

