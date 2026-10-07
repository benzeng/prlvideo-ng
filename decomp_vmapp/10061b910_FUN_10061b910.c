
undefined8
FUN_10061b910(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 param_3,
             undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  
  do {
    auVar1 = aesimc(*param_1);
    *param_2 = auVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_1 < param_4);
  return 0;
}

