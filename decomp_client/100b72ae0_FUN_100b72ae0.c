
bool FUN_100b72ae0(QString *param_1)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  QMapNodeBase *pQVar5;
  ulong *puVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  QArrayData *local_190;
  QArrayData *local_188;
  QString local_180;
  QMapNodeBase *local_178;
  QString local_170;
  QArrayData *local_168;
  undefined1 local_160 [24];
  QMapNodeBase *local_148;
  undefined1 local_29;
  
  local_168 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100b60470(local_160,&local_168);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_29 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b72b53;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100b72b53:
  local_170.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100b6fcb0(local_160,&local_170);
  cVar3 = operator==(param_1,&local_170);
  bVar11 = false;
  if (cVar3 != '\0') {
    if (*(int *)local_148 == 0) {
      pQVar5 = (QMapNodeBase *)QMapDataBase::createData();
      local_178 = pQVar5;
      if (*(long *)(local_148 + 0x10) != 0) {
        puVar6 = (ulong *)FUN_1006f3350(*(long *)(local_148 + 0x10),pQVar5);
        *(ulong **)(pQVar5 + 0x10) = puVar6;
        *puVar6 = *puVar6 & 3 | (ulong)(pQVar5 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      if (*(int *)local_148 != -1) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + 1;
        local_29 = *(int *)local_148 != 0;
        UNLOCK();
      }
      local_178 = local_148;
      pQVar5 = local_148;
    }
    local_180.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("status",6);
    bVar11 = false;
    if (*(long *)(pQVar5 + 0x10) != 0) {
      lVar2 = *(long *)(pQVar5 + 0x10);
      lVar10 = 0;
      do {
        while (lVar9 = lVar2, cVar3 = operator<((QString *)(lVar9 + 0x18),&local_180), cVar3 != '\0'
              ) {
          lVar2 = *(long *)(lVar9 + 0x10);
          if (*(long *)(lVar9 + 0x10) == 0) {
            lVar9 = lVar10;
            if (lVar10 == 0) goto LAB_100b72d7e;
            goto LAB_100b72c7a;
          }
        }
        lVar2 = *(long *)(lVar9 + 8);
        lVar10 = lVar9;
      } while (*(long *)(lVar9 + 8) != 0);
LAB_100b72c7a:
      cVar3 = operator<(&local_180,(QString *)(lVar9 + 0x18));
      if (cVar3 == '\0') {
        local_188 = (QArrayData *)QString::fromAscii_helper("status",6);
        uVar7 = FUN_1006f3180(&local_178,&local_188);
        puVar1 = PTR_s_GRACED_1022cffd8;
        iVar4 = -1;
        if (PTR_s_GRACED_1022cffd8 != (undefined *)0x0) {
          sVar8 = _strlen(PTR_s_GRACED_1022cffd8);
          iVar4 = (int)sVar8;
        }
        local_190 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
        iVar4 = QString::indexOf(uVar7,&local_190,0,1);
        bVar11 = iVar4 != -1;
        if (*(int *)local_190 != -1) {
          if (*(int *)local_190 != 0) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + -1;
            local_29 = *(int *)local_190 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100b72d44;
          }
          QArrayData::deallocate(local_190,2,8);
        }
LAB_100b72d44:
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_29 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100b72d7e;
          }
          QArrayData::deallocate(local_188,2,8);
        }
      }
    }
LAB_100b72d7e:
    if (*(int *)local_180.field0_0x0 != -1) {
      if (*(int *)local_180.field0_0x0 != 0) {
        LOCK();
        *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
        local_29 = *(int *)local_180.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b72db4;
      }
      QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
    }
LAB_100b72db4:
    pQVar5 = local_178;
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_29 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b72dfb;
      }
      if (*(long *)(local_178 + 0x10) != 0) {
        FUN_10012a490();
        QMapDataBase::freeTree(pQVar5,(int)*(undefined8 *)(pQVar5 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar5);
    }
  }
LAB_100b72dfb:
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      local_29 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b72e31;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
LAB_100b72e31:
  FUN_100b663d0(local_160);
  return bVar11;
}

