
void FUN_1002dca50(CAbstractTask *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  CTaskGenericId *pCVar6;
  QString *this;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  char *pcVar12;
  CAbstractTask CVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_60;
  QLocale local_58 [8];
  QString local_50;
  QArrayData *local_48;
  int *local_40;
  int *local_38;
  undefined1 local_29;
  
  pCVar6 = operator_new(0x18);
  FUN_10028e4d0(pCVar6,*param_2);
  CAbstractTask::CAbstractTask(param_1,pCVar6);
  *(undefined ***)param_1 = &PTR_FUN_10220aa20;
  this = operator_new(0x88);
  puVar3 = PTR_shared_null_1021e1288;
  this->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  *(undefined4 *)&this[1].field0_0x0 = 0;
  *(undefined1 *)((long)&this[1].field0_0x0 + 4) = 0;
  this[2].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
  this[4].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  this[3].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  auVar14._8_4_ = (int)puVar3;
  auVar14._0_8_ = puVar3;
  auVar14._12_4_ = (int)((ulong)puVar3 >> 0x20);
  *(undefined1 (*) [16])(this + 6) = auVar14;
  *(undefined1 *)&this[8].field0_0x0 = 0;
  puVar4 = PTR_shared_null_1021e15e8;
  this[9].field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e15e8;
  this[0xb].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  this[10].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  this[0xc].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar4;
  this[0xd].field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e15d0;
  *(undefined2 *)&this[0x10].field0_0x0 = 0;
  this[0xf].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  this[0xe].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  *(QString **)(param_1 + 0x18) = this;
  puVar7 = operator_new(0x28);
  puVar7[4] = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
  uStack_60 = auVar14._8_8_;
  *puVar7 = puVar3;
  puVar7[1] = uStack_60;
  puVar7[2] = puVar3;
  *(undefined4 *)(puVar7 + 3) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0xffffffff;
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  CVar13 = (CAbstractTask)0x1;
  if (*(int *)(*(long *)(param_2 + 2) + 4) == 0) {
    CVar13 = (CAbstractTask)(*param_2 - 1U < 4);
  }
  param_1[0x28] = CVar13;
  QString::operator=(this,(QString *)(param_2 + 2));
  lVar10 = *(long *)(param_1 + 0x18);
  *(int *)(lVar10 + 8) = *param_2;
  if (*(long *)(lVar10 + 0x48) != *(long *)(param_2 + 4)) {
    FUN_1002101d0(&local_40,param_2 + 4);
    piVar11 = *(int **)(lVar10 + 0x48);
    *(int **)(lVar10 + 0x48) = local_40;
    local_40 = piVar11;
    if (*piVar11 != -1) {
      if (*piVar11 != 0) {
        LOCK();
        *piVar11 = *piVar11 + -1;
        local_29 = *piVar11 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002dcbf9;
      }
      FUN_1001c45d0(&local_40,piVar11);
    }
  }
LAB_1002dcbf9:
  lVar10 = *(long *)(param_1 + 0x18);
  piVar11 = *(int **)(param_2 + 6);
  if (*(int **)(lVar10 + 0x60) != piVar11) {
    local_38 = piVar11;
    if (*piVar11 != -1) {
      if (*piVar11 == 0) {
        QListData::detach((int)&local_38);
        iVar1 = local_38[2];
        if (iVar1 != local_38[3]) {
          puVar7 = (undefined8 *)
                   (*(long *)(param_2 + 6) + 0x10 + (long)*(int *)(*(long *)(param_2 + 6) + 8) * 8);
          piVar11 = local_38 + (long)iVar1 * 2 + 4;
          lVar8 = (long)local_38[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = (int *)*puVar7;
            *(int **)piVar11 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_29 = *piVar2 != 0;
              UNLOCK();
            }
            piVar11 = piVar11 + 2;
            puVar7 = puVar7 + 1;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      else {
        LOCK();
        *piVar11 = *piVar11 + 1;
        local_29 = *piVar11 != 0;
        UNLOCK();
      }
    }
    piVar11 = *(int **)(lVar10 + 0x60);
    *(int **)(lVar10 + 0x60) = local_38;
    local_38 = piVar11;
    FUN_100039a80(&local_38);
    lVar10 = *(long *)(param_1 + 0x18);
  }
  *(char *)(lVar10 + 0xc) = (char)param_2[8];
  uVar9 = FUN_100152280();
  lVar10 = FUN_1001554a0(uVar9);
  if (lVar10 == 0) {
    bVar5 = 0;
  }
  else {
    uVar9 = FUN_10016f500(lVar10);
    bVar5 = FUN_10061b4d0(uVar9,0x2010);
  }
  pcVar12 = "http://registration.parallels.com/product/promo_handler";
  if (bVar5 != 0) {
    pcVar12 = "http://registration.parallels.com/product/promo_handler_ka";
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(pcVar12,(uint)bVar5 * 3 + 0x37);
  lVar10 = *(long *)(param_1 + 0x18);
  QLocale::QLocale(local_58);
  FUN_100d3f730(&local_50,&local_48,local_58);
  QString::operator=((QString *)(lVar10 + 0x10),&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002dcd60;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1002dcd60:
  QLocale::~QLocale(local_58);
  *(int *)(*(long *)(param_1 + 0x20) + 0x20) = *param_2;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

