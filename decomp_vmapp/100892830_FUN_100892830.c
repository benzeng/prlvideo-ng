
undefined4 FUN_100892830(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  if (param_3 < *(int *)(**(long **)(param_1 + 0x30) + 8)) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_10088a9c0(*(long **)(param_1 + 0x30),param_2,&local_c);
    uVar2 = 0xffffffff;
    if (0 < iVar1) {
      uVar2 = local_c;
    }
  }
  return uVar2;
}

