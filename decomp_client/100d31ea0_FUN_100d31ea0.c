
bool FUN_100d31ea0(QString *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  QString local_80;
  QString local_78;
  QFileInfo local_70 [8];
  QString local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  if (*(int *)(*param_2 + 0xc) == *(int *)(*param_2 + 8)) {
    bVar8 = false;
  }
  else {
    QFileInfo::QFileInfo(local_40,param_1);
    local_60 = (int *)*param_2;
    if (*local_60 != -1) {
      if (*local_60 == 0) {
        QListData::detach((int)&local_60);
        iVar7 = local_60[2];
        if (iVar7 != local_60[3]) {
          puVar5 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
          piVar6 = local_60 + (long)iVar7 * 2 + 4;
          lVar4 = (long)local_60[3] * 8 + (long)iVar7 * -8;
          do {
            piVar1 = (int *)*puVar5;
            *(int **)piVar6 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            piVar6 = piVar6 + 2;
            puVar5 = puVar5 + 1;
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
    local_58 = local_60 + (long)local_60[2] * 2 + 4;
    local_50 = local_60 + (long)local_60[3] * 2 + 4;
    local_48 = 1;
    if (local_60[2] != local_60[3]) {
      do {
        local_68.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_58;
        if (1 < *(int *)local_68.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
        }
        iVar7 = 5;
        if (local_48 != 0) {
          QFileInfo::QFileInfo(local_70,&local_68);
          QFileInfo::absoluteFilePath();
          QFileInfo::absoluteFilePath();
          cVar2 = operator==(&local_78,&local_80);
          if (*(int *)local_80.field0_0x0 != -1) {
            if (*(int *)local_80.field0_0x0 != 0) {
              LOCK();
              *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
              local_31 = *(int *)local_80.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d3201a;
            }
            QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
          }
LAB_100d3201a:
          if (*(int *)local_78.field0_0x0 != -1) {
            if (*(int *)local_78.field0_0x0 != 0) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d3204a;
            }
            QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
          }
LAB_100d3204a:
          QFileInfo::~QFileInfo(local_70);
          iVar7 = 1;
          if (cVar2 == '\0') {
            local_48 = 0;
            iVar7 = 5;
          }
        }
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d3209a;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_100d3209a:
        if (iVar7 != 5) goto LAB_100d320cc;
        local_58 = local_58 + 2;
        uVar3 = local_48 ^ 1;
        bVar8 = local_48 != 1;
        local_48 = uVar3;
      } while ((bVar8) && (local_58 != local_50));
    }
    iVar7 = 2;
LAB_100d320cc:
    FUN_100039a80(&local_60);
    bVar8 = iVar7 != 2;
    QFileInfo::~QFileInfo(local_40);
  }
  return bVar8;
}

