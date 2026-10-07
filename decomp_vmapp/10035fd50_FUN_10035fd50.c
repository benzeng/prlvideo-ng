
void FUN_10035fd50(long param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x24) == 1) {
    bVar7 = *(char *)(param_1 + 0xb4) == '\0';
  }
  else {
    bVar7 = false;
  }
  lVar3 = *(long *)(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0x48);
  iVar5 = (int)((ulong)(lVar4 - lVar3) >> 3);
  if (iVar5 != 0) {
    uVar6 = 0;
    do {
      if (uVar6 < (ulong)(lVar4 - lVar3 >> 3)) {
        plVar1 = *(long **)(lVar3 + uVar6 * 8);
        if ((bool)(plVar1 != (long *)0x0 & bVar7)) {
          (*DAT_1011c5768)(*(undefined4 *)((long)plVar1 + 0x14),*(undefined4 *)((long)plVar1 + 0xc))
          ;
          (*DAT_1011c7728)(0x8c2a,(int)plVar1[3],0);
          (*DAT_1011c5768)(*(undefined4 *)((long)plVar1 + 0x14),0);
        }
        else if (plVar1 == (long *)0x0) goto LAB_10035fe1e;
        (**(code **)(*plVar1 + 8))(plVar1);
      }
LAB_10035fe1e:
      if (iVar5 + -1 == (int)uVar6) goto code_r0x00010035fe23;
      uVar6 = uVar6 + 1;
      lVar3 = *(long *)(param_1 + 0x40);
      lVar4 = *(long *)(param_1 + 0x48);
    } while( true );
  }
LAB_10035fe2b:
  if (lVar4 != lVar3) {
    *(ulong *)(param_1 + 0x48) = (~((lVar4 + -8) - lVar3) & 0xfffffffffffffff8U) + lVar4;
  }
  pvVar2 = *(void **)(param_1 + 0x58);
  if (pvVar2 != (void *)0x0) {
    FUN_10038d390(pvVar2);
    operator_delete(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
code_r0x00010035fe23:
  lVar3 = *(long *)(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0x48);
  goto LAB_10035fe2b;
}

