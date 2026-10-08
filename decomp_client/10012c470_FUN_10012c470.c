
void FUN_10012c470(undefined8 param_1,long param_2,long param_3,long param_4)

{
  CHwNetAdapter *this;
  long lVar1;
  
  if (param_2 - param_3 != 0) {
    lVar1 = 0;
    do {
      this = operator_new(0x120);
      CHwNetAdapter::CHwNetAdapter(this,*(CHwNetAdapter **)(param_4 + lVar1));
      *(CHwNetAdapter **)(param_2 + lVar1) = this;
      lVar1 = lVar1 + 8;
    } while ((param_2 - param_3) + lVar1 != 0);
  }
  return;
}

