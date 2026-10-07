
undefined4 FUN_10087c830(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  
  uVar2 = 1;
  if (*(code **)(param_1 + 0x60) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x60))(param_1,0,&local_20,0);
    if (0 < iVar1) {
      uVar2 = FUN_10087aef0(&DAT_1011c08e0,FUN_10087c890,param_1,local_20,iVar1,0);
    }
  }
  return uVar2;
}

