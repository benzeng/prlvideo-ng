
undefined8 FUN_1008db640(int param_1,long *param_2)

{
  long lVar1;
  
  if (param_1 == 3) {
    lVar1 = *param_2;
    if (*(long *)(lVar1 + 0x40) != 0) {
      FUN_1008924e0();
    }
    if (*(long *)(lVar1 + 0x38) != 0) {
      FUN_1008a17f0();
    }
  }
  return 1;
}

