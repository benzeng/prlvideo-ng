
undefined8 * FUN_1003b1cf0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_30[0] = 3;
  FUN_1003bc3f0(param_1,local_30);
  local_34 = 6;
  FUN_1003bc3f0(param_1,&local_34);
  local_38 = 5;
  FUN_1003bc3f0(param_1,&local_38);
  local_3c = 8;
  FUN_1003bc3f0(param_1,&local_3c);
  uVar2 = FUN_1003b0b10(param_2);
  cVar1 = FUN_1003bf640(uVar2);
  if (cVar1 != '\0') {
    local_40 = 0xf;
    FUN_1003bc3f0(param_1,&local_40);
  }
  return param_1;
}

