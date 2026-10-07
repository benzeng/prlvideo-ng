
undefined8 FUN_1003018d0(long param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong uVar7;
  
  uVar2 = FUN_100301630(param_1,*(undefined4 *)(param_1 + 0x418),param_2,1);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x1848);
    if (uVar1 < 0x20) {
      uVar4 = 0x20;
      uVar7 = (ulong)uVar2;
      do {
        uVar4 = uVar4 >> 1;
        uVar7 = (ulong)((uint)uVar7 ^ (uint)uVar7 >> (sbyte)uVar4);
      } while (uVar1 < uVar4);
    }
    else {
      uVar7 = (ulong)uVar2;
    }
    puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1048 + (uVar7 & 0xff) * 8);
    uVar5 = 0;
    if (puVar6 != (uint *)0x0) {
      uVar5 = 0;
      do {
        if (*puVar6 == uVar2) {
          uVar5 = *(undefined8 *)(puVar6 + 2);
          break;
        }
        puVar6 = *(uint **)(puVar6 + 4);
      } while (puVar6 != (uint *)0x0);
    }
    uVar3 = 0;
    if (param_3 == 0) {
      uVar3 = uVar5;
    }
  }
  return uVar3;
}

