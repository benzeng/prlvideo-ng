
undefined8 FUN_1007026b0(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    plVar1 = *(long **)(*param_1 + 0x10);
    if (plVar1 == (long *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar1 + 0x20))();
    }
  }
  return uVar2;
}

