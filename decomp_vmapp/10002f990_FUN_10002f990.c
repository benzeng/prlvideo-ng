
undefined8 FUN_10002f990(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined2 *puVar13;
  int iVar14;
  ushort *puVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  char *pcVar19;
  bool bVar20;
  long lVar21;
  QArrayData *local_40;
  undefined1 local_33;
  undefined1 local_31;
  
  lVar21 = *param_1;
  if (*(int *)(lVar21 + 4) < 0x10) {
    return 0xfffffff8;
  }
  lVar3 = *(long *)(lVar21 + 0x10);
  switch(*(undefined4 *)(lVar3 + 8 + lVar21)) {
  case 0:
    QMutex::lock();
    bVar20 = true;
    iVar6 = *(int *)(lVar3 + 0xc + lVar21);
    if ((iVar6 == 0) || (*(int *)(param_3 + 0x44) == 0)) {
LAB_10002fec1:
      uVar10 = (uint)(iVar6 == 0);
      *(uint *)(param_3 + 0x44) = uVar10;
      *(undefined4 *)(param_3 + 0x50) = 0;
      *(undefined4 *)(param_3 + 0x284) = *(undefined4 *)(lVar21 + 4 + lVar3);
      if (iVar6 != 0) {
        FUN_100435fa0(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0xf0),0);
      }
      FUN_100430130(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0xf0),uVar10);
      if (0 < DAT_1011b55f8) {
        pcVar19 = "Disabled";
        if (iVar6 == 0) {
          pcVar19 = "Enabled";
        }
        FUN_1008e3970("DYNRESHOST","vm",1,"DynRes guest tool: %s (pid = %d)",pcVar19,
                      *(undefined4 *)(param_3 + 0x284));
      }
      local_40 = *(QArrayData **)(param_3 + 0x268);
      if (1 < *(uint *)local_40 + 1) {
        LOCK();
        *(uint *)local_40 = *(uint *)local_40 + 1;
        local_33 = *(uint *)local_40 != 0;
        UNLOCK();
      }
      QByteArray::clear();
      bVar20 = false;
      QMutex::unlock();
      FUN_100030610(param_3,0,0x20,iVar6 == 0);
      if (*(uint *)(local_40 + 4) != 0) {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("DYNRESHOST","vm",1,"Here is saved display config --> apply it.");
        }
        if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
        }
        FUN_100030750(param_3,(ulong)(long)(int)*(uint *)(local_40 + 4) >> 5,
                      local_40 + *(long *)(local_40 + 0x10),2);
      }
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000300c6;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
    else {
      iVar14 = *(int *)(lVar3 + 4 + lVar21);
      if ((iVar14 == *(int *)(param_3 + 0x284)) ||
         ((iVar14 == 0 || (*(int *)(param_3 + 0x284) == 0)))) goto LAB_10002fec1;
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("DYNRESHOST","vm",1,
                      "Ignore DynRes \'disabled\' event (another guest tool said \'enabled\')");
      }
    }
