
int FUN_1000c25e0(long *param_1,int param_2,short param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (((param_2 == 0) || (iVar2 = FUN_1007da300("vm.debug",0), iVar2 != 0)) &&
     (iVar2 = FUN_1000c23f0(param_1), iVar2 != 0)) {
    if (param_3 != 0) {
      *(short *)(param_1 + 8) = param_3;
    }
    pcVar1 = *(code **)(*param_1 + 0xb0);
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    iVar2 = (*pcVar1)(param_1,uVar3,(short)param_1[8]);
    if (iVar2 != 0) {
      if (*(int *)((long)param_1 + 0x34) != 0) {
        return iVar2;
      }
      uVar4 = (undefined2)param_1[8];
      lVar6 = param_1[5];
      uVar5 = 1;
      goto LAB_1000c267e;
    }
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x20))();
    param_1[4] = 0;
  }
  if (*(int *)((long)param_1 + 0x34) != 0) {
    return 0;
  }
  lVar6 = param_1[5];
  iVar2 = 0;
  uVar5 = 0;
  uVar4 = 0;
LAB_1000c267e:
  FUN_1000b4150(lVar6,uVar5,uVar4);
  return iVar2;
}

