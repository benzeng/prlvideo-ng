
void FUN_100914777(long param_1)

{
  undefined8 uVar1;
  
  if (**(char **)(param_1 + 8) == '[') {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    uVar1 = FUN_10090c33e(param_1,3);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_100914604(param_1);
      if (**(char **)(param_1 + 8) == ']') {
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0x5aa;
        FUN_10090b6dd(param_1,"xmlFAParseCharClass: \']\' expected");
      }
    }
  }
  else {
    FUN_1009136ca(param_1);
  }
  return;
}

