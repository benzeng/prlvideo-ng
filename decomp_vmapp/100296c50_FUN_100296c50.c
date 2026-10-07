
void FUN_100296c50(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  
  plVar1 = (long *)(param_2 + 0x928);
  plVar5 = *(long **)(param_2 + 0x928);
  if (plVar5 != plVar1) {
    do {
      lVar3 = *plVar5;
      plVar4 = (long *)plVar5[1];
      *(long **)(lVar3 + 8) = plVar4;
      *plVar4 = lVar3;
      *plVar5 = (long)plVar5;
      plVar5[1] = (long)plVar5;
      iVar6 = *(int *)(param_1 + 0x13800);
      uVar2 = *(uint *)(param_2 + 0x908);
      *(uint *)((long)plVar5 + -4) = uVar2;
      iVar6 = (int)plVar5[-1] * iVar6;
      if ((uVar2 & 0xc) != 0) {
        iVar6 = 0;
      }
      (*(code *)plVar5[7])(plVar5 + -3,iVar6);
      plVar5 = *(long **)(param_2 + 0x928);
    } while (plVar5 != plVar1);
  }
  *(long **)(param_2 + 0x928) = plVar1;
  *(long **)(param_2 + 0x930) = plVar1;
  lVar3 = *(long *)(param_2 + 0x918);
  plVar1 = *(long **)(param_2 + 0x920);
  *(long **)(lVar3 + 8) = plVar1;
  *plVar1 = lVar3;
  lVar3 = *(long *)(param_1 + 0x13770);
  *(long *)(lVar3 + 8) = param_2 + 0x918;
  *(long *)(param_2 + 0x918) = lVar3;
  *(long *)(param_2 + 0x920) = param_1 + 0x13770;
  *(long *)(param_1 + 0x13770) = param_2 + 0x918;
  return;
}

