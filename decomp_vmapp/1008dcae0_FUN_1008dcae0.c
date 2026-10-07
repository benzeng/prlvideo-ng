
void FUN_1008dcae0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    FUN_10081d580(param_2 + 0x1c,1,3,"cms_sd.c",0x1e2);
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1008924e0();
    }
    uVar1 = FUN_1008b7420(param_2);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_1008a17f0();
  }
  *(long *)(param_1 + 0x38) = param_2;
  return;
}

