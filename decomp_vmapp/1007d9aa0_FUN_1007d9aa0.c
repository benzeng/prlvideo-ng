
void FUN_1007d9aa0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  
LAB_1007d9ab6:
  do {
    puVar3 = param_2;
    if ((param_1 != (ulong *)0x0) && (uVar1 = *param_1, (uVar1 & 1) == 0)) goto LAB_1007d9ebb;
    if (param_1 == (ulong *)*param_3) {
      if (param_1 != (ulong *)0x0) {
        uVar1 = *param_1;
LAB_1007d9ebb:
        *param_1 = uVar1 | 1;
      }
      return;
    }
    puVar6 = (ulong *)puVar3[2];
    if (puVar6 == param_1) {
      puVar6 = (ulong *)puVar3[1];
      puVar5 = (ulong *)0x0;
      if ((puVar6 != (ulong *)0x0) && (puVar5 = puVar6, (*puVar6 & 1) == 0)) {
        *puVar6 = *puVar6 | 1;
        uVar1 = *puVar3 & 0xfffffffffffffffe;
        *puVar3 = uVar1;
        puVar5 = (ulong *)puVar6[2];
        puVar3[1] = (ulong)puVar5;
        if (puVar5 != (ulong *)0x0) {
          *puVar5 = *puVar5 & 1 | (ulong)puVar3;
          uVar1 = *puVar3;
        }
        uVar2 = uVar1 & 0xfffffffffffffffe;
        *puVar6 = uVar1 & 0xfffffffffffffffe | *puVar6 & 1;
        if (uVar2 == 0) {
          *param_3 = (ulong)puVar6;
        }
        else if (*(ulong **)(uVar2 + 0x10) == puVar3) {
          *(ulong **)(uVar2 + 0x10) = puVar6;
        }
        else {
          *(ulong **)(uVar2 + 8) = puVar6;
          puVar5 = (ulong *)puVar3[1];
        }
        puVar6[2] = (ulong)puVar3;
        *puVar3 = *puVar3 & 1 | (ulong)puVar6;
      }
      puVar6 = (ulong *)puVar5[2];
      if ((puVar6 == (ulong *)0x0) || (uVar1 = *puVar6, (uVar1 & 1) != 0)) {
        puVar4 = (ulong *)puVar5[1];
        if ((puVar4 == (ulong *)0x0) || (uVar1 = *puVar4, (uVar1 & 1) != 0)) {
          *(byte *)puVar5 = (byte)*puVar5 & 0xfe;
          goto LAB_1007d9ea4;
        }
LAB_1007d9d99:
        if ((uVar1 & 1) != 0) {
          if (puVar6 != (ulong *)0x0) {
            uVar1 = *puVar6;
            goto LAB_1007d9da6;
          }
          goto LAB_1007d9dad;
        }
      }
      else {
        puVar4 = (ulong *)puVar5[1];
        if (puVar4 != (ulong *)0x0) {
          uVar1 = *puVar4;
          goto LAB_1007d9d99;
        }
LAB_1007d9da6:
        *puVar6 = uVar1 | 1;
LAB_1007d9dad:
        uVar1 = *puVar5 & 0xfffffffffffffffe;
        *puVar5 = uVar1;
        puVar4 = (ulong *)puVar6[1];
        puVar5[2] = (ulong)puVar4;
        if (puVar4 != (ulong *)0x0) {
          *puVar4 = *puVar4 & 1 | (ulong)puVar5;
          uVar1 = *puVar5;
        }
        uVar2 = uVar1 & 0xfffffffffffffffe;
        *puVar6 = uVar1 & 0xfffffffffffffffe | *puVar6 & 1;
        if (uVar2 == 0) {
          *param_3 = (ulong)puVar6;
        }
        else if (*(ulong **)(uVar2 + 8) == puVar5) {
          *(ulong **)(uVar2 + 8) = puVar6;
        }
        else {
          *(ulong **)(uVar2 + 0x10) = puVar6;
        }
        puVar6[1] = (ulong)puVar5;
        *puVar5 = *puVar5 & 1 | (ulong)puVar6;
        puVar5 = (ulong *)puVar3[1];
        puVar4 = (ulong *)puVar5[1];
      }
      *puVar5 = *puVar5 & 0xfffffffffffffffe | *puVar3 & 1;
      *(byte *)puVar3 = (byte)*puVar3 | 1;
      if (puVar4 != (ulong *)0x0) {
        *(byte *)puVar4 = (byte)*puVar4 | 1;
      }
      puVar6 = (ulong *)puVar5[2];
      puVar3[1] = (ulong)puVar6;
      if (puVar6 != (ulong *)0x0) {
        *puVar6 = *puVar6 & 1 | (ulong)puVar3;
      }
      uVar1 = *puVar3 & 0xfffffffffffffffe;
      *puVar5 = *puVar3 & 0xfffffffffffffffe | *puVar5 & 1;
      if (uVar1 == 0) {
        *param_3 = (ulong)puVar5;
      }
      else if (*(ulong **)(uVar1 + 0x10) == puVar3) {
        *(ulong **)(uVar1 + 0x10) = puVar5;
      }
      else {
        *(ulong **)(uVar1 + 8) = puVar5;
      }
      puVar5[2] = (ulong)puVar3;
      uVar1 = *puVar3 & 1 | (ulong)puVar5;
    }
    else {
      puVar5 = puVar6;
      if ((*puVar6 & 1) == 0) {
        *puVar6 = *puVar6 | 1;
        uVar1 = *puVar3 & 0xfffffffffffffffe;
        *puVar3 = uVar1;
        puVar5 = (ulong *)puVar6[1];
        puVar3[2] = (ulong)puVar5;
        if (puVar5 != (ulong *)0x0) {
          *puVar5 = *puVar5 & 1 | (ulong)puVar3;
          uVar1 = *puVar3;
        }
        uVar2 = uVar1 & 0xfffffffffffffffe;
        *puVar6 = uVar1 & 0xfffffffffffffffe | *puVar6 & 1;
        if (uVar2 == 0) {
          *param_3 = (ulong)puVar6;
        }
        else if (*(ulong **)(uVar2 + 8) == puVar3) {
          *(ulong **)(uVar2 + 8) = puVar6;
        }
        else {
          *(ulong **)(uVar2 + 0x10) = puVar6;
          puVar5 = (ulong *)puVar3[2];
        }
        puVar6[1] = (ulong)puVar3;
        *puVar3 = *puVar3 & 1 | (ulong)puVar6;
      }
      puVar6 = (ulong *)puVar5[2];
      if ((puVar6 == (ulong *)0x0) || (uVar1 = *puVar6, (uVar1 & 1) != 0)) {
        puVar4 = (ulong *)puVar5[1];
        if ((puVar4 == (ulong *)0x0) || ((*puVar4 & 1) != 0)) {
          *(byte *)puVar5 = (byte)*puVar5 & 0xfe;
LAB_1007d9ea4:
          param_2 = (ulong *)(*puVar3 & 0xfffffffffffffffe);
          param_1 = puVar3;
          goto LAB_1007d9ab6;
        }
        if (puVar6 != (ulong *)0x0) {
          uVar1 = *puVar6;
          goto LAB_1007d9c22;
        }
LAB_1007d9c45:
        *(byte *)puVar4 = (byte)*puVar4 | 1;
        puVar6 = puVar4;
LAB_1007d9c4b:
        uVar1 = *puVar5 & 0xfffffffffffffffe;
        *puVar5 = uVar1;
        puVar4 = (ulong *)puVar6[2];
        puVar5[1] = (ulong)puVar4;
        if (puVar4 != (ulong *)0x0) {
          *puVar4 = *puVar4 & 1 | (ulong)puVar5;
          uVar1 = *puVar5;
        }
        uVar2 = uVar1 & 0xfffffffffffffffe;
        *puVar6 = uVar1 & 0xfffffffffffffffe | *puVar6 & 1;
        if (uVar2 == 0) {
          *param_3 = (ulong)puVar6;
        }
        else if (*(ulong **)(uVar2 + 0x10) == puVar5) {
          *(ulong **)(uVar2 + 0x10) = puVar6;
        }
        else {
          *(ulong **)(uVar2 + 8) = puVar6;
        }
        puVar6[2] = (ulong)puVar5;
        *puVar5 = *puVar5 & 1 | (ulong)puVar6;
        puVar5 = (ulong *)puVar3[2];
        puVar6 = (ulong *)puVar5[2];
      }
      else {
LAB_1007d9c22:
        if ((uVar1 & 1) != 0) {
          puVar4 = (ulong *)puVar5[1];
          puVar6 = (ulong *)0x0;
          if (puVar4 != (ulong *)0x0) goto LAB_1007d9c45;
          goto LAB_1007d9c4b;
        }
      }
      *puVar5 = *puVar5 & 0xfffffffffffffffe | *puVar3 & 1;
      *(byte *)puVar3 = (byte)*puVar3 | 1;
      if (puVar6 != (ulong *)0x0) {
        *(byte *)puVar6 = (byte)*puVar6 | 1;
      }
      puVar6 = (ulong *)puVar5[1];
      puVar3[2] = (ulong)puVar6;
      if (puVar6 != (ulong *)0x0) {
        *puVar6 = *puVar6 & 1 | (ulong)puVar3;
      }
      uVar1 = *puVar3 & 0xfffffffffffffffe;
      *puVar5 = *puVar3 & 0xfffffffffffffffe | *puVar5 & 1;
      if (uVar1 == 0) {
        *param_3 = (ulong)puVar5;
      }
      else if (*(ulong **)(uVar1 + 8) == puVar3) {
        *(ulong **)(uVar1 + 8) = puVar5;
      }
      else {
        *(ulong **)(uVar1 + 0x10) = puVar5;
      }
      puVar5[1] = (ulong)puVar3;
      uVar1 = *puVar3 & 1 | (ulong)puVar5;
    }
    *puVar3 = uVar1;
    param_2 = puVar3;
    param_1 = (ulong *)*param_3;
  } while( true );
}

