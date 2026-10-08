
undefined8 FUN_100c4a1f0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = FUN_100c49fe0(*(undefined8 *)(param_2 + 0x20),&local_20);
  uVar2 = 0;
  if (0 < iVar1) {
    uVar2 = FUN_100bf6fe0(6);
    iVar1 = FUN_100c7b960(param_1,uVar2,5,0,local_20,iVar1);
    uVar2 = 1;
    if (iVar1 == 0) {
      FUN_100bf3910(local_20);
      uVar2 = 0;
    }
  }
  return uVar2;
}

