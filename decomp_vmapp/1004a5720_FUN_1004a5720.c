
undefined8 FUN_1004a5720(undefined8 param_1,long param_2)

{
  long ****pppplVar1;
  int iVar2;
  undefined4 uVar3;
  long ****pppplVar4;
  long *****ppppplVar5;
  void *pvVar6;
  void *pvVar7;
  char cVar8;
  long lVar9;
  void *pvVar10;
  undefined4 *puVar11;
  QArrayData *pQVar12;
  long *****ppppplVar13;
  uint uVar14;
  undefined8 uVar15;
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  long ****local_70;
  long ****local_68;
  long local_60;
  long ****local_58;
  long ****local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(ushort *)(param_2 + 0x16) < 2) {
    return 0xf0000003;
  }
  lVar9 = FUN_1002a6120(param_2,0,0);
  if (lVar9 == 0) {
    return 0xf0000003;
  }
  uVar3 = *(undefined4 *)(lVar9 + 8);
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  QByteArray::resize((int)&local_40);
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  pQVar12 = local_40 + *(long *)(local_40 + 0x10);
  FUN_1002a5990(lVar9,0,pQVar12,uVar3);
  local_48 = 0;
  local_58 = (long ****)&local_58;
  local_50 = (long ****)&local_58;
  cVar8 = FUN_1004a93f0(pQVar12,uVar3,0x19,&local_58);
  uVar15 = 0xf0000003;
  if (cVar8 != '\0') {
    uVar15 = 0xf0000003;
    if (local_48 == 0) goto LAB_1004a59af;
    local_70 = (long ****)&local_70;
    local_60 = 0;
    local_68 = local_70;
    FUN_1004a30f0(&local_58);
    local_88 = (void *)0x0;
    pvStack_80 = (void *)0x0;
    local_78 = 0;
    FUN_1004a93b0(&local_70,&local_88);
    pvVar7 = pvStack_80;
    pvVar6 = local_88;
    pvVar10 = (void *)0x0;
    if (local_88 != pvStack_80) {
      pvVar10 = local_88;
    }
    puVar11 = (undefined4 *)FUN_1002a6010(param_2);
    uVar14 = (int)pvVar7 - (int)pvVar6;
    *puVar11 = 0x20000;
    puVar11[1] = 0xe;
    puVar11[2] = 0;
    puVar11[3] = uVar14 & 0xffffff;
    lVar9 = FUN_1002a6120(param_2,1,1);
    uVar15 = 0xf0000009;
    if (uVar14 <= *(uint *)(lVar9 + 8)) {
      uVar15 = 0;
      FUN_1002a5a50(lVar9,0,pvVar10,uVar14);
      *(uint *)(lVar9 + 0x10) = uVar14;
    }
    if (local_88 != (void *)0x0) {
      if (pvStack_80 != local_88) {
        pvStack_80 = local_88;
      }
      operator_delete(local_88);
    }
    if (local_60 != 0) {
      pppplVar4 = (long ****)*local_68;
      pppplVar4[1] = local_70[1];
      *local_70[1] = (long **)pppplVar4;
      local_60 = 0;
      ppppplVar13 = (long *****)local_68;
      while (ppppplVar13 != &local_70) {
        ppppplVar5 = (long *****)ppppplVar13[1];
        pppplVar4 = ppppplVar13[2];
        if (pppplVar4 != (long ****)0x0) {
          LOCK();
          pppplVar1 = pppplVar4 + 1;
          iVar2 = *(int *)pppplVar1;
          *(int *)pppplVar1 = *(int *)pppplVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (*(code *)(*pppplVar4)[2])();
          }
        }
        operator_delete(ppppplVar13);
        ppppplVar13 = ppppplVar5;
      }
    }
  }
  if (local_48 != 0) {
    pppplVar4 = (long ****)*local_50;
    pppplVar4[1] = local_58[1];
    *local_58[1] = (long **)pppplVar4;
    local_48 = 0;
    ppppplVar13 = (long *****)local_50;
    while (ppppplVar13 != &local_58) {
      ppppplVar5 = (long *****)ppppplVar13[1];
      pppplVar4 = ppppplVar13[2];
      if (pppplVar4 != (long ****)0x0) {
        LOCK();
        pppplVar1 = pppplVar4 + 1;
        iVar2 = *(int *)pppplVar1;
        *(int *)pppplVar1 = *(int *)pppplVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)(*pppplVar4)[2])();
        }
      }
      operator_delete(ppppplVar13);
      ppppplVar13 = ppppplVar5;
    }
  }
LAB_1004a59af:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar15;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar15;
}

