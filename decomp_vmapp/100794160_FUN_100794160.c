
undefined4 FUN_100794160(ulong param_1,uint param_2)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *pNVar3;
  uint uVar4;
  undefined8 *puVar5;
  Node *pNVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    return *(undefined4 *)(param_1 + 8);
  }
  uVar8 = param_1;
  if ((param_1 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar8 = param_1 | 1;
  }
  pNVar1 = *(Node **)(param_1 + 0x18);
  uVar7 = *(uint *)(pNVar1 + 0x20);
  pNVar3 = pNVar1;
  if (uVar7 != 0) {
    uVar4 = ((*(uint *)(pNVar1 + 0x24) ^ param_2) << 0x10 |
            (*(uint *)(pNVar1 + 0x24) ^ param_2) >> 0x10) ^ param_2;
    pNVar2 = *(Node **)(*(long *)(pNVar1 + 8) + ((ulong)uVar4 % (ulong)uVar7) * 8);
    pNVar6 = pNVar2;
    if (pNVar2 != pNVar1) {
      do {
        if (((*(uint *)(pNVar6 + 8) == uVar4) && (*(uint *)(pNVar6 + 0xc) == param_2)) &&
           (*(uint *)(pNVar6 + 0x10) == param_2)) {
          if (pNVar6 != pNVar1) {
            uVar9 = 0;
            if (*(int *)(pNVar1 + 0x14) == 0) goto LAB_100794272;
            goto LAB_100794200;
          }
          break;
        }
        pNVar6 = *(Node **)pNVar6;
      } while (pNVar6 != pNVar1);
      if (uVar7 == 0) goto LAB_100794245;
    }
    puVar5 = *(undefined8 **)(pNVar1 + 8);
    do {
      pNVar3 = (Node *)*puVar5;
      if ((Node *)*puVar5 != pNVar1) break;
      uVar7 = uVar7 - 1;
      puVar5 = puVar5 + 1;
      pNVar3 = pNVar1;
    } while (uVar7 != 0);
  }
LAB_100794245:
  if (pNVar3 != pNVar1) {
    do {
      if ((*(uint *)(pNVar3 + 0xc) <= param_2) && (param_2 <= *(uint *)(pNVar3 + 0x10))) {
        uVar9 = *(undefined4 *)(pNVar3 + 0x14);
        goto LAB_100794272;
      }
      pNVar3 = (Node *)QHashData::nextNode(pNVar3);
    } while (pNVar3 != *(Node **)(param_1 + 0x18));
  }
  uVar9 = *(undefined4 *)(param_1 + 8);
LAB_100794272:
  if ((uVar8 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return uVar9;
  while (pNVar2 = *(Node **)pNVar2, pNVar2 != pNVar1) {
LAB_100794200:
    if (((*(uint *)(pNVar2 + 8) == uVar4) && (*(uint *)(pNVar2 + 0xc) == param_2)) &&
       (*(uint *)(pNVar2 + 0x10) == param_2)) {
      if (pNVar2 != pNVar1) {
        uVar9 = *(undefined4 *)(pNVar2 + 0x14);
      }
      break;
    }
  }
  goto LAB_100794272;
}

