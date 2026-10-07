
undefined8
FUN_1003f13b0(long param_1,undefined8 param_2,uint param_3,int param_4,uint param_5,uint *param_6)

{
  long *plVar1;
  uint in_EAX;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uStack_38;
  
  uStack_38 = (ulong)in_EAX;
  uVar2 = 0;
  if (1 < (ulong)*(uint *)(param_1 + 0x18)) {
    piVar4 = (int *)(param_1 + 0x5c);
    uVar2 = 0;
    do {
      if (param_3 <= (uint)(*piVar4 + piVar4[-3])) break;
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 0x10;
    } while (uVar2 < *(uint *)(param_1 + 0x18));
  }
  lVar3 = (uVar2 & 0xffffffff) * 0x40;
  uVar6 = *(uint *)(param_1 + 0x38 + lVar3);
  if (uVar6 == param_5) {
    plVar1 = *(long **)(param_1 + 0x40 + lVar3);
    uVar5 = 0xffffffff;
    if (plVar1 != (long *)0x0) {
      uVar6 = 0x100000;
      if (param_4 * param_5 < 0x100001) {
        uVar6 = param_4 * param_5;
      }
      uVar5 = 0;
      (**(code **)(*plVar1 + 0x60))
                (plVar1,(ulong)param_5 * ((ulong)param_3 - *(long *)(param_1 + 0x50 + lVar3)),0);
      (**(code **)(*plVar1 + 0x30))(plVar1,param_2,uVar6,(long)&uStack_38 + 4);
      if (param_6 != (uint *)0x0) {
        *param_6 = uStack_38._4_4_;
      }
    }
  }
  else {
    uVar5 = 0xfffffff1;
    if (param_6 != (uint *)0x0) {
      *param_6 = uVar6;
    }
  }
  return uVar5;
}

