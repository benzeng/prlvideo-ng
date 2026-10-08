
undefined8 FUN_100c423e0(undefined8 param_1,int param_2,long param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  long *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  long *local_30;
  undefined4 local_24;
  
  if (param_2 == 5) {
    if (param_3 != 0) {
      return 1;
    }
    FUN_100cb9660(param_4,0,0,&local_48,&local_50);
    if (local_48 == (long *)0x0) {
      return 0xffffffff;
    }
    if (*local_48 == 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_100bf7220();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = FUN_100c6d870(param_1);
    iVar1 = FUN_100bf8920(&local_3c,iVar1,uVar2);
  }
  else {
    if (param_2 == 3) {
      *param_4 = 0x40;
      return 2;
    }
    if (param_2 != 1) {
      return 0xfffffffe;
    }
    if (param_3 != 0) {
      return 1;
    }
    FUN_100cae7f0(param_4,0,&local_30,&local_38);
    if (local_30 == (long *)0x0) {
      return 0xffffffff;
    }
    if (*local_30 == 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_100bf7220();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = FUN_100c6d870(param_1);
    iVar1 = FUN_100bf8920(&local_24,iVar1,uVar2);
    local_50 = local_38;
    local_3c = local_24;
  }
  uVar3 = 0xffffffff;
  if (iVar1 != 0) {
    uVar3 = FUN_100bf6fe0(local_3c);
    FUN_100c7aec0(local_50,uVar3,0xffffffff,0);
    uVar3 = 1;
  }
  return uVar3;
}

