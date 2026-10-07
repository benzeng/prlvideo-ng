
undefined4 FUN_00410166(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 local_34;
  undefined1 local_28 [12];
  uint local_1c;
  
  FUN_00410346(local_28);
                    /* try { // try from 0041017c to 00410189 has its CatchHandler @ 004101ea */
  uVar2 = FUN_00410442();
  uVar1 = FUN_004103c8();
  local_1c = (uint)(uVar2 / uVar1);
  if ((param_1[1] == 0xffffffff) || (*param_1 < local_1c - param_1[1])) {
    param_1[1] = local_1c;
    local_34 = 1;
  }
  else {
    local_34 = 0;
  }
  FUN_00410364(local_28);
  return local_34;
}

