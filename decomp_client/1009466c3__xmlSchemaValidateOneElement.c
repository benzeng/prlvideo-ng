
undefined4 _xmlSchemaValidateOneElement(long param_1,long param_2)

{
  undefined4 local_1c;
  
  if (((param_1 == 0) || (param_2 == 0)) || (*(int *)(param_2 + 8) != 1)) {
    local_1c = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    local_1c = 0xffffffff;
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x40);
    *(long *)(param_1 + 0x68) = param_2;
    *(long *)(param_1 + 0x90) = param_2;
    local_1c = FUN_1009465fe(param_1);
  }
  return local_1c;
}

