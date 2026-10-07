
void FUN_10029dd10(long param_1,long param_2,uint param_3,void *param_4,uint param_5,char param_6)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  void *pvVar12;
  uint uVar13;
  ulong uVar14;
  
  sVar1 = *(size_t *)(param_1 + 0x18);
  uVar13 = *(uint *)(param_1 + 0xc);
  uVar5 = (ulong)uVar13;
  uVar8 = 0;
  uVar9 = param_3 - param_5;
  uVar3 = param_5;
  if (param_5 > param_3) {
    uVar3 = param_3;
  }
  uVar14 = (ulong)(param_5 - param_3);
  if (param_5 <= param_3) {
    uVar14 = 0;
  }
  else {
    uVar9 = 0;
  }
  pvVar7 = param_4;
  if (uVar3 != 0) {
    uVar2 = ~param_3;
    if (~param_3 < ~param_5) {
      uVar2 = ~param_5;
    }
    lVar10 = ((ulong)(-uVar2 - 2) * 2 + 2) * uVar5;
    do {
      if (uVar13 != 0) {
        uVar6 = 0;
        do {
          if (uVar6 < 8) {
            bVar4 = (byte)*(undefined4 *)(param_1 + 0x50 + uVar6 * 4);
          }
          else {
            bVar4 = (byte)(*(long *)(param_1 + 0x20) << 3);
          }
          *(short *)((long)pvVar7 + uVar6 * 2) =
               (short)((int)*(short *)(param_2 + uVar6 * 2) >> (bVar4 & 0x1f));
          uVar6 = uVar6 + 1;
        } while (uVar13 != (uint)uVar6);
      }
      pvVar7 = (void *)((long)pvVar7 + uVar5 * 2);
      param_2 = param_2 + uVar5 * 2;
      uVar8 = uVar8 + 1;
    } while (uVar8 != ~uVar2);
    pvVar7 = (void *)((long)param_4 + lVar10);
    if (uVar3 != 0) {
      _memcpy((void *)(param_1 + 0x188),(void *)((long)param_4 + (lVar10 - sVar1)),sVar1);
    }
  }
  if (((uVar9 != 0) && (uVar9 != param_3)) && (2 < DAT_1011b55f8)) {
    FUN_1008e3970("AudioT","LocalDevices",3,"[CAudioTransformPCM16] Drop %u of %u frames",uVar9,
                  param_3);
  }
  if ((uint)uVar14 != 0) {
    if (((uint)uVar14 != param_5) && (2 < DAT_1011b55f8)) {
      FUN_1008e3970("AudioT","LocalDevices",3,"[CAudioTransformPCM16] Silence %u of %u frames",
                    uVar14,param_5);
    }
    if (param_6 == '\0') {
      ___bzero(pvVar7,uVar14 * sVar1);
      ___bzero(param_1 + 0x188,sVar1);
    }
    else {
      pvVar12 = (void *)(param_1 + 0x188);
      uVar13 = param_3;
      if (param_3 < param_5) {
        uVar13 = param_5;
      }
      if ((uVar13 - param_3 & 7) != 0) {
        if (param_5 <= param_3) {
          param_5 = param_3;
        }
        iVar11 = -(param_5 - param_3 & 7);
        do {
          _memcpy(pvVar7,pvVar12,sVar1);
          pvVar7 = (void *)((long)pvVar7 + sVar1);
          uVar14 = (ulong)((int)uVar14 - 1);
          iVar11 = iVar11 + 1;
        } while (iVar11 != 0);
      }
      if (6 < (uVar13 - 1) - param_3) {
        do {
          _memcpy(pvVar7,pvVar12,sVar1);
          _memcpy((void *)((long)pvVar7 + sVar1),pvVar12,sVar1);
          pvVar7 = (void *)((long)((long)pvVar7 + sVar1) + sVar1);
          _memcpy(pvVar7,pvVar12,sVar1);
          pvVar7 = (void *)((long)pvVar7 + sVar1);
          _memcpy(pvVar7,pvVar12,sVar1);
          pvVar7 = (void *)((long)pvVar7 + sVar1);
          _memcpy(pvVar7,pvVar12,sVar1);
          pvVar7 = (void *)((long)pvVar7 + sVar1);
          _memcpy(pvVar7,pvVar12,sVar1);
          pvVar7 = (void *)((long)pvVar7 + sVar1);
          _memcpy(pvVar7,pvVar12,sVar1);
          pvVar7 = (void *)((long)pvVar7 + sVar1);
          _memcpy(pvVar7,pvVar12,sVar1);
          pvVar7 = (void *)((long)pvVar7 + sVar1);
          uVar13 = (int)uVar14 - 8;
          uVar14 = (ulong)uVar13;
        } while (uVar13 != 0);
      }
    }
  }
  return;
}

