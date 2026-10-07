
ulong FUN_1006a5bf0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x160))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
  if (uVar1 == 0xffffffffffffffff) {
    FUN_1008e3970("","dimg",0,"Error: get file size of VMDK failed");
  }
  else {
    *param_2 = uVar1 >> 9;
    param_1[0x3012] = uVar1;
  }
  return uVar1;
}

