
long * FUN_1009bca00(long *param_1,long *param_2,char *param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  QArrayData *pQVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  QArrayData *local_80;
  QArrayData *local_78;
  undefined *local_70;
  QDirIterator local_68 [8];
  int *local_60;
  int *local_58;
  int *local_50;
  undefined4 local_48;
  int *local_40;
  undefined1 local_31;
  
  local_40 = (int *)PTR_shared_null_1021e15e8;
  local_60 = (int *)*param_2;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_60);
      iVar8 = local_60[2];
      if (iVar8 != local_60[3]) {
        puVar6 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar7 = local_60 + (long)iVar8 * 2 + 4;
        lVar4 = (long)local_60[3] * 8 + (long)iVar8 * -8;
        do {
          piVar1 = (int *)*puVar6;
          *(int **)piVar7 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          puVar6 = puVar6 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  piVar7 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  iVar8 = 2;
  local_58 = piVar7;
  if (local_60[2] == local_60[3]) {
LAB_1009bcc54:
    FUN_100039a80(&local_60);
    if (iVar8 == 2) {
      *param_1 = (long)local_40;
      if (*local_40 != -1) {
        if (*local_40 == 0) {
          QListData::detach((int)param_1);
          lVar4 = *param_1;
          iVar8 = *(int *)(lVar4 + 8);
          if (iVar8 != *(int *)(lVar4 + 0xc)) {
            piVar7 = local_40 + (long)local_40[2] * 2 + 4;
            puVar6 = (undefined8 *)(lVar4 + 0x10 + (long)iVar8 * 8);
            lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar8 * -8;
            do {
              piVar1 = *(int **)piVar7;
              *puVar6 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                local_31 = *piVar1 != 0;
                UNLOCK();
              }
              puVar6 = puVar6 + 1;
              piVar7 = piVar7 + 2;
              lVar4 = lVar4 + -8;
            } while (lVar4 != 0);
          }
        }
        else {
          LOCK();
          *local_40 = *local_40 + 1;
          local_31 = *local_40 != 0;
          UNLOCK();
        }
      }
    }
    FUN_100039a80(&local_40);
    return param_1;
  }
LAB_1009bcaf0:
  local_48 = 1;
  local_58 = piVar7;
  if (*param_3 == '\0') {
    local_70 = PTR_shared_null_1021e15e8;
    pQVar5 = (QArrayData *)QString::fromAscii_helper("*.pvm",5);
    local_78 = pQVar5;
    FUN_1000341d0(&local_70,&local_78);
    QDirIterator::QDirIterator(local_68,piVar7,&local_70,0xffffffff,2);
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009bcb76;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_1009bcb76:
    FUN_100039a80(&local_70);
LAB_1009bcb90:
    do {
      cVar3 = QDirIterator::hasNext();
      bVar2 = false;
      if (cVar3 == '\0') goto LAB_1009bcc06;
      if (*param_3 != '\0') {
        *param_1 = (long)PTR_shared_null_1021e15e8;
        bVar2 = true;
        goto LAB_1009bcc06;
      }
      QDirIterator::next();
      FUN_1000341d0(&local_40,&local_80);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009bcb90;
        }
        QArrayData::deallocate(local_80,2,8);
      }
    } while( true );
  }
  *param_1 = (long)PTR_shared_null_1021e15e8;
  iVar8 = 1;
  goto LAB_1009bcc54;
LAB_1009bcc06:
  QDirIterator::~QDirIterator(local_68);
  iVar8 = 1;
  if (bVar2) goto LAB_1009bcc54;
  piVar7 = local_58 + 2;
  local_48 = 1;
  iVar8 = 2;
  local_58 = piVar7;
  if (piVar7 == local_50) goto LAB_1009bcc54;
  goto LAB_1009bcaf0;
}

