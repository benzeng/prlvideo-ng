
long FUN_1001f31b2(uint *param_1,long param_2)

{
  uint uVar1;
  long *local_a0;
  long *local_90;
  long *local_80;
  long *local_70;
  long *local_60;
  long *local_50;
  long *local_40;
  long *local_30;
  long *local_20;
  long *local_10;
  
  if ((param_1 == (uint *)0x0) || (param_2 == 0)) {
    return 0;
  }
  uVar1 = *param_1;
  if (uVar1 == 0x10) {
    if (*(long *)(param_1 + 0xc) != 0) {
      local_60 = *(long **)(param_1 + 0xc);
      if (*local_60 != 0) {
        local_60 = (long *)*local_60;
      }
      *local_60 = param_2;
      return param_2;
    }
    *(long *)(param_1 + 0xc) = param_2;
    return param_2;
  }
  if (uVar1 < 0x11) {
    if (uVar1 < 9) {
      if (5 < uVar1) {
        if (*(long *)(param_1 + 2) != 0) {
          local_10 = *(long **)(param_1 + 2);
          if (*local_10 != 0) {
            local_10 = (long *)*local_10;
          }
          *local_10 = param_2;
          return param_2;
        }
        *(long *)(param_1 + 2) = param_2;
        return param_2;
      }
      if (uVar1 == 2) {
LAB_1001f348f:
        if (*(long *)(param_1 + 4) != 0) {
          local_80 = *(long **)(param_1 + 4);
          if (*local_80 != 0) {
            local_80 = (long *)*local_80;
          }
          *local_80 = param_2;
          return param_2;
        }
        *(long *)(param_1 + 4) = param_2;
        return param_2;
      }
      if ((1 < uVar1) && (3 < uVar1)) {
        if (*(long *)(param_1 + 0xc) != 0) {
          local_30 = *(long **)(param_1 + 0xc);
          if (*local_30 != 0) {
            local_30 = (long *)*local_30;
          }
          *local_30 = param_2;
          return param_2;
        }
        *(long *)(param_1 + 0xc) = param_2;
        return param_2;
      }
    }
    else {
      if (uVar1 == 0xe) {
        if (*(long *)(param_1 + 0xc) != 0) {
          local_a0 = *(long **)(param_1 + 0xc);
          if (*local_a0 != 0) {
            local_a0 = (long *)*local_a0;
          }
          *local_a0 = param_2;
          return param_2;
        }
        *(long *)(param_1 + 0xc) = param_2;
        return param_2;
      }
      if (uVar1 == 0xf) {
        if (*(long *)(param_1 + 0x10) != 0) {
          local_90 = *(long **)(param_1 + 0x10);
          if (*local_90 != 0) {
            local_90 = (long *)*local_90;
          }
          *local_90 = param_2;
          return param_2;
        }
        *(long *)(param_1 + 0x10) = param_2;
        return param_2;
      }
    }
  }
  else if (uVar1 < 0x1a) {
    if (0x15 < uVar1) {
      if (*(long *)(param_1 + 2) != 0) {
        local_70 = *(long **)(param_1 + 2);
        if (*local_70 != 0) {
          local_70 = (long *)*local_70;
        }
        *local_70 = param_2;
        return param_2;
      }
      *(long *)(param_1 + 2) = param_2;
      return param_2;
    }
    if (uVar1 == 0x12) {
      if (*(long *)(param_1 + 4) != 0) {
        local_50 = *(long **)(param_1 + 4);
        if (*local_50 != 0) {
          local_50 = (long *)*local_50;
        }
        *local_50 = param_2;
        return param_2;
      }
      *(long *)(param_1 + 4) = param_2;
      return param_2;
    }
    if (uVar1 < 0x12) {
      if (*(long *)(param_1 + 2) != 0) {
        local_20 = *(long **)(param_1 + 2);
        if (*local_20 != 0) {
          local_20 = (long *)*local_20;
        }
        *local_20 = param_2;
        return param_2;
      }
      *(long *)(param_1 + 2) = param_2;
      return param_2;
    }
    if (uVar1 == 0x15) goto LAB_1001f348f;
  }
  else if (uVar1 - 1000 < 0xc) {
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = *(long **)(param_1 + 8);
      if (*local_40 != 0) {
        local_40 = (long *)*local_40;
      }
      *local_40 = param_2;
      return param_2;
    }
    *(long *)(param_1 + 8) = param_2;
    return param_2;
  }
  FUN_1001ea46a(0,0xbfd,0,0,0,
                "Internal error: xmlSchemaAddAnnotation, The item is not a annotated schema component"
                ,0);
  return param_2;
}

