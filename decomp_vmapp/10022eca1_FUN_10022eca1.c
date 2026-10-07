
void FUN_10022eca1(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if ((param_1 != 0) && (*(long *)(param_1 + 0x70) == 0)) {
      uVar1 = FUN_10022e03f(param_1,0x28);
      *(undefined8 *)(param_1 + 0x70) = uVar1;
    }
    if ((param_1 == 0) || (*(long *)(param_1 + 0x70) == 0)) {
      if (*(long *)(param_2 + 0x30) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_2 + 0x30));
      }
      (*(code *)_xmlFree)(param_2);
    }
    else {
      FUN_10022e182(param_1,*(undefined8 *)(param_1 + 0x70),param_2);
    }
  }
  return;
}

