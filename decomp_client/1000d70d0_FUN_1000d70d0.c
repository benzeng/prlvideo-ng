
void FUN_1000d70d0(long param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  bool bVar9;
  undefined1 local_f8 [16];
  undefined *local_e8;
  undefined *local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined1 local_ae;
  undefined1 local_aa;
  undefined *local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  QString local_40;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",3,"coherenceWindowActivated(wId=0x%x, pId=0x%x, flags=%u)"
                  ,param_2,param_3,param_4);
  }
  uVar4 = FUN_1000bd0c0(param_1);
  cVar3 = FUN_1000bd100(param_1,uVar4);
  if (cVar3 == '\0') {
    return;
  }
  QMutex::lock();
  if (*(int *)(*(long *)(param_1 + 0x238) + 0xc) != *(int *)(*(long *)(param_1 + 0x238) + 8)) {
    bVar9 = true;
    goto LAB_1000d739a;
  }
  bVar9 = false;
  QMutex::unlock();
  *(undefined4 *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x84) = param_3;
  QMutex::lock();
  puVar7 = *(uint **)(param_1 + 0x58);
  lVar8 = 0;
  if ((int)puVar7[2] < (int)puVar7[3]) {
    do {
      if (1 < *puVar7) {
        FUN_1000e6e10((undefined8 *)(param_1 + 0x58),puVar7[1]);
        puVar7 = *(uint **)(param_1 + 0x58);
      }
      lVar2 = *(long *)(puVar7 + ((int)puVar7[2] + lVar8) * 2 + 4);
      if ((*(int *)(lVar2 + 0x34) != 0) || (*(int *)(lVar2 + 0x30) != 0)) {
        lVar2 = *(long *)(lVar2 + 0x38);
        iVar1 = *(int *)(lVar2 + 8);
        if (iVar1 < *(int *)(lVar2 + 0xc)) {
          lVar6 = 0;
          do {
            if (**(ulong **)(lVar2 + 0x10 + (long)iVar1 * 8 + lVar6 * 8) ==
                (ulong)*(uint *)(param_1 + 0x80)) {
              FUN_1000c6320(param_1);
              goto LAB_1000d738a;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(lVar2 + 0xc) - iVar1);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (long)(int)puVar7[3] - (long)(int)puVar7[2]);
  }
  local_f8._8_4_ = (int)PTR_shared_null_1021e1288;
  local_f8._0_8_ = PTR_shared_null_1021e1288;
  local_f8._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_e8 = PTR_shared_null_1021e1288;
  local_e0 = PTR_shared_null_1021e1288;
  local_d8 = (undefined1  [16])0x0;
  local_c0 = PTR_shared_null_1021e15e8;
  local_b8 = PTR_shared_null_1021e1288;
  local_ae = 0;
  local_aa = 0;
  local_a0 = PTR_shared_null_1021e15e8;
  local_98 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  puVar5 = (undefined8 *)(param_1 + 0x210);
  if ((param_4 & 1) != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x218);
  }
  local_c8 = *puVar5;
  QString::fromUtf8_helper((char *)&local_40,0x1dbe167);
  QString::operator=((QString *)local_f8,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d735f;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1000d735f:
  FUN_1000c6320(param_1,local_f8);
  FUN_1000be7b0(local_f8);
LAB_1000d738a:
  QMutex::unlock();
LAB_1000d739a:
  if (bVar9) {
    QMutex::unlock();
  }
  return;
}

