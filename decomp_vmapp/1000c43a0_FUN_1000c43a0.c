
void FUN_1000c43a0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = 0;
  lVar5 = 0;
  do {
    plVar6 = *(long **)(param_1 + 0x38 + lVar5 * 8);
    if (plVar6 != (long *)0x0) {
      if (plVar6[2] != 0) {
        lVar1 = *plVar6;
        plVar4 = (long *)plVar6[1];
        *(undefined8 *)(*plVar4 + 8) = *(undefined8 *)(lVar1 + 8);
        **(long **)(lVar1 + 8) = *plVar4;
        plVar6[2] = 0;
        while (plVar4 != plVar6) {
          plVar3 = (long *)plVar4[1];
          operator_delete(plVar4);
          plVar4 = plVar3;
        }
      }
      operator_delete(plVar6);
      *(undefined8 *)(param_1 + 0x38 + lVar5 * 8) = 0;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x20);
  lVar5 = 0;
  do {
    plVar6 = *(long **)(param_1 + 0x138 + lVar7 * 8);
    if (plVar6 != (long *)0x0) {
      if (plVar6[2] != 0) {
        lVar1 = *plVar6;
        plVar4 = (long *)plVar6[1];
        *(undefined8 *)(*plVar4 + 8) = *(undefined8 *)(lVar1 + 8);
        **(long **)(lVar1 + 8) = *plVar4;
        plVar6[2] = 0;
        while (plVar4 != plVar6) {
          plVar3 = (long *)plVar4[1];
          operator_delete(plVar4);
          plVar4 = plVar3;
        }
      }
      operator_delete(plVar6);
      *(undefined8 *)(param_1 + 0x138 + lVar7 * 8) = 0;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x20);
  lVar7 = 0;
  do {
    plVar6 = *(long **)(param_1 + 0x238 + lVar5 * 8);
    if (plVar6 != (long *)0x0) {
      if (plVar6[2] != 0) {
        lVar1 = *plVar6;
        plVar4 = (long *)plVar6[1];
        *(undefined8 *)(*plVar4 + 8) = *(undefined8 *)(lVar1 + 8);
        **(long **)(lVar1 + 8) = *plVar4;
        plVar6[2] = 0;
        while (plVar4 != plVar6) {
          plVar3 = (long *)plVar4[1];
          operator_delete(plVar4);
          plVar4 = plVar3;
        }
      }
      operator_delete(plVar6);
      *(undefined8 *)(param_1 + 0x238 + lVar5 * 8) = 0;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x20);
  lVar5 = 0;
  do {
    plVar6 = *(long **)(param_1 + 0x338 + lVar7 * 8);
    if (plVar6 != (long *)0x0) {
      if (plVar6[2] != 0) {
        lVar1 = *plVar6;
        plVar4 = (long *)plVar6[1];
        *(undefined8 *)(*plVar4 + 8) = *(undefined8 *)(lVar1 + 8);
        **(long **)(lVar1 + 8) = *plVar4;
        plVar6[2] = 0;
        while (plVar4 != plVar6) {
          plVar3 = (long *)plVar4[1];
          operator_delete(plVar4);
          plVar4 = plVar3;
        }
      }
      operator_delete(plVar6);
      *(undefined8 *)(param_1 + 0x338 + lVar7 * 8) = 0;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x20);
  do {
    *(undefined4 *)(param_1 + 0x438 + lVar5 * 4) = 0;
    plVar6 = *(long **)(param_1 + 0x18 + lVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar4 = (long *)plVar6[1];
      plVar3 = plVar4;
      if (plVar4 == plVar6) {
LAB_1000c4605:
        if (plVar6[2] != 0) {
          lVar7 = *plVar6;
          plVar3 = (long *)plVar6[1];
          *(undefined8 *)(*plVar3 + 8) = *(undefined8 *)(lVar7 + 8);
          **(long **)(lVar7 + 8) = *plVar3;
          plVar6[2] = 0;
          while (plVar3 != plVar4) {
            plVar2 = (long *)plVar3[1];
            operator_delete(plVar3);
            plVar3 = plVar2;
          }
        }
        operator_delete(plVar6);
      }
      else {
        do {
          plVar4 = plVar6;
          if ((long *)plVar3[2] != (long *)0x0) {
            (**(code **)(*(long *)plVar3[2] + 8))();
            plVar4 = *(long **)(param_1 + 0x18 + lVar5 * 8);
          }
          plVar2 = plVar3 + 1;
          plVar3 = (long *)*plVar2;
          plVar6 = plVar4;
        } while ((long *)*plVar2 != plVar4);
        if (plVar4 != (long *)0x0) goto LAB_1000c4605;
      }
      *(undefined8 *)(param_1 + 0x18 + lVar5 * 8) = 0;
    }
    lVar5 = lVar5 + 1;
    if (lVar5 == 4) {
      *(undefined8 *)(param_1 + 0x448) = 0;
      return;
    }
  } while( true );
}

