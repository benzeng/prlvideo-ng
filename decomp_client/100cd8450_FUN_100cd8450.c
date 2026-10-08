
undefined4 FUN_100cd8450(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_100cd84a0();
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = _CGEventGetType(param_2);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar2 = FUN_100cd8a80(uVar3,uVar2,param_2);
  }
  return uVar2;
}

