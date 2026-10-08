
undefined4 FUN_100c577a0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  
  uVar2 = 1;
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x58))(param_1,0,&local_20,0);
    if (0 < iVar1) {
      uVar2 = FUN_100c560f0(&DAT_102316318,FUN_100c57800,param_1,local_20,iVar1,0);
    }
  }
  return uVar2;
}

