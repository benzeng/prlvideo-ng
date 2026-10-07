
undefined1 FUN_1006afb30(int *param_1,QString *param_2)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 uVar9;
  
  if (*param_1 == 0) {
    uVar9 = 0;
    FUN_1008e3970("","KeyValueDataParser",0,"Error: can\'t clear block with read only mode");
  }
  else {
    plVar5 = *(long **)(param_1 + 2);
    uVar1 = *(uint *)(plVar5 + 4);
    if (uVar1 == 0) {
      uVar9 = 0;
    }
    else {
      uVar4 = qHash(param_2,*(uint *)((long)plVar5 + 0x24));
      uVar2 = (ulong)uVar4 % (ulong)uVar1;
      plVar6 = *(long **)(plVar5[1] + uVar2 * 8);
      if (plVar6 == plVar5) {
        uVar9 = 0;
      }
      else {
        plVar7 = (long *)(plVar5[1] + uVar2 * 8);
        do {
          plVar8 = plVar5;
          if (*(uint *)(plVar6 + 1) == uVar4) {
            cVar3 = operator==(param_2,(QString *)(plVar6 + 2));
            plVar5 = (long *)*plVar7;
            plVar8 = *(long **)(param_1 + 2);
            plVar6 = plVar5;
            if (cVar3 != '\0') break;
          }
          plVar5 = plVar8;
          plVar7 = plVar6;
          plVar6 = (long *)*plVar7;
          plVar8 = plVar5;
        } while (plVar6 != plVar5);
        if (plVar5 == plVar8) {
          uVar9 = 0;
        }
        else {
          plVar6 = (long *)FUN_1006b16c0(param_1 + 2,param_2);
          plVar5 = *(long **)(*(long *)(*plVar6 + 0x10) + 0x70);
          if (plVar5 == (long *)0x0) {
            uVar9 = 1;
          }
          else if (*(long *)(*(long *)(*plVar6 + 0x10) + 0x78) == 0) {
            uVar9 = 1;
          }
          else {
            uVar9 = 0;
            do {
              plVar5 = (long *)*plVar5;
              FUN_1006af8d0();
              if (*(long *)(*(long *)(*plVar6 + 0x10) + 0x70) == 0) {
                return 1;
              }
            } while (plVar5 != (long *)0x0);
          }
        }
      }
    }
  }
  return uVar9;
}

