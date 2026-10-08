
void FUN_100cb83b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_100bf7220(*param_2);
  uVar3 = FUN_100cb7460(param_2);
  uVar2 = FUN_100bf7220(uVar3);
  uVar3 = 0;
  if (iVar1 == 0x16) {
    uVar3 = *(undefined8 *)(param_2[1] + 8);
  }
  FUN_100c87330(param_1,param_2,param_3,param_4,iVar1,uVar2,uVar3,&DAT_102258e28);
  return;
}

