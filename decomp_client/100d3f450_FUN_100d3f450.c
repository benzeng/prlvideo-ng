
QLocale * FUN_100d3f450(QLocale *param_1,long *param_2)

{
  int *piVar1;
  ulong uVar2;
  QString *pQVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *local_40;
  QString *local_38;
  undefined1 local_29;
  QLocale local_28 [8];
  
  local_40 = (int *)*param_2;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)&local_40);
      iVar5 = local_40[2];
      if (iVar5 != local_40[3]) {
        puVar8 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar9 = local_40 + (long)iVar5 * 2 + 4;
        lVar7 = (long)local_40[3] * 8 + (long)iVar5 * -8;
        do {
          piVar1 = (int *)*puVar8;
          *(int **)piVar9 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_29 = *piVar1 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          puVar8 = puVar8 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_29 = *local_40 != 0;
      UNLOCK();
    }
  }
  local_38 = (QString *)(local_40 + (long)local_40[2] * 2 + 4);
  if (local_40[2] != local_40[3]) {
    do {
      pQVar3 = local_38;
      local_38 = local_38 + 1;
      QLocale::QLocale(param_1,pQVar3);
      uVar4 = QLocale::language();
      if ((int)uVar4 < 0x3a) {
        if (uVar4 < 0x2b) {
          uVar2 = 0x42092000000 >> ((ulong)uVar4 & 0x3f);
joined_r0x000100d3f54c:
          if ((uVar2 & 1) != 0) {
            iVar5 = QLocale::language();
            if (iVar5 == 0x19) goto LAB_100d3f5a6;
            iVar5 = QLocale::language();
            if (iVar5 != 0x5b) {
              uVar6 = QLocale::language();
              QLocale::QLocale(local_28,uVar6,0);
              QLocale::operator=(param_1,local_28);
              QLocale::~QLocale(local_28);
              goto LAB_100d3f5a6;
            }
            iVar5 = QLocale::country();
            if (iVar5 == 0x1e) goto LAB_100d3f5a6;
          }
        }
      }
      else if (uVar4 - 0x3a < 0x36) {
        uVar2 = 0x20004300000103 >> ((ulong)(uVar4 - 0x3a) & 0x3f);
        goto joined_r0x000100d3f54c;
      }
      QLocale::~QLocale(param_1);
    } while (local_38 != (QString *)(local_40 + (long)local_40[3] * 2 + 4));
  }
  QLocale::QLocale(param_1,0x1f,0);
LAB_100d3f5a6:
  FUN_100039a80(&local_40);
  return param_1;
}

