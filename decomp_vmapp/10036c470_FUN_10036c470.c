
void FUN_10036c470(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  FUN_10038e8e0(param_1,param_3);
  if (param_2[1] != '\x0f') {
    FUN_10036c3f0(param_1);
  }
  FUN_10038e8e0(param_1," = ");
  uVar1 = *param_2;
  uVar2 = param_2[2];
  FUN_10038e8e0(param_1,"v_");
  FUN_10036bdb0(param_1,uVar1,uVar2);
  FUN_10038e8e0(param_1,";\n");
  return;
}

