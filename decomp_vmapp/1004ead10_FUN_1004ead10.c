
void FUN_1004ead10(long *param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 ****ppppuVar8;
  QString QVar9;
  long lVar10;
  undefined8 ****ppppuVar11;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QArrayData *local_90;
  undefined8 **local_88;
  undefined8 **local_80;
  undefined2 local_78;
  QArrayData *local_70;
  undefined8 **local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 ***local_50;
  undefined8 ***local_48;
  long local_40;
  char local_32;
  undefined1 local_31;
  
  lVar6 = *param_1;
  if ((*(int *)(lVar6 + 0x40) != 0) || (*(int *)(lVar6 + 0x44) != 0)) {
    FUN_1008e3970("","SharedFoldersHost",0,"Shared Folders state isn\'t clean. Will not restore.");
    return;
  }
  lVar10 = *(long *)(param_2 + 8);
  if (param_2 != lVar10) {
    do {
      local_32 = '\0';
      lVar6 = FUN_1004e9a50(param_1,lVar10 + 0x10,&local_32);
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(lVar10 + 0x3c);
        lVar7 = QTextCodec::codecForName((QByteArray *)(lVar10 + 0x28));
        if (lVar7 == 0) {
          lVar7 = FUN_1004d4d30("UTF-8");
        }
        cVar3 = local_32;
        *(long *)(lVar6 + 0x60) = lVar7;
        local_40 = 0;
        ppppuVar1 = (undefined8 ****)(lVar10 + 0x40);
        local_50 = &local_50;
        local_48 = &local_50;
        if (local_32 == '\0') {
          if (&local_50 != ppppuVar1) {
            FUN_1004ebed0(&local_50,*(undefined8 *)(lVar10 + 0x48),ppppuVar1,0);
          }
        }
        else {
          ppppuVar11 = *(undefined8 *****)(lVar10 + 0x48);
          if (ppppuVar11 != ppppuVar1) {
            do {
              local_90 = (QArrayData *)ppppuVar11[2];
              if (1 < *(int *)local_90 + 1U) {
                LOCK();
                *(int *)local_90 = *(int *)local_90 + 1;
                local_31 = *(int *)local_90 != 0;
                UNLOCK();
              }
              local_78 = *(undefined2 *)(ppppuVar11 + 5);
              local_88 = ppppuVar11[3];
              local_80 = ppppuVar11[4];
              local_70 = (QArrayData *)ppppuVar11[6];
              if (1 < *(int *)local_70 + 1U) {
                LOCK();
                *(int *)local_70 = *(int *)local_70 + 1;
                local_31 = *(int *)local_70 != 0;
                UNLOCK();
              }
              local_60 = *(undefined4 *)(ppppuVar11 + 8);
              local_68 = ppppuVar11[7];
              local_58 = *(undefined4 *)(ppppuVar11 + 9);
              if ((char)local_78 == '\0') {
                if (1 < DAT_1011b55f8) {
                  QString::toUtf8_helper(&local_98);
                  FUN_1008e3970("","SharedFoldersHost",2,"skipping file \"%s\"",
                                (QArrayData *)
                                (local_98.field0_0x0 + *(long *)(local_98.field0_0x0 + 0x10)));
                  if (*(int *)local_98.field0_0x0 != -1) {
                    QVar9.field0_0x0 = local_98.field0_0x0;
                    if (*(int *)local_98.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
                      iVar2 = *(int *)local_98.field0_0x0;
                      UNLOCK();
joined_r0x0001004eb185:
                      local_31 = iVar2 != 0;
                      if ((bool)local_31) goto LAB_1004eb230;
                    }
LAB_1004eb216:
                    QArrayData::deallocate((QArrayData *)QVar9.field0_0x0,1,8);
                  }
                }
              }
              else {
                cVar4 = QString::startsWith(&local_90,(long *)(lVar10 + 0x18),1);
                if (cVar4 == '\0') {
                  if (0 < DAT_1011b55f8) {
                    QString::toUtf8_helper(&local_a0);
                    FUN_1008e3970("","SharedFoldersHost",1,
                                  "skipping directory \"%s\" due to it is not a subfolder of saved Home"
                                  ,(QArrayData *)
                                   (local_a0.field0_0x0 + *(long *)(local_a0.field0_0x0 + 0x10)));
                    if (*(int *)local_a0.field0_0x0 != -1) {
                      QVar9.field0_0x0 = local_a0.field0_0x0;
                      if (*(int *)local_a0.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                        iVar2 = *(int *)local_a0.field0_0x0;
                        UNLOCK();
                        goto joined_r0x0001004eb185;
                      }
                      goto LAB_1004eb216;
                    }
                  }
                }
                else {
                  QString::replace((int)&local_90,0,
                                   (QString *)(ulong)*(uint *)(*(long *)(lVar10 + 0x18) + 4));
                  if (1 < DAT_1011b55f8) {
                    QString::toUtf8_helper(&local_a8);
                    FUN_1008e3970("","SharedFoldersHost",2,"patched path for \"%s\"",
                                  (QArrayData *)
                                  (local_a8.field0_0x0 + *(long *)(local_a8.field0_0x0 + 0x10)));
                    if (*(int *)local_a8.field0_0x0 != -1) {
                      if (*(int *)local_a8.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
                        local_31 = *(int *)local_a8.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1004eb070;
                      }
                      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,1,8);
                    }
                  }
LAB_1004eb070:
                  ppppuVar8 = operator_new(0x50);
                  ppppuVar8[2] = (undefined8 ***)local_90;
                  if (1 < *(int *)local_90 + 1U) {
                    LOCK();
                    *(int *)local_90 = *(int *)local_90 + 1;
                    local_31 = *(int *)local_90 != 0;
                    UNLOCK();
                  }
                  *(undefined2 *)(ppppuVar8 + 5) = local_78;
                  ppppuVar8[4] = (undefined8 ***)local_80;
                  ppppuVar8[3] = (undefined8 ***)local_88;
                  ppppuVar8[6] = (undefined8 ***)local_70;
                  if (1 < *(int *)local_70 + 1U) {
                    LOCK();
                    *(int *)local_70 = *(int *)local_70 + 1;
                    local_31 = *(int *)local_70 != 0;
                    UNLOCK();
                  }
                  *(undefined4 *)(ppppuVar8 + 8) = local_60;
                  ppppuVar8[7] = (undefined8 ***)local_68;
                  *(undefined4 *)(ppppuVar8 + 9) = local_58;
                  ppppuVar8[1] = &local_50;
                  *ppppuVar8 = local_50;
                  local_50[1] = ppppuVar8;
                  local_40 = local_40 + 1;
                  local_50 = ppppuVar8;
                }
              }
LAB_1004eb230:
              if (*(int *)local_70 != -1) {
                if (*(int *)local_70 != 0) {
                  LOCK();
                  *(int *)local_70 = *(int *)local_70 + -1;
                  local_31 = *(int *)local_70 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1004eb260;
                }
                QArrayData::deallocate(local_70,2,8);
              }
LAB_1004eb260:
              if (*(int *)local_90 != -1) {
                if (*(int *)local_90 != 0) {
                  LOCK();
                  *(int *)local_90 = *(int *)local_90 + -1;
                  local_31 = *(int *)local_90 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1004eb296;
                }
                QArrayData::deallocate(local_90,2,8);
              }
LAB_1004eb296:
              ppppuVar11 = (undefined8 ****)ppppuVar11[1];
            } while (ppppuVar11 != ppppuVar1);
          }
        }
        FUN_1004ea960();
        if (cVar3 == '\0') {
          FUN_1004ea840();
        }
        *(undefined1 *)(lVar6 + 0x78) = 1;
        FUN_1004eb9a0(&local_50);
      }
      lVar10 = *(long *)(lVar10 + 8);
    } while (param_2 != lVar10);
    lVar6 = *param_1;
  }
  *(undefined4 *)(lVar6 + 0x40) = *(undefined4 *)(param_2 + 0x18);
  uVar5 = FUN_1004d4380(lVar6 + 0x48);
  *(undefined4 *)(*param_1 + 0x44) = uVar5;
  return;
}

