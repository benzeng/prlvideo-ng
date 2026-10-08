
QByteArray * FUN_100b8ff30(QByteArray *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  QMapNodeBase *pQVar2;
  ulong *puVar3;
  QMapNodeBase *pQVar4;
  QMapNodeBase *pQVar5;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_49;
  undefined8 local_48;
  undefined2 local_40;
  QMapNodeBase local_3e;
  char local_3d;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_50 = *(undefined4 *)(*param_3 + 4);
  *(undefined **)param_1 = PTR_shared_null_1021e1288;
  local_58 = 0xfaed819;
  local_54 = 0x12cca;
  QByteArray::fromRawData((char *)&local_60,(int)&local_58);
  QByteArray::append(param_1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b8ffc6;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100b8ffc6:
  pQVar2 = (QMapNodeBase *)*param_3;
  if (*(int *)pQVar2 == 0) {
    pQVar2 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(*param_3 + 0x10) != 0) {
      puVar3 = (ulong *)FUN_100b90490(*(long *)(*param_3 + 0x10),pQVar2);
      *(ulong **)(pQVar2 + 0x10) = puVar3;
      *puVar3 = *puVar3 & 3 | (ulong)(pQVar2 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar2 != -1) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_49 = *(int *)pQVar2 != 0;
    UNLOCK();
    pQVar2 = (QMapNodeBase *)*param_3;
  }
  if (*(long *)(pQVar2 + 0x10) == 0) {
    pQVar5 = pQVar2 + 8;
  }
  else {
    pQVar5 = *(QMapNodeBase **)(pQVar2 + 0x20);
  }
  if (pQVar5 != pQVar2 + 8) {
    do {
      pQVar4 = (QMapNodeBase *)QMapNodeBase::nextNode();
      local_3d = (char)pQVar5[0x19] + (char)pQVar5[0x18] + (char)pQVar5[0x1a] + (char)pQVar5[0x1b] +
                 (char)pQVar5[0x1c] + (char)pQVar5[0x1d] + (char)pQVar5[0x1e] + (char)pQVar5[0x1f] +
                 (char)pQVar5[0x20] + (char)pQVar5[0x21] + (char)pQVar5[0x22];
      local_3e = pQVar5[0x22];
      local_40 = *(undefined2 *)(pQVar5 + 0x20);
      local_48 = *(undefined8 *)(pQVar5 + 0x18);
      QByteArray::fromRawData((char *)&local_68,(int)&local_48);
      QByteArray::append(param_1);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_49 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100b900ee;
        }
        QArrayData::deallocate(local_68,1,8);
      }
LAB_100b900ee:
      pQVar5 = pQVar4;
    } while (pQVar4 != pQVar2 + 8);
  }
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_49 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100b9013f;
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar2,(int)*(long *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_100b9013f:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

