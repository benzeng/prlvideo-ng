
undefined8 FUN_100ab6740(long param_1,int param_2,long *param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  
  if (param_2 == 2) {
    if ((param_4 & 1) != 0) {
      if (0x4000 < *(ushort *)(param_1 + 0x12e)) {
        return 0;
      }
      if ((uint)*(ushort *)(param_1 + 0x12e) != *(uint *)(*(long *)(param_1 + 0x1a8) + 4)) {
        QByteArray::resize((int)param_1 + 0x1a8);
      }
    }
    puVar3 = *(uint **)(param_1 + 0x1a8);
    uVar1 = puVar3[1];
    *(uint *)(param_3 + 1) = uVar1;
    lVar2 = 0;
    if (uVar1 == 0) goto LAB_100ab6869;
    if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
      QByteArray::reallocData((undefined8 *)(param_1 + 0x1a8),uVar1 + 1,puVar3[2] >> 0x1f);
      puVar3 = *(uint **)(param_1 + 0x1a8);
    }
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 0) {
        *param_3 = param_1 + 8;
        *(undefined4 *)(param_3 + 1) = 0x198;
        return 1;
      }
      return 0;
    }
    if ((param_4 & 1) != 0) {
      if (0x5000 < *(ushort *)(param_1 + 300)) {
        return 0;
      }
      if ((uint)*(ushort *)(param_1 + 300) != *(uint *)(*(long *)(param_1 + 0x1a0) + 4)) {
        QByteArray::resize((int)param_1 + 0x1a0);
      }
    }
    puVar3 = *(uint **)(param_1 + 0x1a0);
    uVar1 = puVar3[1];
    *(uint *)(param_3 + 1) = uVar1;
    lVar2 = 0;
    if (uVar1 == 0) goto LAB_100ab6869;
    if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
      QByteArray::reallocData((undefined8 *)(param_1 + 0x1a0),uVar1 + 1,puVar3[2] >> 0x1f);
      puVar3 = *(uint **)(param_1 + 0x1a0);
    }
  }
  lVar2 = (long)puVar3 + *(long *)(puVar3 + 4);
LAB_100ab6869:
  *param_3 = lVar2;
  return 1;
}

