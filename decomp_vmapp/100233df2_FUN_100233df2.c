
void FUN_100233df2(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_20;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  if (((param_2 != (int *)0x0) &&
      (((*param_2 == 0x12 || (*param_2 == 4)) &&
       (((uint)(int)*(short *)((long)param_2 + 0x62) >> 5 & 1) == 0)))) &&
     (*(int *)(param_1 + 0x44) == 0)) {
    for (local_20 = *(long *)(param_2 + 0x12); local_20 != 0; local_20 = *(long *)(local_20 + 0x40))
    {
      local_18 = local_18 + 1;
    }
    for (local_20 = *(long *)(param_2 + 0xc); local_20 != 0; local_20 = *(long *)(local_20 + 0x40))
    {
      local_18 = local_18 + 1;
    }
    lVar2 = (*(code *)_xmlMalloc)((long)local_18 * 8);
    if (lVar2 == 0) {
      FUN_10022d294(param_1,"building group\n");
    }
    else {
      local_14 = 0;
      for (local_20 = *(long *)(param_2 + 0x12); local_20 != 0;
          local_20 = *(long *)(local_20 + 0x40)) {
        uVar3 = FUN_100233685(param_1,local_20,1);
        *(undefined8 *)((long)local_14 * 8 + lVar2) = uVar3;
        local_14 = local_14 + 1;
      }
      for (local_20 = *(long *)(param_2 + 0xc); local_20 != 0; local_20 = *(long *)(local_20 + 0x40)
          ) {
        uVar3 = FUN_100233685(param_1,local_20,1);
        *(undefined8 *)((long)local_14 * 8 + lVar2) = uVar3;
        local_14 = local_14 + 1;
      }
      for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
        if (*(long *)((long)local_14 * 8 + lVar2) != 0) {
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            if (*(long *)((long)local_10 * 8 + lVar2) != 0) {
              iVar1 = FUN_100233407(param_1,*(undefined8 *)((long)local_14 * 8 + lVar2),
                                    *(undefined8 *)((long)local_10 * 8 + lVar2));
              if (iVar1 == 0) {
                FUN_10022d5a6(param_1,*(undefined8 *)(param_2 + 2),0x410,
                              "Attributes conflicts in group\n",0,0);
              }
            }
          }
        }
      }
      for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
        if (*(long *)((long)local_14 * 8 + lVar2) != 0) {
          (*(code *)_xmlFree)(*(undefined8 *)((long)local_14 * 8 + lVar2));
        }
      }
      (*(code *)_xmlFree)(lVar2);
      *(ushort *)((long)param_2 + 0x62) = *(ushort *)((long)param_2 + 0x62) | 0x20;
    }
  }
  return;
}

