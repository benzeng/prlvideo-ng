
undefined8 FUN_100c77720(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_38;
  long local_30;
  
  local_30 = 0;
  iVar2 = FUN_100c77790(param_3,&local_30);
  lVar1 = local_30;
  uVar3 = 0;
  if (-1 < iVar2) {
    local_38 = *(undefined8 *)(local_30 + 8);
    uVar3 = (*param_2)(param_4,&local_38,(long)iVar2);
  }
  if (lVar1 != 0) {
    FUN_100c57f20(lVar1);
  }
  return uVar3;
}

