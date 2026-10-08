
void FUN_1005529c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar8 + 0x10);
    iVar5 = *(int *)(lVar9 + 8);
    if (iVar5 < *(int *)(lVar9 + 0xc)) {
      lVar6 = lVar9 + 8 + (long)iVar5 * 8;
      lVar9 = (long)*(int *)(lVar9 + 0xc) * 8 + (long)iVar5 * -8;
      do {
        if (lVar9 == 0) {
          return;
        }
        puVar1 = (undefined8 *)(lVar6 + 8);
        lVar6 = lVar6 + 8;
        cVar2 = FUN_100714bd0(*puVar1,param_3);
        lVar9 = lVar9 + -8;
      } while (cVar2 == '\0');
      uVar7 = (ulong)(lVar6 - (*(long *)(lVar8 + 0x10) + 0x10 +
                              (long)*(int *)(*(long *)(lVar8 + 0x10) + 8) * 8)) >> 3;
      iVar5 = (int)uVar7;
      if (iVar5 != -1) {
        lVar8 = *(long *)(param_1 + 0x10);
        if (-1 < iVar5) {
          puVar1 = (undefined8 *)(lVar8 + 0x10);
          puVar3 = (uint *)*puVar1;
          uVar4 = puVar3[2];
          if (iVar5 < (int)(puVar3[3] - uVar4)) {
            if (1 < *puVar3) {
              FUN_100559bb0(puVar1,puVar3[1]);
              puVar3 = (uint *)*puVar1;
              uVar4 = puVar3[2];
            }
            FUN_100559f00(puVar1,puVar3 + ((long)iVar5 + (long)(int)uVar4) * 2 + 4);
            QListData::remove((int)puVar1);
            lVar8 = *(long *)(param_1 + 0x10);
          }
        }
        FUN_100557e00(lVar8 + 0x10,uVar7 & 0xffffffff,param_2);
        QAbstractItemModel::beginResetModel();
        QAbstractItemModel::endResetModel();
        return;
      }
    }
  }
  return;
}

