
undefined8 FUN_100be9720(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  FUN_100bf2cf0(param_2 + 0xc0,1,0xe,"ssl_sess.c",0x309);
  FUN_100bf2780(9,0xc,"ssl_sess.c",0x30e);
  lVar7 = FUN_100c60be0(*(undefined8 *)(param_1 + 0x20),param_2);
  if ((lVar7 == 0) || (lVar7 == param_2)) {
    if (lVar7 != 0) {
      FUN_100be8ab0();
      uVar9 = 0;
      goto LAB_100be9975;
    }
  }
  else {
    puVar4 = *(undefined8 **)(lVar7 + 0x110);
    if ((puVar4 != (undefined8 *)0x0) &&
       (puVar5 = *(undefined8 **)(lVar7 + 0x108), puVar5 != (undefined8 *)0x0)) {
      puVar1 = (undefined8 *)(param_1 + 0x38);
      puVar2 = (undefined8 *)(param_1 + 0x30);
      if (puVar4 == puVar1) {
        if (puVar5 == puVar2) {
          *(undefined8 *)(param_1 + 0x38) = 0;
          *puVar2 = 0;
        }
        else {
          *puVar1 = puVar5;
          puVar5[0x22] = puVar1;
        }
      }
      else if (puVar5 == puVar2) {
        *puVar2 = puVar4;
        puVar4[0x21] = puVar2;
      }
      else {
        puVar4[0x21] = puVar5;
        *(undefined8 **)(*(long *)(lVar7 + 0x108) + 0x110) = puVar4;
      }
      *(undefined8 *)(lVar7 + 0x110) = 0;
      *(long *)(lVar7 + 0x108) = 0;
    }
    FUN_100be8ab0();
  }
  puVar4 = *(undefined8 **)(param_2 + 0x110);
  if ((puVar4 != (undefined8 *)0x0) &&
     (puVar5 = *(undefined8 **)(param_2 + 0x108), puVar5 != (undefined8 *)0x0)) {
    puVar1 = (undefined8 *)(param_1 + 0x38);
    puVar2 = (undefined8 *)(param_1 + 0x30);
    if (puVar4 == puVar1) {
      if (puVar5 == puVar2) {
        *(undefined8 *)(param_1 + 0x38) = 0;
        *puVar2 = 0;
      }
      else {
        *puVar1 = puVar5;
        puVar5[0x22] = puVar1;
      }
    }
    else if (puVar5 == puVar2) {
      *puVar2 = puVar4;
      puVar4[0x21] = puVar2;
    }
    else {
      puVar4[0x21] = puVar5;
      *(undefined8 **)(*(long *)(param_2 + 0x108) + 0x110) = puVar4;
    }
    *(undefined8 *)(param_2 + 0x110) = 0;
    *(long *)(param_2 + 0x108) = 0;
  }
  plVar3 = (long *)(param_1 + 0x30);
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 == 0) {
    *(long *)(param_1 + 0x30) = param_2;
    *(long *)(param_1 + 0x38) = param_2;
    *(long **)(param_2 + 0x108) = plVar3;
    *(long *)(param_2 + 0x110) = param_1 + 0x38;
  }
  else {
    *(long *)(param_2 + 0x110) = lVar7;
    *(long *)(lVar7 + 0x108) = param_2;
    *(long **)(param_2 + 0x108) = plVar3;
    *plVar3 = param_2;
  }
  lVar7 = FUN_100be4800(param_1,0x2b,0,0);
  uVar9 = 1;
  if (0 < lVar7) {
    lVar7 = FUN_100be4800(param_1,0x14,0,0);
    lVar8 = FUN_100be4800(param_1,0x2b,0,0);
    if (lVar8 < lVar7) {
      do {
        iVar6 = FUN_100be99b0(param_1,*(undefined8 *)(param_1 + 0x38),0);
        if (iVar6 == 0) break;
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
        lVar7 = FUN_100be4800(param_1,0x14,0,0);
        lVar8 = FUN_100be4800(param_1,0x2b,0);
      } while (lVar8 < lVar7);
    }
  }
LAB_100be9975:
  FUN_100bf2780(10,0xc,"ssl_sess.c",0x340);
  return uVar9;
}

