
undefined8 FUN_10037e620(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  if (*(int *)(param_2 + 0x184) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_2 + 0x82a8) != 0;
  }
  (*DAT_1011c5ba0)(bVar1);
  return 0;
}

