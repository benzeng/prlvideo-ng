
void FUN_1000b6e80(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x88))();
  if (lVar1 != 0) {
    FUN_1000bd4e0(lVar1);
    return;
  }
  return;
}

