
void FUN_1002d94a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] CANCEL, pending %d",param_1 + 0xcf,*(undefined4 *)(param_1 + 8));
  }
  plVar1 = (long *)(param_1 + 0x18);
  plVar6 = *(long **)(param_1 + 0x18);
  if (plVar6 != plVar1) {
    plVar2 = (long *)(param_1 + 0x30);
    do {
      lVar3 = *plVar6;
      plVar4 = (long *)plVar6[1];
      *(long **)(lVar3 + 8) = plVar4;
      *plVar4 = lVar3;
      *plVar6 = 0x112233;
      plVar6[1] = (long)&DAT_00445566;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      if (*(long **)(param_1 + 0x18) == plVar1) {
        lVar3 = *(long *)(param_1 + 0x80);
        plVar4 = *(long **)(param_1 + 0x88);
        *(long **)(lVar3 + 8) = plVar4;
        *plVar4 = lVar3;
        *(long *)(param_1 + 0x80) = param_1 + 0x80;
        *(long *)(param_1 + 0x88) = param_1 + 0x80;
      }
      *(uint *)(plVar6 + 0x8e) = *(uint *)(plVar6 + 0x8e) | 8;
      if (*(int *)((long)plVar6 + 0x464) == 0) {
        if ((long *)*plVar2 == plVar2) {
          lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x28);
          plVar4 = *(long **)(lVar3 + 0x20);
          *(long *)(lVar3 + 0x20) = param_1 + 0x70;
          *(long *)(param_1 + 0x70) = lVar3 + 0x18;
          *(long **)(param_1 + 0x78) = plVar4;
          *plVar4 = param_1 + 0x70;
        }
        puVar5 = *(undefined8 **)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar6;
        *plVar6 = (long)plVar2;
        plVar6[1] = (long)puVar5;
        *puVar5 = plVar6;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
      else {
        FUN_1002c8930();
      }
      plVar6 = (long *)*plVar1;
    } while (plVar6 != plVar1);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}

