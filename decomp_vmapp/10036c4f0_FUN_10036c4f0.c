
void FUN_10036c4f0(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  FUN_10038e8e0(param_1,"v_");
  FUN_10036bdb0(param_1,uVar1,uVar2);
  FUN_10038e8e0(param_1," = %s",param_3);
  if (param_2[1] != '\x0f') {
    FUN_10036c3f0(param_1);
  }
  if (*(char *)(DAT_1011c8478 + 0x48) != '\0') {
    FUN_10038e8e0(param_1," + 0.0");
  }
  FUN_10038e8e0(param_1,";\n");
  return;
}

