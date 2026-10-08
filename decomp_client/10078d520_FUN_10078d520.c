
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10078d520(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  QVariant local_50;
  double local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *param_2;
  if (local_28 != 0) {
    _PrlHandle_AddRef();
  }
  cVar1 = SdkUtils::checkHandleType(&local_28,0x10000020);
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  if (cVar1 != '\0') {
    local_30 = 0;
    iVar2 = _PrlStat_GetUsageRamSize(*param_2,&local_30);
    if (-1 < iVar2) {
      local_38 = 0;
      iVar2 = _PrlStat_GetTotalRamSize(*param_2,&local_38);
      if ((-1 < iVar2) && (local_38 != 0)) {
        auVar6._8_4_ = (int)((ulong)local_30 >> 0x20);
        auVar6._0_8_ = local_30;
        auVar6._12_4_ = _UNK_100e11114;
        auVar7._8_4_ = (int)((ulong)local_38 >> 0x20);
        auVar7._0_8_ = local_38;
        auVar7._12_4_ = _UNK_100e11114;
        dVar5 = ((((double)CONCAT44(_DAT_100e11110,(int)local_30) - _DAT_100e11120) +
                 (auVar6._8_8_ - _UNK_100e11128)) * DAT_100e16cb0) /
                (((double)CONCAT44(_DAT_100e11110,(int)local_38) - _DAT_100e11120) +
                (auVar7._8_8_ - _UNK_100e11128));
        if (0.0 <= dVar5) {
          iVar2 = (int)(dVar5 + DAT_100e110f0);
        }
        else {
          iVar2 = (int)((dVar5 - (double)(int)(DAT_100e110e0 + dVar5)) + DAT_100e110f0) +
                  (int)(DAT_100e110e0 + dVar5);
        }
        iVar3 = 100;
        if (iVar2 < 0x65) {
          iVar3 = iVar2;
        }
        if (iVar3 < 1) {
          local_40 = 0.0;
        }
        else {
          local_40 = (double)iVar3;
        }
        uVar4 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x18);
        }
        QVariant::QVariant(&local_50,6,&local_40,0);
        FUN_1007864e0(uVar4,&local_50);
        QVariant::~QVariant(&local_50);
      }
    }
  }
  return;
}

