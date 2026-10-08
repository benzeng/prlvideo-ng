
void FUN_100cb9320(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    FUN_100bf2cf0(param_2 + 0x1c,1,3,"cms_sd.c",0x1e2);
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_100c6d8c0();
    }
    uVar1 = FUN_100c929a0(param_2);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_100c7cd70();
  }
  *(long *)(param_1 + 0x38) = param_2;
  return;
}

