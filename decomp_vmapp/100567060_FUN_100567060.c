
undefined8 * FUN_100567060(undefined8 *param_1,undefined4 *param_2)

{
  QArrayData *pQVar1;
  undefined2 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  long lVar10;
  long lVar11;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar7 = *(int *)(*(long *)(param_2 + 2) + 0xc) - *(int *)(*(long *)(param_2 + 2) + 8);
  QByteArray::QByteArray((QByteArray *)&local_40,iVar7 * 0x50 + 0x20,'\0');
  if ((*(uint *)local_40 < 2) && (*(long *)(local_40 + 0x10) == 0x18)) {
    lVar10 = *(long *)(local_40 + 0x10);
    local_50 = local_40 + lVar10;
LAB_1005670e1:
    pQVar9 = local_40;
    if (*(long *)(local_40 + 0x10) != 0x18) goto LAB_1005670e8;
  }
  else {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
    lVar10 = *(long *)(local_40 + 0x10);
    local_50 = local_40 + lVar10;
    if (*(uint *)local_40 < 2) goto LAB_1005670e1;
LAB_1005670e8:
    pQVar9 = local_40;
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  pQVar1 = local_40 + *(long *)(local_40 + 0x10) + 0x20;
  lVar5 = *(long *)(param_2 + 2);
  uVar6 = (ulong)*(uint *)(lVar5 + 8);
  if ((int)*(uint *)(lVar5 + 8) < *(int *)(lVar5 + 0xc)) {
    pQVar8 = local_40 + *(long *)(local_40 + 0x10) + 0x20;
    lVar11 = 0;
    do {
      _memcpy(pQVar8,*(void **)(lVar5 + 0x10 + ((int)uVar6 + lVar11) * 8),0x50);
      lVar11 = lVar11 + 1;
      lVar5 = *(long *)(param_2 + 2);
      uVar6 = (ulong)*(int *)(lVar5 + 8);
      pQVar8 = pQVar8 + 0x50;
    } while (lVar11 < (long)((long)*(int *)(lVar5 + 0xc) - uVar6));
  }
  *(undefined8 *)local_50 = 0x2020444e50534342;
  *(undefined4 *)(pQVar9 + lVar10 + 8) = *param_2;
  *(undefined4 *)(pQVar9 + lVar10 + 0xc) = param_2[1];
  *(int *)(pQVar9 + lVar10 + 0x10) =
       *(int *)(*(long *)(param_2 + 2) + 0xc) - *(int *)(*(long *)(param_2 + 2) + 8);
  uVar2 = qChecksum((char *)pQVar1,iVar7 * 0x50);
  *(undefined2 *)(pQVar9 + lVar10 + 0x14) = uVar2;
  QByteArray::toBase64();
  iVar7 = 0;
  pQVar9 = local_48 + *(long *)(local_48 + 0x10);
  if ((pQVar9 != (QArrayData *)0x0) && (*(uint *)(local_48 + 4) != 0)) {
    lVar10 = 0;
    do {
      if (pQVar9[lVar10] == (QArrayData)0x0) break;
      lVar10 = lVar10 + 1;
    } while ((uint)lVar10 < *(uint *)(local_48 + 4));
    iVar7 = (int)lVar10;
    if (iVar7 == -1) {
      sVar3 = _strlen((char *)pQVar9);
      iVar7 = (int)sVar3;
    }
  }
  uVar4 = QString::fromLatin1_helper((char *)pQVar9,iVar7);
  *param_1 = uVar4;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100567229;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100567229:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return param_1;
}

