
undefined8 FUN_100b45690(long *param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  int *piVar9;
  ulong uVar10;
  bool bVar11;
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
  piVar9 = (int *)*param_1;
  uVar5 = 0;
  if (piVar9[3] - piVar9[2] != 0) {
    pvVar4 = _malloc((long)(piVar9[3] - piVar9[2]) << 2);
    uVar5 = 0x80000002;
    if (pvVar4 != (void *)0x0) {
      local_58 = piVar9;
      if (*piVar9 != -1) {
        if (*piVar9 == 0) {
          QListData::detach((int)&local_58);
          iVar2 = local_58[2];
          if (iVar2 != local_58[3]) {
            puVar8 = (undefined8 *)(*param_1 + 0x10 + (long)*(int *)(*param_1 + 8) * 8);
            piVar9 = local_58 + (long)iVar2 * 2 + 4;
            lVar6 = (long)local_58[3] * 8 + (long)iVar2 * -8;
            do {
              piVar1 = (int *)*puVar8;
              *(int **)piVar9 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                local_31 = *piVar1 != 0;
                UNLOCK();
              }
              piVar9 = piVar9 + 2;
              puVar8 = puVar8 + 1;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
          }
        }
        else {
          LOCK();
          *piVar9 = *piVar9 + 1;
          local_31 = *piVar9 != 0;
          UNLOCK();
        }
      }
      local_50 = local_58 + (long)local_58[2] * 2 + 4;
      local_48 = local_58 + (long)local_58[3] * 2 + 4;
      local_40 = 1;
      iVar2 = 0;
      if (local_58[2] != local_58[3]) {
        uVar10 = 0;
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
            if (iVar2 == 0) {
              uVar3 = QHostAddress::toIPv4Address();
              *(undefined4 *)((long)pvVar4 + uVar10 * 4) = uVar3;
              uVar10 = (ulong)((int)uVar10 + 1);
            }
            else if (iVar2 != 1) {
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
                  if ((bool)local_31) goto LAB_100b45860;
                }
                QArrayData::deallocate(local_70,1,8);
              }
            }
LAB_100b45860:
            QHostAddress::~QHostAddress(local_68);
            local_40 = 0;
          }
          iVar2 = (int)uVar10;
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b4589f;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_100b4589f:
          local_50 = local_50 + 2;
          uVar7 = local_40 ^ 1;
          bVar11 = local_40 != 1;
          local_40 = uVar7;
        } while ((bVar11) && (local_50 != local_48));
      }
      FUN_100039a80(&local_58);
      if (iVar2 == 0) {
        _free(pvVar4);
        pvVar4 = (void *)0x0;
      }
      *param_2 = pvVar4;
      *param_3 = iVar2;
      uVar5 = 0;
    }
  }
  return uVar5;
}

