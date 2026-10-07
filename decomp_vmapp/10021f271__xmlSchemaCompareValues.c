
undefined4 _xmlSchemaCompareValues(int *param_1,int *param_2)

{
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    local_2c = 0xfffffffe;
  }
  else {
    if (*param_1 == 1) {
      local_10 = 1;
    }
    else if (*param_1 == 2) {
      local_10 = 2;
    }
    else {
      local_10 = 3;
    }
    if (*param_2 == 1) {
      local_c = 1;
    }
    else if (*param_1 == 2) {
      local_c = 2;
    }
    else {
      local_c = 3;
    }
    local_2c = FUN_10021eb28(*param_1,param_1,0,local_10,*param_2,param_2,0,local_c);
  }
  return local_2c;
}

