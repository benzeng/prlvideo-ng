
undefined8 FUN_10068e620(long *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 local_34;
  
  lVar6 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x160))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
  uVar5 = FUN_100697940(param_1[4]);
  uVar10 = 0;
  iVar9 = (int)((ulong)(lVar6 - *(long *)(param_1[4] + 0x20)) % (ulong)uVar5);
  if (iVar9 != 0) {
    uVar5 = uVar5 - iVar9;
    uVar11 = (ulong)uVar5;
    pvVar7 = _valloc(uVar11);
    uVar10 = 0x80000002;
    if (pvVar7 != (void *)0x0) {
      ___bzero(pvVar7,uVar11);
      local_34 = 0;
      plVar1 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
      cVar4 = (**(code **)(*plVar1 + 0x48))(plVar1,pvVar7,uVar11,&local_34,lVar6);
      _free(pvVar7);
      uVar10 = 0x80021027;
      if (cVar4 != '\0') {
        uVar8 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x160))
                          ((long)param_1 + *(long *)(*param_1 + -0x18));
        uVar10 = 0;
        FUN_1008e3970("Reclaim","dimg",0,"File size aligned: was %llu, align %u now %llu",lVar6,
                      uVar5,uVar8);
        lVar6 = (long)param_1 + *(long *)(*param_1 + -0x18);
        lVar2 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18));
        pcVar3 = *(code **)(lVar2 + 0x188);
        uVar8 = (**(code **)(lVar2 + 0x160))(lVar6);
        (*pcVar3)(lVar6,uVar8);
      }
    }
  }
  return uVar10;
}

