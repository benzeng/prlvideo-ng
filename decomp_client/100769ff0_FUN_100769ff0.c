
undefined8 * FUN_100769ff0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 local_38 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  iVar3 = 0;
  while( true ) {
    lVar2 = 0;
    if ((param_2[2] != 0) && (lVar2 = 0, *(int *)(param_2[2] + 4) != 0)) {
      lVar2 = param_2[3];
    }
    iVar1 = FUN_10015d3a0(lVar2);
    if (iVar1 <= iVar3) break;
    lVar2 = 0;
    if ((param_2[2] != 0) && (lVar2 = 0, *(int *)(param_2[2] + 4) != 0)) {
      lVar2 = param_2[3];
    }
    local_38[0] = FUN_10015d330(lVar2,iVar3);
    lVar2 = (**(code **)(*param_2 + 0x68))(param_2,local_38[0]);
    if (0 < lVar2) {
      FUN_10012c6e0(param_1,local_38);
    }
    iVar3 = iVar3 + 1;
  }
  return param_1;
}

