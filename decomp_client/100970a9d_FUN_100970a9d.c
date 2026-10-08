
int FUN_100970a9d(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int local_5c;
  long local_38;
  int local_30;
  int local_2c;
  long local_28;
  int *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = 0;
  if ((param_3 == 0) || (*(long *)(param_3 + 0x28) == 0)) {
    local_5c = -1;
  }
  else {
    local_28 = *(long *)(param_3 + 0x28);
    if (*(long *)(local_28 + 0x18) == 0) {
      local_30 = -1;
    }
    else if ((*(long *)(param_3 + 0x48) == 0) || (**(int **)(param_3 + 0x48) != 6)) {
      local_30 = (**(code **)(local_28 + 0x18))
                           (*(undefined8 *)(local_28 + 8),*(undefined8 *)(param_3 + 0x10),param_2,0,
                            param_4);
    }
    else {
      local_30 = (**(code **)(local_28 + 0x18))
                           (*(undefined8 *)(local_28 + 8),*(undefined8 *)(param_3 + 0x10),param_2,
                            &local_38,param_4);
    }
    if (local_30 < 0) {
      FUN_100964522(param_1,2,*(undefined8 *)(param_3 + 0x10),0,0);
      if (((local_38 != 0) && (local_28 != 0)) && (*(long *)(local_28 + 0x30) != 0)) {
        (**(code **)(local_28 + 0x30))(*(undefined8 *)(local_28 + 8),local_38);
      }
      local_5c = -1;
    }
    else {
      if (local_30 == 1) {
        local_30 = 0;
      }
      else if (local_30 == 2) {
        FUN_100964522(param_1,4,param_2,0,1);
      }
      else {
        FUN_100964522(param_1,3,*(undefined8 *)(param_3 + 0x10),param_2,1);
        local_30 = -1;
      }
      for (local_20 = *(int **)(param_3 + 0x48);
          ((local_30 == 0 && (local_20 != (int *)0x0)) && (*local_20 == 6));
          local_20 = *(int **)(local_20 + 0x10)) {
        if (*(long *)(local_28 + 0x28) != 0) {
          local_2c = (**(code **)(local_28 + 0x28))
                               (*(undefined8 *)(local_28 + 8),*(undefined8 *)(param_3 + 0x10),
                                *(undefined8 *)(local_20 + 4),*(undefined8 *)(local_20 + 8),param_2,
                                local_38);
          if (local_2c != 0) {
            local_30 = -1;
          }
        }
      }
      if ((local_30 == 0) && (*(long *)(param_3 + 0x30) != 0)) {
        local_18 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20);
        local_10 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28);
        *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20) = param_2;
        *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28) = 0;
        local_30 = FUN_100970eaf(param_1,*(undefined8 *)(param_3 + 0x30));
        *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20) = local_18;
        *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28) = local_10;
      }
      if (((local_38 != 0) && (local_28 != 0)) && (*(long *)(local_28 + 0x30) != 0)) {
        (**(code **)(local_28 + 0x30))(*(undefined8 *)(local_28 + 8),local_38);
      }
      local_5c = local_30;
    }
  }
  return local_5c;
}

