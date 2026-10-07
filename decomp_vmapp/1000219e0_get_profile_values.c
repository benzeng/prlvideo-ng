
/* CVmProfileHelper::StartupAndShutdown::get_profile_values() */

StartupAndShutdown * __thiscall
CVmProfileHelper::StartupAndShutdown::get_profile_values(StartupAndShutdown *this)

{
  QArrayData *pQVar1;
  QMapNodeBase *pQVar2;
  QMapNodeBase *pQVar3;
  int iVar4;
  QArrayData *local_80;
  QVariant local_78 [16];
  QVariant local_68 [16];
  QArrayData *local_58;
  int *local_50;
  int local_44;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  *(undefined **)this = PTR_shared_null_100ba20d8;
  FUN_100021350(&local_40);
  iVar4 = 0;
  pQVar3 = local_40;
  do {
    local_44 = iVar4;
    if (1 < *(uint *)pQVar3) {
      FUN_100022a90(&local_40);
      pQVar3 = local_40;
    }
    if (*(long *)(pQVar3 + 0x10) == 0) {
      pQVar2 = pQVar3 + 8;
    }
    else {
      pQVar2 = *(QMapNodeBase **)(pQVar3 + 0x20);
    }
    if (*(int *)(*(long *)(pQVar2 + 0x20) + 0xc) - *(int *)(*(long *)(pQVar2 + 0x20) + 8) <= iVar4)
    {
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) {
            return this;
          }
        }
        if (*(long *)(pQVar3 + 0x10) != 0) {
          FUN_100022940();
          QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)pQVar3);
      }
      return this;
    }
    local_50 = (int *)PTR_shared_null_100ba2188;
    if (1 < *(uint *)pQVar3) {
      FUN_100022a90(&local_40);
      pQVar3 = local_40;
    }
    if (*(long *)(pQVar3 + 0x10) == 0) {
      pQVar2 = pQVar3 + 8;
    }
    else {
      pQVar2 = *(QMapNodeBase **)(pQVar3 + 0x20);
    }
    while( true ) {
      if (1 < *(uint *)pQVar3) {
        FUN_100022a90(&local_40);
        pQVar3 = local_40;
      }
      if (pQVar2 == pQVar3 + 8) break;
      pQVar1 = *(QArrayData **)(pQVar2 + 0x18);
      if (1 < *(int *)pQVar1 + 1U) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + 1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
      }
      local_58 = pQVar1;
      QVariant::QVariant(local_68,*(QVariant **)
                                   (*(long *)(pQVar2 + 0x20) + 0x10 +
                                   ((long)*(int *)(*(long *)(pQVar2 + 0x20) + 8) + (long)iVar4) * 8)
                        );
      FUN_100023490(&local_80,&local_58,local_68);
      FUN_100023510(&local_50,&local_80);
      QVariant::~QVariant(local_78);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100021b5b;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100021b5b:
      QVariant::~QVariant(local_68);
      if (*(int *)pQVar1 != -1) {
        if (*(int *)pQVar1 != 0) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + -1;
          local_31 = *(int *)pQVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100021b90;
        }
        QArrayData::deallocate(pQVar1,2,8);
      }
LAB_100021b90:
      pQVar2 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
    FUN_100022450(this,&local_44,&local_50);
    if (*local_50 != -1) {
      if (*local_50 != 0) {
        LOCK();
        *local_50 = *local_50 + -1;
        local_31 = *local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100021a20;
      }
      FUN_100023390(&local_50,local_50);
    }
LAB_100021a20:
    iVar4 = iVar4 + 1;
  } while( true );
}

