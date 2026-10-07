
void FUN_1001e0e4f(long param_1)

{
  undefined8 uVar1;
  
  if (**(char **)(param_1 + 8) == '[') {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    uVar1 = FUN_1001d8a16(param_1,3);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1001e0cdc(param_1);
      if (**(char **)(param_1 + 8) == ']') {
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0x5aa;
        FUN_1001d7db5(param_1,"xmlFAParseCharClass: \']\' expected");
      }
    }
  }
  else {
    FUN_1001dfda2(param_1);
  }
  return;
}

