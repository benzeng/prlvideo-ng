
void FUN_10029da70(long param_1,void *param_2,uint param_3,void *param_4,uint param_5,char param_6)

{
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  void *pvVar7;
  bool bVar8;
  
  sVar1 = *(size_t *)(param_1 + 0x18);
  uVar2 = 0;
  bVar8 = param_5 <= param_3;
  uVar4 = param_5;
  if (!bVar8) {
    uVar4 = param_3;
  }
  uVar5 = (ulong)(param_5 - param_3);
  if (bVar8) {
    uVar5 = uVar2;
  }
  uVar3 = (ulong)(param_3 - param_5);
  if (!bVar8) {
    uVar3 = uVar2;
  }
  if (uVar4 != 0) {
    uVar2 = (ulong)(uVar4 * (int)sVar1);
    _memcpy(param_4,param_2,uVar2);
    _memcpy((void *)(param_1 + 0x188),(void *)((uVar2 - sVar1) + (long)param_4),sVar1);
  }
  if ((((uint)uVar3 != 0) && ((uint)uVar3 != param_3)) && (2 < DAT_1011b55f8)) {
    FUN_1008e3970("AudioT","LocalDevices",3,"[CAudioTransformCopy] Drop %u of %u frames",uVar3,
                  param_3);
  }
  if ((uint)uVar5 != 0) {
    if (((uint)uVar5 != param_5) && (2 < DAT_1011b55f8)) {
      FUN_1008e3970("AudioT","LocalDevices",3,"[CAudioTransformCopy] Silence %u of %u frames",uVar5,
                    param_5);
    }
    param_4 = (void *)((long)param_4 + uVar2);
    if (param_6 == '\0') {
      ___bzero(param_4,uVar5 * sVar1);
      ___bzero(param_1 + 0x188,sVar1);
    }
    else {
      pvVar7 = (void *)(param_1 + 0x188);
      uVar4 = param_3;
      if (param_3 < param_5) {
        uVar4 = param_5;
      }
      if ((uVar4 - param_3 & 7) != 0) {
        if (param_5 <= param_3) {
          param_5 = param_3;
        }
        iVar6 = -(param_5 - param_3 & 7);
        do {
          _memcpy(param_4,pvVar7,sVar1);
          param_4 = (void *)((long)param_4 + sVar1);
          uVar5 = (ulong)((int)uVar5 - 1);
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0);
      }
      if (6 < (uVar4 - 1) - param_3) {
        do {
          _memcpy(param_4,pvVar7,sVar1);
          _memcpy((void *)((long)param_4 + sVar1),pvVar7,sVar1);
          param_4 = (void *)((long)((long)param_4 + sVar1) + sVar1);
          _memcpy(param_4,pvVar7,sVar1);
          param_4 = (void *)((long)param_4 + sVar1);
          _memcpy(param_4,pvVar7,sVar1);
          param_4 = (void *)((long)param_4 + sVar1);
          _memcpy(param_4,pvVar7,sVar1);
          param_4 = (void *)((long)param_4 + sVar1);
          _memcpy(param_4,pvVar7,sVar1);
          param_4 = (void *)((long)param_4 + sVar1);
          _memcpy(param_4,pvVar7,sVar1);
          param_4 = (void *)((long)param_4 + sVar1);
          _memcpy(param_4,pvVar7,sVar1);
          param_4 = (void *)((long)param_4 + sVar1);
          uVar4 = (int)uVar5 - 8;
          uVar5 = (ulong)uVar4;
        } while (uVar4 != 0);
      }
    }
  }
  return;
}

