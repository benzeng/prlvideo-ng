
ulong FUN_1002f72f0(long param_1)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  char cVar13;
  long lVar14;
  undefined1 uVar15;
  long lVar16;
  uint uVar17;
  bool bVar18;
  int local_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_32;
  byte local_31;
  
  if (1 < DAT_1011c568c) {
    FUN_1002f7d10("CCIDreq",param_1 + 0x40,*(undefined8 *)(param_1 + 0x50));
  }
  cVar3 = *(char *)(param_1 + 0x40);
  uVar15 = 0x81;
  bVar6 = false;
  switch(cVar3) {
  case 'b':
  case 'o':
    bVar6 = true;
  case 'i':
    uVar15 = 0x80;
    break;
  case 'c':
  case 'e':
    bVar6 = true;
    break;
  case 'k':
    uVar15 = 0x83;
    bVar6 = false;
    break;
  case 'l':
    bVar6 = true;
  case 'a':
  case 'm':
    uVar15 = 0x82;
    break;
  case 's':
    uVar15 = 0x84;
    bVar6 = false;
  }
  cVar4 = *(char *)(param_1 + 0x45);
  uVar5 = *(undefined1 *)(param_1 + 0x46);
  lVar14 = *(long *)(param_1 + 0x60);
  *(undefined4 *)(lVar14 + 0x454) = 10;
  bVar18 = *(int *)(param_1 + 0x10) != 2;
  bVar7 = (cVar4 != '\0' || bVar18) * '\x02';
  if (!bVar6) {
    bVar7 = bVar7 | 0x40;
    iVar9 = 0;
    cVar13 = '\0';
    uVar12 = 0;
    goto LAB_1002f73e3;
  }
  if (cVar4 == '\0') {
    if (!bVar18) {
      iVar8 = *(int *)(param_1 + 0x3c);
      if (iVar8 != 0) {
        bVar7 = bVar7 | 0x40;
      }
      cVar13 = -(iVar8 != 0);
      iVar9 = 0;
      if (bVar7 != 0) {
        uVar12 = 0;
        goto LAB_1002f73e3;
      }
      if (cVar3 == 'o') {
        local_5c = *(int *)(lVar14 + 0x43c) + -10;
        *(undefined4 *)(param_1 + 0x14) = 2;
        uVar11 = FUN_1007d87f0(uVar15,lVar14,-iVar8);
        *(undefined8 *)(param_1 + 0x30) = uVar11;
        QMutex::unlock();
        iVar8 = FUN_100662710(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x50),
                              *(undefined4 *)(param_1 + 0x41),*(long *)(param_1 + 0x60) + 0x4e2,
                              &local_5c);
        QMutex::lock();
        *(undefined4 *)(param_1 + 0x14) = 0;
        if (1 < (int)DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"PrlPCSCTransaction res=%d",iVar8);
        }
        if (iVar8 == -1) {
          FUN_1002f6c40(param_1);
        }
        else {
          if (iVar8 != 1) {
            iVar9 = local_5c;
            if (iVar8 != 0) {
              bVar7 = 0x40;
              iVar9 = 0;
              cVar13 = -2;
              uVar12 = 0;
              goto LAB_1002f73e3;
            }
            goto LAB_1002f782e;
          }
          if (1 < *(int *)(param_1 + 0x10)) {
            *(undefined4 *)(param_1 + 0x10) = 1;
          }
          bVar7 = *(byte *)(param_1 + 0x68);
          if ((bVar7 & 1) != 0) {
            *(undefined1 *)(param_1 + 0x68) = 2;
            bVar7 = 2;
          }
          if (1 < (int)DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"InterruptWake %x",bVar7);
            bVar7 = *(byte *)(param_1 + 0x68);
          }
          if ((bVar7 & 2) != 0) {
            local_32 = 0x50;
            *(byte *)(param_1 + 0x68) = bVar7 & 0xfd;
            local_31 = bVar7;
            FUN_1002f8560(*(undefined8 *)(param_1 + 0x18),&local_32,2);
          }
        }
        bVar7 = 0x42;
        iVar9 = 0;
        cVar13 = -2;
      }
      else {
        if (cVar3 == 'l') {
          *(undefined1 *)(lVar14 + 0x4e8) = 0;
          *(undefined2 *)(lVar14 + 0x4e6) = 0;
          *(undefined4 *)(lVar14 + 0x4e2) = 0;
          uVar12 = 1;
          iVar9 = 7;
          bVar7 = 0;
          goto LAB_1002f73e3;
        }
        iVar9 = 0;
        if (cVar3 != 'b') {
LAB_1002f782e:
          bVar7 = 0;
          uVar12 = 0;
          goto LAB_1002f73e3;
        }
        uVar11 = FUN_1007d87f0(uVar15,lVar14,-iVar8);
        *(undefined8 *)(param_1 + 0x30) = uVar11;
        *(undefined4 *)(param_1 + 0xd0) = 100;
        uVar11 = *(undefined8 *)(param_1 + 0x28);
        local_58 = *(QArrayData **)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x20);
        if (1 < *(int *)local_58 + 1U) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + 1;
          local_32 = *(int *)local_58 != 0;
          UNLOCK();
        }
        QString::QString(&local_40,0x7c);
        QString::section(&local_50,&local_58,&local_40,5,5,0);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_32 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_32) goto LAB_1002f770a;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_1002f770a:
        QString::toUtf8();
        iVar9 = FUN_100662040(uVar11,local_48 + *(long *)(local_48 + 0x10),(void *)(param_1 + 0x69))
        ;
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_32 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_32) goto LAB_1002f776a;
          }
          QArrayData::deallocate(local_48,1,8);
        }
