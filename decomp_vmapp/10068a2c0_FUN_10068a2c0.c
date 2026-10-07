
void FUN_10068a2c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  *(undefined ***)((long)param_1 + lVar1) = &PTR_FUN_100bc9e08;
  *(undefined ***)((long)param_1 + lVar1 + 0x18108) = &PTR_FUN_100bca1c0;
  FUN_100698030((long)param_1 + lVar1,&PTR_PTR_100bca378);
  FUN_100684e00((long)param_1 + lVar1 + 0x18108);
  return;
}

