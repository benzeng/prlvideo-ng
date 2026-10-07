
int FUN_1005a2350(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  off_t oVar8;
  ulong uVar9;
  ssize_t sVar10;
  int *piVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pvVar6 = _malloc(0x2000000);
  if (pvVar6 == (void *)0x0) {
    FUN_1008e3970("","vdisk",0,"Error allocating memory to copy recovery HD");
    return -0x7ffffffe;
  }
  uVar7 = (**(code **)(*param_1 + 0x2e0))(param_1);
  local_48 = (QArrayData *)QString::fromAscii_helper("/dev/r%1",8);
  QString::arg(&local_40,&local_48,param_2,0,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a23f1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005a23f1:
  QString::toUtf8();
  iVar4 = _open((char *)(local_50 + *(long *)(local_50 + 0x10)),0,0x100);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a244a;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1005a244a:
  if (iVar4 < 0) {
    QString::toUtf8();
    lVar1 = *(long *)(local_58 + 0x10);
    piVar11 = ___error();
    pcVar12 = _strerror(*piVar11);
    FUN_1008e3970("","vdisk",0,"Error opening %s in case %s",local_58 + lVar1,pcVar12);
    iVar5 = -0x7ffdefec;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a26b4;
      }
      QArrayData::deallocate(local_58,1,8);
    }
  }
  else {
    oVar8 = _lseek(iVar4,0,0);
    if (oVar8 < 0) {
      piVar11 = ___error();
      pcVar12 = _strerror(*piVar11);
      iVar5 = -0x7ffdefd7;
      FUN_1008e3970("","vdisk",0,"Error seeking to the start %s",pcVar12);
    }
    else {
      uVar14 = param_4 * uVar7;
      iVar5 = -0x7fffffea;
      if (uVar14 != 0) {
        uVar15 = 0x2000000;
        local_68 = 0;
        uVar13 = uVar14;
        do {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar14;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (uVar14 - uVar13) * 1000;
          uVar9 = SUB168(auVar3 / auVar2,0);
          if ((SUB164(auVar3 / auVar2,0) != (int)local_68) && (local_68 = uVar9, 1 < DAT_1011b55f8))
          {
            FUN_1008e3970("","vdisk",2,"Copy progress %u",uVar9 & 0xffffffff);
          }
          if (uVar13 < uVar15) {
            uVar15 = uVar13;
          }
          sVar10 = _read(iVar4,pvVar6,uVar15);
          if (sVar10 < 0) {
            piVar11 = ___error();
            pcVar12 = _strerror(*piVar11);
            iVar5 = -0x7ffdefd7;
            FUN_1008e3970("","vdisk",0,"Error read disk %s",pcVar12);
            break;
          }
          iVar5 = (**(code **)(*param_1 + 0xf0))(param_1,pvVar6,uVar15 & 0xffffffff,param_3);
          if (iVar5 < 0) {
            FUN_1008e3970("","vdisk",0,"Error writing data to disk 0x%x",iVar5);
            break;
          }
          param_3 = param_3 + uVar15 / uVar7;
          uVar13 = uVar13 - uVar15;
        } while (uVar13 != 0);
      }
    }
    _close(iVar4);
  }
LAB_1005a26b4:
  _free(pvVar6);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return iVar5;
}

