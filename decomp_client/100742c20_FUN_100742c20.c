
undefined8 * FUN_100742c20(undefined8 *param_1,undefined8 param_2,QString *param_3)

{
  uint *puVar1;
  QMapNodeBase *pQVar2;
  char cVar3;
  byte bVar4;
  QMapNodeBase *pQVar5;
  uint *puVar6;
  uint *puVar7;
  QMapNodeBase *pQVar8;
  uint *puVar9;
  QMapNodeBase *pQVar10;
  QArrayData *local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  puVar7 = (uint *)PTR_shared_null_1021e12f0;
  *param_1 = PTR_shared_null_1021e12f0;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100741270(&local_40,param_2,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100742c8a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100742c8a:
  if (1 < *(uint *)local_40) {
    FUN_1005c0260(&local_40);
  }
  pQVar10 = local_40;
  pQVar2 = *(QMapNodeBase **)(local_40 + 0x10);
  pQVar8 = (QMapNodeBase *)0x0;
  if (*(QMapNodeBase **)(local_40 + 0x10) != (QMapNodeBase *)0x0) {
    do {
      while (pQVar5 = pQVar2, cVar3 = operator<((QString *)(pQVar5 + 0x18),param_3), cVar3 == '\0')
      {
        pQVar2 = *(QMapNodeBase **)(pQVar5 + 8);
        pQVar8 = pQVar5;
        if (*(QMapNodeBase **)(pQVar5 + 8) == (QMapNodeBase *)0x0) goto LAB_100742ce6;
      }
      pQVar2 = *(QMapNodeBase **)(pQVar5 + 0x10);
    } while (*(QMapNodeBase **)(pQVar5 + 0x10) != (QMapNodeBase *)0x0);
    pQVar5 = pQVar8;
    if (pQVar8 != (QMapNodeBase *)0x0) {
LAB_100742ce6:
      cVar3 = operator<(param_3,(QString *)(pQVar5 + 0x18));
      if (cVar3 == '\0') goto LAB_100742d00;
    }
  }
  pQVar5 = local_40 + 8;
  pQVar10 = local_40;
LAB_100742d00:
  while( true ) {
    if (1 < *(uint *)pQVar10) {
      FUN_1005c0260(&local_40);
      pQVar10 = local_40;
    }
    if ((pQVar5 == pQVar10 + 8) ||
       (cVar3 = operator==((QString *)(pQVar5 + 0x18),param_3), cVar3 == '\0')) break;
    if (1 < *puVar7) {
      FUN_1005c0260(param_1);
      puVar7 = (uint *)*param_1;
    }
    puVar1 = *(uint **)(puVar7 + 4);
    if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
      bVar4 = 1;
      puVar9 = puVar7 + 2;
    }
    else {
      do {
        puVar9 = puVar1;
        bVar4 = operator<((QString *)(puVar9 + 6),param_3);
        puVar6 = puVar9 + 2;
        if (bVar4 != 0) {
          puVar6 = puVar9 + 4;
        }
        puVar1 = *(uint **)puVar6;
      } while (*(uint **)puVar6 != (uint *)0x0);
      bVar4 = bVar4 ^ 1;
    }
    FUN_1005bff10(puVar7,param_3,pQVar5 + 0x20,puVar9,bVar4);
    pQVar5 = (QMapNodeBase *)QMapNodeBase::nextNode();
  }
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      local_31 = *(int *)pQVar10 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    if (*(long *)(pQVar10 + 0x10) != 0) {
      FUN_1005bfc90();
      QMapDataBase::freeTree(pQVar10,(int)*(undefined8 *)(pQVar10 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar10);
  }
  return param_1;
}

