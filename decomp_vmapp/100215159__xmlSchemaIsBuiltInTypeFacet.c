
undefined4 _xmlSchemaIsBuiltInTypeFacet(int *param_1,int param_2)

{
  undefined4 local_1c;
  
  if (param_1 == (int *)0x0) {
    local_1c = 0xffffffff;
  }
  else if (*param_1 == 1) {
    switch(param_1[0x28]) {
    default:
      local_1c = 0;
      break;
    case 1:
    case 0x15:
    case 0x1c:
    case 0x1d:
    case 0x2b:
    case 0x2c:
      if (((param_2 == 0x3f1) || (param_2 == 0x3f3)) ||
         ((param_2 == 0x3f2 || (((param_2 == 0x3ee || (param_2 == 0x3ef)) || (param_2 == 0x3f0))))))
      {
        local_1c = 1;
      }
      else {
        local_1c = 0;
      }
      break;
    case 3:
      if (((param_2 == 0x3ec) || (param_2 == 0x3ed)) ||
         (((param_2 == 0x3ee || (((param_2 == 0x3f0 || (param_2 == 0x3ef)) || (param_2 == 0x3ea))))
          || (((param_2 == 0x3eb || (param_2 == 1000)) || (param_2 == 0x3e9)))))) {
        local_1c = 1;
      }
      else {
        local_1c = 0;
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      if ((((param_2 == 0x3ee) || (param_2 == 0x3ef)) || (param_2 == 0x3f0)) ||
         (((param_2 == 0x3ea || (param_2 == 0x3eb)) || ((param_2 == 1000 || (param_2 == 0x3e9))))))
      {
        local_1c = 1;
      }
      else {
        local_1c = 0;
      }
      break;
    case 0xf:
      if ((param_2 == 0x3ee) || (param_2 == 0x3f0)) {
        local_1c = 1;
      }
      else {
        local_1c = 0;
      }
    }
  }
  else {
    local_1c = 0xffffffff;
  }
  return local_1c;
}

