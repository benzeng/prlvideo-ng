
int FUN_1004e6160(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *local_48;
  
  uVar1 = *(uint *)((long)param_1 + 0x2c);
  iVar2 = (**(code **)(*param_1 + 0x18))();
  if ((iVar2 != 2) ||
     (iVar2 = FUN_1004e30b0(param_1[4],uVar1 & 0x100,(int)param_1[6],
                            *(undefined4 *)((long)param_1 + 0x34)), iVar2 == 0)) {
    local_48 = param_1 + 4;
    iVar2 = 0;
    if ((uVar1 & 0x100) != 0) {
      iVar2 = param_6;
    }
    if (param_6 == 0) {
      iVar2 = param_6;
    }
    iVar2 = FUN_1004e38b0(param_1[4],param_2,param_3,param_4,param_5,iVar2);
    iVar3 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar3 == 2) {
      FUN_1004e32f0(*local_48);
    }
  }
  return iVar2;
}

