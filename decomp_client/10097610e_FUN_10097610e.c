
undefined8 FUN_10097610e(long param_1,xmlChar *param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  xmlChar *pxVar3;
  undefined1 *puVar4;
  undefined8 local_50;
  undefined8 *local_20;
  int local_10;
  
  local_10 = 0;
  if (param_2 == (xmlChar *)0x0) {
    local_50 = FUN_100975f7c(param_1,param_3,param_4);
  }
  else {
    iVar1 = _xmlStrlen(param_2);
    for (local_20 = *(undefined8 **)(param_1 + 0x20); local_20 != (undefined8 *)0x0;
        local_20 = (undefined8 *)*local_20) {
      if ((long)param_4 < (long)(local_20[2] - local_20[1])) goto LAB_10097626c;
      if (local_10 < *(int *)(local_20 + 3)) {
        local_10 = *(int *)(local_20 + 3);
      }
    }
    if (local_10 == 0) {
      local_10 = 1000;
    }
    else {
      local_10 = local_10 << 2;
    }
    if (local_10 < param_4 * 4) {
      local_10 = param_4 << 2;
    }
    local_20 = (undefined8 *)(*(code *)_xmlMalloc)((long)local_10 + 0x28);
    if (local_20 == (undefined8 *)0x0) {
      local_50 = 0;
    }
    else {
      *(int *)(local_20 + 3) = local_10;
      *(undefined4 *)((long)local_20 + 0x1c) = 0;
      local_20[1] = local_20 + 4;
      local_20[2] = (long)local_20 + (long)local_10 + 0x20;
      *local_20 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 **)(param_1 + 0x20) = local_20;
LAB_10097626c:
      local_50 = local_20[1];
      pxVar3 = (xmlChar *)local_20[1];
      for (lVar2 = (long)iVar1; lVar2 != 0; lVar2 = lVar2 + -1) {
        *pxVar3 = *param_2;
        param_2 = param_2 + 1;
        pxVar3 = pxVar3 + 1;
      }
      local_20[1] = local_20[1] + (long)iVar1;
      puVar4 = (undefined1 *)local_20[1];
      *puVar4 = 0x3a;
      local_20[1] = puVar4 + 1;
      iVar1 = (param_4 - iVar1) + -1;
      puVar4 = (undefined1 *)local_20[1];
      for (lVar2 = (long)iVar1; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *param_3;
        param_3 = param_3 + 1;
        puVar4 = puVar4 + 1;
      }
      local_20[1] = local_20[1] + (long)iVar1;
      puVar4 = (undefined1 *)local_20[1];
      *puVar4 = 0;
      local_20[1] = puVar4 + 1;
    }
  }
  return local_50;
}

