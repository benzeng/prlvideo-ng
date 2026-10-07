
void FUN_1003013a0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint local_2c;
  
  lVar5 = (long)*(int *)(param_1 + 0x418);
  local_2c = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x828);
    uVar4 = (ulong)param_3;
    if (uVar1 < 0x20) {
      uVar3 = 0x20;
      uVar4 = (ulong)param_3;
      do {
        uVar3 = uVar3 >> 1;
        uVar4 = (ulong)((uint)uVar4 ^ (uint)uVar4 >> (sbyte)uVar3);
      } while (uVar1 < uVar3);
    }
    for (puVar2 = *(uint **)(*(long *)(param_1 + 0x30) + 0x28 + (uVar4 & 0xff) * 8);
        puVar2 != (uint *)0x0; puVar2 = *(uint **)(puVar2 + 2)) {
      if (*puVar2 == param_3) {
        local_2c = puVar2[1];
        if (local_2c == 0) goto LAB_100301430;
        goto LAB_10030145a;
      }
    }
    local_2c = 0;
LAB_100301430:
    (*(code *)DAT_1011c4a88[99])(*DAT_1011c4a88,1,&local_2c);
    FUN_100305a80(*(undefined8 *)(param_1 + 0x30),param_3,local_2c);
  }
LAB_10030145a:
  if (param_2 < 0x8c18) {
    if (param_2 < 0x8513) {
      if (param_2 < 0x806f) {
        if (param_2 == 0xde0) {
          *(uint *)(param_1 + 0x158 + lVar5 * 0x2c) = param_3;
        }
        else if (param_2 == 0xde1) {
          *(uint *)(param_1 + 0x160 + lVar5 * 0x2c) = param_3;
        }
      }
      else if (param_2 == 0x806f) {
        *(uint *)(param_1 + 0x170 + lVar5 * 0x2c) = param_3;
      }
      else if (param_2 == 0x84f5) {
        *(uint *)(param_1 + 0x178 + lVar5 * 0x2c) = param_3;
      }
    }
    else if (param_2 == 0x8513) {
      *(uint *)(param_1 + 0x174 + lVar5 * 0x2c) = param_3;
    }
  }
  else if (param_2 < 0x8c1a) {
    if (param_2 == 0x8c18) {
      *(uint *)(param_1 + 0x15c + lVar5 * 0x2c) = param_3;
    }
  }
  else if (param_2 < 0x9100) {
    if (param_2 == 0x8c1a) {
      *(uint *)(param_1 + 0x164 + lVar5 * 0x2c) = param_3;
    }
    else if (param_2 == 0x8c2a) {
      *(uint *)(param_1 + 0x17c + lVar5 * 0x2c) = param_3;
    }
  }
  else if (param_2 == 0x9100) {
    *(uint *)(param_1 + 0x168 + lVar5 * 0x2c) = param_3;
  }
  else if (param_2 == 0x9102) {
    *(uint *)(param_1 + 0x16c + lVar5 * 0x2c) = param_3;
  }
  (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,param_2,local_2c);
  return;
}

