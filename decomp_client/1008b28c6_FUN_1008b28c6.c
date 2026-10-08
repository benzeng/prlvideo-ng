
undefined4 FUN_1008b28c6(char param_1)

{
  undefined4 local_10;
  
  if ((((param_1 < '0') || ('9' < param_1)) && ((param_1 < 'a' || ('f' < param_1)))) &&
     ((param_1 < 'A' || ('F' < param_1)))) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

