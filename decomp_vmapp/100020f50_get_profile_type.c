
/* CVmProfileHelper::StartupAndShutdown::get_profile_type(CVmConfiguration const&) */

undefined4 CVmProfileHelper::StartupAndShutdown::get_profile_type(CVmConfiguration *param_1)

{
  int iVar1;
  int iVar2;
  QArrayData *pQVar3;
  QMapNodeBase *pQVar4;
  QMapNodeBase *pQVar5;
  undefined4 local_174;
  long local_170;
  undefined *local_168;
  QVariant local_160 [16];
  QArrayData *local_150;
  QVariant local_148 [16];
  CVmConfiguration local_138 [16];
  undefined1 local_128 [232];
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  FUN_100021350(&local_40);
  local_170 = 0;
  local_174 = 0;
  pQVar5 = local_40;
  do {
    if (1 < *(uint *)pQVar5) {
      FUN_100022a90(&local_40);
      pQVar5 = local_40;
    }
    if (*(long *)(pQVar5 + 0x10) == 0) {
      pQVar4 = pQVar5 + 8;
    }
    else {
      pQVar4 = *(QMapNodeBase **)(pQVar5 + 0x20);
    }
    if ((long)*(int *)(*(long *)(pQVar4 + 0x20) + 0xc) -
        (long)*(int *)(*(long *)(pQVar4 + 0x20) + 8) <= local_170) {
      local_174 = 0xffffffff;
      break;
    }
    CVmConfiguration::CVmConfiguration(local_138,param_1);
    if (1 < *(uint *)pQVar5) {
      FUN_100022a90(&local_40);
      pQVar5 = local_40;
    }
    if (*(long *)(pQVar5 + 0x10) == 0) {
      pQVar4 = pQVar5 + 8;
    }
    else {
      pQVar4 = *(QMapNodeBase **)(pQVar5 + 0x20);
    }
    while( true ) {
      if (1 < *(uint *)pQVar5) {
        FUN_100022a90(&local_40);
        pQVar5 = local_40;
      }
      if (pQVar4 == pQVar5 + 8) break;
      pQVar3 = *(QArrayData **)(pQVar4 + 0x18);
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      QVariant::QVariant(local_148,
                         *(QVariant **)
                          (*(long *)(pQVar4 + 0x20) + 0x10 +
                          (*(int *)(*(long *)(pQVar4 + 0x20) + 8) + local_170) * 8));
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      local_150 = pQVar3;
      QVariant::QVariant(local_160,local_148);
      CVmConfiguration::setPropertyValue(local_138,&local_150,local_160,0);
      QVariant::~QVariant(local_160);
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100021104;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_100021104:
      QVariant::~QVariant(local_148);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002113b;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_10002113b:
      pQVar4 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
    local_168 = PTR_shared_null_100ba2188;
    FUN_100016080(local_128,param_1,&local_168);
    iVar1 = *(int *)(local_168 + 8);
    iVar2 = *(int *)(local_168 + 0xc);
    if (iVar2 == iVar1) {
      local_174 = (undefined4)local_170;
    }
    FUN_100013180(&local_168);
    CVmConfiguration::~CVmConfiguration(local_138);
    local_170 = local_170 + 1;
  } while (iVar2 != iVar1);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return local_174;
      }
    }
    if (*(long *)(pQVar5 + 0x10) != 0) {
      FUN_100022940();
      QMapDataBase::freeTree(pQVar5,(int)*(undefined8 *)(pQVar5 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar5);
  }
  return local_174;
}

