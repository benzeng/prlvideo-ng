
void FUN_10067cf60(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  char *pcVar8;
  long lVar9;
  uint uVar10;
  uint local_34;
  
  *param_1 = &PTR_FUN_100bc9a08;
  param_1[1] = param_2;
  param_1[2] = 0;
  iVar3 = (**(code **)(*param_2 + 0x10))(param_2,param_3);
  if (iVar3 == 0x8000000) {
    puVar4 = (undefined8 *)(**(code **)(*(long *)param_1[1] + 0x28))();
    puVar5 = (uint *)*puVar4;
    if ((*puVar5 < 2) && (*(long *)(puVar5 + 4) == 0x18)) {
      local_34 = puVar5[7];
    }
    else {
      QByteArray::reallocData(puVar4,puVar5[1] + 1,puVar5[2] >> 0x1f);
      puVar5 = (uint *)*puVar4;
      local_34 = *(uint *)(*(long *)(puVar5 + 4) + 4 + (long)puVar5);
      if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
        QByteArray::reallocData(puVar4,puVar5[1] + 1,puVar5[2] >> 0x1f);
        puVar5 = (uint *)*puVar4;
      }
    }
    uVar1 = *(uint *)(*(long *)(puVar5 + 4) + 8 + (long)puVar5);
    if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
      QByteArray::reallocData(puVar4,puVar5[1] + 1,puVar5[2] >> 0x1f);
      puVar5 = (uint *)*puVar4;
    }
    uVar2 = *(uint *)(*(long *)(puVar5 + 4) + 0x1fc + (long)puVar5);
    lVar9 = 0;
    uVar10 = 0;
    do {
      if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
        QByteArray::reallocData(puVar4,puVar5[1] + 1,puVar5[2] >> 0x1f);
        puVar5 = (uint *)*puVar4;
      }
      uVar10 = uVar10 ^ *(uint *)((long)puVar5 + lVar9 + *(long *)(puVar5 + 4));
      lVar9 = lVar9 + 4;
    } while (lVar9 < 0x1fc);
    if ((local_34 != uVar1) || (uVar2 != uVar10)) {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("","WinRegistry",1,
                      "Registry file is corrupted: seq1=%u, seq2=%u, chksum=0x%x, chksum_calc=0x%x",
                      local_34,uVar1,uVar2,uVar10);
        puVar5 = (uint *)*puVar4;
      }
      if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
        QByteArray::reallocData(puVar4,puVar5[1] + 1,puVar5[2] >> 0x1f);
        puVar5 = (uint *)*puVar4;
      }
      *(uint *)(*(long *)(puVar5 + 4) + 4 + (long)puVar5) = uVar1;
      lVar9 = 0;
      uVar10 = 0;
      do {
        if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
          QByteArray::reallocData(puVar4,puVar5[1] + 1,puVar5[2] >> 0x1f);
          puVar5 = (uint *)*puVar4;
        }
        uVar10 = uVar10 ^ *(uint *)((long)puVar5 + lVar9 + *(long *)(puVar5 + 4));
        lVar9 = lVar9 + 4;
      } while (lVar9 < 0x1fc);
      if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
        QByteArray::reallocData(puVar4,puVar5[1] + 1,puVar5[2] >> 0x1f);
        puVar5 = (uint *)*puVar4;
      }
      *(uint *)(*(long *)(puVar5 + 4) + 0x1fc + (long)puVar5) = uVar10;
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("","WinRegistry",1,
                      "Registry file after repair: seq1=%u, seq2=%u, chksum=0x%x, chksum_calc=0x%x",
                      local_34,uVar1,uVar2,uVar10);
      }
    }
    puVar5 = (uint *)*puVar4;
    if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
      QByteArray::reallocData(puVar4,puVar5[1] + 1,puVar5[2] >> 0x1f);
      puVar5 = (uint *)*puVar4;
    }
    if ((((int *)((long)puVar5 + *(long *)(puVar5 + 4)) != (int *)0x0) && (3 < (int)puVar5[1])) &&
       (*(int *)((long)puVar5 + *(long *)(puVar5 + 4)) == 0x66676572)) {
      puVar6 = operator_new(0x10);
      *puVar6 = &PTR_FUN_100bc9970;
      pvVar7 = operator_new(0x18);
      FUN_10067f4f0(pvVar7,puVar4,param_4);
      puVar6[1] = pvVar7;
      param_1[2] = puVar6;
      return;
    }
    pcVar8 = "OA00005.13:";
  }
  else {
    pcVar8 = "OA00005.07:";
  }
  FUN_1008e3970("","WinRegistry",0,pcVar8);
  return;
}

