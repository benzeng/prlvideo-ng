
undefined4 FUN_10036a1e0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_2 - 1;
  uVar1 = 0x500;
  if ((uVar2 < 0xd) && ((0x1e1fU >> (uVar2 & 0x1f) & 1) != 0)) {
    uVar1 = *(undefined4 *)((long)&PTR___mh_execute_header_100b3d4d0 + (long)(int)uVar2 * 4);
  }
  return uVar1;
}

