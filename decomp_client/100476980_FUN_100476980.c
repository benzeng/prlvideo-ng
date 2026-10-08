
undefined8 * FUN_100476980(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar2 = FUN_10044e660(param_2);
  cVar1 = FUN_1003bfea0(uVar2);
  if (cVar1 != '\0') {
    local_30[0] = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x70);
    FUN_100359270(param_1,local_30);
    local_38 = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x48);
    FUN_100359270(param_1,&local_38);
  }
  uVar2 = FUN_10044e660(param_2);
  lVar3 = FUN_100458c00(param_2);
  cVar1 = FUN_1003bfee0(uVar2,*(undefined4 *)(lVar3 + 0x68));
  if (cVar1 != '\0') {
    local_40 = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x40);
    FUN_100359270(param_1,&local_40);
    local_48 = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x68);
    FUN_100359270(param_1,&local_48);
  }
  local_50 = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x78);
  FUN_100359270(param_1,&local_50);
  local_58 = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x58);
  FUN_100359270(param_1,&local_58);
  local_60 = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x60);
  FUN_100359270(param_1,&local_60);
  return param_1;
}

