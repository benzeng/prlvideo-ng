
void FUN_1003ae630(long param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  byte bVar14;
  uint uVar15;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar15 = 0;
  lVar9 = *(long *)(lVar3 + 0xd8) - *(long *)(lVar3 + 0xd0);
  if (lVar9 != 0) {
    uVar13 = 0;
    uVar11 = 1;
    uVar15 = 0;
    do {
      uVar12 = *(byte *)(*(long *)(lVar3 + 0xd0) + 1 + uVar13 * 2) + 1;
      if (uVar15 <= uVar12) {
        uVar15 = uVar12;
      }
      uVar13 = (ulong)uVar11;
      uVar11 = uVar11 + 1;
    } while (uVar13 < (ulong)(lVar9 >> 1));
  }
  for (puVar10 = *(undefined8 **)(lVar3 + 0x20); puVar10 != (undefined8 *)0x0;
      puVar10 = (undefined8 *)*puVar10) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar9 = (ulong)*(byte *)(puVar10 + 4) * 0x40;
    pbVar2 = (byte *)(lVar3 + lVar9);
    bVar14 = *(byte *)((long)puVar10 + 0x23);
    bVar4 = *(byte *)(lVar3 + lVar9) & 1;
    *(byte *)((long)puVar10 + 0x23) = bVar14 & 0xfe | bVar4;
    bVar5 = *(byte *)(lVar3 + lVar9) & 2;
    *(byte *)((long)puVar10 + 0x23) = bVar14 & 0xfc | bVar4 | bVar5;
    bVar6 = *(byte *)(lVar3 + lVar9) & 4;
    *(byte *)((long)puVar10 + 0x23) = bVar14 & 0xf8 | bVar4 | bVar5 | bVar6;
    bVar7 = *(byte *)(lVar3 + lVar9) >> 2 & 8;
    *(byte *)((long)puVar10 + 0x23) = bVar14 & 0xf0 | bVar4 | bVar5 | bVar6 | bVar7;
    bVar8 = *(byte *)(lVar3 + lVar9) >> 2 & 0x10;
    *(byte *)((long)puVar10 + 0x23) = bVar14 & 0xe0 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8;
    *(byte *)((long)puVar10 + 0x23) =
         bVar14 & 0xc0 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8 |
         *(byte *)(lVar3 + lVar9) >> 2 & 0x20;
    if ((*(byte *)(lVar3 + lVar9) & 8) != 0) {
      local_32 = 1;
      if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
        FUN_1003c5860(puVar10 + 1,&local_32);
      }
      else {
        *(undefined2 *)puVar10[2] = 1;
        puVar10[2] = puVar10[2] + 2;
      }
    }
    if ((*pbVar2 & 0x10) != 0) {
      local_34 = 2;
      if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
        FUN_1003c5860(puVar10 + 1,&local_34);
      }
      else {
        *(undefined2 *)puVar10[2] = 2;
        puVar10[2] = puVar10[2] + 2;
      }
    }
    if ((pbVar2[1] & 1) != 0) {
      local_36 = 0x11;
      if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
        FUN_1003c5860(puVar10 + 1,&local_36);
      }
      else {
        *(undefined2 *)puVar10[2] = 0x11;
        puVar10[2] = puVar10[2] + 2;
      }
    }
    if ((pbVar2[1] & 2) != 0) {
      local_38 = 0x12;
      if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
        FUN_1003c5860(puVar10 + 1,&local_38);
      }
      else {
        *(undefined2 *)puVar10[2] = 0x12;
        puVar10[2] = puVar10[2] + 2;
      }
    }
    if (uVar15 != 0) {
      puVar1 = puVar10 + 1;
      uVar11 = 0;
      do {
        bVar14 = (byte)uVar11;
        uVar12 = 1 << (bVar14 & 0x1f);
        if ((*(uint *)(lVar3 + 4 + lVar9) >> (uVar11 & 0x1f) & 1) != 0) {
          local_3a = CONCAT11(bVar14,10);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_3a);
          }
          else {
            *(undefined2 *)puVar10[2] = local_3a;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 8 + lVar9) & uVar12) != 0) {
          local_3c = CONCAT11(bVar14,3);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_3c);
          }
          else {
            *(undefined2 *)puVar10[2] = local_3c;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 0xc + lVar9) & uVar12) != 0) {
          local_3e = CONCAT11(bVar14,4);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_3e);
          }
          else {
            *(undefined2 *)puVar10[2] = local_3e;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 0x10 + lVar9) & uVar12) != 0) {
          local_40 = CONCAT11(bVar14,5);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_40);
          }
          else {
            *(undefined2 *)puVar10[2] = local_40;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 0x14 + lVar9) & uVar12) != 0) {
          local_42 = CONCAT11(bVar14,6);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_42);
          }
          else {
            *(undefined2 *)puVar10[2] = local_42;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 0x18 + lVar9) & uVar12) != 0) {
          local_44 = CONCAT11(bVar14,7);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_44);
          }
          else {
            *(undefined2 *)puVar10[2] = local_44;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 0x1c + lVar9) & uVar12) != 0) {
          local_46 = CONCAT11(bVar14,8);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_46);
          }
          else {
            *(undefined2 *)puVar10[2] = local_46;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 0x20 + lVar9) & uVar12) != 0) {
          local_48 = CONCAT11(bVar14,9);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_48);
          }
          else {
            *(undefined2 *)puVar10[2] = local_48;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 0x24 + lVar9) & uVar12) != 0) {
          local_4a = CONCAT11(bVar14,0x13);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_4a);
          }
          else {
            *(undefined2 *)puVar10[2] = local_4a;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 0x28 + lVar9) & uVar12) != 0) {
          local_4c = CONCAT11(bVar14,0x14);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_4c);
          }
          else {
            *(undefined2 *)puVar10[2] = local_4c;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 0x2c + lVar9) & uVar12) != 0) {
          local_4e = CONCAT11(bVar14,0x15);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_4e);
          }
          else {
            *(undefined2 *)puVar10[2] = local_4e;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 0x30 + lVar9) & uVar12) != 0) {
          local_50 = CONCAT11(bVar14,0x16);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_50);
          }
          else {
            *(undefined2 *)puVar10[2] = local_50;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 0x34 + lVar9) & uVar12) != 0) {
          local_52 = CONCAT11(bVar14,0x17);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_52);
          }
          else {
            *(undefined2 *)puVar10[2] = local_52;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 0x38 + lVar9) & uVar12) != 0) {
          local_54 = CONCAT11(bVar14,0x18);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_54);
          }
          else {
            *(undefined2 *)puVar10[2] = local_54;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        if ((*(uint *)(lVar3 + 0x3c + lVar9) & uVar12) != 0) {
          local_56 = CONCAT11(bVar14,0x19);
          if ((undefined2 *)puVar10[2] == (undefined2 *)puVar10[3]) {
            FUN_1003c5860(puVar1,&local_56);
          }
          else {
            *(undefined2 *)puVar10[2] = local_56;
            puVar10[2] = puVar10[2] + 2;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar15 != uVar11);
    }
  }
  return;
}

