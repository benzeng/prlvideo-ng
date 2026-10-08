
undefined8 * FUN_100451a30(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_28[0] = *(undefined8 *)(*(long *)(param_2 + 0x38) + 200);
  FUN_100359270(param_1,local_28);
  local_30 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0xc0);
  FUN_100359270(param_1,&local_30);
  uVar2 = FUN_10044e660(param_2);
  cVar1 = FUN_1003bf590(uVar2);
  if (cVar1 != '\0') {
    local_38 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x48);
    FUN_100359270(param_1,&local_38);
  }
  uVar2 = FUN_10044e660(param_2);
  cVar1 = FUN_1003bf5b0(uVar2);
  if (cVar1 != '\0') {
    local_40 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0xb0);
    FUN_100359270(param_1,&local_40);
  }
  return param_1;
}

