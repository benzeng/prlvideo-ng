
void FUN_100305720(long param_1,char param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 local_34 [4];
  
  lVar2 = *(long *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  uVar4 = *(uint *)(lVar2 + 0x18);
  if (uVar4 != 0) {
    uVar7 = uVar4;
    if (*(uint *)(lVar3 + 0x2058) < 0x20) {
      uVar5 = 0x20;
      do {
        uVar5 = uVar5 >> 1;
        uVar7 = uVar7 ^ uVar7 >> (sbyte)uVar5;
      } while (*(uint *)(lVar3 + 0x2058) < uVar5);
    }
    puVar1 = (uint *)(lVar2 + 0x18);
    puVar6 = *(uint **)(lVar3 + 0x1858 + (ulong)(uVar7 & 0xff) * 8);
    if (puVar6 != (uint *)0x0) {
      do {
        if (uVar4 == *puVar6) {
          if (*(long *)(puVar6 + 2) != 0) {
            FUN_1003071e0(lVar3 + 0x1850,local_34);
            uVar4 = *puVar1;
          }
          break;
        }
        puVar6 = *(uint **)(puVar6 + 4);
      } while (puVar6 != (uint *)0x0);
    }
    if (uVar4 != 0) {
      (*DAT_1011c5b20)(1,puVar1);
      *puVar1 = 0;
    }
  }
  if (*(int *)(lVar2 + 0x1c) != 0) {
    (*(code *)DAT_1011c4a88[0x3c])(*DAT_1011c4a88,1,(undefined4 *)(lVar2 + 0x1c));
    *(undefined4 *)(lVar2 + 0x1c) = 0;
  }
  if (*(int *)(lVar2 + 0x20) != 0) {
    (*(code *)DAT_1011c4a88[0x3c])(*DAT_1011c4a88,1,(undefined4 *)(lVar2 + 0x20));
    *(undefined4 *)(lVar2 + 0x20) = 0;
  }
  if (param_2 != '\0') {
    if (*(int *)(lVar2 + 0x24) != 0) {
      (*(code *)DAT_1011c4a88[0x3c])(*DAT_1011c4a88,1,(undefined4 *)(lVar2 + 0x24));
      *(undefined4 *)(lVar2 + 0x24) = 0;
    }
    if (*(int *)(lVar2 + 0x28) != 0) {
      (*(code *)DAT_1011c4a88[0x3c])(*DAT_1011c4a88,1,(undefined4 *)(lVar2 + 0x28));
      *(undefined4 *)(lVar2 + 0x28) = 0;
    }
  }
  *(undefined4 *)(lVar2 + 0x34) = 0;
  FUN_100301c50(param_1,0x8ca8,*(undefined4 *)(param_1 + 0x15a0));
  FUN_100301c50(param_1,0x8ca9,*(undefined4 *)(param_1 + 0x15a4));
  (*(code *)DAT_1011c4a88[0x5b])(*DAT_1011c4a88);
  *(undefined8 *)(lVar2 + 0x2c) = 0x40400000404;
  return;
}

