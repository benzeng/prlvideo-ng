
undefined8 * FUN_10046ba00(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar2 = FUN_10044e660(param_2);
  lVar3 = FUN_100458c00(param_2);
  cVar1 = FUN_1003bf970(uVar2,*(undefined4 *)(lVar3 + 0x68));
  if (cVar1 != '\0') {
    FUN_100359270(param_1,*(long *)(param_2 + 0x68) + 0x80);
  }
  local_30[0] = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x20);
  FUN_100359270(param_1,local_30);
  local_38 = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x28);
  FUN_100359270(param_1,&local_38);
  return param_1;
}

