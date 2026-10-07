
undefined4 FUN_10087c490(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  
  uVar2 = 1;
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,&local_20,0);
    if (0 < iVar1) {
      uVar2 = FUN_10087aef0(&DAT_1011c08d0,FUN_10087c3f0,param_1,local_20,iVar1,1);
    }
  }
  return uVar2;
}

