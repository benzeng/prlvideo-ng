
undefined8
FUN_100c71a40(undefined8 *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
             undefined8 param_6)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((param_1 != (undefined8 *)0x0) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) &&
     (*(code **)(piVar1 + 0x30) != (code *)0x0)) {
    if ((param_2 != -1) && (*piVar1 != param_2)) {
      return 0xffffffff;
    }
    if (*(uint *)(param_1 + 4) == 0) {
      uVar2 = 0x95;
      uVar3 = 0x185;
    }
    else {
      if ((param_3 == 0xffffffff) || ((*(uint *)(param_1 + 4) & param_3) != 0)) {
        uVar2 = (**(code **)(piVar1 + 0x30))(param_1,param_4,param_5,param_6);
        if ((int)uVar2 != -2) {
          return uVar2;
        }
        uVar2 = 0x191;
        goto LAB_100c71ab6;
      }
      uVar2 = 0x94;
      uVar3 = 0x18a;
    }
    FUN_100c62ee0(6,0x89,uVar2,"pmeth_lib.c",uVar3);
    return 0xffffffff;
  }
  uVar2 = 0x17e;
LAB_100c71ab6:
  FUN_100c62ee0(6,0x89,0x93,"pmeth_lib.c",uVar2);
  return 0xfffffffe;
}

