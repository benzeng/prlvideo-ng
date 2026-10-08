
undefined4 FUN_1008c0c75(long param_1,long param_2,long param_3)

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
LAB_1008c0d82:
    if (local_18 != 0) {
      if (8 < *(uint *)(local_18 + 8)) {
LAB_1008c0d07:
        local_1c = 0;
        goto LAB_1008c0d8d;
      }
      uVar1 = 1L << ((byte)*(uint *)(local_18 + 8) & 0x3f);
      if ((uVar1 & 0x198) == 0) {
        if ((uVar1 & 0x20) == 0) goto LAB_1008c0d07;
        if ((*(long *)(local_18 + 0x18) != 0) && (*(long *)(*(long *)(local_18 + 0x18) + 0x18) != 0)
           ) {
          FUN_1008b7ddd(param_1,local_18);
          local_18 = *(long *)(*(long *)(local_18 + 0x18) + 0x18);
          goto LAB_1008c0d82;
        }
      }
      for (local_18 = *(long *)(local_18 + 0x30); local_18 == 0;
          local_18 = *(long *)(local_18 + 0x30)) {
        local_18 = FUN_1008b7f1a(param_1);
        if (local_18 == 0) break;
      }
      goto LAB_1008c0d82;
    }
LAB_1008c0d8d:
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

