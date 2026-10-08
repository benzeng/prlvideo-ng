
undefined8 * FUN_1000e52d0(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  puVar1 = (uint *)*param_2;
  if (*puVar1 < 2) {
    puVar2 = (undefined8 *)QListData::insert((int)param_2);
  }
  else {
    puVar2 = (undefined8 *)
             FUN_1000e7b60(param_2,(ulong)(*param_3 - (long)(puVar1 + (ulong)puVar1[2] * 2 + 4)) >>
                                   3 & 0xffffffff,1);
  }
  pvVar3 = operator_new(0xb0);
  FUN_1000e6ff0(pvVar3,param_4);
  *puVar2 = pvVar3;
  *param_1 = puVar2;
  return param_1;
}

