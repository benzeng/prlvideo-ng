
undefined1 FUN_100547550(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    cVar2 = FUN_100547460(param_1 + 0x10,param_2,param_3,param_4);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      plVar1 = *(long **)(param_1 + 0x20);
      uVar3 = 1;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_3,param_4,*(undefined8 *)(param_1 + 0x28));
      }
    }
  }
  return uVar3;
}

