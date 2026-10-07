
void FUN_100767300(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1007625b0(param_1,"/etrace_pax",0x1000000,1);
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN_1007635e0(param_1,0xd968);
  }
  DAT_1011ccc18 = FUN_1007671e0;
  iVar1 = FUN_1008e4540();
  uVar2 = 0xffffffffffffffff;
  if (iVar1 != 3) {
    uVar2 = 0;
  }
  FUN_100762800(param_1,uVar2);
  if (0 < DAT_1011b55f8) {
    uVar2 = 0;
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
      uVar2 = **(undefined8 **)(param_1 + 0x10);
    }
    FUN_1008e3970("","etrace",1,"Etrace MASK %llx",uVar2);
    return;
  }
  return;
}

