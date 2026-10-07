
undefined4 FUN_10021e912(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_2c;
  double local_18;
  double local_10;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    local_2c = 0xfffffffe;
  }
  else {
    if (*param_1 == 0xe) {
      local_18 = *(double *)(param_1 + 4);
    }
    else {
      if (*param_1 != 0xd) {
        return 0xfffffffe;
      }
      local_18 = (double)(float)param_1[4];
    }
    if (*param_2 == 0xe) {
      local_10 = *(double *)(param_2 + 4);
    }
    else {
      if (*param_2 != 0xd) {
        return 0xfffffffe;
      }
      local_10 = (double)(float)param_2[4];
    }
    iVar1 = _xmlXPathIsNaN(local_18);
    if (iVar1 == 0) {
      iVar1 = _xmlXPathIsNaN(local_10);
      if (iVar1 == 0) {
        if (_xmlXPathPINF == local_18) {
          if (_xmlXPathPINF == local_10) {
            local_2c = 0;
          }
          else {
            local_2c = 1;
          }
        }
        else if (_xmlXPathPINF == local_10) {
          local_2c = 0xffffffff;
        }
        else if (_xmlXPathNINF == local_18) {
          if (_xmlXPathNINF == local_10) {
            local_2c = 0;
          }
          else {
            local_2c = 0xffffffff;
          }
        }
        else if (_xmlXPathNINF == local_10) {
          local_2c = 1;
        }
        else if (local_18 < local_10) {
          local_2c = 0xffffffff;
        }
        else if (local_10 < local_18) {
          local_2c = 1;
        }
        else if (local_18 == local_10) {
          local_2c = 0;
        }
        else {
          local_2c = 2;
        }
      }
      else {
        local_2c = 0xffffffff;
      }
    }
    else {
      iVar1 = _xmlXPathIsNaN(local_10);
      if (iVar1 == 0) {
        local_2c = 1;
      }
      else {
        local_2c = 0;
      }
    }
  }
  return local_2c;
}

