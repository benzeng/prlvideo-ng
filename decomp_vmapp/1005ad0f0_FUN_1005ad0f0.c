
void FUN_1005ad0f0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  
  uVar1 = *(uint *)((long)param_1 + 0x1c);
  plVar7 = *(long **)(param_2 + 0x10);
  if (plVar7 == *(long **)(param_2 + 0x18)) {
    lVar5 = *(long *)(param_2 + 0x20);
  }
  else {
    lVar2 = param_1[2];
    do {
      uVar4 = (**(code **)(*(long *)*param_1 + 0x308))((long *)*param_1,(int)plVar7[5]);
      lVar5 = *(long *)(param_2 + 0x20);
      FUN_100591740(uVar4,FUN_1005ac9a0,lVar5,lVar5 + 0x34,lVar5 + 0x10,
                    *(undefined4 *)(lVar5 + 0x30),(int)plVar7[5],
                    ((param_2 - lVar2) * 0x40 & 0xffffffff000U) * (ulong)uVar1,0x1000);
      lVar5 = *(long *)(param_2 + 0x20);
      if (*(int *)(lVar5 + 0x38) < 0) break;
      plVar3 = (long *)plVar7[1];
      plVar6 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar8 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar8);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    } while (plVar7 != *(long **)(param_2 + 0x18));
  }
  *(undefined1 *)(lVar5 + 0x3c) = 1;
  return;
}

