
undefined1 FUN_100db4a00(long *param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  uVar1 = 1;
  if (param_1[2] != 0) {
    lVar2 = FUN_100db4670(param_1,0);
    if (lVar2 == 0) {
      uVar1 = 0;
      FUN_100df99c0("","AbstractFile",0,"Can\'t open handle at Close()");
    }
    else {
      uVar1 = (**(code **)(*(long *)param_1[2] + 0x28))();
      (**(code **)(*param_1 + 0xd8))(param_1);
    }
  }
  return uVar1;
}

