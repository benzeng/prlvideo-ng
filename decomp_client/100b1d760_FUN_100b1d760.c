
undefined8 FUN_100b1d760(long *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  undefined4 in_EAX;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  lVar4 = *(long *)(lVar1 + 0x38 + (long)param_1);
  uVar5 = (ulong)(param_2 - *(uint *)(param_1 + 0x3123)) * lVar4;
  uVar6 = 0;
  lVar4 = (lVar4 * (ulong)*(uint *)(param_1 + 0x3123) + uVar5) -
          uVar5 % (ulong)(uint)((int)param_1[0x30a4] + (int)param_1[0x3121]);
  if (lVar4 != param_1[0x3122]) {
    plVar2 = *(long **)(lVar1 + 8 + (long)param_1);
    cVar3 = (**(code **)(*plVar2 + 0x40))
                      (plVar2,param_1[0x3120],(int)param_1[0x3121],&stack0xffffffffffffffdc,lVar4,
                       lVar1,in_EAX);
    if (cVar3 == '\0') {
      FUN_100df99c0("","dimg",0,"Error reading bitmap [%llu:%u]",lVar4,(int)param_1[0x3121]);
      uVar6 = 0x80021029;
    }
    else {
      param_1[0x3122] = lVar4;
    }
  }
  return uVar6;
}

