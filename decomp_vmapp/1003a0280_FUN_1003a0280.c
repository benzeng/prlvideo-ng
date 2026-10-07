
undefined4
FUN_1003a0280(long param_1,uint param_2,undefined4 param_3,float *param_4,undefined4 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),"// ");
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = FUN_1003a0420(param_1,param_2);
  FUN_10038e8e0(uVar1,"%s ",uVar6);
  FUN_1003a08c0(param_1,*(undefined8 *)(param_1 + 0x10),param_3,0);
  uVar4 = param_2 & 0xffff;
  if (uVar4 == 0x2f) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),", %d\n",*param_4);
  }
  else if (uVar4 == 0x30) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),", %d, %d, %d, %d\n",*param_4,param_4[1],
                  param_4[2],param_4[3]);
  }
  else if (uVar4 == 0x51) {
    FUN_10038e8e0((double)*param_4,(double)param_4[1],(double)param_4[2],(double)param_4[3],
                  *(undefined8 *)(param_1 + 0x10),", %.10g, %.10g, %.10g, %.10g\n");
  }
  else {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),", ???\n");
  }
  plVar2 = *(long **)(param_1 + 0x20);
  uVar5 = 0;
  if (plVar2 != (long *)0x0) {
    puVar3 = *(uint **)(param_1 + 0x10);
    uVar4 = *puVar3;
    uVar5 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_3,param_4,param_5);
    if (uVar4 < *puVar3) {
      FUN_10038e8e0(puVar3,"\n");
    }
  }
  return uVar5;
}