LAB_1000300c6:
    uVar11 = 0;
    if (bVar20) {
      QMutex::unlock();
    }
    break;
  default:
    FUN_1008e3970("DYNRESHOST","vm",0,"Host Dynamic Resolution: invalid subcommand ID: %d");
    uVar11 = 0xfffffffb;
    break;
  case 2:
    QMutex::lock();
    iVar6 = *(int *)(param_3 + 0x58);
    QByteArray::resize((int)param_2);
    puVar7 = (uint *)*param_2;
    if ((1 < *puVar7) || (*(long *)(puVar7 + 4) != 0x18)) {
      QByteArray::reallocData(param_2,puVar7[1] + 1,puVar7[2] >> 0x1f);
      puVar7 = (uint *)*param_2;
    }
    lVar4 = *(long *)(puVar7 + 4);
    *(undefined8 *)((long)puVar7 + lVar4 + 8) = 0;
    *(undefined8 *)((long)puVar7 + lVar4) = 0;
    *(undefined4 *)((long)puVar7 + lVar4) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)((long)puVar7 + lVar4 + 4) = *(undefined4 *)(param_3 + 0x260);
    if ((iVar6 << 5 | 0x10U) <= *(uint *)(lVar21 + 0xc + lVar3)) {
      _memcpy((void *)(lVar4 + 0x10 + (long)puVar7),(void *)(param_3 + 0x5c),
              (long)(*(int *)(param_3 + 0x58) << 5));
      cVar5 = FUN_100030df0(param_3);
      if ((cVar5 != '\0') && (iVar6 = *(int *)(param_3 + 0x58), 0 < iVar6)) {
        uVar10 = iVar6 - 1;
        uVar1 = (ulong)uVar10 + 1;
        uVar18 = uVar1 & 0x1fffffffe;
        uVar16 = 0;
        if (uVar18 != 0) {
          puVar15 = (ushort *)((long)puVar7 + lVar4 + 0x40);
          uVar12 = (ulong)uVar10 + 1 & 0xfffffffffffffffe;
          do {
            puVar15[-0x10] = puVar15[-0x10] | 2;
            *puVar15 = *puVar15 | 2;
            puVar15 = puVar15 + 0x20;
            uVar12 = uVar12 - 2;
            uVar16 = uVar18;
          } while (uVar12 != 0);
        }
        if (uVar1 != uVar16) {
          iVar14 = (int)uVar16;
          if ((iVar6 - iVar14 & 3U) != 0) {
            pbVar9 = (byte *)((long)puVar7 + lVar4 + 0x20 + uVar16 * 0x20);
            iVar17 = -(iVar6 - iVar14 & 3U);
            do {
              *pbVar9 = *pbVar9 | 2;
              uVar16 = uVar16 + 1;
              pbVar9 = pbVar9 + 0x20;
              iVar17 = iVar17 + 1;
            } while (iVar17 != 0);
          }
          if (2 < uVar10 - iVar14) {
            pbVar9 = (byte *)((long)puVar7 + lVar4 + 0x80 + uVar16 * 0x20);
            iVar6 = (iVar6 + 3) - ((int)uVar16 + 3);
            do {
              pbVar9[-0x60] = pbVar9[-0x60] | 2;
              pbVar9[-0x40] = pbVar9[-0x40] | 2;
              pbVar9[-0x20] = pbVar9[-0x20] | 2;
              *pbVar9 = *pbVar9 | 2;
              pbVar9 = pbVar9 + 0x80;
              iVar6 = iVar6 + -4;
            } while (iVar6 != 0);
          }
        }
      }
    }
    goto LAB_10002fdc4;
  case 3:
    QMutex::lock();
    iVar6 = *(int *)(param_3 + 0x260);
    uVar2 = *(undefined4 *)(param_3 + 0x280);
    iVar14 = *(int *)(lVar3 + 0xc + lVar21);
    *(undefined1 *)(param_3 + 0x25c) = 1;
    QMutex::unlock();
    if (iVar14 == iVar6) {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("DYNRESHOST","vm",1,"Display cfg confirmation (cfgId=%d):",iVar6);
      }
      iVar6 = *(int *)(param_3 + 0x58);
      if (0 < iVar6) {
        puVar13 = (undefined2 *)(param_3 + 0x5c);
        lVar21 = 0;
        do {
          if ((puVar13[2] != 0) && (puVar13[3] != 0)) {
            uVar11 = FUN_100097250(*(undefined8 *)(param_3 + 0x38));
            FUN_1002af310(uVar11,*puVar13,*(undefined4 *)(puVar13 + 0xc),
                          *(undefined4 *)(puVar13 + 0xe));
            iVar6 = *(int *)(param_3 + 0x58);
          }
          lVar21 = lVar21 + 1;
          puVar13 = puVar13 + 0x10;
        } while (lVar21 < iVar6);
      }
      uVar11 = 0;
      FUN_100030610(param_3,uVar2,8,0);
    }
    else {
      uVar11 = 0;
      if (0 < DAT_1011b55f8) {
        uVar11 = 0;
        FUN_1008e3970("DYNRESHOST","vm",1,
                      "Display cfg confirmation (cfgId=%d). Ignored (current cfgId=%d)",
                      *(undefined4 *)(lVar21 + 0xc + lVar3),iVar6);
      }
    }
    break;
  case 4:
    QMutex::lock();
    iVar6 = *(int *)(param_3 + 0x260);
    uVar2 = *(undefined4 *)(param_3 + 0x280);
    *(undefined1 *)(param_3 + 0x25c) = 1;
    QMutex::unlock();
    iVar14 = *(int *)(lVar3 + 0xc + lVar21);
    if (iVar14 == iVar6) {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("DYNRESHOST","vm",1,"Display cfg failed in guest (cfgId=%d) Flags = %d",iVar6,
                      *(undefined4 *)(lVar21 + 4 + lVar3));
      }
      uVar8 = 3;
      if (*(int *)(lVar21 + 4 + lVar3) != 6) {
        uVar8 = 2;
      }
      uVar11 = 0;
      FUN_100030610(param_3,uVar2,4,uVar8);
    }
    else {
      uVar11 = 0;
      if (0 < DAT_1011b55f8) {
        uVar11 = 0;
        FUN_1008e3970("DYNRESHOST","vm",1,
                      "Display cfg failed in guest (cfgId=%d) but ignored (current cfgId=%d)",iVar14
                      ,iVar6);
      }
    }
    break;
  case 5:
    QMutex::lock();
    *(undefined4 *)(param_3 + 0x50) = *(undefined4 *)(lVar3 + 0xc + lVar21);
    FUN_100435fa0(*(undefined8 *)(DAT_1011c3698 + 0xf0));
LAB_10002fdc4:
    QMutex::unlock();
    uVar11 = 0;
    break;
  case 6:
    uVar11 = 0xfffffff3;
    if (0x1f < *(uint *)(lVar3 + 0xc + lVar21)) {
      QByteArray::resize((int)param_2);
      puVar7 = (uint *)*param_2;
      if ((1 < *puVar7) || (*(long *)(puVar7 + 4) != 0x18)) {
        QByteArray::reallocData(param_2,puVar7[1] + 1,puVar7[2] >> 0x1f);
        puVar7 = (uint *)*param_2;
      }
      lVar21 = *(long *)(puVar7 + 4);
      QMutex::lock();
      *(undefined8 *)((long)puVar7 + lVar21 + 0x18) = *(undefined8 *)(param_3 + 0x2a0);
      *(undefined8 *)((long)puVar7 + lVar21 + 0x10) = *(undefined8 *)(param_3 + 0x298);
      uVar11 = *(undefined8 *)(param_3 + 0x288);
      *(undefined8 *)((long)puVar7 + lVar21 + 8) = *(undefined8 *)(param_3 + 0x290);
      *(undefined8 *)((long)puVar7 + lVar21) = uVar11;
      QMutex::unlock();
      cVar5 = FUN_100030df0(param_3);
      if (cVar5 == '\0') {
        pbVar9 = (byte *)(lVar21 + 0x10 + (long)puVar7);
        *pbVar9 = *pbVar9 & 0xfd;
      }
      uVar11 = 0;
      if (0 < DAT_1011b55f8) {
        uVar11 = 0;
        FUN_1008e3970("DYNRESHOST","vm",1,"Hidpi info requested: hidpi=%d",
                      *(ushort *)(lVar21 + 0x10 + (long)puVar7) >> 1 & 1);
      }
    }
  }
  return uVar11;
}

