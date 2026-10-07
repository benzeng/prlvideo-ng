
void FUN_1007676f0(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffff;
  if (param_2 != 3) {
    uVar1 = 0;
  }
  FUN_100762800(param_1,uVar1);
  if (0 < DAT_1011b55f8) {
    uVar1 = 0;
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
      uVar1 = **(undefined8 **)(param_1 + 0x10);
    }
    FUN_1008e3970("","etrace",1,"Etrace MASK %llx",uVar1);
    return;
  }
  return;
}

