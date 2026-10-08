
QStringList * FUN_100a070e0(QStringList *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  QArrayData *pQVar5;
  int *piVar6;
  int *local_40;
  QArrayData *local_38;
  int *local_30;
  int *local_28;
  undefined1 local_19;
  
  local_30 = (int *)PTR_shared_null_1021e15e8;
  local_38 = (QArrayData *)QString::fromAscii_helper("",0);
  lVar3 = FUN_100a07a20(&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a07147;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100a07147:
  if (lVar3 != 0) {
    FUN_100a07b80(lVar3,0);
    FUN_100a066c0(&local_40,lVar3);
    if (local_30 != local_40) {
      local_28 = local_40;
      if (*local_40 != -1) {
        if (*local_40 == 0) {
          QListData::detach((int)&local_28);
          iVar1 = local_28[2];
          if (iVar1 != local_28[3]) {
            local_40 = local_40 + (long)local_40[2] * 2 + 4;
            piVar6 = local_28 + (long)iVar1 * 2 + 4;
            lVar4 = (long)local_28[3] * 8 + (long)iVar1 * -8;
            do {
              piVar2 = *(int **)local_40;
              *(int **)piVar6 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_19 = *piVar2 != 0;
                UNLOCK();
              }
              piVar6 = piVar6 + 2;
              local_40 = local_40 + 2;
              lVar4 = lVar4 + -8;
            } while (lVar4 != 0);
          }
        }
        else {
          LOCK();
          *local_40 = *local_40 + 1;
          local_19 = *local_40 != 0;
          UNLOCK();
        }
      }
      piVar6 = local_28;
      local_28 = local_30;
      local_30 = piVar6;
      FUN_100039a80(&local_28);
    }
    FUN_100039a80(&local_40);
    _CFRelease(lVar3);
  }
  pQVar5 = (QArrayData *)QString::fromAscii_helper("\n",1);
  QtPrivate::QStringList_join
            (param_1,(QChar *)&local_30,(int)*(undefined8 *)(pQVar5 + 0x10) + (int)pQVar5);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_19 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a0726e;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100a0726e:
  FUN_100039a80(&local_30);
  return param_1;
}

