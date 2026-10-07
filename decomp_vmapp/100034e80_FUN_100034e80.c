
undefined8 FUN_100034e80(long param_1,long param_2)

{
  QArrayData *pQVar1;
  long lVar2;
  QMapNodeBase *pQVar3;
  QArrayData *pQVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *local_a0;
  undefined1 local_98 [16];
  QArrayData *local_88;
  QMapNodeBase *local_78;
  undefined4 local_6c;
  QArrayData *local_68;
  Data *local_60;
  undefined4 local_58;
  QArrayData *local_50;
  char local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (*(short *)(param_2 + 0x16) == 0) {
    uVar9 = 0xf0000003;
    goto switchD_100035006_caseD_2;
  }
  lVar7 = FUN_1002a6120(param_2,0,0);
  if (lVar7 == 0) {
    uVar9 = 0xf0000003;
    goto switchD_100035006_caseD_2;
  }
  if (*(uint *)(lVar7 + 8) < 0x50) {
    uVar9 = 0xf0000003;
    goto switchD_100035006_caseD_2;
  }
  QByteArray::resize((int)&local_40);
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  pQVar4 = local_40;
  lVar2 = *(long *)(local_40 + 0x10);
  pQVar1 = local_40 + lVar2;
  FUN_1002a5990(lVar7,0,pQVar1,*(undefined4 *)(lVar7 + 8));
  uVar9 = 0xf000001f;
  if (1 < *(uint *)pQVar1) goto switchD_100035006_caseD_2;
  if (*(ushort *)(param_2 + 0x16) < 2) {
    uVar9 = 0xf0000003;
    goto switchD_100035006_caseD_2;
  }
  lVar8 = FUN_1002a6120(param_2,1,1);
  if (lVar8 == 0) {
    uVar9 = 0xf0000003;
    goto switchD_100035006_caseD_2;
  }
  if (*(uint *)(lVar8 + 8) < 0x50) {
    uVar9 = 0xf0000003;
    goto switchD_100035006_caseD_2;
  }
  uVar9 = 0xf0000003;
  switch(*(undefined4 *)(pQVar4 + lVar2 + 4)) {
  case 1:
    local_60 = (Data *)PTR_shared_null_100ba2188;
    local_50 = (QArrayData *)PTR_shared_null_100ba20d0;
    iVar6 = FUN_1000343e0(param_1,param_2,*(undefined4 *)(pQVar4 + lVar2 + 8),&local_60);
    uVar9 = 0xffffffff;
    if (iVar6 != 2) {
      if (local_48 == '\0') {
        local_68 = (QArrayData *)QString::fromAscii_helper("",0);
      }
      else {
        local_68 = local_50;
        if (1 < *(int *)local_50 + 1U) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + 1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
        }
      }
      cVar5 = FUN_100037f90(param_2,&local_68,local_58);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000352f4;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1000352f4:
      uVar9 = 0xf000001c;
      if (cVar5 != '\0') {
        uVar9 = 0;
      }
    }
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100035332;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100035332:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QListData::dispose(local_60);
    }
    break;
  case 2:
    break;
  case 3:
  case 4:
    local_6c = 0;
    QMutex::lock();
    *(undefined1 *)(param_1 + 0xa8) = 0;
    QMutex::unlock();
    if (*(int *)(pQVar4 + lVar2 + 4) == 4) {
      cVar5 = FUN_100038b50(&local_6c,pQVar1,*(undefined4 *)(lVar7 + 8));
      uVar9 = 0xf0000003;
      if (cVar5 == '\0') break;
    }
    local_88 = (QArrayData *)PTR_shared_null_100ba20d0;
    local_78 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
    iVar6 = FUN_100034750(param_1,param_2,*(undefined4 *)(pQVar4 + lVar2 + 4),local_6c,
                          *(undefined4 *)(pQVar4 + lVar2 + 8),*(undefined4 *)(pQVar4 + lVar2),
                          local_98);
    uVar9 = 0xffffffff;
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        uVar9 = 0xf000001c;
      }
      else {
        cVar5 = FUN_1000356e0();
        uVar9 = 0xf000001c;
        if (cVar5 != '\0') {
          uVar9 = 0;
        }
      }
    }
    pQVar3 = local_78;
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100035264;
      }
      if (*(long *)(local_78 + 0x10) != 0) {
        FUN_100013720();
        QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar3);
    }
LAB_100035264:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_88,2,8);
    }
    break;
  case 5:
    QMutex::lock();
    iVar6 = 3;
    if (*(long *)(param_1 + 0xa0) == 0) {
      if (*(char *)(param_1 + 0xa8) == '\0') {
        *(long *)(param_1 + 0xa0) = param_2;
        iVar6 = 2;
      }
      else {
        *(undefined1 *)(param_1 + 0xa8) = 0;
        iVar6 = 1;
      }
    }
    QMutex::unlock();
    if (iVar6 == 2) {
      uVar9 = 0xffffffff;
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("PRINTING_TOOL","vm",3,"Notify request pended");
      }
    }
    else if (iVar6 == 3) {
      uVar9 = 0xf000001c;
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("PRINTING_TOOL","vm",3,"Notify request rejected");
      }
    }
    else {
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("PRINTING_TOOL","vm",3,"Notify request accepted");
      }
      uVar9 = 0;
      FUN_100038ae0(param_2);
    }
    break;
  case 6:
    local_a0 = PTR_shared_null_100ba2188;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_100038c30(&local_a0,pQVar1,*(undefined4 *)(lVar7 + 8));
    FUN_10009d0b0(DAT_1011c3698 + 0x1a70,&local_a0);
    uVar9 = 0;
    FUN_100037320(&local_a0);
    break;
  default:
    uVar9 = 0xf0000003;
  }
switchD_100035006_caseD_2:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar9;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar9;
}

