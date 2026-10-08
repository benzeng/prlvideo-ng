
void FUN_100acb230(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 local_38 [32];
  
  FUN_100ae5270(local_38,2,param_2,param_3,param_4);
  plVar2 = (long *)FUN_100ae5070(local_38);
  uVar3 = 0;
  if (*plVar2 != 0) {
    uVar3 = *(undefined8 *)(*plVar2 + 0x10);
  }
  uVar1 = FUN_100ae5080(local_38);
  FUN_100a4a170(param_1 + 0x10,uVar3,uVar1);
  FUN_100ae5370(local_38);
  return;
}

