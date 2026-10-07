
undefined8 * FUN_10011a560(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if ((*param_2 == 0) || (lVar3 = *(long *)(*param_2 + 0x10), lVar3 == 0)) {
    puVar6 = operator_new(0x18);
    FUN_10011c900(puVar6,0,0);
    *(undefined4 *)(puVar6 + 2) = 0;
    *puVar6 = &PTR_FUN_10110d368;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar7 + 1) = 1;
      puVar7[2] = puVar6;
      *puVar7 = &PTR_FUN_10110d3a8;
      *param_1 = puVar7;
      return param_1;
    }
    *puVar6 = &PTR_FUN_10110d410;
    plVar5 = (long *)puVar6[1];
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    operator_delete(puVar6);
    *param_1 = 0;
    return param_1;
  }
  uVar2 = *(undefined4 *)(lVar3 + 0x40);
  iVar8 = 0;
  if (*(long *)(lVar3 + 0x80) != 0) {
    pcVar4 = *(char **)(*(long *)(lVar3 + 0x80) + 0x10);
    iVar8 = 0;
    if (pcVar4 != (char *)0x0) {
      _strlen(pcVar4);
      iVar8 = (int)pcVar4;
    }
  }
  QString::fromUtf8_helper((char *)&local_38,iVar8);
  QString::normalized(&local_30,&local_38,1,0);
  FUN_100119490(param_1,uVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10011a617;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10011a617:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

