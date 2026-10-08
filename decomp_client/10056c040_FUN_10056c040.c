
void FUN_10056c040(long param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  ulong uVar8;
  Data *pDVar9;
  long lVar10;
  Data *local_80;
  undefined1 local_78 [8];
  QKeySequence local_70 [8];
  undefined1 local_68 [8];
  QKeySequence local_60 [8];
  undefined1 local_58 [8];
  QKeySequence local_50 [8];
  QVariant local_48;
  undefined1 local_31;
  
  if (param_2 == 0) {
    return;
  }
  QObject::sender();
  uVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221cc70);
  QObject::property((char *)&local_48);
  if ((local_48.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
    FUN_100587400(local_68,uVar5);
    plVar7 = (long *)(param_1 + 0x30);
    puVar6 = *(uint **)(param_1 + 0x30);
    uVar8 = 0;
    if ((int)puVar6[2] < (int)puVar6[3]) {
      do {
        if (1 < *puVar6) {
          FUN_10056ea70(plVar7,puVar6[1]);
          puVar6 = (uint *)*plVar7;
        }
        cVar3 = QKeySequence::operator==
                          (local_60,(QKeySequence *)
                                    (*(long *)(puVar6 + ((long)(int)puVar6[2] + uVar8) * 2 + 4) + 8)
                          );
        if (cVar3 != '\0') {
          if ((int)uVar8 != -1) goto LAB_10056c1bf;
          break;
        }
        uVar8 = uVar8 + 1;
        puVar6 = (uint *)*plVar7;
      } while ((long)uVar8 < (long)(int)puVar6[3] - (long)(int)puVar6[2]);
    }
    FUN_100587400(local_78,uVar5);
    QAbstractItemModel::beginResetModel();
    FUN_10056cc00(plVar7,local_78);
    QAbstractItemModel::endResetModel();
    uVar8 = (ulong)(uint)((*(int *)(*plVar7 + 0xc) + -1) - *(int *)(*plVar7 + 8));
    QKeySequence::~QKeySequence(local_70);
LAB_10056c1bf:
    QKeySequence::~QKeySequence(local_60);
  }
  else {
    uVar4 = QVariant::toInt((bool *)&local_48);
    uVar8 = (ulong)uVar4;
    FUN_100587400(local_58,uVar5);
    QAbstractItemModel::beginResetModel();
    puVar6 = *(uint **)(param_1 + 0x30);
    if (1 < *puVar6) {
      FUN_10056ea70((undefined8 *)(param_1 + 0x30),puVar6[1]);
      puVar6 = *(uint **)(param_1 + 0x30);
    }
    FUN_1006b0df0(*(undefined8 *)(puVar6 + ((long)(int)uVar4 + (long)(int)puVar6[2]) * 2 + 4),
                  local_58);
    QAbstractItemModel::endResetModel();
    QKeySequence::~QKeySequence(local_50);
  }
  FUN_100568a10(&local_80,param_1 + 0x20,uVar8 & 0xffffffff);
  plVar7 = (long *)QAbstractItemView::selectionModel();
  pcVar2 = *(code **)(*plVar7 + 0x60);
  if (1 < *(uint *)local_80) {
    FUN_100534020(&local_80,*(uint *)(local_80 + 4));
  }
  (*pcVar2)(plVar7,*(undefined8 *)(local_80 + (long)(int)*(uint *)(local_80 + 8) * 8 + 0x10),0x33);
  FUN_10083d840(*(undefined8 *)(param_1 + 0x10));
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056c28f;
    }
    iVar1 = *(int *)(local_80 + 0xc);
    if (iVar1 != *(int *)(local_80 + 8)) {
      lVar10 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = local_80 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar9 != (void *)0x0) {
          operator_delete(*(void **)pDVar9);
        }
        pDVar9 = pDVar9 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_80);
  }
LAB_10056c28f:
  QVariant::~QVariant(&local_48);
  return;
}

