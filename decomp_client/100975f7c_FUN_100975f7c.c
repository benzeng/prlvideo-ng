
undefined8 FUN_100975f7c(long param_1,undefined1 *param_2,int param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 local_48;
  undefined8 *local_20;
  int local_c;
  
  local_c = 0;
  for (local_20 = *(undefined8 **)(param_1 + 0x20); local_20 != (undefined8 *)0x0;
      local_20 = (undefined8 *)*local_20) {
    if ((long)param_3 < (long)(local_20[2] - local_20[1])) goto LAB_1009760aa;
    if (local_c < *(int *)(local_20 + 3)) {
      local_c = *(int *)(local_20 + 3);
    }
  }
  if (local_c == 0) {
    local_c = 1000;
  }
  else {
    local_c = local_c << 2;
  }
  if (local_c < param_3 * 4) {
    local_c = param_3 << 2;
  }
  local_20 = (undefined8 *)(*(code *)_xmlMalloc)((long)local_c + 0x28);
  if (local_20 == (undefined8 *)0x0) {
    local_48 = 0;
  }
  else {
    *(int *)(local_20 + 3) = local_c;
    *(undefined4 *)((long)local_20 + 0x1c) = 0;
    local_20[1] = local_20 + 4;
    local_20[2] = (long)local_20 + (long)local_c + 0x20;
    *local_20 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = local_20;
LAB_1009760aa:
    local_48 = local_20[1];
    puVar2 = (undefined1 *)local_20[1];
    for (lVar1 = (long)param_3; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    local_20[1] = local_20[1] + (long)param_3;
    puVar2 = (undefined1 *)local_20[1];
    *puVar2 = 0;
    local_20[1] = puVar2 + 1;
  }
  return local_48;
}

