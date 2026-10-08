
void FUN_10078d1a0(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  double dVar6;
  double local_60;
  QVariant local_58;
  int local_44;
  long local_40;
  uint local_34;
  
  iVar1 = _PrlStat_GetCpusStatsCount(*param_2,&local_34);
  if ((-1 < iVar1) && (local_34 != 0)) {
    uVar4 = 0;
    uVar3 = 0;
    do {
      local_40 = 0;
      iVar1 = _PrlStat_GetCpuStat(*param_2,uVar3,&local_40);
      if (-1 < iVar1) {
        iVar1 = _PrlStatCpu_GetCpuUsage(local_40,&local_44);
        if (-1 < iVar1) {
          uVar4 = uVar4 + local_44;
        }
      }
      if (local_40 != 0) {
        _PrlHandle_Free();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_34);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    dVar6 = (double)uVar4 / (double)local_34;
    if (0.0 <= dVar6) {
      iVar1 = (int)(dVar6 + DAT_100e110f0);
    }
    else {
      iVar1 = (int)((dVar6 - (double)(int)(DAT_100e110e0 + dVar6)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar6);
    }
    iVar2 = 100;
    if (iVar1 < 0x65) {
      iVar2 = iVar1;
    }
    if (iVar2 < 1) {
      local_60 = 0.0;
    }
    else {
      local_60 = (double)iVar2;
    }
    QVariant::QVariant(&local_58,6,&local_60,0);
    FUN_1007864e0(uVar5,&local_58);
    QVariant::~QVariant(&local_58);
  }
  return;
}

