
void FUN_100576ac0(long param_1)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  QArrayData *local_28;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(lVar8 + 0x1130);
  uVar3 = 0;
  lVar5 = *(long *)(lVar8 + 0x1128);
  lVar7 = lVar6;
  if (lVar6 != *(long *)(lVar8 + 0x1128)) {
    do {
      cVar2 = FUN_100595b70(*(undefined8 *)(lVar5 + uVar3 * 8));
      if (cVar2 != '\0') {
        lVar8 = *(long *)(param_1 + 0x20);
        uVar3 = *(ulong *)(param_1 + 0x28);
        lVar6 = *(long *)(lVar8 + 0x1128);
        lVar7 = *(long *)(lVar8 + 0x1130);
        break;
      }
      uVar3 = *(long *)(param_1 + 0x28) + 1;
      *(ulong *)(param_1 + 0x28) = uVar3;
      lVar8 = *(long *)(param_1 + 0x20);
      lVar6 = *(long *)(lVar8 + 0x1128);
      lVar7 = *(long *)(lVar8 + 0x1130);
      lVar5 = lVar6;
    } while (uVar3 < (ulong)(lVar7 - lVar6 >> 3));
  }
  if (lVar7 - lVar6 >> 3 == uVar3) {
    return;
  }
  if (2 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("Compact","vdisk",3,"[%p] === Compact started for disk [%s]",lVar8,
                  local_28 + *(long *)(local_28 + 0x10));
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) goto LAB_100576bce;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
LAB_100576bce:
  uVar4 = QDateTime::currentMSecsSinceEpoch();
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x13a8);
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 0xf0);
    *plVar1 = *plVar1 + 1;
  }
  FUN_1005781e0(param_1);
  return;
}

