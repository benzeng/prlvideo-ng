
undefined8 FUN_100c549e0(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    FUN_100c62ee0(0x26,0x6c,0x43,"eng_lib.c",0x70);
    uVar3 = 0;
  }
  else {
    piVar1 = (int *)(param_1 + 0xac);
    if (param_2 == 0) {
      iVar2 = *piVar1 + -1;
      *piVar1 = iVar2;
    }
    else {
      iVar2 = FUN_100bf2cf0(piVar1,0xffffffff,0x1e,"eng_lib.c",0x74);
    }
    uVar3 = 1;
    if (iVar2 < 1) {
      FUN_100c57990(param_1);
      FUN_100c57c20(param_1);
      if (*(code **)(param_1 + 0x68) != (code *)0x0) {
        (**(code **)(param_1 + 0x68))(param_1);
      }
      FUN_100bf51c0(9,param_1,param_1 + 0xb8);
      FUN_100bf3910(param_1);
    }
  }
  return uVar3;
}

