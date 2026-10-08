
void FUN_10057e9b0(long param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  QString local_a0;
  long local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  uint local_80;
  QVariant local_78;
  QString local_68;
  QString local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  if (param_3 != 0) {
    return;
  }
  (**(code **)(*param_2 + 0x18))(&local_58,param_2,0,0);
  QVariant::toString();
  QVariant::~QVariant(&local_58);
  (**(code **)(*param_2 + 0x18))(&local_78,param_2,0,0x100);
  QVariant::toString();
  QVariant::~QVariant(&local_78);
  cVar3 = operator==(&local_60,&local_68);
  if (cVar3 == '\0') {
    puVar1 = (undefined8 *)(param_1 + 0x28);
    FUN_10055a620(&local_98,puVar1);
    local_90 = (undefined8 *)(local_98 + 0x10 + (long)*(int *)(local_98 + 8) * 8);
    local_88 = (undefined8 *)(local_98 + 0x10 + (long)*(int *)(local_98 + 0xc) * 8);
    local_80 = 1;
    if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
      do {
        if ((local_80 == 0) || (cVar3 = operator==((QString *)*local_90,&local_60), cVar3 == '\0'))
        {
          local_90 = local_90 + 1;
          local_80 = 1;
        }
        else {
          FUN_10071a2e0(&local_a0,puVar1,&local_60);
          QString::operator=(&local_60,&local_a0);
          if (*(int *)local_a0.field0_0x0 != -1) {
            if (*(int *)local_a0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
              local_31 = *(int *)local_a0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10057eb19;
            }
            QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
          }
LAB_10057eb19:
          QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),0));
          pcVar2 = *(code **)(*param_2 + 0x20);
          QVariant::QVariant(&local_48,&local_60);
          (*pcVar2)(param_2,0,0,&local_48);
          QVariant::~QVariant(&local_48);
          QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),0));
          local_90 = local_90 + 1;
          uVar6 = local_80 ^ 1;
          bVar10 = local_80 == 1;
          local_80 = uVar6;
          if (bVar10) break;
        }
      } while (local_90 != local_88);
    }
    FUN_1000fe670(&local_98);
    puVar5 = (uint *)*puVar1;
    uVar4 = (ulong)puVar5[2];
    lVar7 = 0;
    if ((int)puVar5[2] < (int)puVar5[3]) {
      do {
        cVar3 = operator==(*(QString **)(puVar5 + ((int)uVar4 + lVar7) * 2 + 4),&local_68);
        puVar5 = (uint *)*puVar1;
        if (cVar3 != '\0') {
          if (1 < *puVar5) {
            FUN_10055a380(puVar1,puVar5[1]);
            puVar5 = (uint *)*puVar1;
          }
          QString::operator=(*(QString **)(puVar5 + ((int)puVar5[2] + lVar7) * 2 + 4),&local_60);
          break;
        }
        lVar7 = lVar7 + 1;
        uVar4 = (ulong)(int)puVar5[2];
      } while (lVar7 < (long)((long)(int)puVar5[3] - uVar4));
    }
    lVar7 = *(long *)(param_1 + 0x30);
    uVar4 = (ulong)*(uint *)(lVar7 + 8);
    lVar8 = 0;
    if ((int)*(uint *)(lVar7 + 8) < *(int *)(lVar7 + 0xc)) {
      plVar9 = (long *)(param_1 + 0x30);
      do {
        cVar3 = operator==((QString *)(*(long *)(lVar7 + 0x10 + ((int)uVar4 + lVar8) * 8) + 8),
                           &local_68);
        if (cVar3 != '\0') {
          puVar5 = (uint *)*plVar9;
          if (1 < *puVar5) {
            FUN_1001c4bd0(plVar9,puVar5[1]);
            puVar5 = (uint *)*plVar9;
          }
          QString::operator=((QString *)(*(long *)(puVar5 + ((int)puVar5[2] + lVar8) * 2 + 4) + 8),
                             &local_60);
        }
        lVar8 = lVar8 + 1;
        lVar7 = *plVar9;
        uVar4 = (ulong)*(int *)(lVar7 + 8);
      } while (lVar8 < (long)((long)*(int *)(lVar7 + 0xc) - uVar4));
    }
  }
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057ecf2;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10057ecf2:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_60.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
  return;
}

