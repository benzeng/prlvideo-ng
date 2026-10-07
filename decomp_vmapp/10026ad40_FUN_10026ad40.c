
int FUN_10026ad40(long param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined1 *param_5,undefined1 *param_6)

{
  int *piVar1;
  long *plVar2;
  QArrayData *pQVar3;
  int iVar4;
  char cVar5;
  long *plVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  bool bVar12;
  QArrayData *local_50;
  int local_44;
  long *local_40;
  long *local_38;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",3,"[CDataSpool] PULL: start");
  }
  if (*(int *)(*(long *)(param_1 + 8) + 0x14) == 0) {
    pcVar7 = "[CDataSpool] PULL: no data";
LAB_10026ae03:
    FUN_1008e3970("","LocalDevices",0,pcVar7);
    return 0;
  }
  cVar5 = (**(code **)(*param_2 + 0x98))(param_2);
  if (cVar5 == '\0') {
    pcVar7 = "[CDataSpool] PULL: invalid spool file";
    goto LAB_10026ae03;
  }
  plVar11 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar11;
  if (1 < *(uint *)(plVar6 + 2)) {
    local_38 = plVar6;
    FUN_10026b030(&local_40,plVar11,&local_38);
    plVar6 = (long *)*plVar11;
  }
  plVar2 = *(long **)(*plVar6 + 0x10);
  if (1 < *(uint *)(plVar6 + 2)) {
    local_38 = plVar6;
    FUN_10026b030(&local_40,plVar11,&local_38);
    plVar6 = (long *)*plVar11;
  }
  plVar10 = (long *)*plVar6;
  if (1 < *(uint *)(plVar6 + 2)) {
    local_40 = (long *)*plVar6;
    FUN_10026b030(&local_38,plVar11,&local_40);
    plVar6 = (long *)*plVar11;
    plVar10 = local_38;
  }
  if (plVar10 != plVar6) {
    lVar9 = *plVar10;
    *(long *)(lVar9 + 8) = plVar10[1];
    *(long *)plVar10[1] = lVar9;
    if (plVar10 != (long *)0x0) {
      operator_delete(plVar10);
    }
    *(int *)(*plVar11 + 0x14) = *(int *)(*plVar11 + 0x14) + -1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)((long)plVar2 + 0xc);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = (int)plVar2[2];
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = *(undefined1 *)((long)plVar2 + 9);
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = (char)plVar2[1];
  }
  local_44 = 0;
  iVar8 = 0;
  do {
    lVar9 = *plVar2;
    if (*(int *)(lVar9 + 0x14) == 0) goto LAB_10026af70;
    FUN_10041ee90(&local_50,plVar2);
    pQVar3 = local_50;
    cVar5 = (**(code **)(*param_2 + 0x38))
                      (param_2,local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(local_50 + 4),
                       &local_44);
    bVar12 = false;
    iVar4 = 0;
    if (cVar5 != '\0') {
      bVar12 = local_44 == *(int *)(pQVar3 + 4);
      iVar4 = iVar8 + local_44;
      if (!bVar12) {
        iVar4 = 0;
      }
    }
    iVar8 = iVar4;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        local_38 = (long *)CONCAT71(local_38._1_7_,*(int *)pQVar3 != 0);
        if (*(int *)pQVar3 != 0) goto LAB_10026af5f;
      }
      QArrayData::deallocate(pQVar3,1,8);
    }
LAB_10026af5f:
  } while (bVar12);
  if (plVar2 == (long *)0x0) goto LAB_10026af9e;
  lVar9 = *plVar2;
LAB_10026af70:
  if (*(int *)(lVar9 + 0x10) != -1) {
    if (*(int *)(lVar9 + 0x10) != 0) {
      LOCK();
      piVar1 = (int *)(lVar9 + 0x10);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      local_38 = (long *)CONCAT71(local_38._1_7_,*piVar1 != 0);
      if (*piVar1 != 0) goto LAB_10026af96;
      lVar9 = *plVar2;
    }
    FUN_10041f220(plVar2,lVar9);
  }
LAB_10026af96:
  operator_delete(plVar2);
LAB_10026af9e:
  if (DAT_1011b55f8 < 3) {
    return iVar8;
  }
  FUN_1008e3970("","LocalDevices",3,"[CDataSpool] PULL: done %u",iVar8);
  return iVar8;
}

