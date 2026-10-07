
undefined1 FUN_1000cd880(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined1 uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint local_34;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x1940);
  puVar3 = *(ulong **)(lVar2 + 0xb8);
  uVar1 = *(uint *)(lVar2 + 0xc0);
  uVar8 = (ulong)uVar1;
  puVar6 = (ulong *)0x0;
  local_34 = uVar1;
  if (uVar8 != 0) {
    puVar6 = operator_new(uVar8);
    ___bzero(puVar6,uVar8);
  }
  lVar2 = param_1 + 0x2b8;
  iVar4 = FUN_1000d6c10(lVar2,4,puVar6,&local_34);
  if (iVar4 == 4) {
    if (local_34 != uVar1) {
      uVar12 = 0;
      FUN_1008e3970("","vm",0,"Dirty pages loading failed Sz=0x%x");
      goto LAB_1000cda7b;
    }
  }
  else {
    uVar5 = FUN_1000d6ee0(lVar2,0);
    if (0x3001c < uVar5) {
      uVar12 = 0;
      FUN_1008e3970("","vm",0,"Dirty pages loading failed");
      goto LAB_1000cda7b;
    }
  }
  uVar5 = FUN_1000d6ee0(lVar2,0);
  if (uVar5 < 0x3002a) {
    FUN_1008e3970("","vm",0,"Dirty pages bitmap ignored");
    _memset(puVar3,0xff,uVar8);
  }
  else if (uVar1 != 0) {
    uVar13 = (ulong)(uVar1 - 1);
    uVar10 = uVar13 + 1 & 0x1fffffff0;
    uVar8 = 0;
    if ((uVar10 != 0) &&
       (((ulong *)((long)puVar6 + uVar13) < puVar3 ||
        (uVar8 = 0, (ulong *)(uVar13 + (long)puVar3) < puVar6)))) {
      uVar7 = (ulong)(uVar1 - 1) + 1 & 0xfffffffffffffff0;
      puVar14 = puVar3;
      puVar15 = puVar6;
      do {
        uVar8 = puVar15[1];
        *puVar14 = *puVar14 | *puVar15;
        puVar14[1] = puVar14[1] | uVar8;
        puVar15 = puVar15 + 2;
        puVar14 = puVar14 + 2;
        uVar7 = uVar7 - 0x10;
        uVar8 = uVar10;
      } while (uVar7 != 0);
    }
    if (uVar13 + 1 != uVar8) {
      iVar4 = (int)uVar8;
      if ((uVar1 & 1) != 0) {
        *(byte *)((long)puVar3 + uVar8) =
             *(byte *)((long)puVar3 + uVar8) | *(byte *)((long)puVar6 + uVar8);
        uVar8 = uVar8 + 1;
      }
      if (uVar1 - 1 != iVar4) {
        pbVar9 = (byte *)((long)puVar6 + uVar8 + 1);
        pbVar11 = (byte *)((long)puVar3 + uVar8 + 1);
        iVar4 = (uVar1 + 1) - ((int)uVar8 + 1);
        do {
          pbVar11[-1] = pbVar11[-1] | pbVar9[-1];
          *pbVar11 = *pbVar11 | *pbVar9;
          pbVar9 = pbVar9 + 2;
          pbVar11 = pbVar11 + 2;
          iVar4 = iVar4 + -2;
        } while (iVar4 != 0);
      }
    }
  }
  uVar12 = 1;
  if ((*(byte *)(param_1 + 499) & 2) != 0) {
    FUN_10008c070(*(undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x1940));
  }
LAB_1000cda7b:
  if (puVar6 != (ulong *)0x0) {
    operator_delete(puVar6);
  }
  return uVar12;
}

