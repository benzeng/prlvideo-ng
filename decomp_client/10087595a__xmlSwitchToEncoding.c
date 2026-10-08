
undefined4 _xmlSwitchToEncoding(long param_1,long param_2)

{
  undefined4 local_2c;
  
  if (param_2 == 0) {
    local_2c = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x38) == 0) {
    FUN_1008734ff(param_1,"xmlSwitchToEncoding : no input\n",0);
    local_2c = 0xffffffff;
  }
  else {
    local_2c = _xmlSwitchInputEncoding(param_1,*(undefined8 *)(param_1 + 0x38),param_2);
    *(undefined4 *)(param_1 + 0x198) = 1;
  }
  return local_2c;
}

