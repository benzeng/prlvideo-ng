
void FUN_1007d95d0(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar5 = (ulong *)*param_1;
  puVar4 = param_2;
  if (puVar5 != param_2) {
    do {
      uVar2 = *param_2;
      puVar3 = (ulong *)(uVar2 & 0xfffffffffffffffe);
      puVar4 = puVar5;
      if ((puVar3 == (ulong *)0x0) || (uVar8 = *puVar3, (uVar8 & 1) != 0)) break;
      puVar6 = (ulong *)(uVar8 & 0xfffffffffffffffe);
      puVar4 = (ulong *)puVar6[2];
      if (puVar3 == puVar4) {
        puVar4 = (ulong *)puVar6[1];
        if ((puVar4 != (ulong *)0x0) && ((*puVar4 & 1) == 0)) goto LAB_1007d963e;
        puVar4 = puVar3;
        if ((ulong *)puVar3[1] == param_2) {
          puVar4 = (ulong *)param_2[2];
          puVar3[1] = (ulong)puVar4;
          if (puVar4 != (ulong *)0x0) {
            *puVar4 = *puVar4 & 1 | (ulong)puVar3;
            uVar8 = *puVar3;
            uVar2 = *param_2;
          }
          uVar7 = uVar8 & 0xfffffffffffffffe;
          *param_2 = uVar8 & 0xfffffffffffffffe | uVar2 & 1;
          if (uVar7 == 0) {
            *param_1 = param_2;
            puVar5 = param_2;
          }
          else if (*(ulong **)(uVar7 + 0x10) == puVar3) {
            *(ulong **)(uVar7 + 0x10) = param_2;
          }
          else {
            *(ulong **)(uVar7 + 8) = param_2;
          }
          param_2[2] = (ulong)puVar3;
          *puVar3 = *puVar3 & 1 | (ulong)param_2;
          uVar8 = *(ulong *)((ulong)param_2 & 0xfffffffffffffffe);
          puVar6 = (ulong *)(uVar8 & 0xfffffffffffffffe);
          puVar4 = (ulong *)((ulong)param_2 & 0xfffffffffffffffe);
          param_2 = puVar3;
          if (puVar4 != (ulong *)0x0) goto LAB_1007d97ef;
        }
        else {
LAB_1007d97ef:
          *puVar4 = uVar8 | 1;
          puVar3 = param_2;
        }
        uVar2 = *puVar6 & 0xfffffffffffffffe;
        *puVar6 = uVar2;
        puVar4 = (ulong *)puVar6[2];
        puVar1 = (ulong *)puVar4[1];
        puVar6[2] = (ulong)puVar1;
        if (puVar1 != (ulong *)0x0) {
          *puVar1 = *puVar1 & 1 | (ulong)puVar6;
          uVar2 = *puVar6;
        }
        uVar2 = uVar2 & 0xfffffffffffffffe;
        if (puVar4 != (ulong *)0x0) {
          *puVar4 = *puVar4 & 1 | uVar2;
        }
        if (uVar2 == 0) {
          *param_1 = puVar4;
          puVar5 = puVar4;
        }
        else if (*(ulong **)(uVar2 + 8) == puVar6) {
          *(ulong **)(uVar2 + 8) = puVar4;
        }
        else {
          *(ulong **)(uVar2 + 0x10) = puVar4;
        }
        puVar4[1] = (ulong)puVar6;
LAB_1007d9858:
        *puVar6 = *puVar6 & 1 | (ulong)puVar4;
        puVar6 = puVar3;
      }
      else {
        if ((puVar4 == (ulong *)0x0) || ((*puVar4 & 1) != 0)) {
          puVar4 = puVar3;
          if ((ulong *)puVar3[2] == param_2) {
            puVar4 = (ulong *)param_2[1];
            puVar3[2] = (ulong)puVar4;
            if (puVar4 != (ulong *)0x0) {
              *puVar4 = *puVar4 & 1 | (ulong)puVar3;
              uVar8 = *puVar3;
              uVar2 = *param_2;
            }
            uVar7 = uVar8 & 0xfffffffffffffffe;
            *param_2 = uVar8 & 0xfffffffffffffffe | uVar2 & 1;
            if (uVar7 == 0) {
              *param_1 = param_2;
              puVar5 = param_2;
            }
            else if (*(ulong **)(uVar7 + 8) == puVar3) {
              *(ulong **)(uVar7 + 8) = param_2;
            }
            else {
              *(ulong **)(uVar7 + 0x10) = param_2;
            }
            param_2[1] = (ulong)puVar3;
            *puVar3 = *puVar3 & 1 | (ulong)param_2;
            uVar8 = *(ulong *)((ulong)param_2 & 0xfffffffffffffffe);
            puVar6 = (ulong *)(uVar8 & 0xfffffffffffffffe);
            puVar4 = (ulong *)((ulong)param_2 & 0xfffffffffffffffe);
            param_2 = puVar3;
            if (puVar4 != (ulong *)0x0) goto LAB_1007d9739;
          }
          else {
LAB_1007d9739:
            *puVar4 = uVar8 | 1;
            puVar3 = param_2;
          }
          uVar2 = *puVar6 & 0xfffffffffffffffe;
          *puVar6 = uVar2;
          puVar4 = (ulong *)puVar6[1];
          puVar1 = (ulong *)puVar4[2];
          puVar6[1] = (ulong)puVar1;
          if (puVar1 != (ulong *)0x0) {
            *puVar1 = *puVar1 & 1 | (ulong)puVar6;
            uVar2 = *puVar6;
          }
          uVar2 = uVar2 & 0xfffffffffffffffe;
          if (puVar4 != (ulong *)0x0) {
            *puVar4 = *puVar4 & 1 | uVar2;
          }
          if (uVar2 == 0) {
            *param_1 = puVar4;
            puVar4[2] = (ulong)puVar6;
            puVar5 = puVar4;
          }
          else if (*(ulong **)(uVar2 + 0x10) == puVar6) {
            *(ulong **)(uVar2 + 0x10) = puVar4;
            puVar4[2] = (ulong)puVar6;
          }
          else {
            *(ulong **)(uVar2 + 8) = puVar4;
            puVar4[2] = (ulong)puVar6;
          }
          goto LAB_1007d9858;
        }
LAB_1007d963e:
        *puVar3 = uVar8 | 1;
        *(byte *)puVar4 = (byte)*puVar4 | 1;
        *(byte *)puVar6 = (byte)*puVar6 & 0xfe;
      }
      param_2 = puVar6;
      puVar4 = puVar5;
    } while (puVar6 != puVar5);
  }
  if (puVar4 != (ulong *)0x0) {
    *(byte *)puVar4 = (byte)*puVar4 | 1;
  }
  return;
}

