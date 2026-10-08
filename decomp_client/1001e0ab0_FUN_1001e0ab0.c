
undefined8 FUN_1001e0ab0(long *param_1,QString *param_2)

{
  QArrayData *pQVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  QArrayData *local_50;
  QFile local_48 [16];
  QFileInfo local_38 [15];
  undefined1 local_29;
  
  if (*param_1 == 0) {
    return 0x80000003;
  }
  if (*(long *)(*param_1 + 0x10) == 0) {
    return 0x80000003;
  }
  QFileInfo::QFileInfo(local_38,param_2);
  cVar3 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_38);
  if (cVar3 == '\0') {
    return 0x80000003;
  }
  QFile::QFile(local_48,param_2);
  plVar6 = (long *)0x0;
  if (*param_1 != 0) {
    plVar6 = *(long **)(*param_1 + 0x10);
  }
  iVar4 = (**(code **)(*plVar6 + 0x70))(plVar6,local_48,1);
  if ((iVar4 == 0) && (uVar5 = 0, *(int *)(*(long *)(*param_1 + 0x10) + 0x18) == 0))
  goto LAB_1001e0c20;
  pQVar1 = (QArrayData *)param_2->field0_0x0;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  lVar2 = *(long *)(local_50 + 0x10);
  uVar5 = FUN_100dddcf0(0x80000036);
  FUN_100df99c0("[AppController]","prl_client_app",0,
                "Error occurred while loads VM configuration from file %s with code [%#x (%s)]",
                local_50 + lVar2,0x80000036,uVar5);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e0bea;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1001e0bea:
  uVar5 = 0x80000036;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e0c20;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001e0c20:
  QFile::~QFile(local_48);
  return uVar5;
}