LAB_1002f776a:
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_32 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_32) goto LAB_1002f779a;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_1002f779a:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_32 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_32) goto LAB_1002f77ca;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_1002f77ca:
        if (1 < (int)DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"PrlPCSCConnect2 res=%d",iVar9);
        }
        if (iVar9 == -1) {
          FUN_1002f6c40(param_1);
        }
        else {
          if (iVar9 == 0) {
            iVar9 = *(int *)(param_1 + 0xd0);
            _memcpy((void *)(*(long *)(param_1 + 0x60) + 0x4e2),(void *)(param_1 + 0x69),(long)iVar9
                   );
            bVar7 = 0;
            goto LAB_1002f78fb;
          }
          if (1 < *(int *)(param_1 + 0x10)) {
            *(undefined4 *)(param_1 + 0x10) = 1;
          }
          bVar7 = *(byte *)(param_1 + 0x68);
          if ((bVar7 & 1) != 0) {
            *(undefined1 *)(param_1 + 0x68) = 2;
            bVar7 = 2;
          }
          if (1 < (int)DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"InterruptWake %x",bVar7);
            bVar7 = *(byte *)(param_1 + 0x68);
          }
          if ((bVar7 & 2) != 0) {
            local_32 = 0x50;
            *(byte *)(param_1 + 0x68) = bVar7 & 0xfd;
            local_31 = bVar7;
            FUN_1002f8560(*(undefined8 *)(param_1 + 0x18),&local_32,2);
          }
        }
        iVar9 = 0;
        bVar7 = 0;
      }
LAB_1002f78fb:
      uVar12 = 0;
      goto LAB_1002f73e3;
    }
    cVar13 = -2;
  }
  else {
    cVar13 = '\x05';
  }
  bVar7 = bVar7 | 0x40;
  iVar9 = 0;
  uVar12 = 0;
LAB_1002f73e3:
  lVar14 = *(long *)(param_1 + 0x60);
  *(undefined1 *)(lVar14 + 0x4d8) = uVar15;
  *(int *)(lVar14 + 0x4d9) = iVar9;
  *(char *)(lVar14 + 0x4dd) = cVar4;
  *(undefined1 *)(lVar14 + 0x4de) = uVar5;
  *(byte *)(lVar14 + 0x4df) = bVar7;
  *(char *)(lVar14 + 0x4e0) = cVar13;
  *(undefined1 *)(lVar14 + 0x4e1) = uVar12;
  lVar14 = *(long *)(param_1 + 0x60);
  *(undefined4 *)(lVar14 + 0x468) = 0;
  uVar17 = iVar9 + 10;
  *(uint *)(lVar14 + 0x454) = uVar17;
  if (*(uint *)(lVar14 + 0x43c) < uVar17) {
    uVar17 = *(uint *)(lVar14 + 0x43c);
  }
  *(uint *)(lVar14 + 0x454) = uVar17;
  if (DAT_1011c568c < 2) {
    lVar16 = *(long *)(lVar14 + 0x458);
  }
  else {
    FUN_1002f7d10("CCIDresp",lVar14 + 0x4d8,lVar14 + 0x4e2);
    lVar14 = *(long *)(param_1 + 0x60);
    lVar16 = *(long *)(lVar14 + 0x458);
    if ((1 < (int)DAT_1011c568c) && (*(int *)(lVar14 + 0x450) == 0x69)) {
      FUN_1002da980(2,lVar14);
    }
  }
  uVar17 = *(uint *)(lVar14 + 0x470);
  *(undefined4 *)(lVar14 + 0x464) = 1;
  LOCK();
  piVar1 = (int *)(*(long *)(lVar16 + 0xc0) + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  puVar2 = (uint *)(lVar16 + 8);
  uVar10 = (ulong)*puVar2;
  *puVar2 = *puVar2 - 1;
  UNLOCK();
  if ((uVar17 & 4) != 0) {
    uVar10 = FUN_1002c9070(lVar14);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return uVar10;
}

