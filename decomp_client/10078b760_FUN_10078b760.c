
void FUN_10078b760(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  QArrayData *pQVar9;
  undefined8 in_stack_fffffffffffffe18;
  undefined4 uVar10;
  long local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  undefined8 local_128;
  QArrayData *local_120;
  undefined8 local_118;
  int *local_110;
  undefined8 uStack_108;
  QVariant local_100;
  QVariant local_f0;
  int local_dc [39];
  int *local_40;
  char *local_38;
  
  uVar10 = (undefined4)((ulong)in_stack_fffffffffffffe18 >> 0x20);
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  local_dc[0] = param_2;
  lVar3 = QObject::sender();
  local_128 = *(undefined8 *)(lVar3 + 0x18);
  local_120 = *(QArrayData **)(lVar3 + 0x20);
  if (1 < *(int *)local_120 + 1U) {
    LOCK();
    *(int *)local_120 = *(int *)local_120 + 1;
    UNLOCK();
    local_40 = (int *)CONCAT71(local_40._1_7_,*(int *)local_120 != 0);
  }
  local_118 = *(undefined8 *)(lVar3 + 0x28);
  local_110 = *(int **)(lVar3 + 0x30);
  uStack_108 = *(undefined8 *)(lVar3 + 0x38);
  if (local_110 != (int *)0x0) {
    LOCK();
    *local_110 = *local_110 + 1;
    UNLOCK();
    local_40 = (int *)CONCAT71(local_40._1_7_,*local_110 != 0);
  }
  QVariant::QVariant(&local_100,(QVariant *)(lVar3 + 0x40));
  QVariant::QVariant(&local_f0,&local_100);
  uVar2 = QVariant::toInt((bool *)&local_f0);
  QVariant::~QVariant(&local_f0);
  QVariant::~QVariant(&local_100);
  if (local_110 != (int *)0x0) {
    LOCK();
    *local_110 = *local_110 + -1;
    UNLOCK();
    local_40 = (int *)CONCAT71(local_40._1_7_,*local_110 != 0);
    if ((*local_110 == 0) && (local_110 != (int *)0x0)) {
      operator_delete(local_110);
    }
  }
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      UNLOCK();
      local_40 = (int *)CONCAT71(local_40._1_7_,*(int *)local_120 != 0);
      if (*(int *)local_120 != 0) goto LAB_10078b8a5;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10078b8a5:
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_100785b00(pvVar4);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar4;
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar5 = FUN_100785c90(DAT_1023109d8,uVar5,uVar2);
  if (-1 < local_dc[0]) {
    CSdkRequest::getResultParam((uint)&local_140);
    FUN_100786620(uVar5,&local_140);
    if (local_140 != 0) {
      _PrlHandle_Free();
    }
    goto LAB_10078ba38;
  }
  FUN_100786690(&local_138,uVar2);
  QString::toUtf8();
  pQVar9 = local_130 + *(long *)(local_130 + 0x10);
  puVar8 = (undefined8 *)0x0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (puVar8 = (undefined8 *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
    puVar8 = *(undefined8 **)(param_1 + 0x20);
  }
  (**(code **)*puVar8)();
  uVar6 = QMetaObject::className();
  iVar1 = local_dc[0];
  uVar7 = FUN_100dddcf0(local_dc[0]);
  FUN_100df99c0("","prl_client_app",0,
                "Failed to fetch counter [%s] data for context %s with RC = %.8X, rc = [%s].",pQVar9
                ,uVar6,CONCAT44(uVar10,iVar1),uVar7);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      UNLOCK();
      local_40 = (int *)CONCAT71(local_40._1_7_,*(int *)local_130 != 0);
      if (*(int *)local_130 != 0) goto LAB_10078ba02;
    }
    QArrayData::deallocate(local_130,1,8);
  }
LAB_10078ba02:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      UNLOCK();
      local_40 = (int *)CONCAT71(local_40._1_7_,*(int *)local_138 != 0);
      if (*(int *)local_138 != 0) goto LAB_10078ba38;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10078ba38:
  local_dc[0x1d] = 0;
  local_dc[0x1e] = 0;
  local_dc[0x1f] = 0;
  local_dc[0x20] = 0;
  local_dc[0x19] = 0;
  local_dc[0x1a] = 0;
  local_dc[0x1b] = 0;
  local_dc[0x1c] = 0;
  local_dc[0x15] = 0;
  local_dc[0x16] = 0;
  local_dc[0x17] = 0;
  local_dc[0x18] = 0;
  local_dc[0x11] = 0;
  local_dc[0x12] = 0;
  local_dc[0x13] = 0;
  local_dc[0x14] = 0;
  local_dc[0xd] = 0;
  local_dc[0xe] = 0;
  local_dc[0xf] = 0;
  local_dc[0x10] = 0;
  local_dc[9] = 0;
  local_dc[10] = 0;
  local_dc[0xb] = 0;
  local_dc[0xc] = 0;
  local_dc[5] = 0;
  local_dc[6] = 0;
  local_dc[7] = 0;
  local_dc[8] = 0;
  local_dc[1] = 0;
  local_dc[2] = 0;
  local_dc[3] = 0;
  local_dc[4] = 0;
  local_40 = local_dc;
  local_38 = "PRL_RESULT";
  local_dc[0x21] = 0;
  local_dc[0x22] = 0;
  local_dc[0x23] = 0;
  local_dc[0x24] = 0;
  QMetaObject::invokeMethod(uVar5,"valueFetchFinished",0,0,0);
  return;
}

