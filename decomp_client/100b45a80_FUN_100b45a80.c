
undefined8 FUN_100b45a80(long *param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  QArrayData *local_70;
  QHostAddress local_68 [8];
  QArrayData *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  *param_3 = 0;
  *param_2 = 0;
  piVar8 = (int *)*param_1;
  uVar4 = 0;
  if (piVar8[3] - piVar8[2] != 0) {
    pvVar3 = _malloc((long)((piVar8[3] - piVar8[2]) * 0x10));
    uVar4 = 0x80000002;
    if (pvVar3 != (void *)0x0) {
      local_58 = piVar8;
      if (*piVar8 != -1) {
        if (*piVar8 == 0) {
          QListData::detach((int)&local_58);
          iVar9 = local_58[2];
          if (iVar9 != local_58[3]) {
            puVar7 = (undefined8 *)(*param_1 + 0x10 + (long)*(int *)(*param_1 + 8) * 8);
            piVar8 = local_58 + (long)iVar9 * 2 + 4;
            lVar5 = (long)local_58[3] * 8 + (long)iVar9 * -8;
            do {
              piVar1 = (int *)*puVar7;
              *(int **)piVar8 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                local_31 = *piVar1 != 0;
                UNLOCK();
              }
              piVar8 = piVar8 + 2;
              puVar7 = puVar7 + 1;
              lVar5 = lVar5 + -8;
            } while (lVar5 != 0);
          }
        }
        else {
          LOCK();
          *piVar8 = *piVar8 + 1;
          local_31 = *piVar8 != 0;
          UNLOCK();
        }
      }
      local_50 = local_58 + (long)local_58[2] * 2 + 4;
      local_48 = local_58 + (long)local_58[3] * 2 + 4;
      local_40 = 1;
      iVar9 = 0;
      if (local_58[2] != local_58[3]) {
        iVar9 = 0;
        do {
          local_60 = *(QArrayData **)local_50;
          if (1 < *(int *)local_60 + 1U) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + 1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
          }
          if (local_40 != 0) {
            QHostAddress::QHostAddress(local_68);
            iVar2 = FUN_100b45990(&local_60,local_68);
            if (iVar2 != 0) {
              if (iVar2 == 1) {
                auVar11 = QHostAddress::toIPv6Address();
                *(long *)((long)pvVar3 + (ulong)(uint)(iVar9 << 4)) = auVar11._0_8_;
                *(long *)((long)pvVar3 + (ulong)(uint)(iVar9 << 4) + 8) = auVar11._8_8_;
                iVar9 = iVar9 + 1;
              }
              else {
                QString::toUtf8();
                FUN_100df99c0("","prl_net",0,
                              "[VMNET] Wrong-formatted address in the list of allowed Sources IPs: %s"
                              ,local_70 + *(long *)(local_70 + 0x10));
                if (*(int *)local_70 != -1) {
                  if (*(int *)local_70 != 0) {
                    LOCK();
                    *(int *)local_70 = *(int *)local_70 + -1;
                    local_31 = *(int *)local_70 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100b45c60;
                  }
                  QArrayData::deallocate(local_70,1,8);
                }
              }
            }
LAB_100b45c60:
            QHostAddress::~QHostAddress(local_68);
            local_40 = 0;
          }
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b45c9f;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_100b45c9f:
          local_50 = local_50 + 2;
          uVar6 = local_40 ^ 1;
          bVar10 = local_40 != 1;
          local_40 = uVar6;
        } while ((bVar10) && (local_50 != local_48));
      }
      FUN_100039a80(&local_58);
      if (iVar9 == 0) {
        _free(pvVar3);
        pvVar3 = (void *)0x0;
      }
      *param_2 = pvVar3;
      *param_3 = iVar9;
      uVar4 = 0;
    }
  }
  return uVar4;
}

