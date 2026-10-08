
void FUN_10007d320(long param_1,int param_2)

{
  QSize QVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  int local_40;
  int local_3c;
  Data *local_38;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  (*(code *)puVar2)(uVar3,PTR_s_setMode__102269f10,param_2);
  (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x20),PTR_s_setActiveMode__102269f18,param_2);
  uVar3 = FUN_10007c850(param_1);
  local_28 = uVar3;
  FUN_10007c720(param_1,&local_28);
  QVar1 = (*(QSize **)(param_1 + 0x10))[5];
  local_30 = (*(int *)((long)QVar1 + 0x1c) + 1) - *(int *)((long)QVar1 + 0x14);
  local_2c = (undefined4)((ulong)uVar3 >> 0x20);
  QWidget::resize(*(QSize **)(param_1 + 0x10));
  MacUtils::getHiDPIDisplays();
  dVar4 = DAT_100e12b90;
  if (*(int *)(local_38 + 0xc) == *(int *)(local_38 + 8)) {
    dVar4 = DAT_100e11050;
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      local_28 = CONCAT71(local_28._1_7_,*(int *)local_38 != 0);
      if (*(int *)local_38 != 0) goto LAB_10007d3fe;
    }
    QListData::dispose(local_38);
  }
LAB_10007d3fe:
  local_40 = (int)(*(double *)(&DAT_100e12bb0 + (ulong)(param_2 == 1) * 8) * dVar4);
  local_3c = (int)(dVar4 * *(double *)(&DAT_100e12ba0 + (ulong)(param_2 == 1) * 8));
  FUN_100080890(*(undefined8 *)(param_1 + 0x28),&local_40);
  return;
}

