
void FUN_10078d330(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  double dVar6;
  double local_48;
  QVariant local_40;
  long local_30;
  uint local_28;
  int local_24;
  
  iVar1 = _PrlStat_GetCpusStatsCount(*param_2,&local_24);
  if ((-1 < iVar1) && (local_24 != 0)) {
    local_28 = 0;
    local_30 = 0;
    iVar1 = _PrlStat_GetCpuStat(*param_2,local_24 == 2,&local_30);
    if ((-1 < iVar1) && (iVar1 = _PrlStatCpu_GetCpuUsage(local_30,&local_28), -1 < iVar1)) {
      if (local_24 == 2) {
        FUN_100060bb0();
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x18);
        }
        uVar3 = FUN_100786480(uVar3);
        FUN_100061050(2,uVar3);
        lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
        if (lVar4 != 0) {
          FUN_10015a340(lVar4);
          CHostHardwareInfoBase::getCpu();
          uVar2 = CHwCpu::getNumber();
          if (uVar2 != 0) {
            dVar6 = (double)local_28 / (double)uVar2;
            if (0.0 <= dVar6) {
              uVar2 = (uint)(dVar6 + DAT_100e110f0);
            }
            else {
              uVar2 = (int)((dVar6 - (double)(int)(DAT_100e110e0 + dVar6)) + DAT_100e110f0) +
                      (int)(DAT_100e110e0 + dVar6);
            }
            uVar5 = 100;
            if ((int)uVar2 < 0x65) {
              uVar5 = uVar2;
            }
            local_28 = 0;
            if (-1 < (int)uVar5) {
              local_28 = uVar5;
            }
          }
        }
      }
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
      }
      local_48 = (double)local_28;
      QVariant::QVariant(&local_40,6,&local_48,0);
      FUN_1007864e0(uVar3,&local_40);
      QVariant::~QVariant(&local_40);
    }
    if (local_30 != 0) {
      _PrlHandle_Free();
    }
  }
  return;
}

