
void FUN_100297280(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  
  lVar3 = *(long *)(param_2 + 0x38);
  if ((*(byte *)(param_2 + 0x31) & 0x10) != 0) {
    FUN_1004033b0(param_1 + 0x137b8);
  }
  plVar1 = (long *)(lVar3 + 0x928);
  plVar7 = *(long **)(lVar3 + 0x928);
  while (plVar7 != plVar1) {
    lVar4 = *plVar7;
    plVar5 = (long *)plVar7[1];
    *(long **)(lVar4 + 8) = plVar5;
    *plVar5 = lVar4;
    *plVar7 = (long)plVar7;
    plVar7[1] = (long)plVar7;
    uVar6 = *(undefined8 *)(param_1 + 0x13800);
    uVar2 = *(uint *)(lVar3 + 0x908);
    *(uint *)((long)plVar7 + -4) = uVar2;
    if ((uVar2 & 0xc) == 0) {
      iVar8 = (int)plVar7[-1] * (int)uVar6;
      *(undefined2 *)(plVar7 + 4) = 0x40;
    }
    else {
      *(byte *)(plVar7 + 4) = *(byte *)(plVar7 + 4) | 1;
      *(byte *)((long)plVar7 + 0x21) = *(byte *)((long)plVar7 + 0x21) | 0x40;
      iVar8 = 0;
    }
    (*(code *)plVar7[7])(plVar7 + -3,iVar8);
    plVar7 = (long *)*plVar1;
  }
  *(long **)(lVar3 + 0x928) = plVar1;
  *(long **)(lVar3 + 0x930) = plVar1;
  lVar4 = *(long *)(lVar3 + 0x918);
  plVar1 = *(long **)(lVar3 + 0x920);
  *(long **)(lVar4 + 8) = plVar1;
  *plVar1 = lVar4;
  lVar4 = *(long *)(param_1 + 0x13770);
  *(long *)(lVar4 + 8) = lVar3 + 0x918;
  *(long *)(lVar3 + 0x918) = lVar4;
  *(long *)(lVar3 + 0x920) = param_1 + 0x13770;
  *(long *)(param_1 + 0x13770) = lVar3 + 0x918;
  return;
}

