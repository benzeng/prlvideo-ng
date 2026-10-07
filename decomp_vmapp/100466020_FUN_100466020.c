
void FUN_100466020(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_1004666b0();
  FUN_100466960(param_1,param_2,lVar1);
  uVar2 = FUN_100465be0(lVar1);
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  if (*(int *)(lVar1 + 4) == 4) {
    FUN_1004664b0(param_1,lVar1);
    return;
  }
  return;
}

