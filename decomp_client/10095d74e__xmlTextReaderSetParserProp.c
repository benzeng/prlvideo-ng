
undefined4 _xmlTextReaderSetParserProp(int *param_1,uint param_2,int param_3)

{
  long lVar1;
  undefined4 local_2c;
  
  if ((param_1 == (int *)0x0) || (*(long *)(param_1 + 8) == 0)) {
    local_2c = 0xffffffff;
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    if (param_2 == 2) {
      if (param_3 == 0) {
        if ((*(uint *)(lVar1 + 0x1b0) >> 2 & 1) != 0) {
          *(int *)(lVar1 + 0x1b0) = *(int *)(lVar1 + 0x1b0) + -4;
        }
      }
      else {
        *(uint *)(lVar1 + 0x1b0) = *(uint *)(lVar1 + 0x1b0) | 4;
      }
      local_2c = 0;
    }
    else {
      if (param_2 < 3) {
        if (param_2 == 1) {
          if (param_3 == 0) {
            *(undefined4 *)(lVar1 + 0x1b0) = 0;
          }
          else if (*(int *)(lVar1 + 0x1b0) == 0) {
            if (*param_1 != 0) {
              return 0xffffffff;
            }
            *(undefined4 *)(lVar1 + 0x1b0) = 2;
          }
          return 0;
        }
      }
      else {
        if (param_2 == 3) {
          if (param_3 == 0) {
            *(undefined4 *)(lVar1 + 0x9c) = 0;
          }
          else {
            *(undefined4 *)(lVar1 + 0x9c) = 1;
            param_1[4] = 1;
          }
          return 0;
        }
        if (param_2 == 4) {
          if (param_3 == 0) {
            *(undefined4 *)(lVar1 + 0x1c) = 0;
          }
          else {
            *(undefined4 *)(lVar1 + 0x1c) = 1;
          }
          return 0;
        }
      }
      local_2c = 0xffffffff;
    }
  }
  return local_2c;
}

