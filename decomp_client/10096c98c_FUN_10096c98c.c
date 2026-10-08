
undefined8 * FUN_10096c98c(void *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *local_40;
  long local_18;
  
  local_40 = (undefined8 *)FUN_10096144a(param_1);
  if (local_40 == (undefined8 *)0x0) {
    local_40 = (undefined8 *)0x0;
  }
  else {
    *local_40 = *(undefined8 *)((long)param_1 + 0x30);
    if (*(long *)((long)param_1 + 0x30) != 0) {
      local_18 = *(long *)(*(long *)((long)param_1 + 0x30) + 8);
      if (local_18 == 0) {
        *(undefined8 **)(*(long *)((long)param_1 + 0x30) + 8) = local_40;
      }
      else {
        for (; *(long *)(local_18 + 0x10) != 0; local_18 = *(long *)(local_18 + 0x10)) {
        }
        *(undefined8 **)(local_18 + 0x10) = local_40;
      }
    }
    uVar1 = *(undefined8 *)((long)param_1 + 0x30);
    *(undefined8 **)((long)param_1 + 0x30) = local_40;
    FUN_10096abf1(param_1,param_2);
    *(undefined8 **)((long)param_1 + 0x30) = local_40;
    if (*(long *)((long)param_1 + 0x30) == 0) {
      FUN_100960ece(param_1,param_2,0x40c,"Failed to parse <grammar> content\n",0,0);
    }
    else if (*(long *)(*(long *)((long)param_1 + 0x30) + 0x18) == 0) {
      FUN_100960ece(param_1,param_2,0x40f,"Element <grammar> has no <start>\n",0,0);
    }
    FUN_10096b2f5(param_1,local_40);
    if (local_40[6] != 0) {
      _xmlHashScan((xmlHashTablePtr)local_40[6],FUN_10096af5b,param_1);
    }
    if (local_40[7] != 0) {
      _xmlHashScan((xmlHashTablePtr)local_40[7],FUN_10096ae1d,param_1);
    }
    *(undefined8 *)((long)param_1 + 0x30) = uVar1;
  }
  return local_40;
}

