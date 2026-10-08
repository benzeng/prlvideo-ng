
undefined4 FUN_1003b1870(QString *param_1)

{
  long lVar1;
  char cVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  QMapNodeBase *pQVar7;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  FUN_1003b10e0(&local_40);
  pQVar7 = local_40;
  uVar6 = 0;
  if (*(long *)(local_40 + 0x10) != 0) {
    lVar1 = *(long *)(local_40 + 0x10);
    lVar5 = 0;
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),param_1), uVar6 = 0,
            cVar2 == '\0') {
        lVar1 = *(long *)(lVar4 + 8);
        lVar5 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_1003b18e6;
      }
      lVar1 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar4 = lVar5;
    if (lVar5 != 0) {
LAB_1003b18e6:
      cVar2 = operator<(param_1,(QString *)(lVar4 + 0x18));
      if (cVar2 == '\0') {
        puVar3 = (undefined4 *)FUN_1003bc2d0(&local_40,param_1);
        uVar6 = *puVar3;
        pQVar7 = local_40;
      }
    }
  }
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar6;
      }
    }
    if (*(long *)(pQVar7 + 0x10) != 0) {
      FUN_1003bd540();
      QMapDataBase::freeTree(pQVar7,(int)*(undefined8 *)(pQVar7 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar7);
  }
  return uVar6;
}

