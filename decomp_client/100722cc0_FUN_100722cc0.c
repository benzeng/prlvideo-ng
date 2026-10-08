
undefined8 FUN_100722cc0(long param_1,long *param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 8) + 4) == 0) {
    uVar2 = 0;
  }
  else if (*(long **)(param_1 + 0x10) == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0xf8))();
    }
    if (*(long **)(param_1 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x18) + 0x60))();
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    cVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0xf0))
                      (*(long **)(param_1 + 0x10),param_2,param_3);
    if (cVar1 == '\0') {
      (**(code **)(*param_2 + 0x60))(param_2);
      uVar2 = 0;
    }
    else {
      *(long **)(param_1 + 0x18) = param_2;
      uVar2 = 1;
    }
  }
  return uVar2;
}

