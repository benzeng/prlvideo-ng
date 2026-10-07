
undefined4 FUN_10018d34d(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined4 local_48;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_1c = 1;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_48 = 0;
  }
  else {
    local_18 = *(long *)(param_3 + 0x18);
LAB_10018d45a:
    if (local_18 != 0) {
      if (8 < *(uint *)(local_18 + 8)) {
LAB_10018d3df:
        local_1c = 0;
        goto LAB_10018d465;
      }
      uVar1 = 1L << ((byte)*(uint *)(local_18 + 8) & 0x3f);
      if ((uVar1 & 0x198) == 0) {
        if ((uVar1 & 0x20) == 0) goto LAB_10018d3df;
        if ((*(long *)(local_18 + 0x18) != 0) && (*(long *)(*(long *)(local_18 + 0x18) + 0x18) != 0)
           ) {
          FUN_1001844b5(param_1,local_18);
          local_18 = *(long *)(*(long *)(local_18 + 0x18) + 0x18);
          goto LAB_10018d45a;
        }
      }
      for (local_18 = *(long *)(local_18 + 0x30); local_18 == 0;
          local_18 = *(long *)(local_18 + 0x30)) {
        local_18 = FUN_1001845f2(param_1);
        if (local_18 == 0) break;
      }
      goto LAB_10018d45a;
    }
LAB_10018d465:
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(long *)(param_1 + 0x28) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    local_48 = local_1c;
  }
  return local_48;
}

