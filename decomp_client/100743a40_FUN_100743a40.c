
QString * FUN_100743a40(QString *param_1,undefined8 param_2,QString *param_3,undefined8 param_4)

{
  undefined *puVar1;
  QMapNodeBase *pQVar2;
  char cVar3;
  QMapNodeBase *pQVar4;
  QMapNodeBase *pQVar5;
  QMapNodeBase *pQVar6;
  QMapNodeBase *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_40 = PTR_shared_null_1021e1288;
  FUN_1002f6080(param_1,&local_40);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100743aa4;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100743aa4:
  FUN_100742f00(&local_48,param_2,param_4);
  pQVar6 = local_48;
  if (*(uint *)(local_48 + 4) == 0) goto LAB_100743c3f;
  if (1 < *(uint *)local_48) {
    FUN_1005c0260(&local_48);
  }
  pQVar6 = local_48;
  pQVar2 = *(QMapNodeBase **)(local_48 + 0x10);
  pQVar5 = (QMapNodeBase *)0x0;
  if (*(QMapNodeBase **)(local_48 + 0x10) == (QMapNodeBase *)0x0) {
LAB_100743b36:
    pQVar4 = local_48 + 8;
    pQVar6 = local_48;
  }
  else {
    do {
      while (pQVar4 = pQVar2, cVar3 = operator<((QString *)(pQVar4 + 0x18),param_3), cVar3 == '\0')
      {
        pQVar2 = *(QMapNodeBase **)(pQVar4 + 8);
        pQVar5 = pQVar4;
        if (*(QMapNodeBase **)(pQVar4 + 8) == (QMapNodeBase *)0x0) goto LAB_100743b26;
      }
      pQVar2 = *(QMapNodeBase **)(pQVar4 + 0x10);
    } while (*(QMapNodeBase **)(pQVar4 + 0x10) != (QMapNodeBase *)0x0);
    pQVar4 = pQVar5;
    if (pQVar5 == (QMapNodeBase *)0x0) goto LAB_100743b36;
LAB_100743b26:
    cVar3 = operator<(param_3,(QString *)(pQVar4 + 0x18));
    if (cVar3 != '\0') goto LAB_100743b36;
  }
  if (1 < *(uint *)pQVar6) {
    FUN_1005c0260(&local_48);
    pQVar6 = local_48;
  }
  if (pQVar4 != pQVar6 + 8) {
    QString::operator=(param_1,(QString *)(pQVar4 + 0x20));
    QString::operator=(param_1 + 1,(QString *)(pQVar4 + 0x28));
    QString::operator=(param_1 + 2,(QString *)(pQVar4 + 0x30));
    QString::operator=(param_1 + 3,(QString *)(pQVar4 + 0x38));
    QString::operator=(param_1 + 4,(QString *)(pQVar4 + 0x40));
    QString::operator=(param_1 + 5,(QString *)(pQVar4 + 0x48));
    QString::operator=(param_1 + 6,(QString *)(pQVar4 + 0x50));
    QString::operator=(param_1 + 7,(QString *)(pQVar4 + 0x58));
    QString::operator=(param_1 + 8,(QString *)(pQVar4 + 0x60));
    QString::operator=(param_1 + 9,(QString *)(pQVar4 + 0x68));
    FUN_100283c40(param_1 + 10,pQVar4 + 0x70);
    QString::operator=(param_1 + 0xb,(QString *)(pQVar4 + 0x78));
    QString::operator=(param_1 + 0xc,(QString *)(pQVar4 + 0x80));
    QString::operator=(param_1 + 0xd,(QString *)(pQVar4 + 0x88));
    QString::operator=(param_1 + 0xe,(QString *)(pQVar4 + 0x90));
    QString::operator=(param_1 + 0xf,(QString *)(pQVar4 + 0x98));
  }
LAB_100743c3f:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    if (*(long *)(pQVar6 + 0x10) != 0) {
      FUN_1005bfc90();
      QMapDataBase::freeTree(pQVar6,(int)*(undefined8 *)(pQVar6 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar6);
  }
  return param_1;
}

