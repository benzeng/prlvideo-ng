
undefined1 FUN_100db4fe0(long *param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = FUN_100db4670(param_1,0);
  if (lVar2 == 0) {
    uVar1 = 0;
    FUN_100df99c0("","AbstractFile",0,"Can\'t open handle at IsValid()");
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1[2] + 0x98))();
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return uVar1;
}

