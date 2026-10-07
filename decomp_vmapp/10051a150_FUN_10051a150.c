
void FUN_10051a150(undefined8 param_1,QString *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  QString *pQVar7;
  long lVar8;
  bool bVar9;
  undefined *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  bVar9 = true;
  plVar6 = (long *)FUN_10051a960(param_1,param_3,&local_31);
  plVar3 = (long *)*plVar6;
  if (plVar3 == (long *)0x0) {
    lVar4 = plVar6[1];
    iVar1 = *(int *)(lVar4 + 8);
    pQVar7 = (QString *)(lVar4 + 0x10 + (long)iVar1 * 8);
    iVar2 = *(int *)(lVar4 + 0xc);
    if (iVar1 == iVar2) {
LAB_10051a317:
      if (pQVar7 != (QString *)(lVar4 + 0x10 + (long)iVar2 * 8)) goto LAB_10051a33a;
    }
    else {
      lVar8 = (long)iVar2 * 8 + (long)iVar1 * -8;
      do {
        cVar5 = operator==(pQVar7,param_2);
        if (cVar5 != '\0') goto LAB_10051a317;
        pQVar7 = pQVar7 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    FUN_10000c490(plVar6 + 1,param_2);
    goto LAB_10051a33a;
  }
  QMutex::lock();
  lVar4 = plVar3[2];
  iVar1 = *(int *)(lVar4 + 8);
  pQVar7 = (QString *)(lVar4 + 0x10 + (long)iVar1 * 8);
  iVar2 = *(int *)(lVar4 + 0xc);
  if (iVar1 == iVar2) {
LAB_10051a283:
    if (pQVar7 == (QString *)(lVar4 + 0x10 + (long)iVar2 * 8)) goto LAB_10051a28d;
  }
  else {
    lVar8 = (long)iVar2 * 8 + (long)iVar1 * -8;
    do {
      cVar5 = operator==(pQVar7,param_2);
      if (cVar5 != '\0') goto LAB_10051a283;
      pQVar7 = pQVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
LAB_10051a28d:
    FUN_10000c490(plVar3 + 2,param_2);
  }
  QMutex::unlock();
  bVar9 = false;
  QMutex::unlock();
  local_40 = PTR_shared_null_100ba2188;
  FUN_10000c490(&local_40,param_2);
  FUN_10051aa80(param_1,&local_40,param_3);
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,1);
  FUN_100037320(&local_40);
LAB_10051a33a:
  if (bVar9) {
    QMutex::unlock();
  }
  return;
}

