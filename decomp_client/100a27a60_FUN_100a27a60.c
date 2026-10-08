
/* WARNING: Type propagation algorithm not settling */

byte FUN_100a27a60(long param_1,QString *param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long ******pppppplVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  QTypedArrayData<unsigned_short> *local_98;
  long local_90;
  long local_88;
  long *local_80;
  long local_78;
  long local_70;
  long *local_68;
  long local_60;
  long *******local_58;
  long *******local_50;
  long local_48;
  long *local_40;
  undefined1 local_31;
  
  iVar9 = QString::compare(param_1 + 0x28,param_2,1);
  if (iVar9 == 0) {
    if (*(char *)(param_1 + 0x21) == '\0') {
      return 1;
    }
    iVar9 = FUN_100a33580(param_3);
    if (iVar9 == 2) {
      plVar15 = *(long **)(param_1 + 0x18);
      pcVar2 = *(code **)(*plVar15 + 0x18);
      uVar12 = FUN_100a335c0(param_3);
      (*pcVar2)(plVar15,uVar12);
      return 1;
    }
    if (iVar9 != 4) {
      if (iVar9 != 6) {
        return 1;
      }
      uVar10 = FUN_100a335e0(param_3);
      uVar11 = 1;
      if (3 < uVar10) {
        puVar17 = (uint *)FUN_100a335f0(param_3);
        uVar11 = 1;
        if (1 < *puVar17) {
          uVar11 = *puVar17;
        }
      }
      plVar15 = *(long **)(param_1 + 0x18);
      pcVar2 = *(code **)(*plVar15 + 0x10);
      uVar12 = FUN_100a335c0(param_3);
      (*pcVar2)(plVar15,uVar12,uVar11);
      return 1;
    }
    puVar14 = operator_new(0x18);
    puVar14[1] = 0;
    *puVar14 = 0;
    *puVar14 = puVar14;
    puVar14[1] = puVar14;
    puVar14[2] = 0;
    local_40 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (local_40 == (long *)0x0) {
      operator_delete(puVar14);
      local_40 = (long *)0x0;
      puVar14 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)(local_40 + 1) = 1;
      local_40[2] = (long)puVar14;
      *local_40 = (long)&PTR_FUN_102280fa8;
    }
    uVar12 = FUN_100a335c0(param_3);
    uVar19 = FUN_100a335f0(param_3);
    uVar13 = FUN_100a335e0(param_3);
    FUN_100a29470(puVar14,uVar12,uVar19,uVar13);
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(*(long **)(param_1 + 0x18),&local_40);
    if (local_40 == (long *)0x0) {
      return 1;
    }
    LOCK();
    plVar15 = local_40 + 1;
    lVar1 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar1 != 1) {
      return 1;
    }
    (**(code **)(*local_40 + 0x10))();
    return 1;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
  if (lVar1 == 0) {
    return 0;
  }
  lVar18 = 0;
  do {
    while (lVar20 = lVar1, cVar7 = operator<((QString *)(lVar20 + 0x18),param_2), cVar7 != '\0') {
      lVar1 = *(long *)(lVar20 + 0x10);
      if (*(long *)(lVar20 + 0x10) == 0) {
        lVar20 = lVar18;
        if (lVar18 == 0) {
          return 0;
        }
        goto LAB_100a27afa;
      }
    }
    lVar1 = *(long *)(lVar20 + 8);
    lVar18 = lVar20;
  } while (*(long *)(lVar20 + 8) != 0);
LAB_100a27afa:
  cVar7 = operator<(param_2,(QString *)(lVar20 + 0x18));
  if (cVar7 != '\0') {
    return 0;
  }
  plVar15 = (long *)FUN_100a29260(param_1 + 0x38,param_2);
  lVar1 = *plVar15;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  iVar9 = FUN_100a33580(param_3);
  if (((iVar9 != 4) && (iVar9 = FUN_100a33580(param_3), iVar9 != 6)) ||
     (uVar16 = FUN_100a335c0(param_3), (uVar16 & 0x20) == 0)) {
    bVar8 = FUN_100a239c0(lVar1,param_3);
    goto LAB_100a27f95;
  }
  local_58 = (long *******)&local_58;
  local_48 = 0;
  local_50 = local_58;
  iVar9 = FUN_100a33580(param_3);
  if (iVar9 == 6) {
    lVar18 = FUN_100a335f0(param_3);
    uVar11 = FUN_100a335e0(param_3);
    FUN_100a23bf0(&local_70,lVar18 + 4,(ulong)uVar11 - 4);
    FUN_100a2bc20(&local_58,local_68,&local_70,0);
    if (local_60 != 0) {
      lVar18 = *local_68;
      *(undefined8 *)(lVar18 + 8) = *(undefined8 *)(local_70 + 8);
      **(long **)(local_70 + 8) = lVar18;
      local_60 = 0;
      plVar15 = local_68;
      while (plVar15 != &local_70) {
        plVar3 = (long *)plVar15[1];
        std::string::~string((string *)(plVar15 + 2));
        operator_delete(plVar15);
        plVar15 = plVar3;
      }
    }
  }
  else {
    uVar19 = FUN_100a335f0(param_3);
    uVar12 = FUN_100a335e0(param_3);
    FUN_100a23bf0(&local_88,uVar19,uVar12);
    FUN_100a2bc20(&local_58,local_80,&local_88,0);
    if (local_78 != 0) {
      lVar18 = *local_80;
      *(undefined8 *)(lVar18 + 8) = *(undefined8 *)(local_88 + 8);
      **(long **)(local_88 + 8) = lVar18;
      local_78 = 0;
      plVar15 = local_80;
      while (plVar15 != &local_88) {
        plVar3 = (long *)plVar15[1];
        std::string::~string((string *)(plVar15 + 2));
        operator_delete(plVar15);
        plVar15 = plVar3;
      }
    }
  }
  local_90 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  local_98 = param_2->field0_0x0;
  if (1 < *(int *)local_98 + 1U) {
    LOCK();
    *(int *)local_98 = *(int *)local_98 + 1;
    local_31 = *(int *)local_98 != 0;
    UNLOCK();
  }
  uVar12 = FUN_100a33580(param_3);
  uVar13 = FUN_100a335c0(param_3);
  FUN_100a2caa0(param_1,&local_90,&local_98,&local_58,uVar12,uVar13);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a27f26;
    }
    QArrayData::deallocate((QArrayData *)local_98,2,8);
  }
LAB_100a27f26:
  if (local_90 != 0) {
    _PrlHandle_Free();
  }
  bVar8 = 1;
  if (local_48 != 0) {
    pppppplVar4 = *local_50;
    pppppplVar4[1] = (long *****)local_58[1];
    *local_58[1] = (long *****)pppppplVar4;
    local_48 = 0;
    ppppppplVar6 = local_50;
    while ((long ********)ppppppplVar6 != &local_58) {
      ppppppplVar5 = (long *******)ppppppplVar6[1];
      std::string::~string((string *)(ppppppplVar6 + 2));
      operator_delete(ppppppplVar6);
      ppppppplVar6 = ppppppplVar5;
    }
  }
LAB_100a27f95:
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  return bVar8;
}

