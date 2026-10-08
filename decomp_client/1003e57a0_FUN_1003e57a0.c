
void FUN_1003e57a0(QString *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar2 = PTR_s_VmConfig_1021f1e00;
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 4) != 0) {
    iVar6 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       PTR_s_VmConfig_1021f1e00,0xffffffff,1);
    if (iVar6 != 0) {
      lVar1 = *param_2;
      iVar6 = QString::compare_helper
                        (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                         PTR_s_TimeMachine_1021f1e08,0xffffffff,1);
      if (iVar6 != 0) goto LAB_1003e5812;
    }
    lVar1 = *param_2;
    iVar6 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),puVar2,0xffffffff,
                       1);
    if (iVar6 == 0) {
      FUN_1003e40f0(param_1[3].field0_0x0);
      return;
    }
    lVar1 = *param_2;
    iVar6 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       PTR_s_TimeMachine_1021f1e08,0xffffffff,1);
    if (iVar6 == 0) {
      CMappingModel::startSubmit(param_1);
      FUN_100109d60(&local_30,*(undefined8 *)(param_1[3].field0_0x0 + 0x20),0);
      bVar3 = FUN_100d701e0(&local_30,0);
      bVar4 = QVariant::toBool();
      if ((bVar3 ^ bVar4) == 1) {
        cVar5 = QVariant::toBool();
        if (cVar5 == '\0') {
          FUN_100d72660(&local_30);
        }
        else {
          FUN_100d724e0(&local_30);
        }
      }
      CMappingModel::endSubmit((int)param_1);
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          UNLOCK();
          if (*(int *)local_30 != 0) {
            return;
          }
          local_21 = 0;
        }
        QArrayData::deallocate(local_30,2,8);
      }
    }
    return;
  }
LAB_1003e5812:
  CMappingModel::submitStorage(param_1);
  return;
}

