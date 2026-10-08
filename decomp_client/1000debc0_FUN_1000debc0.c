
void FUN_1000debc0(long param_1,char param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  uint *puVar8;
  Data *pDVar9;
  Data *pDVar10;
  long lVar11;
  QKeySequence local_70 [8];
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  QMutex::lock();
  puVar8 = *(uint **)(param_1 + 0x58);
  uVar3 = puVar8[3];
  uVar4 = puVar8[2];
  if (0 < (int)((long)(int)uVar3 - (long)(int)uVar4)) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    lVar11 = 0;
    while( true ) {
      if (1 < *puVar8) {
        FUN_1000e6e10(puVar1,puVar8[1]);
        puVar8 = (uint *)*puVar1;
      }
      lVar6 = *(long *)(puVar8 + ((int)puVar8[2] + lVar11) * 2 + 4);
      piVar2 = (int *)(lVar6 + 0x30);
      if (((*(int *)(lVar6 + 0x34) != 0) || (*piVar2 != 0)) &&
         (FUN_1000ddf70(param_1,piVar2), (*(byte *)(lVar6 + 0x20) & 8) == 0)) {
        FUN_1000aaa10(&local_40,piVar2);
      }
      lVar11 = lVar11 + 1;
      if ((long)(int)uVar3 - (long)(int)uVar4 <= lVar11) break;
      puVar8 = (uint *)*puVar1;
    }
  }
  QMutex::unlock();
  puVar7 = PTR_shared_null_1021e1288;
  if (*(int *)(local_40 + 0xc) == *(int *)(local_40 + 8)) goto LAB_1000deea1;
  local_50 = 0x10;
  local_48 = 0;
  local_44 = 0x73;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_2 == '\0') {
    local_4c = 2;
  }
  else {
    local_4c = 1;
    QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Show_Jump_List_10226fcd8);
    QString::operator=(&local_58,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000dedab;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_1000dedab:
  if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
    pDVar10 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
    do {
      local_68 = (QArrayData *)puVar7;
      QKeySequence::QKeySequence(local_70);
      FUN_1000f9b40(&local_68,&local_58,&local_50,1,0,0,0,local_70);
      QKeySequence::~QKeySequence(local_70);
      FUN_1000c4970(*(undefined8 *)pDVar10,0x7c,local_68 + *(long *)(local_68 + 0x10),
                    *(undefined4 *)(local_68 + 4));
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000dee57;
        }
        QArrayData::deallocate(local_68,1,8);
      }
LAB_1000dee57:
      pDVar10 = pDVar10 + 8;
    } while (pDVar10 != local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10);
  }
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000deea1;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1000deea1:
  pDVar10 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar5 = *(int *)(local_40 + 0xc);
    if (iVar5 != *(int *)(local_40 + 8)) {
      lVar11 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar5 * -8;
      pDVar9 = local_40 + (long)iVar5 * 8 + 8;
      do {
        if (*(void **)pDVar9 != (void *)0x0) {
          operator_delete(*(void **)pDVar9);
        }
        pDVar9 = pDVar9 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar10);
  }
  return;
}

