
undefined1 FUN_100550000(long *param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if ((param_1 != (long *)0x0) && (param_4 == '\0')) {
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,0);
    if (iVar1 < 0) {
      uVar2 = 0;
      FUN_1008e3970("","TransMem",0,"SnapshotDecriptCallback(%u) failed to decrypt (%d)",param_3);
    }
  }
  return uVar2;
}

