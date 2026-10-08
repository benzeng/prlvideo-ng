
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10078d6d0(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  double dVar7;
  undefined1 auVar8 [16];
  QVariant local_48;
  double local_38;
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
    iVar2 = _PrlStat_GetRealRamSize(*param_2,&local_30);
    if (-1 < iVar2) {
      FUN_100060bb0();
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar4 = FUN_100786480(uVar4);
      FUN_100061050(2,uVar4);
      lVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
      if (lVar5 != 0) {
        FUN_10015a340(lVar5);
        CHostHardwareInfoBase::getMemorySettings();
        uVar3 = CHwMemorySettings::getHostRamSize();
        if (uVar3 != 0) {
          auVar8._8_4_ = (int)((ulong)local_30 >> 0x20);
          auVar8._0_8_ = local_30;
          auVar8._12_4_ = _UNK_100e11114;
          dVar7 = ((((double)CONCAT44(_DAT_100e11110,(int)local_30) - _DAT_100e11120) +
                   (auVar8._8_8_ - _UNK_100e11128)) * DAT_100e16cb0) /
                  (double)((ulong)uVar3 << 0x14);
          if (0.0 <= dVar7) {
            iVar2 = (int)(dVar7 + DAT_100e110f0);
          }
          else {
            iVar2 = (int)((dVar7 - (double)(int)(DAT_100e110e0 + dVar7)) + DAT_100e110f0) +
                    (int)(DAT_100e110e0 + dVar7);
          }
          iVar6 = 100;
          if (iVar2 < 0x65) {
            iVar6 = iVar2;
          }
          if (iVar6 < 1) {
            local_38 = 0.0;
          }
          else {
            local_38 = (double)iVar6;
          }
          uVar4 = 0;
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
            uVar4 = *(undefined8 *)(param_1 + 0x18);
          }
          QVariant::QVariant(&local_48,6,&local_38,0);
          FUN_1007864e0(uVar4,&local_48);
          QVariant::~QVariant(&local_48);
        }
      }
    }
  }
  return;
}

