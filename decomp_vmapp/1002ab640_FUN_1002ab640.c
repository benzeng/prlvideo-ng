
void FUN_1002ab640(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int local_30;
  uint local_2c;
  
  lVar8 = (param_2 & 0xffffffff) * 0x8f0;
  puVar2 = *(undefined8 **)(param_1 + 0x960 + lVar8);
  if ((puVar2 == (undefined8 *)0x0) || (*(uint *)(param_1 + 0x940 + lVar8) < 9)) {
    uVar9 = *(uint *)(param_1 + 0x93c + lVar8);
    uVar5 = 0;
    if (*(int *)(*(long *)(param_1 + 0x910) + 8) != 0) {
      uVar7 = *(uint *)(param_1 + 0x930 + lVar8);
      local_2c = uVar7 >> 0xc;
      local_30 = (uVar7 + 0xfff + *(int *)(param_1 + 0x934 + lVar8) * uVar9 >> 0xc) - local_2c;
      if ((*(int *)(param_1 + 0x9840) == 0) &&
         (cVar3 = FUN_1002ab2e0(param_1,&local_2c,&local_30), cVar3 != '\0')) {
        if (local_30 == 0) {
          return;
        }
        uVar7 = *(uint *)(param_1 + 0x930 + lVar8);
        uVar5 = local_2c << 0xc;
        if (local_2c << 0xc < uVar7) {
          uVar5 = uVar7;
        }
        uVar9 = *(uint *)(param_1 + 0x934 + lVar8);
        uVar5 = (uVar5 - uVar7) / uVar9;
        uVar9 = (~uVar7 + (local_30 + local_2c) * 0x1000 + uVar9) / uVar9;
        uVar7 = *(uint *)(param_1 + 0x93c + lVar8);
        if (uVar7 < uVar9) {
          uVar9 = uVar7;
        }
      }
    }
    uVar7 = *(uint *)(param_1 + 0x938 + lVar8);
    if (*(int *)(param_1 + 0x950 + lVar8) != 0) {
      *(undefined4 *)(param_1 + 0x950 + lVar8) = 0;
    }
    if (uVar5 < *(uint *)(param_1 + 0x954 + lVar8)) {
      *(uint *)(param_1 + 0x954 + lVar8) = uVar5;
    }
    if (*(uint *)(param_1 + 0x958 + lVar8) < uVar7) {
      *(uint *)(param_1 + 0x958 + lVar8) = uVar7;
    }
    if (*(uint *)(param_1 + 0x95c + lVar8) < uVar9) {
      *(uint *)(param_1 + 0x95c + lVar8) = uVar9;
    }
  }
  else {
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = 0xc000c0003fff3fff;
    UNLOCK();
    uVar9 = (int)(short)uVar1;
    if ((short)uVar1 < 0) {
      uVar9 = 0;
    }
    uVar5 = (int)((ulong)uVar1 >> 0x10) >> 0x10;
    if ((int)uVar9 < (int)uVar5) {
      sVar6 = (short)((ulong)uVar1 >> 0x10);
      uVar7 = (int)sVar6;
      if (sVar6 < 0) {
        uVar7 = 0;
      }
      uVar4 = (uint)(short)((ulong)uVar1 >> 0x30);
      if ((int)uVar7 < (int)uVar4) {
        if (uVar9 < *(uint *)(param_1 + 0x950 + lVar8)) {
          *(uint *)(param_1 + 0x950 + lVar8) = uVar9;
        }
        if (uVar7 < *(uint *)(param_1 + 0x954 + lVar8)) {
          *(uint *)(param_1 + 0x954 + lVar8) = uVar7;
        }
        if (*(uint *)(param_1 + 0x958 + lVar8) < uVar5) {
          *(uint *)(param_1 + 0x958 + lVar8) = uVar5;
        }
        if (*(uint *)(param_1 + 0x95c + lVar8) < uVar4) {
          *(uint *)(param_1 + 0x95c + lVar8) = uVar4;
        }
      }
    }
  }
  return;
}

