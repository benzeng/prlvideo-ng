
byte * FUN_10088b124(long param_1,int *param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte *local_b0;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  byte *local_68;
  byte *local_60;
  
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    FUN_100879cbc(param_1);
  }
  local_78 = *(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  if ((*local_78 == 0x22) || (*local_78 == 0x27)) {
    *(undefined4 *)(param_1 + 0x110) = 0xc;
    bVar1 = *local_78;
    local_78 = local_78 + 1;
    local_70 = *(byte **)(*(long *)(param_1 + 0x38) + 0x28);
    if (local_70 <= local_78) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
      if ((*(int *)(param_1 + 0x1c4) == 0) &&
         (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20)
          < 0xfa)) {
        FUN_100879cbc(param_1);
      }
      if (*(long *)(*(long *)(param_1 + 0x38) + 0x18) != lVar3) {
        local_78 = local_78 + (*(long *)(*(long *)(param_1 + 0x38) + 0x18) - lVar3);
      }
      local_70 = *(byte **)(*(long *)(param_1 + 0x38) + 0x28);
    }
    local_80 = local_78;
    if (param_4 == 0) {
      while (((local_80 < local_70 && (*local_80 != bVar1)) &&
             ((0x1f < *local_80 &&
              (((-1 < (char)*local_80 && (*local_80 != 0x26)) && (*local_80 != 0x3c))))))) {
        local_80 = local_80 + 1;
        if (local_70 <= local_80) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
          if ((*(int *)(param_1 + 0x1c4) == 0) &&
             (*(long *)(*(long *)(param_1 + 0x38) + 0x28) -
              *(long *)(*(long *)(param_1 + 0x38) + 0x20) < 0xfa)) {
            FUN_100879cbc(param_1);
          }
          if (*(long *)(*(long *)(param_1 + 0x38) + 0x18) != lVar3) {
            lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x18) - lVar3;
            local_78 = local_78 + lVar3;
            local_80 = local_80 + lVar3;
          }
          local_70 = *(byte **)(*(long *)(param_1 + 0x38) + 0x28);
        }
      }
      local_68._0_4_ = (int)local_80;
      bVar2 = *local_80;
      local_60 = local_78;
    }
    else {
      while (((local_80 = local_78, local_78 < local_70 && (*local_78 != bVar1)) &&
             ((*local_78 == 0x20 || (((*local_78 == 9 || (*local_78 == 10)) || (*local_78 == 0xd))))
             ))) {
        local_78 = local_78 + 1;
        if (local_70 <= local_78) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
          if ((*(int *)(param_1 + 0x1c4) == 0) &&
             (*(long *)(*(long *)(param_1 + 0x38) + 0x28) -
              *(long *)(*(long *)(param_1 + 0x38) + 0x20) < 0xfa)) {
            FUN_100879cbc(param_1);
          }
          if (*(long *)(*(long *)(param_1 + 0x38) + 0x18) != lVar3) {
            local_78 = local_78 + (*(long *)(*(long *)(param_1 + 0x38) + 0x18) - lVar3);
          }
          local_70 = *(byte **)(*(long *)(param_1 + 0x38) + 0x28);
        }
      }
      while (((local_80 < local_70 && (*local_80 != bVar1)) &&
             ((0x1f < *local_80 &&
              ((((-1 < (char)*local_80 && (*local_80 != 0x26)) && (*local_80 != 0x3c)) &&
               ((bVar2 = *local_80, local_80 = local_80 + 1, bVar2 != 0x20 || (*local_80 != 0x20))))
              ))))) {
        if (local_70 <= local_80) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
          if ((*(int *)(param_1 + 0x1c4) == 0) &&
             (*(long *)(*(long *)(param_1 + 0x38) + 0x28) -
              *(long *)(*(long *)(param_1 + 0x38) + 0x20) < 0xfa)) {
            FUN_100879cbc(param_1);
          }
          if (*(long *)(*(long *)(param_1 + 0x38) + 0x18) != lVar3) {
            lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x18) - lVar3;
            local_78 = local_78 + lVar3;
            local_80 = local_80 + lVar3;
          }
          local_70 = *(byte **)(*(long *)(param_1 + 0x38) + 0x28);
        }
      }
      for (local_68 = local_80; (local_68[-1] == 0x20 && (local_78 < local_68));
          local_68 = local_68 + -1) {
      }
      while (((local_80 < local_70 && (*local_80 != bVar1)) &&
             ((*local_80 == 0x20 || (((*local_80 == 9 || (*local_80 == 10)) || (*local_80 == 0xd))))
             ))) {
        local_80 = local_80 + 1;
        if (local_70 <= local_80) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
          if ((*(int *)(param_1 + 0x1c4) == 0) &&
             (*(long *)(*(long *)(param_1 + 0x38) + 0x28) -
              *(long *)(*(long *)(param_1 + 0x38) + 0x20) < 0xfa)) {
            FUN_100879cbc(param_1);
          }
          if (*(long *)(*(long *)(param_1 + 0x38) + 0x18) != lVar3) {
            lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x18) - lVar3;
            local_78 = local_78 + lVar3;
            local_80 = local_80 + lVar3;
            local_68 = local_68 + lVar3;
          }
          local_70 = *(byte **)(*(long *)(param_1 + 0x38) + 0x28);
        }
      }
      bVar2 = *local_80;
      local_60 = local_78;
    }
    if (bVar2 == bVar1) {
      if (param_2 == (int *)0x0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 1;
        }
        local_60 = _xmlStrndup(local_60,(int)local_68 - (int)local_60);
      }
      else {
        *param_2 = (int)local_68 - (int)local_60;
      }
      *(byte **)(*(long *)(param_1 + 0x38) + 0x20) = local_80 + 1;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
      }
      local_b0 = local_60;
    }
    else {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 1;
      }
      local_b0 = (byte *)FUN_10087dc89(param_1,param_2,param_4);
    }
  }
  else {
    FUN_100877520(param_1,0x27,0);
    local_b0 = (byte *)0x0;
  }
  return local_b0;
}

