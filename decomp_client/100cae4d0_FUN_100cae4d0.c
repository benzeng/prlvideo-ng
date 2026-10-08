
undefined8 FUN_100cae4d0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  iVar2 = FUN_100c76820(*param_1,1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar5 = param_1[1];
  uVar4 = FUN_100c92460(param_2);
  iVar2 = FUN_100c7c770(uVar5,uVar4);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_100c8b2f0(*(undefined8 *)(param_1[1] + 8));
  uVar5 = FUN_100c926a0(param_2);
  lVar6 = FUN_100c8b1b0(uVar5);
  *(long *)(param_1[1] + 8) = lVar6;
  if (lVar6 == 0) {
    return 0;
  }
  FUN_100bf2cf0(param_3 + 8,1,10,"pk7_lib.c",0x179);
  param_1[7] = param_3;
  uVar5 = param_1[2];
  uVar3 = FUN_100c6fc30(param_4);
  uVar4 = FUN_100bf6fe0(uVar3);
  FUN_100c7aec0(uVar5,uVar4,5,0);
  if ((*(long *)(param_3 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(long *)(param_3 + 0x10) + 0xa8), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_3,1,0,param_1);
    if (0 < iVar2) {
      return 1;
    }
    if (iVar2 != -2) {
      uVar5 = 0x93;
      uVar4 = 0x187;
      goto LAB_100cae5f6;
    }
  }
  uVar5 = 0x94;
  uVar4 = 0x18c;
LAB_100cae5f6:
  FUN_100c62ee0(0x21,0x81,uVar5,"pk7_lib.c",uVar4);
  return 0;
}

