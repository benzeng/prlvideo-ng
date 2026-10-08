
undefined4 FUN_1008a5dd0(long *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined4 local_3c;
  long local_28;
  long *local_20;
  undefined8 *local_18;
  
  if ((param_1 == (long *)0x0) || (local_28 = param_2, *param_1 != 0)) {
    local_3c = 0xffffffff;
  }
  else {
    for (; (local_28 != 0 && (*(long *)(local_28 + 0x40) != local_28));
        local_28 = *(long *)(local_28 + 0x28)) {
      if ((*(int *)(local_28 + 8) == 1) && (*(long *)(local_28 + 0x60) != 0)) {
        local_20 = *(long **)(local_28 + 0x60);
        do {
          bVar1 = false;
          if (*param_1 != 0) {
            for (local_18 = (undefined8 *)*param_1; local_18 != (undefined8 *)0x0;
                local_18 = (undefined8 *)*local_18) {
              if ((local_20[3] == *(long *)(local_18[3] + 0x18)) ||
                 (iVar2 = _xmlStrEqual((xmlChar *)local_20[3],*(xmlChar **)(local_18[3] + 0x18)),
                 iVar2 != 0)) {
                bVar1 = true;
                break;
              }
            }
          }
          lVar3 = FUN_1008a59a1(param_1,0,0,local_20,0xffffffff);
          if (lVar3 == 0) {
            return 0xffffffff;
          }
          if (bVar1) {
            *(undefined4 *)(lVar3 + 0x20) = 0;
          }
          local_20 = (long *)*local_20;
        } while (local_20 != (long *)0x0);
      }
    }
    local_3c = 0;
  }
  return local_3c;
}

