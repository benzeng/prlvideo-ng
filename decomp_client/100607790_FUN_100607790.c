
void FUN_100607790(QObject *param_1)

{
  undefined *puVar1;
  size_t sVar2;
  QMapNodeBase *pQVar3;
  int iVar4;
  QArrayData *local_40;
  QUrl local_38 [8];
  QString local_30;
  undefined1 local_21;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f5090;
  puVar1 = PTR_s_buyproduct__102274830;
  iVar4 = -1;
  if (PTR_s_buyproduct__102274830 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_buyproduct__102274830);
    iVar4 = (int)sVar2;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
  QUrl::QUrl(local_38,&local_40,0);
  QUrl::scheme();
  QDesktopServices::unsetUrlHandler(&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100607827;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100607827:
  QUrl::~QUrl(local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100607860;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100607860:
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x68);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006078a8;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x68);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_100614350();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_1006078a8:
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x60);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006078f0;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x60);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1006142c0();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_1006078f0:
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x58);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100607938;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x58);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1006142c0();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100607938:
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x50);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100607980;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x50);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1006142c0();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100607980:
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x48);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006079c8;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x48);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1006142c0();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_1006079c8:
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x40);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100607a10;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x40);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1000be500();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100607a10:
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x38);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100607a58;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x38);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_100614260();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100607a58:
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x30);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100607aa0;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x30);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1006141d0();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100607aa0:
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x28);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100607ae8;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x28);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_100614140();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100607ae8:
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x20);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100607b30;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x20);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1006140b0();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100607b30:
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x18);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100607b78;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x18);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_100614020();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100607b78:
  QObject::~QObject(param_1);
  return;
}

