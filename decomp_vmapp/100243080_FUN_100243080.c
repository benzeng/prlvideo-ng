
undefined4 FUN_100243080(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined4 local_48;
  int local_24;
  undefined8 *local_20;
  
  if (param_1 == 0) {
    local_48 = 0xffffffff;
  }
  else if (param_2 < 8) {
    local_48 = 0xffffffff;
  }
  else if (param_2 < 0x4001) {
    iVar1 = *(int *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
      local_48 = 0xffffffff;
    }
    else {
      uVar4 = (*(code *)_xmlMalloc)((long)param_2 * 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      if (*(long *)(param_1 + 0x10) == 0) {
        *(long *)(param_1 + 0x10) = lVar2;
        local_48 = 0xffffffff;
      }
      else {
        puVar8 = *(undefined1 **)(param_1 + 0x10);
        for (lVar5 = (long)param_2 * 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        *(int *)(param_1 + 0x18) = param_2;
        for (local_24 = 0; local_24 < iVar1; local_24 = local_24 + 1) {
          if (*(int *)((long)local_24 * 0x18 + lVar2 + 0x14) != 0) {
            uVar6 = FUN_1002429ff(*(undefined8 *)((long)local_24 * 0x18 + lVar2 + 8),
                                  *(undefined4 *)((long)local_24 * 0x18 + lVar2 + 0x10));
            uVar6 = uVar6 % (ulong)(long)*(int *)(param_1 + 0x18);
            puVar7 = (undefined8 *)((long)local_24 * 0x18 + lVar2);
            puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + uVar6 * 0x18);
            *puVar3 = *puVar7;
            puVar3[1] = puVar7[1];
            puVar3[2] = puVar7[2];
            *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar6 * 0x18) = 0;
          }
        }
        for (local_24 = 0; local_24 < iVar1; local_24 = local_24 + 1) {
          local_20 = *(undefined8 **)((long)local_24 * 0x18 + lVar2);
          while (local_20 != (undefined8 *)0x0) {
            puVar3 = (undefined8 *)*local_20;
            uVar6 = FUN_1002429ff(local_20[1],*(undefined4 *)(local_20 + 2));
            uVar6 = uVar6 % (ulong)(long)*(int *)(param_1 + 0x18);
            if (*(int *)(*(long *)(param_1 + 0x10) + uVar6 * 0x18 + 0x14) == 0) {
              puVar7 = (undefined8 *)(*(long *)(param_1 + 0x10) + uVar6 * 0x18);
              *puVar7 = *local_20;
              puVar7[1] = local_20[1];
              puVar7[2] = local_20[2];
              *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar6 * 0x18) = 0;
              *(undefined4 *)(*(long *)(param_1 + 0x10) + uVar6 * 0x18 + 0x14) = 1;
              (*(code *)_xmlFree)(local_20);
              local_20 = puVar3;
            }
            else {
              *local_20 = *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar6 * 0x18);
              *(undefined8 **)(*(long *)(param_1 + 0x10) + uVar6 * 0x18) = local_20;
              local_20 = puVar3;
            }
          }
        }
        (*(code *)_xmlFree)(lVar2);
        local_48 = 0;
      }
    }
  }
  else {
    local_48 = 0xffffffff;
  }
  return local_48;
}

