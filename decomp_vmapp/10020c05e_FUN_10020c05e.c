
undefined4 FUN_10020c05e(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_70;
  long local_68;
  undefined8 *local_60;
  long *local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_60 = *(undefined8 **)(*(long *)(param_1 + 0xb8) + 0x60);
  do {
    if (local_60 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)local_60[1] == 0x18) {
      local_58 = *(long **)(*(long *)(param_1 + 0xb8) + 0x60);
      do {
        if (*(long *)(*(long *)(local_60[1] + 0x48) + 8) == local_58[1]) break;
        local_58 = (long *)*local_58;
      } while (local_58 != (long *)0x0);
      for (local_50 = 0; local_50 < *(int *)(local_60 + 3); local_50 = local_50 + 1) {
        local_44 = 0;
        local_20 = *(long *)(local_60[2] + (long)local_50 * 8);
        if (local_58 != (long *)0x0) {
          local_40 = *(long *)(local_20 + 8);
          for (local_4c = 0; local_4c < (int)local_58[3]; local_4c = local_4c + 1) {
            local_38 = *(long *)(*(long *)(local_58[2] + (long)local_4c * 8) + 8);
            for (local_48 = 0; local_48 < *(int *)(local_58[1] + 0x40); local_48 = local_48 + 1) {
              local_30 = *(long *)((long)local_48 * 8 + local_40);
              local_28 = *(long *)((long)local_48 * 8 + local_38);
              local_44 = FUN_100207d23(*(undefined8 *)(local_28 + 8),*(undefined8 *)(local_30 + 8));
              if (local_44 == 0) break;
              if (local_44 == -1) {
                return 0xffffffff;
              }
            }
            if (local_44 == 1) break;
          }
        }
        if (local_44 == 0) {
          local_68 = 0;
          local_70 = 0;
          uVar1 = FUN_1001e6d76(&local_70,*(undefined8 *)(local_60[1] + 0x28),
                                *(undefined8 *)(local_60[1] + 0x20));
          uVar2 = FUN_10020a72e(param_1,&local_68,
                                *(undefined8 *)(*(long *)(local_60[2] + (long)local_50 * 8) + 8),
                                *(undefined4 *)(local_60[1] + 0x40));
          FUN_1001e8ebf(param_1,0x755,local_20,local_60[1],
                        "No match found for key-sequence %s of key reference \'%s\'",uVar2,uVar1);
          if (local_68 != 0) {
            (*(code *)_xmlFree)(local_68);
            local_68 = 0;
          }
          if (local_70 != 0) {
            (*(code *)_xmlFree)(local_70);
            local_70 = 0;
          }
        }
      }
    }
    local_60 = (undefined8 *)*local_60;
  } while( true );
}

