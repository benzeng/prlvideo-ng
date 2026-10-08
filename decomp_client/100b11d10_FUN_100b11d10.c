
undefined8 FUN_100b11d10(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  bool bVar6;
  long *plVar7;
  bool bVar8;
  
  bVar6 = false;
  if ((long *)*param_2 != param_2 + 1) {
    bVar6 = false;
    plVar5 = (long *)*param_2;
    do {
      iVar1 = *(int *)((long)plVar5 + 0x44);
      if (((iVar1 != 5) && (iVar1 != 0xf)) && (iVar1 != 0x85)) {
        plVar3 = (long *)*param_1;
        if (plVar3 != param_1 + 1) {
          do {
            if ((plVar3[6] == plVar5[6]) && (plVar3[7] == plVar5[7])) goto LAB_100b11df0;
            plVar7 = plVar3;
            plVar2 = (long *)plVar3[1];
            if ((long *)plVar3[1] == (long *)0x0) {
              do {
                plVar3 = (long *)plVar7[2];
                bVar8 = (long *)*plVar3 != plVar7;
                plVar7 = plVar3;
              } while (bVar8);
            }
            else {
              do {
                plVar3 = plVar2;
                plVar2 = (long *)*plVar3;
              } while ((long *)*plVar3 != (long *)0x0);
            }
          } while (plVar3 != param_1 + 1);
        }
        uVar4 = FUN_100b10730(param_1,(int)plVar5[4],plVar5 + 5);
        bVar6 = true;
        if ((int)uVar4 < 0) {
          return uVar4;
        }
      }
LAB_100b11df0:
      plVar3 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar5[2];
          bVar8 = (long *)*plVar7 != plVar5;
          plVar5 = plVar7;
        } while (bVar8);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      plVar5 = plVar7;
    } while (plVar7 != param_2 + 1);
  }
  uVar4 = 0x80021065;
  if (!bVar6) {
    uVar4 = 0;
  }
  return uVar4;
}

