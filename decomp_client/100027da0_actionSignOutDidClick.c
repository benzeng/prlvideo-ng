
/* Function Stack Size: 0x10 bytes */

void PDAccountTitleButton::actionSignOutDidClick(ID param_1,SEL param_2)

{
  long lVar1;
  
  if ((((*(long *)(param_1 + _controller) != 0) &&
       (*(int *)(*(long *)(param_1 + _controller) + 4) != 0)) &&
      (lVar1 = *(long *)(_controller + 8 + param_1), lVar1 != 0)) && (*(long *)(lVar1 + 0x10) != 0))
  {
    FUN_100679b10();
    return;
  }
  return;
}

