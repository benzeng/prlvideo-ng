
undefined1 FUN_1005526e0(QModelIndex *param_1,QModelIndex *param_2,bool *param_3,int param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  
  if (((-1 < *(int *)param_2) && (-1 < *(int *)(param_2 + 4))) && (*(long *)(param_2 + 0x10) != 0))
  {
    if (*(int *)(param_2 + 4) == 0) {
      lVar10 = 0;
      if (param_4 == 10) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
        uVar8 = (ulong)*(uint *)(lVar6 + 8);
        if ((int)*(uint *)(lVar6 + 8) < *(int *)(lVar6 + 0xc)) {
          iVar11 = 0;
          do {
            cVar4 = FUN_100551820(*(undefined8 *)(lVar6 + 0x10 + ((int)uVar8 + lVar10) * 8));
            if (cVar4 != '\0') {
              if (*(int *)param_2 == iVar11) {
                puVar7 = *(uint **)(*(long *)(param_1 + 0x10) + 0x10);
                if (1 < *puVar7) {
                  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
                  FUN_100559bb0(puVar9,puVar7[1]);
                  puVar7 = (uint *)*puVar9;
                }
                uVar1 = *(undefined8 *)(puVar7 + ((int)puVar7[2] + lVar10) * 2 + 4);
                uVar5 = FUN_100714bb0(uVar1);
                iVar11 = QVariant::toInt(param_3);
                uVar2 = uVar5 | 2;
                if (iVar11 != 2) {
                  uVar2 = uVar5 & 0xfffffffd;
                }
                FUN_100714bc0(uVar1,uVar2);
                puVar3 = PTR_shared_null_1021e1288;
                QAbstractItemModel::dataChanged(param_1,param_2,(QVector *)param_2);
                if (*(int *)puVar3 == -1) {
                  return 1;
                }
                if (*(int *)puVar3 != 0) {
                  LOCK();
                  *(int *)puVar3 = *(int *)puVar3 + -1;
                  UNLOCK();
                  if (*(int *)puVar3 != 0) {
                    return 1;
                  }
                }
                QArrayData::deallocate((QArrayData *)puVar3,4,8);
                return 1;
              }
              iVar11 = iVar11 + 1;
            }
            lVar10 = lVar10 + 1;
            lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
            uVar8 = (ulong)*(int *)(lVar6 + 8);
          } while (lVar10 < (long)((long)*(int *)(lVar6 + 0xc) - uVar8));
        }
      }
    }
    else {
      FUN_100df99c0("","prl_client_app",0,"setData: invalid edit column value %d");
    }
  }
  return 0;
}

