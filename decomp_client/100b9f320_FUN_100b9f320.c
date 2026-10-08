
void FUN_100b9f320(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if (*(undefined **)(param_1 + 8) == (undefined *)0x0) {
    puVar1 = PTR_s_UNKNOWN_1022cffa0;
  }
  ___sprintf_chk(param_2,0,0xffffffffffffffff,"%s",puVar1);
  return;
}

