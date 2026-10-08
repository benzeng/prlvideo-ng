
undefined4 FUN_100110c30(uint param_1,undefined8 param_2,int param_3)

{
  return CONCAT31((int3)((param_1 & 0xfffffffe) >> 8),
                  param_3 == 1 && (param_1 == 7 || (param_1 & 0xfffffffe) == 8));
}

