
long * FUN_100c54150(long *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  bVar1 = false;
  if (param_1 == (long *)0x0) {
    param_1 = (long *)FUN_100c53e80(param_3);
    if (param_1 == (long *)0x0) {
      FUN_100c62ee0(0x25,0x70,0x41,"dso_lib.c",0xc5);
      return (long *)0x0;
    }
    *(undefined4 *)((long)param_1 + 0x14) = param_4;
    bVar1 = true;
  }
  if (param_1[7] != 0) {
    uVar3 = 0x6e;
    uVar4 = 0xd2;
    goto LAB_100c54287;
  }
  if (param_2 != 0) {
    iVar2 = FUN_100c54340(param_1,param_2);
    if (iVar2 == 0) {
      uVar3 = 0x70;
      uVar4 = 0xdb;
      goto LAB_100c54287;
    }
    if (param_1[7] != 0) {
      if (*(code **)(*param_1 + 8) == (code *)0x0) {
        uVar3 = 0x6c;
        uVar4 = 0xe4;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 8))(param_1);
        if (iVar2 != 0) {
          return param_1;
        }
        uVar3 = 0x67;
        uVar4 = 0xe8;
      }
      goto LAB_100c54287;
    }
  }
  uVar3 = 0x6f;
  uVar4 = 0xe0;
LAB_100c54287:
  FUN_100c62ee0(0x25,0x70,uVar3,"dso_lib.c",uVar4);
  if (bVar1) {
    FUN_100c53fe0(param_1);
    return (long *)0x0;
  }
  return (long *)0x0;
}

