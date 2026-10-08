
undefined4 FUN_100914aa2(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_34;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_1c = FUN_100912e4b(param_1);
  if (local_1c < 1) {
    if (**(char **)(param_1 + 8) == '|') {
      local_34 = 0;
    }
    else if (**(char **)(param_1 + 8) == '\0') {
      local_34 = 0;
    }
    else if (**(char **)(param_1 + 8) == ')') {
      local_34 = 0;
    }
    else if (**(char **)(param_1 + 8) == '(') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      FUN_10090df2f(param_1,*(undefined8 *)(param_1 + 0x28),0);
      local_18 = *(undefined8 *)(param_1 + 0x28);
      local_10 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      FUN_100914e4e(param_1,0);
      if (**(char **)(param_1 + 8) == ')') {
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0x5aa;
        FUN_10090b6dd(param_1,"xmlFAParseAtom: expecting \')\'");
      }
      uVar2 = FUN_10090c33e(param_1,4);
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      if (*(long *)(param_1 + 0x30) == 0) {
        local_34 = 0xffffffff;
      }
      else {
        *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30) = local_18;
        *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38) = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x20) = local_10;
        local_34 = 1;
      }
    }
    else if (((**(char **)(param_1 + 8) == '[') || (**(char **)(param_1 + 8) == '\\')) ||
            (**(char **)(param_1 + 8) == '.')) {
      FUN_100914777(param_1);
      local_34 = 1;
    }
    else {
      local_34 = 0;
    }
  }
  else {
    uVar2 = FUN_10090c33e(param_1,2);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    if (*(long *)(param_1 + 0x30) == 0) {
      local_34 = 0xffffffff;
    }
    else {
      uVar1 = _xmlStringCurrentChar(0,*(undefined8 *)(param_1 + 8),&local_20);
      *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x2c) = uVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (long)local_20;
      local_34 = 1;
    }
  }
  return local_34;
}

