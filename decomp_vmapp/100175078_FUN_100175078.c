
undefined4 FUN_100175078(long *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined4 local_48;
  int local_24;
  undefined8 *local_20;
  
  if (param_1 == (long *)0x0) {
    local_48 = 0xffffffff;
  }
  else if (param_2 < 8) {
    local_48 = 0xffffffff;
  }
  else if (param_2 < 0x4001) {
    lVar3 = param_1[1];
    lVar1 = *param_1;
    if (lVar1 == 0) {
      local_48 = 0xffffffff;
    }
    else {
      lVar4 = (*(code *)_xmlMalloc)((long)param_2 * 0x30);
      *param_1 = lVar4;
      if (*param_1 == 0) {
        *param_1 = lVar1;
        local_48 = 0xffffffff;
      }
      else {
        puVar6 = (undefined1 *)*param_1;
        for (lVar4 = (long)param_2 * 0x30; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        *(int *)(param_1 + 1) = param_2;
        for (local_24 = 0; local_24 < (int)lVar3; local_24 = local_24 + 1) {
          if (*(int *)((long)local_24 * 0x30 + lVar1 + 0x28) != 0) {
            lVar4 = FUN_100174b7b(param_1,*(undefined8 *)((long)local_24 * 0x30 + lVar1 + 8),
                                  *(undefined8 *)((long)local_24 * 0x30 + lVar1 + 0x10),
                                  *(undefined8 *)((long)local_24 * 0x30 + lVar1 + 0x18));
            puVar5 = (undefined8 *)((long)local_24 * 0x30 + lVar1);
            puVar2 = (undefined8 *)(*param_1 + lVar4 * 0x30);
            *puVar2 = *puVar5;
            puVar2[1] = puVar5[1];
            puVar2[2] = puVar5[2];
            puVar2[3] = puVar5[3];
            puVar2[4] = puVar5[4];
            puVar2[5] = puVar5[5];
            *(undefined8 *)(*param_1 + lVar4 * 0x30) = 0;
          }
        }
        for (local_24 = 0; local_24 < (int)lVar3; local_24 = local_24 + 1) {
          local_20 = *(undefined8 **)((long)local_24 * 0x30 + lVar1);
          while (local_20 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*local_20;
            lVar4 = FUN_100174b7b(param_1,local_20[1],local_20[2],local_20[3]);
            if (*(int *)(*param_1 + lVar4 * 0x30 + 0x28) == 0) {
              puVar5 = (undefined8 *)(*param_1 + lVar4 * 0x30);
              *puVar5 = *local_20;
              puVar5[1] = local_20[1];
              puVar5[2] = local_20[2];
              puVar5[3] = local_20[3];
              puVar5[4] = local_20[4];
              puVar5[5] = local_20[5];
              *(undefined8 *)(*param_1 + lVar4 * 0x30) = 0;
              (*(code *)_xmlFree)(local_20);
              local_20 = puVar2;
            }
            else {
              *local_20 = *(undefined8 *)(*param_1 + lVar4 * 0x30);
              *(undefined8 **)(*param_1 + lVar4 * 0x30) = local_20;
              local_20 = puVar2;
            }
          }
        }
        (*(code *)_xmlFree)(lVar1);
        local_48 = 0;
      }
    }
  }
  else {
    local_48 = 0xffffffff;
  }
  return local_48;
}

