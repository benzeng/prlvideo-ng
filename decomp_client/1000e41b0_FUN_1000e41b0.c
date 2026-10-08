
void FUN_1000e41b0(long *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  undefined8 local_d8;
  QVariant local_d0;
  QString local_c0;
  undefined1 local_b1;
  undefined4 local_b0 [32];
  
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x46) = 0;
  FUN_1000e5910(param_1 + 0x47);
  QMutex::unlock();
  uVar3 = FUN_100060bb0();
  FUN_1000609c0(uVar3);
  QObject::property((char *)&local_d0);
  QVariant::toString();
  cVar2 = operator==((QString *)(param_1 + 2),&local_c0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_b1 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_1000e4288;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_1000e4288:
  QVariant::~QVariant(&local_d0);
  if (cVar2 != '\0') {
    uVar3 = FUN_1001d50a0();
    cVar2 = FUN_1001d50e0(uVar3);
    if (cVar2 != '\0') {
      FUN_1000c5940(param_1);
    }
    local_d8 = 0;
    _GetFrontProcess(&local_d8);
    if ((local_d8._4_4_ != 0) || ((int)local_d8 != 0)) {
      if ((local_d8._4_4_ != *(int *)((long)param_1 + 0x21c)) ||
         (bVar8 = true, (int)local_d8 != (int)param_1[0x43])) {
        if (local_d8._4_4_ == *(int *)((long)param_1 + 0x214)) {
          bVar8 = (int)local_d8 == (int)param_1[0x42];
        }
        else {
          bVar8 = false;
        }
      }
      QMutex::lock();
      puVar6 = (uint *)param_1[0xb];
      if (((int)puVar6[2] < (int)puVar6[3]) && (!bVar8)) {
        lVar7 = 0;
        bVar1 = bVar8;
        do {
          if (1 < *puVar6) {
            FUN_1000e6e10(param_1 + 0xb,puVar6[1]);
            puVar6 = (uint *)param_1[0xb];
          }
          if (*(int *)(*(long *)(puVar6 + (lVar7 + (int)puVar6[2]) * 2 + 4) + 0x34) ==
              local_d8._4_4_) {
            bVar9 = *(int *)(*(long *)(puVar6 + (lVar7 + (int)puVar6[2]) * 2 + 4) + 0x30) ==
                    (int)local_d8;
          }
          else {
            bVar9 = false;
          }
          bVar8 = true;
          if (!bVar9) {
            bVar8 = bVar1;
          }
        } while ((!bVar8) &&
                (lVar7 = lVar7 + 1, bVar1 = bVar8,
                lVar7 < (long)(int)puVar6[3] - (long)(int)puVar6[2]));
      }
      QMutex::unlock();
      if (bVar8) {
        if ((*(int *)((long)param_1 + 0x21c) != 0) || ((int)param_1[0x43] != 0)) {
          if (DAT_102310928 == (void *)0x0) {
            pvVar4 = operator_new(0x18);
            FUN_1001d4a60(pvVar4);
            DAT_102273638 = 1;
            DAT_102310928 = pvVar4;
          }
          uVar5 = FUN_1001d4b90(DAT_102310928);
          if ((uVar5 & 2) != 0) {
            _SetFrontProcessWithOptions(param_1 + 0x43,1);
          }
        }
        (**(code **)(*param_1 + 0xa0))(param_1);
      }
    }
  }
  if (*(char *)((long)param_1 + 0x103) != '\0') {
    FUN_1000debc0(param_1,0);
  }
  if ((*(int *)((long)param_1 + 0x21c) != 0) || ((int)param_1[0x43] != 0)) {
    local_b0[0] = 1;
    if ((int)param_1[0x4b] == 2) {
      local_b0[0] = 2;
    }
    FUN_1000c4970(param_1 + 0x43,0x86,local_b0,0x80);
  }
  return;
}

